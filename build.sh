mkdir build

pushd build

cmake -DTorch_DIR:PATH=/usr/local/lib/python3.8/dist-packages/torch/share/cmake/Torch/ ..
make

popd
