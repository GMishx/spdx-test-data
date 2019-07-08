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
** SPDX License to detect: https://spdx.org/licenses/OGTSL.html				
*/



/* SPDX-License-Identifier: OGTSL */
/*
The Open Group Test Suite License Preamble

The intent of this
document is to state the conditions under which a Package may be
copied, such that the Copyright Holder maintains some semblance of
artistic control over the development of the package, while giving the
users of the package the right to use and distribute the Package in a
more-or-less customary fashion, plus the right to make reasonable
modifications.

Testing is essential for proper development and
maintenance of standards-based products.

For buyers: adequate
conformance testing leads to reduced integration costs and protection
of investments in applications, software and people.

For software
developers: conformance testing of platforms and middleware greatly
reduces the cost of developing and maintaining multi-platform
application software.

For suppliers: In-depth testing increases
customer satisfaction and keeps development and support costs in
check. API conformance is highly measurable and suppliers who claim it
must be able to substantiate that claim.

As such, since these are
benchmark measures of conformance, we feel the integrity of test tools
is of importance. In order to preserve the integrity of the existing
conformance modes of this test package and to permit recipients of
modified versions of this package to run the original test modes, this
license requires that the original test modes be preserved.

If you
find a bug in one of the standards mode test cases, please let us know
so we can feed this back into the original, and also raise any
specification issues with the appropriate bodies (for example the
POSIX committees).

Definitions:

"Package" refers to the collection
of files distributed by the Copyright Holder, and derivatives of that
collection of files created through textual modification.

"Standard
Version" refers to such a Package if it has not been modified, or has
been modified in accordance with the wishes of the Copyright
Holder.

"Copyright Holder" is whoever is named in the copyright or
copyrights for the package.

"You" is you, if you're thinking about
copying or distributing this Package.

"Reasonable copying fee" is
whatever you can justify on the basis of media cost, duplication
charges, time of people involved, and so on. (You will not be required
to justify it to the Copyright Holder, but only to the computing
community at large as a market that must bear the fee.)

"Freely
Available" means that no fee is charged for the item itself, though
there may be fees involved in handling the item. It also means that
recipients of the item may redistribute it under the same conditions
they received it.

   1. You may make and give away verbatim copies of
the source form of the Standard Version of this Package without
restriction, provided that you duplicate all of the original copyright
notices and associated disclaimers.

   2. You may apply bug fixes,
portability fixes and other modifications derived from the Public
Domain or from the Copyright Holder. A Package modified in such a way
shall still be considered the Standard Version.

   3. You may
otherwise modify your copy of this Package in any way, provided that
you insert a prominent notice in each changed file stating how and
when you changed that file, and provided that you do at least the
following:

   rename any non-standard executables and testcases so
the names do not conflict with standard executables and testcases,
which must also be provided, and provide a separate manual page for
each non-standard executable and testcase that clearly documents how
it differs from the Standard Version.

   4. You may distribute the
programs of this Package in object code or executable form, provided
that you do at least the following:

   accompany any non-standard
executables and testcases with their corresponding Standard Version
executables and testcases, giving the non-standard executables and
testcases non-standard names, and clearly documenting the differences
in manual pages (or equivalent), together with instructions on where
to get the Standard Version.

   5. You may charge a reasonable
copying fee for any distribution of this Package. You may charge any
fee you choose for support of this Package. You may not charge a fee
for this Package itself. However, you may distribute this Package in
aggregate with other (possibly commercial) programs as part of a
larger (possibly commercial) software distribution provided that you
do not advertise this Package as a product of your own.

   6. The
scripts and library files supplied as input to or produced as output
from the programs of this Package do not automatically fall under the
copyright of this Package, but belong to whomever generated them, and
may be sold commercially, and may be aggregated with this Package.

  
7.Subroutines supplied by you and linked into this Package shall not
be considered part of this Package.

   8. The name of the Copyright
Holder may not be used to endorse or promote products derived from
this software without specific prior written permission.

   9. THIS
PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. The End
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

