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
** SPDX License to detect: https://spdx.org/licenses/BlueOak-1.0.0.html				
*/



/* SPDX-License-Identifier: BlueOak-1.0.0 */
/*
# Blue Oak Model License

Version 1.0.0

## Purpose

This license
gives everyone as much permission to work with this software as
possible, while protecting contributors from liability.

##
Acceptance

In order to receive this license, you must agree to its
rules. The rules of this license are both obligations under that
agreement and conditions to your license. You must not do anything
with this software that triggers a rule that you cannot or will not
follow.

## Copyright

Each contributor licenses you to do everything
with this software that would otherwise infringe that contributor's
copyright in it.

## Notices

You must ensure that everyone who gets a
copy of any part of this software from you, with or without changes,
also gets the text of this license or a link to
<https://blueoakcouncil.org/license/1.0.0>.

## Excuse

If anyone
notifies you in writing that you have not complied with
[Notices](#notices) , you can keep your license by taking all
practical steps to comply within 30 days after the notice. If you do
not do so, your license ends immediately.

## Patent

Each contributor
licenses you to do everything with this software that would otherwise
infringe any patent claims they can license or become able to
license.

## Reliability

No contributor can revoke this license.

##
No Liability

***As far as the law allows, this software comes as is,
without any warranty or condition, and no contributor will be liable
to anyone for any damages related to this software or this license,
under any kind of legal claim.***
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

