CCKFNavDrawer
=============
CCKFNavDrawer is a custom navigationController implementing sliding menu on IOS, which aims to provide [Android Navigation Drawer](http://developer.android.com/design/patterns/navigation-drawer.html) for developers to make it on IOS.

### Screenshots
![Screenshot](https://raw.github.com/calvinchankf/CCKFNavDrawer/master/screenshot.png)

[Demo](http://www.youtube.com/watch?v=enGnkPYtp44)

### Features
* Left BarButtonItem to open/close the Drawer
* Fast swipe to open/close the drawer 
* Gesture to open/close the drawer
* Tap on Shawdow to close the drawer

### How to use
* Replace your UINavigationController with CCKFNavDrawer class
* Add your IBOutlet and code in DrawerView class in order to customize the appearance of your drawer view.
* Adopt the protocol ```CCKFNavDrawerDelegate```
* Set setCCKFNavDrawerDelegate to your root view controller. e.g.

```
self.rootNav = (CCKFNavDrawer *)self.navigationController;
[self.rootNav setCCKFNavDrawerDelegate:self];
```

* implement the delegate method. e.g.

```
- (void)CCKFNavDrawerSelection:(NSInteger)selectionIndex
{
  NSLog(@"%i", selectionIndex);
}
```
 in order to get the index of selection in navigation drawer


----------
For detail, please take a look in VC class.

### Limitation
* It is ios7 only.
* It is currently portrait only, I will make it landscape soon. Of couse, I welcome and appreciate someone can make it landscape compatible. FORK me if you want to make it better!

### Thank you guys so much for all your supports. The project has been discontinued. Thank you.
