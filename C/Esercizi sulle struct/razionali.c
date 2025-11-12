struct fraz {
    int num;
    unsigned int den;
};
int m_c_d(int a, int b) {
    int c = 0;
    while (a > 0) {
        if (b > a) {
            c = b;
            b = a;
            a = c;
        }
        a = a - b;
    }
    return b;
}
void fr_somma(struct fraz* ris, const struct fraz* a, const struct fraz* b) {
    int nummom = a->num * b->den + b->num * a->den;
    unsigned int denmom = a->den * b->den;
    int mcd = m_c_d(nummom, denmom);
    ris->num = nummom / mcd;
    ris->den = denmom / mcd;
}