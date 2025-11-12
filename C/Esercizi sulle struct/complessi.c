struct complesso {
	double re, im;
};
void prodotto_complesso(struct complesso* comp1, const struct complesso* comp2) {
	double momre = (comp1->re * comp2->re) - (comp1->im * comp2->im);
	double momim = (comp1->re * comp2->im) + (comp1->im * comp2->re);
	comp1->re = momre;
	comp1->im = momim;
}