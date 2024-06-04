/*
 *  Copyright (c) 2019, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

#ifdef QORVO_MBEDTLS_DEBUG
#ifndef MBEDTLS_DEBUG_C
#define MBEDTLS_DEBUG_C
#endif // MBEDTLS_DEBUG_C
#endif // QORVO_MBEDTLS_DEBUG

<<<<<<< Updated upstream:src/qpg6105/crypto/qorvo-mbedtls-config.h
// Enables secured CoAP, not used by Thread nor Matter
#ifndef OPENTHREAD_CONFIG_COAP_SECURE_API_ENABLE
#define OPENTHREAD_CONFIG_COAP_SECURE_API_ENABLE 0
#endif // OPENTHREAD_CONFIG_COAP_SECURE_API_ENABLE
=======
#include "mbedtls/version.h"
#if (MBEDTLS_VERSION_NUMBER < 0x03000000)
    // Configuration sanity check. Done automatically in Mbed TLS >= 3.0.
    #include "mbedtls/check_config.h"
#endif
>>>>>>> Stashed changes:src/qpg6100/crypto/qpg6100-mbedtls-config.h

// Required for SRP client and server and thus in Thread 1.2 and Matter
#ifndef OPENTHREAD_CONFIG_ECDSA_ENABLE
#define OPENTHREAD_CONFIG_ECDSA_ENABLE 1
#endif // OPENTHREAD_CONFIG_ECDSA_ENABLE

// Enables the optional Thread Commissioner feature
#ifndef OPENTHREAD_CONFIG_COMMISSIONER_ENABLE
#define OPENTHREAD_CONFIG_COMMISSIONER_ENABLE 0
#endif // OPENTHREAD_CONFIG_COMMISSIONER_ENABLE

// Enables TCP, Mandatory for Thread Components, optional for Thread Products
#ifndef OPENTHREAD_CONFIG_TCP_ENABLE
#define OPENTHREAD_CONFIG_TCP_ENABLE 0
#endif // OPENTHREAD_CONFIG_TCP_ENABLE

// Enables the Thread Joiner role, Mandatory for Thread Components, optional for Thread Products
#ifndef OPENTHREAD_CONFIG_JOINER_ENABLE
#define OPENTHREAD_CONFIG_JOINER_ENABLE 0
#endif // OPENTHREAD_CONFIG_JOINER_ENABLE

// Enables the Thread Border Agent functionality, Mandatory on Border Routers
#ifndef OPENTHREAD_CONFIG_BORDER_AGENT_ENABLE
#define OPENTHREAD_CONFIG_BORDER_AGENT_ENABLE 0
#endif // OPENTHREAD_CONFIG_BORDER_AGENT_ENABLE
