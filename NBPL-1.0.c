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
** SPDX License to detect: https://spdx.org/licenses/NBPL-1.0.html				
*/



/* SPDX-License-Identifier: NBPL-1.0 */
/*
The Net Boolean Public License Version 1, 22 August 1998 Copyright
1998, Net Boolean Incorporated, Redwood City, California, USA All
Rights Reserved. Note: This license is derived from the "Artistic
License" as distributed with the Perl Programming Language. Its terms
are different from those of the "Artistic License."

PREAMBLE

The
intent of this document is to state the conditions under which a
Package may be copied, such that the Copyright Holder maintains some
semblance of artistic control over the development of the package,
while giving the users of the package the right to use and distribute
the Package in a more-or-less customary fashion, plus the right to
make reasonable modifications.

Definitions:

"Package" refers to the
collection of files distributed by the Copyright Holder, and
derivatives of that collection of files created through textual
modification.

"Standard Version" refers to such a Package if it has
not been modified, or has been modified in accordance with the wishes
of the Copyright Holder.

"Copyright Holder" is whoever is named in
the copyright or copyrights for the package.

"You" is you, if you're
thinking about copying or distributing this Package.

"Reasonable
copying fee" is whatever you can justify on the basis of media cost,
duplication charges, time of people involved, and so on. (You will not
be required to justify it to the Copyright Holder, but only to the
computing community at large as a market that must bear the
fee.)

"Freely Available" means that no fee is charged for the item
itself, though there may be fees involved in handling the item. It
also means that recipients of the item may redistribute it under the
same conditions they received it.

   1. You may make and give away
verbatim copies of the source form of the Standard Version of this
Package without restriction, provided that you duplicate all of the
original copyright notices and associated disclaimers.

   2. You may
apply bug fixes, portability fixes and other modifications derived
from the Public Domain or from the Copyright Holder. A Package
modified in such a way shall still be considered the Standard
Version.

   3. You may otherwise modify your copy of this Package in
any way, provided that you insert a prominent notice in each changed
file stating how and when you changed that file, and provided that you
do at least ONE of the following:

      a) place your modifications
in the Public Domain or otherwise make them Freely Available, such as
by posting said modifications to Usenet or an equivalent medium, or
placing the modifications on a major archive site such as
uunet.uu.net, or by allowing the Copyright Holder to include your
modifications in the Standard Version of the Package.

      b) use
the modified Package only within your corporation or organization.

  
   c) rename any non-standard executables so the names do not conflict
with standard executables, which must also be provided, and provide a
separate manual page for each non-standard executable that clearly
documents how it differs from the Standard Version.

      d) make
other distribution arrangements with the Copyright Holder.

   4. You
may distribute the programs of this Package in object code or
executable form, provided that you do at least ONE of the following:


     a) distribute a Standard Version of the executables and library
files, together with instructions (in the manual page or equivalent)
on where to get the Standard Version.

      b) accompany the
distribution with the machine-readable source of the Package with your
modifications.

      c) accompany any non-standard executables with
their corresponding Standard Version executables, giving the
non-standard executables non-standard names, and clearly documenting
the differences in manual pages (or equivalent), together with
instructions on where to get the Standard Version.

      d) make
other distribution arrangements with the Copyright Holder.

   5. You
may charge a reasonable copying fee for any distribution of this
Package. You may charge any fee you choose for support of this
Package. You may not charge a fee for this Package itself. However,
you may distribute this Package in aggregate with other (possibly
commercial) programs as part of a larger (possibly commercial)
software distribution provided that you do not advertise this Package
as a product of your own.

   6. The scripts and library files
supplied as input to or produced as output from the programs of this
Package do not automatically fall under the copyright of this Package,
but belong to whomever generated them, and may be sold commercially,
and may be aggregated with this Package.

   7. C subroutines supplied
by you and linked into this Package in order to emulate subroutines
and variables of the language defined by this Package shall not be
considered part of this Package, but are the equivalent of input as in
Paragraph 6, provided these subroutines do not change the language in
any way that would cause it to fail the regression tests for the
language.

   8. The name of the Copyright Holder may not be used to
endorse or promote products derived from this software without
specific prior written permission.

   9. THIS PACKAGE IS PROVIDED "AS
IS" AND WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, WITHOUT
LIMITATION, THE IMPLIED WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR
A PARTICULAR PURPOSE. The End
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

