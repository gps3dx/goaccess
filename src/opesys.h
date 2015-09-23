/**
 * Copyright (C) 2009-2014 by Gerardo Orellana <goaccess@prosoftcorp.com>
 * GoAccess - An Ncurses apache weblog analyzer & interactive viewer
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * A copy of the GNU General Public License is attached to this
 * source distribution for its full text.
 *
 * Visit http://goaccess.prosoftcorp.com for new releases.
 */

#ifndef OPESYS_H_INCLUDED
#define OPESYS_H_INCLUDED

#define OPESYS_TYPE_LEN  10

/* Each OS contains the number of hits and the OS's type */
typedef struct GOpeSys_
{
  char os_type[OPESYS_TYPE_LEN];
  int hits;
} GOpeSys;

char *verify_os (const char *str, char *os_type);

#endif
