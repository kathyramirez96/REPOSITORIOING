/*
    Copyright (c) 2013, Taiga Nomi and the respective contributors
    All rights reserved.

    Use of this source code is governed by a BSD-style license that can be found
    in the LICENSE file.
*/
#pragma once

#include <vector>

#include "neural_net/core/params/deconv_params.h"

#ifdef CNN_USE_NNPACK
#include <nnpack.h>

namespace neural_net {
namespace core {
namespace kernels {

inline void nnp_deconv2d_kernel(const conv_params &params,
                                const std::vector<const vec_t *> &in,
                                const vec_t &W,
                                const vec_t &bias,
                                tensor_t &a) {}

}  // namespace kernels
}  // namespace core
}  // namespace neural_net

#endif
