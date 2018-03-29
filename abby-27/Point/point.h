class point
{
public:
     point (double init_x, double init_y);
    void shift (double dx, double dy);
    double get_x() const;
    double get_y() const;

private:
  double x;
  double y;
};
