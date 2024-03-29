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
** SPDX License to detect: https://spdx.org/licenses/AMPAS.html				
*/



/* SPDX-License-Identifier: AMPAS */
/*
Copyright (c) 2006 Academy of Motion Picture Arts and Sciences
("A.M.P.A.S."). Portions contributed by others as indicated. All
rights reserved.

A world-wide, royalty-free, non-exclusive right to
distribute, copy, modify, create derivatives, and use, in source and
binary forms, is hereby granted, subject to acceptance of this
license. Performance of any of the aforementioned acts indicates
acceptance to be bound by the following terms and conditions:

   *
Redistributions of source code must retain the above copyright notice,
this list of conditions and the Disclaimer of Warranty.

   *
Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the Disclaimer of Warranty in the
documentation and/or other materials provided with the distribution.


  * Nothing in this license shall be deemed to grant any rights to
trademarks, copyrights, patents, trade secrets or any other
intellectual property of A.M.P.A.S. or any contributors, except as
expressly stated herein, and neither the name of A.M.P.A.S. nor of any
other contributors to this software, may be used to endorse or promote
products derived from this software without specific prior written
permission of A.M.P.A.S. or contributor, as appropriate.

This license
shall be governed by the laws of the State of California, and subject
to the jurisdiction of the courts therein.

Disclaimer of Warranty:
THIS SOFTWARE IS PROVIDED BY A.M.P.A.S. AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE, AND NON-INFRINGEMENT ARE DISCLAIMED. IN NO EVENT SHALL
A.M.P.A.S., ANY CONTRIBUTORS OR DISTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
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

