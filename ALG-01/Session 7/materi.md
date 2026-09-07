# ALG-01: Session 7

> Review
- [x] Operator
    - Aritmatika
        `+, *, -, /, %`
    - Assignment
        `=, +=, -=, *=, /=, %=`
    - Relasional
        `<, >, <=, >=, ==, !=`
    - Logika
        `|| (or), && (and), !(not)`
    - Bitwise
        `<<(shift right), >> (shift left), & (and), | (or), ^(xor), ~(membalik biner)`
    - Increment & Decrement
        - Pre
            ```cpp
            int a = 10;
            // a += 1;
            ++a;

            // a-= 1;
            --a;
            ```
        - Pos
            ```cpp
            int a = 10;
            // a += 1;
            a++;

            // a -=1;
            a--;
            ```
> Main Course
- Control Program
    - If
        ```cpp
        if (syarat) {
            statementSyarat;
        }
        ```
    - If - else
        ```cpp
        if (syarat) {
            statementSyarat;
        } else {
            eksekusi;
        }
        ```
    - If - else if (n) - else
        ```cpp
        if (syarat) {
            statementSyarat;
        } else if (alternatif n) {
            statementAlternatif;
        } else {
            statementTerakhir;
        }
        ```
    - Switch
        ```cpp
        switch(variabel){
            case 1:
                statement;
                break;
            case n:
                statement n;
                break;
            default:
                statementDefault;
                break;
        }
        ```
- Nested Control
    - Nested if
        `If di dalam if`

> Next Session
> CP: Operator & If