//
// RELatLngBounds.h
// REMarkerClusterer
//
// Copyright (c) 2011-2012 Roman Efimov (http://github.com/romaonthego)
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <MapKit/MapKit.h>
#import <CoreLocation/CLLocation.h>

@interface RELatLngBounds : NSObject

@property (nonatomic, readwrite) CLLocationCoordinate2D northEast;
@property (nonatomic, readwrite) CLLocationCoordinate2D northWest;
@property (nonatomic, readwrite) CLLocationCoordinate2D southWest;
@property (nonatomic, readwrite) CLLocationCoordinate2D southEast;
@property (nonatomic, copy) MKMapView *mapView;

- (id)initWithMapView:(MKMapView *)mapView;
- (void)setSouthWest:(CLLocationCoordinate2D)sw northEast:(CLLocationCoordinate2D)ne;
- (void)setExtendedBounds:(int)gridSize;
- (bool)contains:(CLLocationCoordinate2D)coordinate;

@end
