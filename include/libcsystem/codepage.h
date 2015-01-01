/*
 * Codepage definitions for libcsystem
 *
 * Copyright (C) 2008-2015, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCSYSTEM_CODEPAGE_H )
#define _LIBCSYSTEM_CODEPAGE_H

#include <libcsystem/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBCSYSTEM_CODEPAGES
{
	LIBCSYSTEM_CODEPAGE_ASCII				= 20127,

	LIBCSYSTEM_CODEPAGE_ISO_8859_1			= 28591,
	LIBCSYSTEM_CODEPAGE_ISO_8859_2			= 28592,
	LIBCSYSTEM_CODEPAGE_ISO_8859_3			= 28593,
	LIBCSYSTEM_CODEPAGE_ISO_8859_4			= 28594,
	LIBCSYSTEM_CODEPAGE_ISO_8859_5			= 28595,
	LIBCSYSTEM_CODEPAGE_ISO_8859_6			= 28596,
	LIBCSYSTEM_CODEPAGE_ISO_8859_7			= 28597,
	LIBCSYSTEM_CODEPAGE_ISO_8859_8			= 28598,
	LIBCSYSTEM_CODEPAGE_ISO_8859_9			= 28599,
	LIBCSYSTEM_CODEPAGE_ISO_8859_10			= 28600,
	LIBCSYSTEM_CODEPAGE_ISO_8859_11			= 28601,
	LIBCSYSTEM_CODEPAGE_ISO_8859_13			= 28603,
	LIBCSYSTEM_CODEPAGE_ISO_8859_14			= 28604,
	LIBCSYSTEM_CODEPAGE_ISO_8859_15			= 28605,
	LIBCSYSTEM_CODEPAGE_ISO_8859_16			= 28606,

	LIBCSYSTEM_CODEPAGE_KOI8_R			= 20866,
	LIBCSYSTEM_CODEPAGE_KOI8_U			= 21866,

	LIBCSYSTEM_CODEPAGE_WINDOWS_874			= 874,
	LIBCSYSTEM_CODEPAGE_WINDOWS_932			= 932,
	LIBCSYSTEM_CODEPAGE_WINDOWS_936			= 936,
	LIBCSYSTEM_CODEPAGE_WINDOWS_949			= 949,
	LIBCSYSTEM_CODEPAGE_WINDOWS_950			= 950,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1250			= 1250,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1251			= 1251,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1252			= 1252,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1253			= 1253,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1254			= 1254,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1255			= 1255,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1256			= 1256,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1257			= 1257,
	LIBCSYSTEM_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBCSYSTEM_CODEPAGE_US_ASCII			LIBCSYSTEM_CODEPAGE_ASCII

#define LIBCSYSTEM_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBCSYSTEM_CODEPAGE_ISO_8859_1
#define LIBCSYSTEM_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBCSYSTEM_CODEPAGE_ISO_8859_2
#define LIBCSYSTEM_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBCSYSTEM_CODEPAGE_ISO_8859_3
#define LIBCSYSTEM_CODEPAGE_ISO_NORTH_EUROPEAN		LIBCSYSTEM_CODEPAGE_ISO_8859_4
#define LIBCSYSTEM_CODEPAGE_ISO_CYRILLIC			LIBCSYSTEM_CODEPAGE_ISO_8859_5
#define LIBCSYSTEM_CODEPAGE_ISO_ARABIC			LIBCSYSTEM_CODEPAGE_ISO_8859_6
#define LIBCSYSTEM_CODEPAGE_ISO_GREEK			LIBCSYSTEM_CODEPAGE_ISO_8859_7
#define LIBCSYSTEM_CODEPAGE_ISO_HEBREW			LIBCSYSTEM_CODEPAGE_ISO_8859_8
#define LIBCSYSTEM_CODEPAGE_ISO_TURKISH			LIBCSYSTEM_CODEPAGE_ISO_8859_9
#define LIBCSYSTEM_CODEPAGE_ISO_NORDIC			LIBCSYSTEM_CODEPAGE_ISO_8859_10
#define LIBCSYSTEM_CODEPAGE_ISO_THAI			LIBCSYSTEM_CODEPAGE_ISO_8859_11
#define LIBCSYSTEM_CODEPAGE_ISO_BALTIC			LIBCSYSTEM_CODEPAGE_ISO_8859_13
#define LIBCSYSTEM_CODEPAGE_ISO_CELTIC			LIBCSYSTEM_CODEPAGE_ISO_8859_14

#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_1			LIBCSYSTEM_CODEPAGE_ISO_8859_1
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_2			LIBCSYSTEM_CODEPAGE_ISO_8859_2
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_3			LIBCSYSTEM_CODEPAGE_ISO_8859_3
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_4			LIBCSYSTEM_CODEPAGE_ISO_8859_4
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_5			LIBCSYSTEM_CODEPAGE_ISO_8859_9
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_6			LIBCSYSTEM_CODEPAGE_ISO_8859_10
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_7			LIBCSYSTEM_CODEPAGE_ISO_8859_13
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_8			LIBCSYSTEM_CODEPAGE_ISO_8859_14
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_9			LIBCSYSTEM_CODEPAGE_ISO_8859_15
#define LIBCSYSTEM_CODEPAGE_ISO_LATIN_10			LIBCSYSTEM_CODEPAGE_ISO_8859_16

#define LIBCSYSTEM_CODEPAGE_KOI8_RUSSIAN			LIBCSYSTEM_CODEPAGE_KOI8_R
#define LIBCSYSTEM_CODEPAGE_KOI8_UKRAINIAN		LIBCSYSTEM_CODEPAGE_KOI8_U

#define LIBCSYSTEM_CODEPAGE_WINDOWS_THAI			LIBCSYSTEM_CODEPAGE_WINDOWS_874
#define LIBCSYSTEM_CODEPAGE_WINDOWS_JAPANESE		LIBCSYSTEM_CODEPAGE_WINDOWS_932
#define LIBCSYSTEM_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBCSYSTEM_CODEPAGE_WINDOWS_936
#define LIBCSYSTEM_CODEPAGE_WINDOWS_KOREAN		LIBCSYSTEM_CODEPAGE_WINDOWS_949
#define LIBCSYSTEM_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBCSYSTEM_CODEPAGE_WINDOWS_950
#define LIBCSYSTEM_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBCSYSTEM_CODEPAGE_WINDOWS_1250
#define LIBCSYSTEM_CODEPAGE_WINDOWS_CYRILLIC		LIBCSYSTEM_CODEPAGE_WINDOWS_1251
#define LIBCSYSTEM_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBCSYSTEM_CODEPAGE_WINDOWS_1252
#define LIBCSYSTEM_CODEPAGE_WINDOWS_GREEK			LIBCSYSTEM_CODEPAGE_WINDOWS_1253
#define LIBCSYSTEM_CODEPAGE_WINDOWS_TURKISH		LIBCSYSTEM_CODEPAGE_WINDOWS_1254
#define LIBCSYSTEM_CODEPAGE_WINDOWS_HEBREW		LIBCSYSTEM_CODEPAGE_WINDOWS_1255
#define LIBCSYSTEM_CODEPAGE_WINDOWS_ARABIC		LIBCSYSTEM_CODEPAGE_WINDOWS_1256
#define LIBCSYSTEM_CODEPAGE_WINDOWS_BALTIC		LIBCSYSTEM_CODEPAGE_WINDOWS_1257
#define LIBCSYSTEM_CODEPAGE_WINDOWS_VIETNAMESE		LIBCSYSTEM_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

