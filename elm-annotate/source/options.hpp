//
//  Copyright (C) 2014 Cole Minor
//  This file is part of elm-annotate
//
//  elm-annotate is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  elm-annotate is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef ELM_ANNOTATE_OPTIONS_HPP
#define ELM_ANNOTATE_OPTIONS_HPP

#include "utility.hpp"

struct Options {
  Options();
  bool parse(int argc, char **argv);
  void usage() const;

  Strings arguments;
  bool compare;
  std::string reference_path;
  std::string notes_path;
};

#endif // ELM_ANNOTATE_OPTIONS_HPP
