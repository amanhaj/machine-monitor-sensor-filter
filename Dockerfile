FROM gcc:latest
RUN mkdir /usr/src/cpp
COPY filter.cpp /usr/src/cpp
WORKDIR /usr/src/cpp
RUN g++ -o a.out filter.cpp
CMD ["./a.out"]