//
//  Copyright (C) 2014 Cole Minor
//  This file is part of elm-render-routes
//
//  elm-render-routes is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  elm-render-routes is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef ELM_RENDER_ROUTES_FILE_HPP
#define ELM_RENDER_ROUTES_FILE_HPP

#include "utility.hpp"

#include <cstdio>
#include <string>

class File {
  DISALLOW_COPY_AND_ASSIGNMENT(File);
public:
  File(const std::string &path);
  ~File();
  void close();
  bool readline(char *buffer, size_t buffer_length);
private:
  FILE *m_handle;
};

#endif // ELM_RENDER_ROUTES_FILE_HPP
