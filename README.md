docker run --runtime=nvidia -v ~/pengxiao/torch_demo:/test --rm -it nvcr.io/nvidia/l4t-ml:r35.2.1-py3 bash
cd test
bash build.sh
