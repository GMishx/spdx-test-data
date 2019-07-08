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
** SPDX License to detect: https://spdx.org/licenses/Borceux.html				
*/



/* SPDX-License-Identifier: Borceux */
/*
Copyright 1993 Francis Borceux

You may freely use, modify, and/or
distribute each of the files in this package without limitation. The
package consists of the following
files:

README

compatibility/OldDiagram

compatibility/OldMaxiDiagram

compatibility/OldMicroDiagram

compatibility/OldMiniDiagram

compatibility/OldMultipleArrows

diagram/Diagram

diagram/MaxiDiagram

diagram/MicroDiagram

diagram/MiniDiagram

diagram/MultipleArrows

user-guides/Diagram_Mode_d_Emploi

user-guides/Diagram_Read_Me

Of
course no support is guaranteed, but the author will attempt to assist
with problems. Current email address:

francis dot borceux at
uclouvain dot be.
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

