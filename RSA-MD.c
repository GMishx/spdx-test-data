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
** SPDX License to detect: https://spdx.org/licenses/RSA-MD.html				
*/



/* SPDX-License-Identifier: RSA-MD */
/*
Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All rights
reserved.

License to copy and use this software is granted provided
that it is identified as the "RSA Data Security, Inc. MD5
Message-Digest Algorithm" in all material mentioning or referencing
this software or this function.

License is also granted to make and
use derivative works provided that such works are identified as
"derived from the RSA Data Security, Inc. MD5 Message-Digest
Algorithm" in all material mentioning or referencing the derived
work.

RSA Data Security, Inc. makes no representations concerning
either the merchantability of this software or the suitability of this
software for any particular purpose. It is provided "as is" without
express or implied warranty of any kind.

These notices must be
retained in any copies of any part of this documentation and/or
software.
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

