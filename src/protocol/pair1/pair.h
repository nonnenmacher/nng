//
// Copyright 2017 Garrett D'Amore <garrett@damore.org>
// Copyright 2017 Capitar IT Group BV <info@capitar.com>
//
// This software is supplied under the terms of the MIT License, a
// copy of which should be located in the distribution where this
// file was obtained (LICENSE.txt).  A copy of the license may also be
// found online at https://opensource.org/licenses/MIT.
//

#ifndef NNG_PROTOCOL_PAIR1_PAIR_H
#define NNG_PROTOCOL_PAIR1_PAIR_H

#ifdef __cplusplus
extern "C" {
#endif

NNG_DECL int nng_pair1_open(nng_socket *);

#ifndef nng_pair_open
#define nng_pair_open nng_pair1_open
#endif

#define NNG_OPT_PAIR1_POLY "pair1:polyamorous"

#ifdef __cplusplus
}
#endif

#endif // NNG_PROTOCOL_PAIR1_PAIR_H
