# Use the base image
FROM docker/dev-environments-default:stable-1

RUN echo $USER

# Install Clang and tools
USER root
RUN apt-get update
RUN apt-get install -y git cmake cppcheck catch2 clang clang-format clang-tidy gdb valgrind emscripten lcov

USER vscode

