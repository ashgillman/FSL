//  This file was automatically generated on Sat Sep 25 16:53:41 2010
//  by libs/config/tools/generate.cpp
//  Copyright John Maddock 2002-4.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.//
//  Revision $Id: no_cxx11_numeric_limits_pass.cpp,v 1.1.1.1 2015/02/27 16:50:26 mwebster Exp $
//


// Test file for macro BOOST_NO_CXX11_NUMERIC_LIMITS
// This file should compile, if it does not then
// BOOST_NO_CXX11_NUMERIC_LIMITS should be defined.
// See file boost_no_limits_lowest.ipp for details

// Must not have BOOST_ASSERT_CONFIG set; it defeats
// the objective of this file:
#ifdef BOOST_ASSERT_CONFIG
#  undef BOOST_ASSERT_CONFIG
#endif

#include <boost/config.hpp>
#include "test.hpp"

#ifndef BOOST_NO_CXX11_NUMERIC_LIMITS
#include "boost_no_cxx11_numeric_limits.ipp"
#else
namespace boost_no_cxx11_numeric_limits = empty_boost;
#endif

int main( int, char *[] )
{
   return boost_no_cxx11_numeric_limits::test();
}
