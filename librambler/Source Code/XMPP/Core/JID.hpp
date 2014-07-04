/**********************************************************************************************************************
 * @file    JID.hpp
 * @date    2014-06-20
 * @brief   <# Brief Description#>
 * @details <#Detailed Description#>
 **********************************************************************************************************************/

#pragma once

#include "types.hpp"

namespace rambler { namespace XMPP { namespace Core {

    struct JID {
        static JID  createJIDFromString(String const jid);
        static bool validateLocalPart(JID const jid);
        static bool validateDomainPart(JID const jid);
        static bool validateResourcePart(JID const jid);
		
        static JID const None;

        JID();
        JID(String localPart, String domainPart);
        JID(String localPart, String domainPart, String resourcePart);

        bool isBareJID() const;
        bool isBareJIDWithLocalPart() const;

        bool isFullJID() const;
        bool isFullJIDWithLocalPart() const;

        bool isDomainJID() const;

        bool isValid() const;

        JID getBareJID() const;

        String toString() const;

        String const localPart;
        String const domainPart;
        String const resourcePart;
        
        bool operator == (JID const & other) const;
    };
    
}}}