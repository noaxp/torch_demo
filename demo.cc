#include <torch/torch.h>

#include <cuda_runtime_api.h>

#define CUDA_CHECK(call)                                                                      \
  {                                                                                           \
    cudaError_t _e = (call);                                                                  \
    if (_e != cudaSuccess) {                                                                  \
      LOG(FATAL) << "CUDA Runtime failure: '#" << cudaGetErrorName(_e) << "' at " << __FILE__ \
                 << ":" << __LINE__;                                                          \
    }                                                                                         \
  }

int main() {
  float data[64*28*28] = {};
  torch::Tensor input_tensor = torch::from_blob(data, {7, 1, 28, 28}, torch::kFloat).to(torch::kCUDA);
  CUDA_CHECK(cudaPeekAtLastError());
}
