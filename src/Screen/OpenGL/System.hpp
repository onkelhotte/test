/*
Copyright_License {

  XCSoar Glide Computer - http://www.xcsoar.org/
  Copyright (C) 2000-2013 The XCSoar Project
  A detailed list of copyright holders can be found in the file "AUTHORS".

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
}
*/

#ifndef XCSOAR_SCREEN_OPENGL_SYSTEM_HPP
#define XCSOAR_SCREEN_OPENGL_SYSTEM_HPP

#include "Features.hpp"

#ifdef ENABLE_SDL
#if defined(HAVE_GLES) && (SDL_MAJOR_VERSION >= 2)
#include <SDL_opengles.h>
#else
#include <SDL_opengl.h>
#endif
#elif defined(HAVE_GLES)
#include <GLES/gl.h>
#else
#include <GL/gl.h>
#endif

#endif
