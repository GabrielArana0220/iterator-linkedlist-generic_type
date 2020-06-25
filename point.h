class Point
{
    friend std::ostream &operator<<(std::ostream&, const Point&);
    friend std::istream &operator>>(std::istream& ,  Point&);
private:
    int X;
    int Y;
public:
    Point();
    Point(int,int);
    Point(const Point&);
    void set_X(int);
    void set_Y(int);
    int get_X();
    int get_Y();
    bool operator <(const Point&);
    bool operator >(const Point&);
    bool operator ==(const Point&);

};
Point::Point()
{
    X=0;
    Y=0;
}
Point::Point(int x, int y)
{
    X=x;
    Y=y;
}
Point::Point(const Point& p)
{
    X=p.X;
    Y = p.Y;
}
std::ostream &operator << (std::ostream& os, const Point& dt)
{
    return os << '('<<dt.X << '.' << dt.Y<<')';
}
std::istream &operator >> (std::istream& st, Point& dt)
{
    st >> dt.X >> dt.Y;
    return st;
}
int Point::get_X()
{
    return X;
}
int Point::get_Y()
{
    return Y;
}
void Point::set_X(int x)
{
    X =x;
}
void Point::set_Y(int y)
{
    Y=y;
}

bool Point::operator<(const Point & o)
{
    if((X+Y) < (o.X+o.Y))
        return true;
    return false;
}
bool Point::operator>(const Point & o)
{
    if((X+Y) > (o.X+o.Y))
        return true;
    return false;
}
bool Point::operator==(const Point & o)
{
    if((X+Y) == (o.X+o.Y))
        return true;
    return false;
}
