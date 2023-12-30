#pragma once

#define EXAMPLE_DEFINE_1 1
#define EXAMPLE_DEFINE_2 2

#ifdef EXAMPLE_DEFINE_1
#define VALUE1 5
#endif

#ifndef EXAMPLE_DEFINE_2
#define VALUE2 10
#else
#define VALUE2 11
#endif

#define SUM(a, b) ((a) + (b))

int exampleFunc(void);
