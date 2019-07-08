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
** SPDX License to detect: https://spdx.org/licenses/JPNIC.html				
*/



/* SPDX-License-Identifier: JPNIC */
/*
Japan Network Information Center License Copyright (c) 2000-2002 Japan
Network Information Center. All rights reserved.

By using this file,
you agree to the terms and conditions set forth bellow .

LICENSE
TERMS AND CONDITIONS

The following License Terms and Conditions
apply, unless a different license is obtained from Japan Network
Information Center (" JPNIC "), a Japanese association,
Kokusai-Kougyou-Kanda Bldg 6F, 2-3-4 Uchi-Kanda, Chiyoda-ku, Tokyo
101-0047, Japan .

   1. Use, Modification and Redistribution
(including distribution of any modified or derived work) in source
and/or binary forms is permitted under this License Terms and
Conditions.

   2. Redistribution of source code must retain the
copyright notices as they appear in each source code file, this
License Terms and Conditions.

   3. Redistribution in binary form
must reproduce the Copyright Notice, this License Terms and
Conditions, in the documentation and/or other materials provided with
the distribution. For the purposes of binary distribution the
"Copyright Notice" refers to the following language: "Copyright (c)
2000-2002 Japan Network Information Center . All rights reserved."

  
4. The name of JPNIC may not be used to endorse or promote products
derived from this Software without specific prior written approval of
JPNIC .

   5. Disclaimer/Limitation of Liability: THIS SOFTWARE IS
PROVIDED BY JPNIC "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL JPNIC BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
DAMAGES.
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

