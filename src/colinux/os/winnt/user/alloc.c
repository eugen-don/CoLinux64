/*
 * This source code is a part of coLinux source package.
 *
 * Dan Aloni <da-x@colinux.org>, 2003 (c)
 *
 * The code is licensed under the GPL. See the COPYING file at
 * the root directory.
 *
 */

/* WinNT host: allocate memory blocks in WinNT user space */

#include <malloc.h>

#include <colinux/os/alloc.h>

void* co_os_malloc(uintptr_t size)
{
	return malloc(size);
}

void* co_os_realloc(void* ptr, uintptr_t size)
{
	return realloc(ptr, size);
}

void co_os_free(void* ptr)
{
	free(ptr);
}
