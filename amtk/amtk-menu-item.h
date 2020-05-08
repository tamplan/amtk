/*
 * This file is part of Amtk - Actions, Menus and Toolbars Kit
 *
 * Copyright 2017 - Sébastien Wilmet <swilmet@gnome.org>
 *
 * Amtk is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation; either version 2.1 of the License, or (at your
 * option) any later version.
 *
 * Amtk is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef AMTK_MENU_ITEM_H
#define AMTK_MENU_ITEM_H

#if !defined (AMTK_H_INSIDE) && !defined (AMTK_COMPILATION)
#error "Only <amtk/amtk.h> can be included directly."
#endif

#include <gtk/gtk.h>
#include <amtk/amtk-types.h>

G_BEGIN_DECLS

_AMTK_EXTERN
const gchar *	amtk_menu_item_get_long_description	(GtkMenuItem *menu_item);

_AMTK_EXTERN
void		amtk_menu_item_set_long_description	(GtkMenuItem *menu_item,
							 const gchar *long_description);

_AMTK_EXTERN
void		amtk_menu_item_set_icon_name		(GtkMenuItem *item,
							 const gchar *icon_name);

G_END_DECLS

#endif  /* AMTK_MENU_ITEM_H */
