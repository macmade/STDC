/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2015 Jean-David Gadina - www.xs-labs.com / www.digidna.net
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/*!
 * @copyright   (c) 2015 - Jean-David Gadina - www.xs-labs.com / www.digidna.net
 */

#ifndef STD_H
#define STD_H

#if defined( __cplusplus ) && __cplusplus >= 201400L

#include <std/C++/ISO-IEC-14882-2014.hpp>

#elif defined( __cplusplus ) && ( __cplusplus >= 201100L || ( defined( _MSC_VER ) && _MSC_VER >= 1900 ) )

#include <std/C++/ISO-IEC-14882-2011.hpp>

#elif defined( __cplusplus )

#include <std/C++/ISO-IEC-14882-1998.hpp>

#elif defined( __STDC_VERSION__ ) && __STDC_VERSION__ >= 201100L

#include <std/C/ISO-IEC-9899-2011.h>

#elif defined( __STDC_VERSION__ ) && __STDC_VERSION__ >= 19990L

#include <std/C/ISO-IEC-9899-1999.h>

#elif defined( __STDC_VERSION__ ) && __STDC_VERSION__ >= 19950L

#include <std/C/ISO-IEC-9899-1990-AMD-1-1995.h>

#else

#include <std/C/ISO-IEC-9899-1990.h>

#endif

#endif /* STD_H */
