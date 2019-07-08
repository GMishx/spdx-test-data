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
** SPDX License to detect: https://spdx.org/licenses/Apache-1.1.html				
*/



/* SPDX-License-Identifier: Apache-1.1 */
/*
Apache License 1.1 Copyright (c) 2000 The Apache Software Foundation.
All rights reserved.

Redistribution and use in source and binary
forms, with or without modification, are permitted provided that the
following conditions are met:

   1. Redistributions of source code
must retain the above copyright notice, this list of conditions and
the following disclaimer.

   2. Redistributions in binary form must
reproduce the above copyright notice, this list of conditions and the
following disclaimer in the documentation and/or other materials
provided with the distribution.

   3. The end-user documentation
included with the redistribution, if any, must include the following
acknowledgment:

   "This product includes software developed by the
Apache Software Foundation (http://www.apache.org/) ."

  
Alternately, this acknowledgment may appear in the software itself, if
and wherever such third-party acknowledgments normally appear.

   4.
The name "Apache" and "Apache Software Foundation" must not be used to
endorse or promote products derived from this software without prior
written permission. For written permission, please contact
apache@apache.org .

   5. Products derived from this software may not
be called "Apache" [ex. "Jakarta," "Apache," or "Apache Commons,"] nor
may "Apache" [ex. the names] appear in their name, without prior
written permission of the Apache Software Foundation .

THIS SOFTWARE
IS PROVIDED ''AS IS'' AND ANY EXPRESSED OR IMPLIED WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE APACHE SOFTWARE FOUNDATION OR ITS CONTRIBUTORS
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

This software consists
of voluntary contributions made by many individuals on behalf of the
Apache Software Foundation. For more information on the Apache
Software Foundation, please see http://www.apache.org/. Portions of
this software are based upon public domain software originally written
at the National Center for Supercomputing Applications, University of
Illinois, Urbana-Champaign.
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

