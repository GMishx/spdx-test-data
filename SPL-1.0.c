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
** SPDX License to detect: https://spdx.org/licenses/SPL-1.0.html				
*/



/* SPDX-License-Identifier: SPL-1.0 */
/*
The contents of this file are subject to the Sun Public License
Version 1.0 (the License); you may not use this file except in
compliance with the License. A copy of the License is available at
http://www.sun.com/

The Original Code is _________________ . The
Initial Developer of the Original Code is ___________ . Portions
created by ______ are Copyright (C) _________ . All Rights
Reserved.

Contributor(s): ______________________________________
.

Alternatively, the contents of this file may be used under the
terms of the _____ license (the ?[___] License? ), in which case the
provisions of [______] License are applicable instead of those above.
If you wish to allow use of your version of this file only under the
terms of the [____] License and not to allow others to use your
version of this file under the SPL, indicate your decision by deleting
the provisions above and replace them with the notice and other
provisions required by the [___] License. If you do not delete the
provisions above, a recipient may use your version of this file under
either the SPL or the [___] License.
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

