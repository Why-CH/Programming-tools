FROM gcc:15 AS builder
WORKDIR /app

COPY . .

RUN make

FROM debian:stable-slim
WORKDIR /app

COPY --from=builder /app/tour .

CMD ["./tour"]