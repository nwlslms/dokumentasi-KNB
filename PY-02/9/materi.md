# PY-02: Session 9

> Review
- [x] Module
    ```python
        import numpy as np
        np.fungsi()
        
        import numpy
        numpy.fungsi()

        from numpy import *
        from numpy import fungsi-fungsinya
        fungsi()
    ```
> Main Course
- [x] 5 Number Summary
    $$
    \text{fnm} = \big(\min(x), \; Q_1, \; Q_2, \; Q_3, \; \max(x) \big)
    $$
    - Minimum
        Nilai minimal dari data set
        $ \min(x) $ = `list[0]`
    - Q1
        Quartil-1 (Median dari median)
        $ Q_1 = \text{median}\{X_i \mid X_i \leq Q_2\} $
    - Median
        Median sama seperti Quartil-2 (Nilai tengah)
        $ Q_2 = \text{median}(x) $
    - Q3
        Median dari median - data terakhir
        $ Q_3 = \text{median}\{X_i \mid X_i \geq Q_2\} $
    - Maximum
        Nilai maksimal dari data set
        $ \max(x) $ = `list[-1]`
    
        | X | 6, 3, 1, 1, 4, 5, 10, 9, 8, 7|
        |---|---|

    - Ubah supaya data set menjadi sorted
        | X | 1, 1, 3, 4, 5, 6, 7, 8, 9, 10|
        |---|---|
    
    - Min: 1
    - Q1: 3
    - Q2: 5
    - Q3: 8
    - Max: 10 
- [x] Regresi
    - Rumus
        $$
        Y = a + bX
        $$
    - a
        $$
        a = \bar{Y} - b \cdot \bar{X}
        $$
    - b
        $$
        b = \frac{\sum (X_i - \bar{X})(Y_i - \bar{Y})}{\sum (X_i - \bar{X})^2}
        $$
    
> Next Session
Grinding Soal: Fisika