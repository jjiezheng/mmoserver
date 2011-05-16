/*
 This file is part of MMOServer. For more information, visit http://swganh.com
 
 Copyright (c) 2006 - 2011 The SWG:ANH Team

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef ANH_ZONESERVER_ATTACKABLESTATICNPC_H
#define ANH_ZONESERVER_ATTACKABLESTATICNPC_H

#include "NPCObject.h"

//=============================================================================

class AttackableStaticNpc : public NPCObject
{
    friend class PersistentNpcFactory;
    friend class NonPersistentNpcFactory;

public:

    AttackableStaticNpc();
    virtual ~AttackableStaticNpc();

    virtual void prepareCustomRadialMenu(CreatureObject* creatureObject, uint8 itemCount);
    virtual void respawn(void);

    void	setDeathEffect(uint32 effectId) {
        mDeathEffectId = effectId;
    }
    void	playDeathAnimation(void);

private:
    void	spawn(void);

    uint32 mDeathEffectId;

};

//=============================================================================

#endif

