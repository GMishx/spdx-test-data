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
** SPDX License to detect: https://spdx.org/licenses/MS-RL.html				
*/



/* SPDX-License-Identifier: MS-RL */
/*
Microsoft Reciprocal License (Ms-RL)

This license governs use of the
accompanying software. If you use the software, you accept this
license. If you do not accept the license, do not use the software.

 
 1. Definitions

   The terms "reproduce," "reproduction," "derivative
works," and "distribution" have the same meaning here as under U.S.
copyright law.

   A "contribution" is the original software, or any
additions or changes to the software.

   A "contributor" is any
person that distributes its contribution under this license.

  
"Licensed patents" are a contributor's patent claims that read
directly on its contribution.

   2. Grant of Rights

      (A)
Copyright Grant- Subject to the terms of this license, including the
license conditions and limitations in section 3, each contributor
grants you a non-exclusive, worldwide, royalty-free copyright license
to reproduce its contribution, prepare derivative works of its
contribution, and distribute its contribution or any derivative works
that you create.

      (B) Patent Grant- Subject to the terms of this
license, including the license conditions and limitations in section
3, each contributor grants you a non-exclusive, worldwide,
royalty-free license under its licensed patents to make, have made,
use, sell, offer for sale, import, and/or otherwise dispose of its
contribution in the software or derivative works of the contribution
in the software.

   3. Conditions and Limitations

      (A)
Reciprocal Grants- For any file you distribute that contains code from
the software (in source code or binary format), you must provide
recipients the source code to that file along with a copy of this
license, which license will govern that file. You may license other
files that are entirely your own work and do not contain code from the
software under any terms you choose.

      (B) No Trademark License-
This license does not grant you rights to use any contributors' name,
logo, or trademarks.

      (C) If you bring a patent claim against
any contributor over patents that you claim are infringed by the
software, your patent license from such contributor to the software
ends automatically.

      (D) If you distribute any portion of the
software, you must retain all copyright, patent, trademark, and
attribution notices that are present in the software.

      (E) If
you distribute any portion of the software in source code form, you
may do so only under this license by including a complete copy of this
license with your distribution. If you distribute any portion of the
software in compiled or object code form, you may only do so under a
license that complies with this license.

      (F) The software is
licensed "as-is." You bear the risk of using it. The contributors give
no express warranties, guarantees, or conditions. You may have
additional consumer rights under your local laws which this license
cannot change. To the extent permitted under your local laws, the
contributors exclude the implied warranties of merchantability,
fitness for a particular purpose and non-infringement.
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

