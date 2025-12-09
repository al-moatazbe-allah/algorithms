int nbYear(int p0, double percent, int aug, int p) {
    int years=0;
    int sum=p0;
    while(p>sum)
    {
      sum+= ((percent/100.0)*sum+aug);
      years++;
    }
    return years;
}
