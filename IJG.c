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
** SPDX License to detect: https://spdx.org/licenses/IJG.html				
*/



/* SPDX-License-Identifier: IJG */
/*
Independent JPEG Group License LEGAL ISSUES

In plain English:

   1.
We don't promise that this software works. (But if you find any bugs,
please let us know!)

   2. You can use this software for whatever you
want. You don't have to pay us.

   3. You may not pretend that you
wrote this software. If you use it in a program, you must acknowledge
somewhere in your documentation that you've used the IJG code.

In
legalese:

The authors make NO WARRANTY or representation, either
express or implied, with respect to this software, its quality,
accuracy, merchantability, or fitness for a particular purpose. This
software is provided "AS IS", and you, its user, assume the entire
risk as to its quality and accuracy.

This software is copyright (C)
1991-1998, Thomas G. Lane. All Rights Reserved except as specified
below.

Permission is hereby granted to use, copy, modify, and
distribute this software (or portions thereof) for any purpose,
without fee, subject to these conditions:

   (1) If any part of the
source code for this software is distributed, then this README file
must be included, with this copyright and no-warranty notice
unaltered; and any additions, deletions, or changes to the original
files must be clearly indicated in accompanying documentation.

   (2)
If only executable code is distributed, then the accompanying
documentation must state that "this software is based in part on the
work of the Independent JPEG Group".

   (3) Permission for use of
this software is granted only if the user accepts full responsibility
for any undesirable consequences; the authors accept NO LIABILITY for
damages of any kind.

These conditions apply to any software derived
from or based on the IJG code, not just to the unmodified library. If
you use our work, you ought to acknowledge us.

Permission is NOT
granted for the use of any IJG author's name or company name in
advertising or publicity relating to this software or products derived
from it. This software may be referred to only as "the Independent
JPEG Group's software".

We specifically permit and encourage the use
of this software as the basis of commercial products, provided that
all warranty or liability claims are assumed by the product
vendor.

ansi2knr.c is included in this distribution by permission of
L. Peter Deutsch, sole proprietor of its copyright holder, Aladdin
Enterprises of Menlo Park, CA. ansi2knr.c is NOT covered by the above
copyright and conditions, but instead by the usual distribution terms
of the Free Software Foundation; principally, that you must include
source code if you redistribute it. (See the file ansi2knr.c for full
details.) However, since ansi2knr.c is not needed as part of any
program generated from the IJG code, this does not limit you more than
the foregoing paragraphs do.

The Unix configuration script
"configure" was produced with GNU Autoconf. It is copyright by the
Free Software Foundation but is freely distributable. The same holds
for its supporting scripts (config.guess, config.sub, ltconfig,
ltmain.sh). Another support script, install-sh, is copyright by M.I.T.
but is also freely distributable.

It appears that the arithmetic
coding option of the JPEG spec is covered by patents owned by IBM,
AT&T, and Mitsubishi. Hence arithmetic coding cannot legally be used
without obtaining one or more licenses. For this reason, support for
arithmetic coding has been removed from the free JPEG software. (Since
arithmetic coding provides only a marginal gain over the unpatented
Huffman mode, it is unlikely that very many implementations will
support it.) So far as we are aware, there are no patent restrictions
on the remaining code.

The IJG distribution formerly included code to
read and write GIF files. To avoid entanglement with the Unisys LZW
patent, GIF reading support has been removed altogether, and the GIF
writer has been simplified to produce "uncompressed GIFs". This
technique does not use the LZW algorithm; the resulting GIF files are
larger than usual, but are readable by all standard GIF decoders.

We
are required to state that

"The Graphics Interchange Format(c) is the
Copyright property of CompuServe Incorporated. GIF(sm) is a Service
Mark property of CompuServe Incorporated."
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
