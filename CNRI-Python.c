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
** SPDX License to detect: https://spdx.org/licenses/CNRI-Python.html				
*/



/* SPDX-License-Identifier: CNRI-Python */
/*
CNRI OPEN SOURCE LICENSE AGREEMENT

IMPORTANT: PLEASE READ THE
FOLLOWING AGREEMENT CAREFULLY.

BY CLICKING ON "ACCEPT" WHERE
INDICATED BELOW, OR BY COPYING, INSTALLING OR OTHERWISE USING PYTHON
1.6, beta 1 SOFTWARE, YOU ARE DEEMED TO HAVE AGREED TO THE TERMS AND
CONDITIONS OF THIS LICENSE AGREEMENT.

   1. This LICENSE AGREEMENT is
between the Corporation for National Research Initiatives, having an
office at 1895 Preston White Drive, Reston, VA 20191 ("CNRI"), and the
Individual or Organization ("Licensee") accessing and otherwise using
Python 1.6, beta 1 software in source or binary form and its
associated documentation, as released at the www.python.org Internet
site on August 4, 2000 ("Python 1.6b1").

   2. Subject to the terms
and conditions of this License Agreement, CNRI hereby grants Licensee
a non-exclusive, royalty-free, world-wide license to reproduce,
analyze, test, perform and/or display publicly, prepare derivative
works, distribute, and otherwise use Python 1.6b1 alone or in any
derivative version, provided, however, that CNRIs License Agreement is
retained in Python 1.6b1, alone or in any derivative version prepared
by Licensee.

   Alternately, in lieu of CNRIs License Agreement,
Licensee may substitute the following text (omitting the quotes):
"Python 1.6, beta 1, is made available subject to the terms and
conditions in CNRIs License Agreement. This Agreement may be located
on the Internet using the following unique, persistent identifier
(known as a handle): 1895.22/1011. This Agreement may also be obtained
from a proxy server on the Internet using the
URL:http://hdl.handle.net/1895.22/1011".

   3. In the event Licensee
prepares a derivative work that is based on or incorporates Python
1.6b1 or any part thereof, and wants to make the derivative work
available to the public as provided herein, then Licensee hereby
agrees to indicate in any such work the nature of the modifications
made to Python 1.6b1.

   4. CNRI is making Python 1.6b1 available to
Licensee on an "AS IS" basis. CNRI MAKES NO REPRESENTATIONS OR
WARRANTIES, EXPRESS OR IMPLIED. BY WAY OF EXAMPLE, BUT NOT LIMITATION,
CNRI MAKES NO AND DISCLAIMS ANY REPRESENTATION OR WARRANTY OF
MERCHANTABILITY OR FITNESS FOR ANY PARTICULAR PURPOSE OR THAT THE USE
OF PYTHON 1.6b1 WILL NOT INFRINGE ANY THIRD PARTY RIGHTS.

   5. CNRI
SHALL NOT BE LIABLE TO LICENSEE OR ANY OTHER USERS OF THE SOFTWARE FOR
ANY INCIDENTAL, SPECIAL, OR CONSEQUENTIAL DAMAGES OR LOSS AS A RESULT
OF USING, MODIFYING OR DISTRIBUTING PYTHON 1.6b1, OR ANY DERIVATIVE
THEREOF, EVEN IF ADVISED OF THE POSSIBILITY THEREOF.

   6. This
License Agreement will automatically terminate upon a material breach
of its terms and conditions.

   7. This License Agreement shall be
governed by and interpreted in all respects by the law of the State of
Virginia, excluding conflict of law provisions. Nothing in this
License Agreement shall be deemed to create any relationship of
agency, partnership, or joint venture between CNRI and Licensee. This
License Agreement does not grant permission to use CNRI trademarks or
trade name in a trademark sense to endorse or promote products or
services of Licensee, or any third party.

   8. By clicking on the
"ACCEPT" button where indicated, or by copying, installing or
otherwise using Python 1.6b1, Licensee agrees to be bound by the terms
and conditions of this License Agreement.

ACCEPT
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

