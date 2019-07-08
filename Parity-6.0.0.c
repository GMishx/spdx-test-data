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
** SPDX License to detect: https://spdx.org/licenses/Parity-6.0.0.html				
*/



/* SPDX-License-Identifier: Parity-6.0.0 */
/*
The Parity Public License 6.0.0

Contributor: contributor name

Source
Code: source

This license lets you use and share this software for
free, as long as you contribute software you make with it.
Specifically:

If you follow the rules below, you may do everything
with this software that would otherwise infringe either the
contributor's copyright in it, any patent claim the contributor can
license, or both.

   1. Contribute changes and additions you make to
this software.

   2. If you combine this software with other
software, contribute that other software.

   3. Contribute software
you develop, deploy, monitor, or run with this software.

   4. Ensure
everyone who gets a copy of this software from you, in source code or
any other form, gets the text of this license and the contributor and
source code lines above.

   5. Do not make any legal claim against
anyone accusing this software, with or without changes, alone or with
other software, of infringing any patent claim.

To contribute
software, publish all its source code, in the preferred form for
making changes, through a freely accessible distribution system widely
used for similar source code, and license contributions not already
licensed to the public on terms as permissive as this license
accordingly.

You are excused for unknowingly breaking 1, 2, or 3 if
you contribute as required, or stop doing anything requiring this
license, within 30 days of learning you broke the rule.

**As far as
the law allows, this software comes as is, without any warranty, and
the contributor will not be liable to anyone for any damages related
to this software or this license, for any kind of legal claim.**
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

