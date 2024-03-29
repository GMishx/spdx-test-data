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
** SPDX License to detect: https://spdx.org/licenses/EUDatagrid.html				
*/



/* SPDX-License-Identifier: EUDatagrid */
/*
EU DataGrid Software License Copyright (c) 2001 EU DataGrid. All
rights reserved.

This software includes voluntary contributions made
to the EU DataGrid. For more information on the EU DataGrid, please
see http://www.eu-datagrid.org/.

Installation, use, reproduction,
display, modification and redistribution of this software, with or
without modification, in source and binary forms, are permitted. Any
exercise of rights under this license by you or your sub-licensees is
subject to the following conditions:

   1. Redistributions of this
software, with or without modification, must reproduce the above
copyright notice and the above license statement as well as this list
of conditions, in the software, the user documentation and any other
materials provided with the software.

   2. The user documentation,
if any, included with a redistribution, must include the following
notice:

   "This product includes software developed by the EU
DataGrid (http://www.eu-datagrid.org/)."

   Alternatively, if that is
where third-party acknowledgments normally appear, this acknowledgment
must be reproduced in the software itself.

   3. The names "EDG",
"EDG Toolkit", "EU DataGrid" and "EU DataGrid Project" may not be used
to endorse or promote software, or products derived therefrom, except
with prior written permission by
hep-project-grid-edg-license@cern.ch.

   4. You are under no
obligation to provide anyone with any bug fixes, patches, upgrades or
other modifications, enhancements or derivatives of the features,
functionality or performance of this software that you may develop.
However, if you publish or distribute your modifications, enhancements
or derivative works without contemporaneously requiring users to enter
into a separate written license agreement, then you are deemed to have
granted participants in the EU DataGrid a worldwide, non-exclusive,
royalty-free, perpetual license to install, use, reproduce, display,
modify, redistribute and sub-license your modifications, enhancements
or derivative works, whether in binary or source code form, under the
license conditions stated in this list of conditions.

   5.
DISCLAIMER

   THIS SOFTWARE IS PROVIDED BY THE EU DATAGRID AND
CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, OF
SATISFACTORY QUALITY, AND FITNESS FOR A PARTICULAR PURPOSE OR USE ARE
DISCLAIMED. THE EU DATAGRID AND CONTRIBUTORS MAKE NO REPRESENTATION
THAT THE SOFTWARE, MODIFICATIONS, ENHANCEMENTS OR DERIVATIVE WORKS
THEREOF, WILL NOT INFRINGE ANY PATENT, COPYRIGHT, TRADE SECRET OR
OTHER PROPRIETARY RIGHT.

   6. LIMITATION OF LIABILITY

THE EU
DATAGRID AND CONTRIBUTORS SHALL HAVE NO LIABILITY TO LICENSEE OR OTHER
PERSONS FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, CONSEQUENTIAL,
EXEMPLARY, OR PUNITIVE DAMAGES OF ANY CHARACTER INCLUDING, WITHOUT
LIMITATION, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, LOSS OF USE,
DATA OR PROFITS, OR BUSINESS INTERRUPTION, HOWEVER CAUSED AND ON ANY
THEORY OF CONTRACT, WARRANTY, TORT (INCLUDING NEGLIGENCE), PRODUCT
LIABILITY OR OTHERWISE, ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
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

