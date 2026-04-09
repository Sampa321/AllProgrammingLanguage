#WAP to calculate the area of a cirle given a radius.
r<-10
area<-(3.14)*r*r
print(area)


area_circle<-function(radius)
{
    return (pi*radius^2)
}
radius<-5
print(paste("Area of circle with radius 5:",area_circle(radius)))