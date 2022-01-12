#ref : https://qiita.com/yuzutarogo/items/8898377739b5c674743f
FROM ubuntu:20.04
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && \
    apt-get install -y build-essential cmake clang libssl-dev vim