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
** SPDX License to detect: https://spdx.org/licenses/iMatix.html				
*/



/* SPDX-License-Identifier: iMatix */
/*
The SFL License Agreement

This license agreement covers your use of
the iMatix STANDARD FUNCTION LIBRARY (SFL), its source code,
documentation, and executable files, hereinafter referred to as "the
Product".

The Product is Copyright (c) 1991-2000 iMatix Corporation.
You may use it and distribute it according to this following License
Agreement. If you do not agree with these terms, please remove the
Product from your system. By incorporating the Product in your work or
distributing the Product to others you implicitly agree to these
license terms.

Statement Of Copyright

The Product is, and remains,
Copyright © 1991-2000 iMatix Corporation, with exception of specific
copyrights as noted in the individual source files.

Conditions Of
Use

   You do not need to provide the source code for the Product as
part of your product. However, you must do one of these things to
comply with the Product License Agreement:

      1. Provide the
source code for Product modules that you use, or

      2. Make your
product freely available according to a license similar to the GNU
General Public License, or the Perl Artistic License, or

      3. Add
this phrase to the documentation for your product: "This product uses
parts of the iMatix SFL, Copyright © 1991-2000 iMatix Corporation
<http://www.imatix.com>".

Rights Of Usage

   You may freely and at
no cost use the Product in any project, commercial, academic,
military, or private, so long as you respect the License Agreement.
The License Agreement does not affect any software except the Product.
In particular, any application that uses the Product does not itself
fall under the License Agreement.

   You may modify any part of the
Product, including sources and documentation, except this License
Agreement, which you may not modify.

   You must clearly indicate any
modifications at the start of each source file. The user of any
modified Product code must know that the source file is not
original.

   

   At your discretion, you may rewrite or reuse any
part of the Product so that your derived code is not obviously part of
the Product. This derived code does not fall under the Product License
Agreement directly, but you must include a credit at the start of each
source file indicating the original authorship and source of the code,
and a statement of copyright as follows:

   "Parts copyright (c)
1991-2000 iMatix Corporation."

Rights Of Distribution

   You may
freely distribute the Product, or any subset of the Product, by any
means. The License, in the form of the file called "LICENSE.TXT" must
accompany any such distribution.

   You may charge a fee for
distributing the Product, for providing a warranty on the Product, for
making modifications to the Product, or for any other service provided
in relation to the Product. You are not required to ask our permission
for any of these activities.

   At no time will iMatix associate
itself with any distribution of the Product except that supplied from
the Internet site http://www.imatix.com.

Disclaimer Of Warranty

  
The Product is provided as free software, in the hope that it will be
useful. It is provided "as-is", without warranty of any kind, either
expressed or implied, including, but not limited to, the implied
warranties of merchantability and fitness for a particular purpose.
The entire risk as to the quality and performance of the Product is
with you. Should the Product prove defective, the full cost of repair,
servicing, or correction lies with you.
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

