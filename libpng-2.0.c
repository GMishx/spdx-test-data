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
** SPDX License to detect: https://spdx.org/licenses/libpng-2.0.html				
*/



/* SPDX-License-Identifier: libpng-2.0 */
/*
PNG Reference Library License version 2
--------------------------------------- 

   * Copyright (c) 1995-2018
The PNG Reference Library Authors.

   * Copyright (c) 2018 Cosmin
Truta.

   * Copyright (c) 2000-2002, 2004, 2006-2018 Glenn
Randers-Pehrson.

   * Copyright (c) 1996-1997 Andreas Dilger.

   *
Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.

The
software is supplied "as is", without warranty of any kind, express or
implied, including, without limitation, the warranties of
merchantability, fitness for a particular purpose, title, and
non-infringement. In no even shall the Copyright owners, or anyone
distributing the software, be liable for any damages or other
liability, whether in contract, tort or otherwise, arising from, out
of, or in connection with the software, or the use or other dealings
in the software, even if advised of the possibility of such
damage.

Permission is hereby granted to use, copy, modify, and
distribute this software, or portions hereof, for any purpose, without
fee, subject to the following restrictions:

   1. The origin of this
software must not be misrepresented; you must not claim that you wrote
the original software. If you use this software in a product, an
acknowledgment in the product documentation would be appreciated, but
is not required.

   2. Altered source versions must be plainly marked
as such, and must not be misrepresented as being the original
software.

   3. This Copyright notice may not be removed or altered
from any source or altered source distribution.
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

