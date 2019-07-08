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
** SPDX License to detect: https://spdx.org/licenses/TCL.html				
*/



/* SPDX-License-Identifier: TCL */
/*
This software is copyrighted by the Regents of the University of
California, Sun Microsystems, Inc., Scriptics Corporation, ActiveState
Corporation and other parties. The following terms apply to all files
associated with the software unless explicitly disclaimed in
individual files.

The authors hereby grant permission to use, copy,
modify, distribute, and license this software and its documentation
for any purpose, provided that existing copyright notices are retained
in all copies and that this notice is included verbatim in any
distributions. No written agreement, license, or royalty fee is
required for any of the authorized uses. Modifications to this
software may be copyrighted by their authors and need not follow the
licensing terms described here, provided that the new terms are
clearly indicated on the first page of each file where they apply.

IN
NO EVENT SHALL THE AUTHORS OR DISTRIBUTORS BE LIABLE TO ANY PARTY FOR
DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
ARISING OUT OF THE USE OF THIS SOFTWARE, ITS DOCUMENTATION, OR ANY
DERIVATIVES THEREOF, EVEN IF THE AUTHORS HAVE BEEN ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

THE AUTHORS AND DISTRIBUTORS SPECIFICALLY
DISCLAIM ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND
NON-INFRINGEMENT. THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, AND
THE AUTHORS AND DISTRIBUTORS HAVE NO OBLIGATION TO PROVIDE
MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
MODIFICATIONS.

GOVERNMENT USE: If you are acquiring this software on
behalf of the U.S. government, the Government shall have only
"Restricted Rights" in the software and related documentation as
defined in the Federal Acquisition Regulations (FARs) in Clause
52.227.19 (c) (2). If you are acquiring the software on behalf of the
Department of Defense, the software shall be classified as "Commercial
Computer Software" and the Government shall have only "Restricted
Rights" as defined in Clause 252.227-7013 (c) (1) of DFARs.
Notwithstanding the foregoing, the authors grant the U.S. Government
and others acting in its behalf permission to use and distribute the
software in accordance with the terms specified in this license.
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

