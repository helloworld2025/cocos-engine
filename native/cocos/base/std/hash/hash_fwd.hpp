
// Copyright 2005-2009 Daniel James.
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  Based on Peter Dimov's proposal
//  http://www.open-std.org/JTC1/SC22/WG21/docs/papers/2005/n1756.pdf
//  issue 6.18. 

#if !defined(CCSTD_FUNCTIONAL_HASH_FWD_HPP)
#define CCSTD_FUNCTIONAL_HASH_FWD_HPP

#include <boost/config/workaround.hpp>
#include <cstddef>

#if defined(BOOST_HAS_PRAGMA_ONCE)
#pragma once
#endif

namespace ccstd
{
    using hash_t = std::uint32_t;

    template <class T> struct hash;

    template <class T> void hash_combine(hash_t& seed, T const& v);

    template <class It> hash_t hash_range(It, It);
    template <class It> void hash_range(hash_t&, It, It);

#if BOOST_WORKAROUND(BOOST_BORLANDC, BOOST_TESTED_AT(0x551))
    template <class T> inline hash_t hash_range(T*, T*);
    template <class T> inline void hash_range(hash_t&, T*, T*);
#endif
}

#endif
