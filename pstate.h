#ifndef PSTATE_H
#define PSTATE_H


class pstate
{
    public:
        pstate();
        virtual ~pstate();
        pstate(const pstate& other);
        pstate& operator=(const pstate& other);
    protected:
    private:
};

#endif // PSTATE_H
