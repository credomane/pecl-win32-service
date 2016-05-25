/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2016 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.0 of the PHP license,       |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_0.txt.                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Wez Furlong <wez@php.net>                                    |
  | Author: Credomane                                                    |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_WIN32SERVICE_H
#define PHP_WIN32SERVICE_H

extern zend_module_entry win32service_module_entry;
#define phpext_win32service_ptr    &win32service_module_entry

#define PHP_WIN32SERVICE_EXTNAME "win32service"
#define PHP_WIN32SERVICE_VERSION "0.2.1-dev"

#ifndef PHP_WIN32
# error This extension is for win32 only
#endif

#ifndef SERVICE_WIN32_OWN_PROCESS_INTERACTIVE
#define SERVICE_WIN32_OWN_PROCESS_INTERACTIVE SERVICE_WIN32_OWN_PROCESS | SERVICE_INTERACTIVE_PROCESS
#endif

#endif


