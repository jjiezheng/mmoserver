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

#ifndef ANH_ZONESERVER_UIINPUTFIELD_H
#define ANH_ZONESERVER_UIINPUTFIELD_H

#include "Utils/bstring.h"
#include "Utils/typedefs.h"
#include "UIElement.h"

//================================================================================

class UIInputField : public UIElement
{
public:

    UIInputField() {}
    UIInputField(uint32 id,BString name,bool enabled = true,uint16 maxLength = 127);
    virtual ~UIInputField();

    BString			getName() {
        return mName;
    }
    void			setName(BString name) {
        mName = name;
    }

    bool			getEnabled() {
        return mEnabled;
    }
    void			setEnabled(bool e) {
        mEnabled = e;
    }

    uint16			getMaxLength() {
        return mMaxLength;
    }
    void			setMaxLength(uint16 maxLength) {
        mMaxLength = maxLength;
    }

    virtual uint32	getPropertyCount();

    virtual void	addMessageData();

private:

    BString	mName;
    bool	mEnabled;
    uint16	mMaxLength;
};

#endif


