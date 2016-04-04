#ifndef EXCEPTIONECHECRETOUR_H
#define EXCEPTIONECHECRETOUR_H

class
ExceptionEchecRetour : public runtime_error
{
public:
ExceptionEchecRetour(string what_arg = "");

int ObtenirValeurCompteur();

private:
static int compteur_;
};

ExceptionEchecRetour::ExceptionEchecRetour(string what_arg) : runtime_error(what_arg)
{
    compteur++;
}

int ExceptionEchecRetour::ObtenirValeurCompteur()
{
    return compteur_;
}

#endif
