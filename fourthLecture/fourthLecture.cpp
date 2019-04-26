class Rectangle
{
    private:
    int height, length;

    public:
    void setValues(int ihgt, int ilen)
    {
        height = ight;
        length = ilen;
    }

    int getHeight()
    {
        return height;
    }
}

void getInfo(Rectangle *lmR1)
{
    int uheight , ulength;
    cout << "Enter height: ";
    cin >> uheight;
    cout << 'Enter length: ';
    cin >> ulength;
    lmR1.setValues(uheight, ulength);
}

int main()
{
    Rectangle myR1;
    getInfo(&myR1);

    cout << "Height: " << myR1.getHeight();

    Rectangle rlist[5];
    co
}