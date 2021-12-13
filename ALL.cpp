 
#include <iostream>
#include <vector>
 
class Tetramino {
public:
    Tetramino() = default;
 
    void render()
    {
        int form[4];
        getForm(form);
 
    };
 
 
    virtual void getForm(int form[4]) = 0;
};
 
class I : public Tetramino
{
public:
    void getForm(int form[4]) override
    {
        form[0] = 1;
        form[1] = 3;
        form[2] = 5;
        form[3] = 7;
    }
};
 
class L : public Tetramino
{
public:
    void getForm(int form[4]) override
    {
        form[0] = 2;
        form[1] = 3;
        form[2] = 5;
        form[3] = 7;
    }
};
 
class O : public Tetramino
{
public:
    void getForm(int form[4]) override
    {
        form[0] = 2;
        form[1] = 3;
        form[2] = 4;
        form[3] = 5;
    }
};
 
 
class Tetris {
public:
 
    Tetris() = default;
 
    void onUserChoosenFigure(char figureType)
    {
        switch (figureType)
        {
        case 'L':
            figures.push_back(new L());
            break;
        case 'I':
            figures.push_back(new I());
            break;
        case 'O':
            figures.push_back(new I());
            break;
        default:
            throw;
        }
    }
    void render()
    {
        for (auto f : figures)
        {
            int form[4];
            f->getForm(form);
            int wtf = 1;
            
        }
 
    }
 
private:
    std::vector<Tetramino*> figures;
};
 
int main()
{
    Tetris ttr;
    std::string input;
    std::cin >> input;
    ttr.onUserChoosenFigure(input[0]);
    ttr.render();
}
