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
** SPDX License to detect: https://spdx.org/licenses/BSD-2-Clause-Patent.html				
*/



/* SPDX-License-Identifier: BSD-2-Clause-Patent */
/*
Copyright (c) <YEAR> <COPYRIGHT HOLDERS>

Redistribution and use in
source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

   1. Redistributions
of source code must retain the above copyright notice, this list of
conditions and the following disclaimer.

   2. Redistributions in
binary form must reproduce the above copyright notice, this list of
conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

Subject to the terms
and conditions of this license, each copyright holder and contributor
hereby grants to those receiving rights under this license a
perpetual, worldwide, non-exclusive, no-charge, royalty-free,
irrevocable (except for failure to satisfy the conditions of this
license) patent license to make, have made, use, offer to sell, sell,
import, and otherwise transfer this software, where such license
applies only to those patent claims, already acquired or hereafter
acquired, licensable by such copyright holder or contributor that are
necessarily infringed by:

   (a) their Contribution(s) (the licensed
copyrights of copyright holders and non-copyrightable additions of
contributors, in source or binary form) alone; or

   (b) combination
of their Contribution(s) with the work of authorship to which such
Contribution(s) was added by such copyright holder or contributor, if,
at the time the Contribution is added, such addition causes such
combination to be necessarily infringed. The patent license shall not
apply to any other combinations which include the
Contribution.

Except as expressly stated above, no rights or licenses
from any copyright holder or contributor is granted under this
license, whether expressly, by implication, estoppel or
otherwise.

DISCLAIMER

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT
HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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

