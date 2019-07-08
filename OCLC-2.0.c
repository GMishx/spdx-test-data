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
** SPDX License to detect: https://spdx.org/licenses/OCLC-2.0.html				
*/



/* SPDX-License-Identifier: OCLC-2.0 */
/*
"Copyright (c) 2000- (insert then current year) OCLC Online Computer
Library Center, Inc. and other contributors . All rights reserved. The
contents of this file, as updated from time to time by the OCLC Office
of Research, are subject to OCLC Research Public License Version 2.0
(the "License"); you may not use this file except in compliance with
the License. You may obtain a current copy of the License at
http://purl.oclc.org/oclc/research/ORPL/. Software distributed under
the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
ANY KIND, either express or implied. See the License for the specific
language governing rights and limitations under the License. This
software consists of voluntary contributions made by many individuals
on behalf of OCLC Research. For more information on OCLC Research,
please see http://www.oclc.org/research/. The Original Code is
______________________________ . The Initial Developer of the Original
Code is ________________________ . Portions created by
______________________ are Copyright (C) ____________________________
. All Rights Reserved. Contributor(s):
______________________________________ ."
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

