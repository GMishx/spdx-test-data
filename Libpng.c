/*
** THIS IS A TEST FILE FOR THE SPDX LICENSE DETECTION TESTS											
**																										
** This file has been auto generated using the SPDX License List as represented by
** the JSON files:  https://github.com/spdx/license-list-data 
** 
** This file is for test purposes only. It WILL NOT compile or do anything useful otherwise.
**
** Test File Version: Unofficial version
**
** DISCLAIMER
**
** Any copyrights appearing in this test file do so because they were part of the license text as stored by SPDX and are included 
** only for test purposes as they are part of the license text.	They have no meaning, implied or specific, otherwise.	
*/




/*
** LICENSE HEADER AND COPYRIGHT TO DETECT	
** This section either uses either the standard license header, or if one does not exist, the license 
** text as shown on the SPDX License List. In addition, if the file was generated using the write 
** license identifiers option, they will appear before the license text.
** 										
**
** SPDX License to detect: https://spdx.org/licenses/Libpng.html				
*/



/* SPDX-License-Identifier: Libpng */
/*
This copy of the libpng notices is provided for your convenience. In
case of any discrepancy between this copy and the notices in the file
png.h that is included in the libpng distribution, the latter shall
prevail.

COPYRIGHT NOTICE, DISCLAIMER, and LICENSE:

If you modify
libpng you may insert additional notices immediately following this
sentence.

This code is released under the libpng license.

libpng
versions 1.2.6, August 15, 2004, through 1.4.5, December 9, 2010, are
Copyright (c) 2004, 2006-2010 Glenn Randers-Pehrson, and are
distributed according to the same disclaimer and license as
libpng-1.2.5 with the following individual added to the list of
Contributing Authors

Cosmin Truta

libpng versions 1.0.7, July 1,
2000, through 1.2.5 - October 3, 2002, are

Copyright (c) 2000-2002
Glenn Randers-Pehrson, and are distributed according to the same
disclaimer and license as libpng-1.0.6 with the following individuals
added to the list of Contributing Authors

Simon-Pierre Cadieux

Eric
S. Raymond

Gilles Vollant

and with the following additions to the
disclaimer:

There is no warranty against interference with your
enjoyment of the library or against infringement. There is no warranty
that our efforts or the library will fulfill any of your particular
purposes or needs. This library is provided with all faults, and the
entire risk of satisfactory quality, performance, accuracy, and effort
is with the user.

libpng versions 0.97, January 1998, through 1.0.6,
March 20, 2000, are

Copyright (c) 1998, 1999 Glenn Randers-Pehrson,
and are distributed according to the same disclaimer and license as
libpng-0.96, with the following individuals added to the list of
Contributing Authors:

Tom Lane

Glenn Randers-Pehrson

Willem van
Schaik

libpng versions 0.89, June 1996, through 0.96, May 1997,
are

Copyright (c) 1996, 1997 Andreas Digger

Distributed according to
the same disclaimer and license as libpng-0.88, with the following
individuals added to the list of Contributing Authors:

John
Bowler

Kevin Bracey

Sam Bushell

Magnus Holmgren

Greg Roelofs

Tom
Tanner

libpng versions 0.5, May 1995, through 0.88, January 1996,
are

Copyright (c) 1995, 1996 Guy Eric Schalnat, Group 42, Inc.

For
the purposes of this copyright and license, "Contributing Authors" is
defined as the following set of individuals:

Andreas Dilger

Dave
Martindale

Guy Eric Schalnat

Paul Schmidt

Tim Wegner

The PNG
Reference Library is supplied "AS IS". The Contributing Authors and
Group 42, Inc. disclaim all warranties, expressed or implied,
including, without limitation, the warranties of merchantability and
of fitness for any purpose. The Contributing Authors and Group 42,
Inc. assume no liability for direct, indirect, incidental, special,
exemplary, or consequential damages, which may result from the use of
the PNG Reference Library, even if advised of the possibility of such
damage.

Permission is hereby granted to use, copy, modify, and
distribute this source code, or portions hereof, for any purpose,
without fee, subject to the following restrictions:

   1. The origin
of this source code must not be misrepresented.

   2. Altered
versions must be plainly marked as such and must not be misrepresented
as being the original source.

   3. This Copyright notice may not be
removed or altered from any source or altered source
distribution.

The Contributing Authors and Group 42, Inc.
specifically permit, without fee, and encourage the use of this source
code as a component to supporting the PNG file format in commercial
products. If you use this source code in a product, acknowledgment is
not required but would be appreciated.

A "png_get_copyright" function
is available, for convenient use in "about" boxes and the
like:

printf("%s",png_get_copyright(NULL));

Also, the PNG logo (in
PNG format, of course) is supplied in the files "pngbar.png" and
"pngbar.jpg (88x31) and "pngnow.png" (98x31).

Libpng is OSI Certified
Open Source Software. OSI Certified Open Source is a certification
mark of the Open Source Initiative.

Glenn Randers-Pehrson

glennrp at
users.sourceforge.net

December 9, 2010
*/

/*
** Fake code so we have something.
*/
#include <nothing.h>


int
noop_fun(int arg1)
{
	short retval;
	
	recalculatearg(&arg1);
	
	switch (arg1)
	{
		case 0:
			if (arg1) {
					retval = 1;
			} else {
			retval = 2;
			}
		case 1:
			retval = 2;
		case 2:
			retval = morpharg(arg1);
		case 3:
			if (arg1) {
				retval = 6;
			} else {
				retval = 7;
			}
		case 4:
			retval = upscalearg(arg1);
		default:
			retval = 0;
	}
	
	return retval;
}

