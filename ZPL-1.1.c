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
** SPDX License to detect: https://spdx.org/licenses/ZPL-1.1.html				
*/



/* SPDX-License-Identifier: ZPL-1.1 */
/*
Zope Public License (ZPL) Version 1.1 Copyright (c) Zope Corporation.
All rights reserved. This license has been certified as open
source.

Redistribution and use in source and binary forms, with or
without modification, are permitted provided that the following
conditions are met:

   1. Redistributions in source code must retain
the above copyright notice, this list of conditions, and the following
disclaimer.

   2. Redistributions in binary form must reproduce the
above copyright notice, this list of conditions, and the following
disclaimer in the documentation and/or other materials provided with
the distribution.

   3. All advertising materials and documentation
mentioning features derived from or use of this software must display
the following acknowledgement:

   "This product includes software
developed by Zope Corporation for use in the Z Object Publishing
Environment (http://www.zope.com/)."

   In the event that the product
being advertised includes an intact Zope distribution (with copyright
and license included) then this clause is waived.

   4. Names
associated with Zope or Zope Corporation must not be used to endorse
or promote products derived from this software without prior written
permission from Zope Corporation.

   5. Modified redistributions of
any form whatsoever must retain the following acknowledgment:

  
"This product includes software developed by Zope Corporation for use
in the Z Object Publishing Environment (http://www.zope.com/)."

  
Intact (re-)distributions of any official Zope release do not require
an external acknowledgement.

   6. Modifications are encouraged but
must be packaged separately as patches to official Zope releases.
Distributions that do not clearly separate the patches from the
original work must be clearly labeled as unofficial distributions.
Modifications which do not carry the name Zope may be packaged in any
form, as long as they conform to all of the clauses
above.

Disclaimer

THIS SOFTWARE IS PROVIDED BY ZOPE CORPORATION ``AS
IS'' AND ANY EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL ZOPE
CORPORATION OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
DAMAGE. This software consists of contributions made by Zope
Corporation and many individuals on behalf of Zope Corporation.
Specific attributions are listed in the accompanying credits file.
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

