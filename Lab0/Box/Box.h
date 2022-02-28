#ifndef Box_h_
#define Box_h_

class Box{

    private:
        int length;
        int width;
        int depth;

    public:
        Box();
        Box(int l, int w, int d);
        void volume();
};

#endif
