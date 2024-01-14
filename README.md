# build-process-workshop

Preprocessing:
`gcc -E main.c -Iinc -o outputs/main.i`
`gcc -E src/example.c -Iinc -o outputs/example.i`

Compiling:
`gcc -S main.c -Iinc -o outputs/main.s`
`gcc -S src/example.c -Iinc -o outputs/example.s`

Assembling:
`gcc -c main.c -Iinc -o outputs/main.o`
`gcc -c src/example.c -Iinc -o outputs/example.o`

Linking:
`gcc main.c src/example.c -Iinc -o outputs/output.out`
