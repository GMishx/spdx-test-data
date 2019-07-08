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
** SPDX License to detect: https://spdx.org/licenses/NRL.html				
*/



/* SPDX-License-Identifier: NRL */
/*
NRL License COPYRIGHT NOTICE

All of the documentation and software
included in this software distribution from the US Naval Research
Laboratory (NRL) are copyrighted by their respective
developers.

Portions of the software are derived from the Net/2 and
4.4-Lite Berkeley Software Distributions (BSD) of the University of
California at Berkeley and those portions are copyright by The Regents
of the University of California. All Rights Reserved. The UC Berkeley
Copyright and License agreement is binding on those portions of the
software. In all cases, the NRL developers have retained the original
UC Berkeley copyright and license notices in the respective files in
accordance with the UC Berkeley copyrights and license.

Portions of
this software and documentation were developed at NRL by various
people. Those developers have each copyrighted the portions that they
developed at NRL and have assigned All Rights for those portions to
NRL. Outside the USA, NRL has copyright on some of the software
developed at NRL. The affected files all contain specific copyright
notices and those notices must be retained in any derived work. NRL
LICENSE

NRL grants permission for redistribution and use in source
and binary forms, with or without modification, of the software and
documentation created at NRL provided that the following conditions
are met:

   1. All terms of the UC Berkeley copyright and license
must be followed.

   2. Redistributions of source code must retain
the above copyright notice, this list of conditions and the following
disclaimer.

   3. Redistributions in binary form must reproduce the
above copyright notice, this list of conditions and the following
disclaimer in the documentation and/or other materials provided with
the distribution.

   4. All advertising materials mentioning features
or use of this software must display the following acknowledgements:


     

      This product includes software developed by the
University of California, Berkeley and its contributors.

      

    
 This product includes software developed at the Information
Technology Division, US Naval Research Laboratory.

   5. Neither the
name of the NRL nor the names of its contributors may be used to
endorse or promote products derived from this software without
specific prior written permission.

THE SOFTWARE PROVIDED BY NRL IS
PROVIDED BY NRL AND CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL NRL OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in
the software and documentation are those of the authors and should not
be interpreted as representing official policies, either expressed or
implied, of the US Naval Research Laboratory (NRL).
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

