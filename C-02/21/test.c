while(1) {
    if (fscanf(fp, "%d;%[^;];%d", umur, nama, nim) != 3) {
        break;
    }
    count++;
}