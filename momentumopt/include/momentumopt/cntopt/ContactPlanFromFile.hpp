/*
 * Copyright [2017] Max Planck Society. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <momentumopt/cntopt/ContactPlanInterface.hpp>

namespace momentumopt {

  /**
   * This class implements the ContactPlanInterface by reading a sequence of contacts
   * from a configuration file.
   */
  class ContactPlanFromFile : public ContactPlanInterface
  {
    public:
      ContactPlanFromFile(){}
      ~ContactPlanFromFile(){}

      virtual void optimize(const DynamicsState& ini_state, const TerrainDescription& terrain);
  };
}