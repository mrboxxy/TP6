#ifndef EXCEPTIONECHECRETOUR_H
#define EXCEPTIONECHECRETOUR_H

class
ExceptionEchecRetour : public runtime_error
{
public:
ExceptionEchecRetour(string what_arg = "");
};

ExceptionEchecRetour::ExceptionEchecRetour(string what_arg) : runtime_error(what_arg)
{}

#endif
