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
** SPDX License to detect: https://spdx.org/licenses/TU-Berlin-2.0.html				
*/



/* SPDX-License-Identifier: TU-Berlin-2.0 */
/*
Copyright 1992, 1993, 1994 by Jutta Degener and Carsten
Bormann,

Technische Universitaet Berlin

Any use of this software is
permitted provided that this notice is not removed and that neither
the authors nor the Technische Universitaet Berlin are deemed to have
made any representations as to the suitability of this software for
any purpose nor are held responsible for any defects of this software.
THERE IS ABSOLUTELY NO WARRANTY FOR THIS SOFTWARE.

As a matter of
courtesy, the authors request to be informed about uses this software
has found, about bugs in this software, and about any improvements
that may be of general interest. Berlin, 28.11.1994

Jutta
Degener

Carsten Bormann oOo

Since the original terms of 15 years ago
maybe do not make our intentions completely clear given today's
refined usage of the legal terms, we append this additional
permission:

Permission to use, copy, modify, and distribute this
software for any purpose with or without fee is hereby granted,
provided that this notice is not removed and that neither the authors
nor the Technische Universitaet Berlin are deemed to have made any
representations as to the suitability of this software for any purpose
nor are held responsible for any defects of this software. THERE IS
ABSOLUTELY NO WARRANTY FOR THIS SOFTWARE. Berkeley/Bremen,
05.04.2009

Jutta Degener

Carsten Bormann
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

