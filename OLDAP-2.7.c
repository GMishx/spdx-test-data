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
** SPDX License to detect: https://spdx.org/licenses/OLDAP-2.7.html				
*/



/* SPDX-License-Identifier: OLDAP-2.7 */
/*
The OpenLDAP Public License

Version 2.7, 7 September
2001

Redistribution and use of this software and associated
documentation ("Software"), with or without modification, are
permitted provided that the following conditions are met:

   1.
Redistributions of source code must retain copyright statements and
notices,

   2. Redistributions in binary form must reproduce
applicable copyright statements and notices, this list of conditions,
and the following disclaimer in the documentation and/or other
materials provided with the distribution, and

   3. Redistributions
must contain a verbatim copy of this document.

The OpenLDAP
Foundation may revise this license from time to time. Each revision is
distinguished by a version number. You may use this Software under
terms of this license revision or under the terms of any subsequent
revision of the license.

THIS SOFTWARE IS PROVIDED BY THE OPENLDAP
FOUNDATION AND ITS CONTRIBUTORS ``AS IS'' AND ANY EXPRESSED OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE OPENLDAP FOUNDATION, ITS CONTRIBUTORS, OR THE
AUTHOR(S) OR OWNER(S) OF THE SOFTWARE BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

The names of the authors and copyright
holders must not be used in advertising or otherwise to promote the
sale, use or other dealing in this Software without specific, written
prior permission. Title to copyright in this Software shall at all
times remain with copyright holders.

OpenLDAP is a registered
trademark of the OpenLDAP Foundation.

Copyright 1999-2001 The
OpenLDAP Foundation, Redwood City, California, USA. All Rights
Reserved. Permission to copy and distribute verbatim copies of this
document is granted.
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

