Build

     cmake -DCMAKE_PREFIX_PATH=<cmake path to qt5> -DENABLE_ENCRYPTION=1 ..
     make -j$(nproc)

Run
     
     Run QGroundControl.app in build or similar bin file. If it fails to load modify info.plist to include this key. Found in QGroundControl.app/Contents/Info.plist.
 
    <key>NSCameraUsageDescription</key>
    <string>We use the camera.</string>
