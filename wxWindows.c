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
** SPDX License to detect: https://spdx.org/licenses/wxWindows.html				
*/



/* SPDX-License-Identifier: wxWindows */
/*
EXCEPTION NOTICE

   1. As a special exception, the copyright holders
of this library give permission for additional uses of the text
contained in this release of the library as licenced under the
wxWindows Library Licence, applying either version 3.1 of the Licence,
or (at your option) any later version of the Licence as published by
the copyright holders of version 3.1 of the Licence document.

   2.
The exception is that you may use, copy, link, modify and distribute
under your own terms, binary object code versions of works based on
the Library.

   3. If you copy code from files distributed under the
terms of the GNU General Public Licence or the GNU Library General
Public Licence into a copy of this library, as this licence permits,
the exception does not apply to the code that you add in this way. To
avoid misleading anyone as to the status of such modified files, you
must delete this exception notice from such code and/or adjust the
licensing conditions notice accordingly.

   4. If you write
modifications of your own for this library, it is your choice whether
to permit this exception to apply to your modifications. If you do not
wish that, you must delete the exception notice from such code and/or
adjust the licensing conditions notice accordingly.
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

