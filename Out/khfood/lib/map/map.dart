// import 'dart:async';
// import 'dart:html';

import 'package:flutter/material.dart';
// import 'package:flutter/src/widgets/container.dart';
// import 'package:flutter/src/widgets/framework.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:google_maps_flutter/google_maps_flutter.dart';
import 'package:location/location.dart';

class map extends StatefulWidget {
  map({super.key});

  @override
  State<map> createState() => _mapState();
}

class _mapState extends State<map> {
  // Completer<GoogleMapController> _controller = Completer();
  Location _location = Location();
  GoogleMapController? _controller;

  void _onMapcreate(GoogleMapController _crl) {
    _controller = _crl;
    _location.onLocationChanged.listen((Element) {
      _controller?.animateCamera(CameraUpdate.newCameraPosition(CameraPosition(
          target: LatLng(Element.latitude!, Element.longitude!), zoom: 15)));
    });
  }

  final CameraPosition _kGooglePlex = const CameraPosition(
    target: LatLng(11.554776, 104.894498),
    zoom: 15,
  );
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SingleChildScrollView(
        child: Column(
          children: [
            SizedBox(
              height: 30,
            ),
            Center(
              child: Container(
                child: Text(
                  'Google Map',
                  style: GoogleFonts.aBeeZee(
                      fontSize: 20,
                      fontWeight: FontWeight.bold,
                      color: Colors.pink),
                ),
              ),
            ),
            SizedBox(
              height: 10,
            ),
            Container(
              decoration:
                  BoxDecoration(borderRadius: BorderRadius.circular(50)),
              width: double.infinity,
              height: 700,
              child: GoogleMap(
                mapType: MapType.hybrid,
                initialCameraPosition: _kGooglePlex,
                onMapCreated: _onMapcreate,
                // onMapCreated: (GoogleMapController controller) {
                //   _controller.complete(controller);
                // },
                myLocationEnabled: true,
              ),
            ),
          ],
        ),
      ),
    );
  }
}
