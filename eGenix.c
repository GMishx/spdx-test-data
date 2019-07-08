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
** SPDX License to detect: https://spdx.org/licenses/eGenix.html				
*/



/* SPDX-License-Identifier: eGenix */
/*
EGENIX.COM PUBLIC LICENSE AGREEMENT

Version 1.1.0 This license
agreement is based on the Python CNRI License Agreement, a widely
accepted open- source license.

   1. Introduction

   This "License
Agreement" is between eGenix.com Software, Skills and Services GmbH
("eGenix.com"), having an office at Pastor-Loeh-Str. 48, D-40764
Langenfeld, Germany, and the Individual or Organization ("Licensee")
accessing and otherwise using this software in source or binary form
and its associated documentation ("the Software").

   2. License

  
Subject to the terms and conditions of this eGenix.com Public License
Agreement, eGenix.com hereby grants Licensee a non-exclusive,
royalty-free, world-wide license to reproduce, analyze, test, perform
and/or display publicly, prepare derivative works, distribute, and
otherwise use the Software alone or in any derivative version,
provided, however, that the eGenix.com Public License Agreement is
retained in the Software, or in any derivative version of the Software
prepared by Licensee.

   3. NO WARRANTY

   eGenix.com is making the
Software available to Licensee on an "AS IS" basis. SUBJECT TO ANY
STATUTORY WARRANTIES WHICH CAN NOT BE EXCLUDED, EGENIX.COM MAKES NO
REPRESENTATIONS OR WARRANTIES, EXPRESS OR IMPLIED. BY WAY OF EXAMPLE,
BUT NOT LIMITATION, EGENIX.COM MAKES NO AND DISCLAIMS ANY
REPRESENTATION OR WARRANTY OF MERCHANTABILITY OR FITNESS FOR ANY
PARTICULAR PURPOSE OR THAT THE USE OF THE SOFTWARE WILL NOT INFRINGE
ANY THIRD PARTY RIGHTS.

   4. LIMITATION OF LIABILITY

   EGENIX.COM
SHALL NOT BE LIABLE TO LICENSEE OR ANY OTHER USERS OF THE SOFTWARE FOR
ANY INCIDENTAL, SPECIAL, OR CONSEQUENTIAL DAMAGES OR LOSS (INCLUDING,
WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS
INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS)
AS A RESULT OF USING, MODIFYING OR DISTRIBUTING THE SOFTWARE, OR ANY
DERIVATIVE THEREOF, EVEN IF ADVISED OF THE POSSIBILITY THEREOF. SOME
JURISDICTIONS DO NOT ALLOW THE EXCLUSION OR LIMITATION OF INCIDENTAL
OR CONSEQUENTIAL DAMAGES, SO THE ABOVE EXCLUSION OR LIMITATION MAY NOT
APPLY TO LICENSEE.

   5. Termination

   This License Agreement will
automatically terminate upon a material breach of its terms and
conditions.

   6. Third Party Rights

   Any software or
documentation in source or binary form provided along with the
Software that is associated with a separate license agreement is
licensed to Licensee under the terms of that license agreement. This
License Agreement does not apply to those portions of the Software.
Copies of the third party licenses are included in the Software
Distribution.

   7. General

   Nothing in this License Agreement
affects any statutory rights of consumers that cannot be waived or
limited by contract.

   Nothing in this License Agreement shall be
deemed to create any relationship of agency, partnership, or joint
venture between eGenix.com and Licensee.

   If any provision of this
License Agreement shall be unlawful, void, or for any reason
unenforceable, such provision shall be modified to the extent
necessary to render it enforceable without losing its intent, or, if
no such modification is possible, be severed from this License
Agreement and shall not affect the validity and enforceability of the
remaining provisions of this License Agreement.

   This License
Agreement shall be governed by and interpreted in all respects by the
law of Germany, excluding conflict of law provisions. It shall not be
governed by the United Nations Convention on Contracts for
International Sale of Goods. This License Agreement does not grant
permission to use eGenix.com trademarks or trade names in a trademark
sense to endorse or promote products or services of Licensee, or any
third party.

   The controlling language of this License Agreement is
English. If Licensee has received a translation into another language,
it has been provided for Licensee's convenience only.

   8.
Agreement

By downloading, copying, installing or otherwise using the
Software, Licensee agrees to be bound by the terms and conditions of
this License Agreement. For question regarding this License Agreement,
please write to:

eGenix.com Software, Skills and Services
GmbH

Pastor-Loeh-Str. 48

D-40764 Langenfeld

Germany
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

