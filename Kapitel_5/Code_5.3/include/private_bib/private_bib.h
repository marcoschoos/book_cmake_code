#ifndef PRIVATEBIB_H
#define PRIVATEBIB_H

class Schaetzer {
public:
  double schaetze_einwohner(int quadrameter);

private:
  int quadrameter_pro_person_ = 30;
};

#endif // PRIVATEBIB_H
