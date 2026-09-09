# docker build -t cpp .
# docker run --rm -v $(pwd):/app cpp
# Интерактивный режим с TTY
# docker run --rm -it -v $(pwd):/app cpp
# docker run --rm -it -v $(pwd)/leetcode:/app cpp
FROM gcc:latest
WORKDIR /app
COPY . .
CMD ["sh", "-c", "g++ -o main main.cpp --std=c++23 && ./main"]
