# Tut8
Command for running the program
```
  g++ myBSSprog_21114067.cpp -o myBss
  ./myBss
```

## Sample input
begin process p1\
recv_B p2 m2\
send m1\
recv_B p4 m4\
end process p1

begin process p2\
send m2\
recv_B p1 m1\
recv_B p4 m4\
end process p2

begin process p3\
recv_B p1 m1\
recv_B p4 m4\
recv_B p2 m2\
end process p3

begin process p4\
recv_B p1 m1\
recv_B p2 m2\
send m4\
end process p4

## Sample Output
begin process p1\
recv_B p2 m2 (0000)\
recv_A p2 m2 (0100)\
send m1 (1100)\
recv_B p4 m4 (1100)\
recv_A p4 m4 (1101)\
end process p1

begin process p2\
send m2 (0100)\
recv_B p1 m1 (0100)\
recv_A p1 m1 (1100)\
recv_B p4 m4 (1100)\
recv_A p4 m4 (1101)\
end process p2

begin process p3\
recv_B p1 m1 (0000)\
recv_B p4 m4 (0000)\
recv_B p2 m2 (0000)\
recv_A p2 m2 (0100)\
recv_A p1 m1 (1100)\
recv_A p4 m4 (1101)\
end process p3

begin process p4\
recv_B p1 m1 (0000)\
recv_B p2 m2 (0000)\
recv_A p2 m2 (0100)\
recv_A p1 m1 (1100)\
send m4 (1101)\
end process p4


