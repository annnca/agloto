#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

#define pi 3.14

class punct{ //clasa de baza
    protected:
        int x,y;
    public:
        void SetPunct(int xi,int yi);
};

class dreapta:public punct{ //clasa derivata
    protected:
        float panta;
    public:
        void SetDreapta(int xi, int yi,float p);
};

class cerc:public punct{ //clasa derivata
    protected:
        int raza;
    public:
        void SetCerc(int xi, int yi,int r);
        float ariec();
        float perimetruc();
};

class dreptunghi:public punct{ //clasa derivata
    protected:
        float lat, lung;
        int xss, yss, xdj, ydj;
    public:
        void SetDreptunghi(int xssi, int yssi, int xdji, int ydji, float L, float l);
        float aried();
        float perimetrud();
};

class patrat:public punct{ //clasa derivata
    protected:
        int xss, yss, xdj, ydj;
        float latura;
    public:
        void SetPatrat(int xssi, int yssi, int xdji, int ydji, float l);
        float ariep();
        float perimetrup();
};
#endif // LIB_H_INCLUDED
