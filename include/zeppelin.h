//    Biplanes Revival
//    Copyright (C) 2019-2020 Regular-dev community
//    http://regular-dev.org/
//    regular.dev.org@gmail.com
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <https://www.gnu.org/licenses/>.


#ifndef ZEPPELIN_H
#define ZEPPELIN_H


class Zeppelin
{
  float x;
  float y;
  bool ascent;

public:
  Zeppelin();

  void Update();
  void UpdateCoordinates();
  void Draw();
  void DrawScore();

  void Respawn();
};


#endif //ZEPPELIN_H
