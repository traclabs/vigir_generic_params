//=================================================================================================
// Copyright (c) 2018, Alexander Stumpf, TU Darmstadt
// All rights reserved.

// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the Simulation, Systems Optimization and Robotics
//       group, TU Darmstadt nor the names of its contributors may be used to
//       endorse or promote products derived from this software without
//       specific prior written permission.

// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//=================================================================================================

#ifndef VIGIR_GENERIC_PARAMS_H__
#define VIGIR_GENERIC_PARAMS_H__

#include <ros/ros.h>

#include <vigir_generic_params/serialization.h>

// messages
#include <vigir_generic_params/ParameterSetMsg.h>
#include <vigir_generic_params/ParameterMsg.h>

// services
#include <vigir_generic_params/GetAllParameterSetsService.h>
#include <vigir_generic_params/GetParameterSetNamesService.h>
#include <vigir_generic_params/GetParameterSetService.h>
#include <vigir_generic_params/SetParameterSetService.h>

// actions
#include <vigir_generic_params/GetAllParameterSetsAction.h>
#include <vigir_generic_params/GetParameterSetAction.h>
#include <vigir_generic_params/GetParameterSetNamesAction.h>
#include <vigir_generic_params/SetParameterSetAction.h>

namespace vigir_generic_params
{
// some helper
std::string toString(const XmlRpc::XmlRpcValue& val);
std::string toString(const XmlRpc::XmlRpcValue::Type& type);

std::string& strip(std::string& s, const char c);
std::string strip_const(const std::string& s, const char c);
}  // namespace vigir_generic_params

#endif
