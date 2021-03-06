//
// Copyright (c) 2009, Markus Rickert
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//

#ifndef _RL_KIN_REVOLUTE_H_
#define _RL_KIN_REVOLUTE_H_

#include "Joint.h"

namespace rl
{
	namespace kin
	{
		class Revolute : public Joint
		{
		public:
			Revolute();
			
			virtual ~Revolute();
			
			::rl::math::Unit getPositionUnit() const;
			
			::rl::math::Unit getSpeedUnit() const;
			
			/**
			 * \f[ {^{0}J_{i}(q)} = \begin{pmatrix}z_{i - 1} \times {^{i - 1}p_{n}}\\z_{i - 1}\end{pmatrix} \f]
			 */
			void jacobian(const ::rl::math::Transform& tcp, ::rl::math::MatrixBlock& j);
			
			void setPosition(const ::rl::math::Real& q);
			
		protected:
			
		private:
			
		};
	}
}

#endif // _RL_KIN_REVOLUTE_H_
