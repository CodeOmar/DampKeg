/**********************************************************************************************************************
 * @file    State.h
 * @date    2014-06-16
 * @brief   <# Brief Description#>
 * @details <#Detailed Description#>
 **********************************************************************************************************************/

namespace Rambler { namespace Connection {

    enum class State {
        NotConnected,
        Connecting,
        Connected,
        SecurelyConnected
    };

}}