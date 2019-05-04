docker run -ti -v $PWD:/test memory-test:0.1 bash -c "cd /test/; gcc main.c vector.c table.c && valgrind --leak-check=full ./a.out"