/*
 * Library support functions test program
 *
 * Copyright (C) 2008-2017, Joachim Metz <joachim.metz@gmail.com>
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

#include <common.h>
#include <file_stream.h>
#include <narrow_string.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "csystem_test_libcsystem.h"
#include "csystem_test_macros.h"
#include "csystem_test_unused.h"

/* Tests the libcsystem_get_version function
 * Returns 1 if successful or 0 if not
 */
int csystem_test_get_version(
     void )
{
	const char *version_string = NULL;
	int result                 = 0;

	version_string = libcsystem_get_version();

	result = narrow_string_compare(
	          version_string,
	          LIBCSYSTEM_VERSION_STRING,
	          9 );

	CSYSTEM_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 0 );

	return( 1 );

on_error:
	return( 0 );
}

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc CSYSTEM_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] CSYSTEM_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc CSYSTEM_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] CSYSTEM_TEST_ATTRIBUTE_UNUSED )
#endif
{
	CSYSTEM_TEST_UNREFERENCED_PARAMETER( argc )
	CSYSTEM_TEST_UNREFERENCED_PARAMETER( argv )

	CSYSTEM_TEST_RUN(
	 "libcsystem_get_version",
	 csystem_test_get_version );

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

