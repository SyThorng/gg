import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:flutter_zoom_drawer/config.dart';
import 'package:flutter_zoom_drawer/flutter_zoom_drawer.dart';
import 'package:khfood/drawer/mainscreen.dart';
import 'package:khfood/drawer/menuscreen.dart';
import 'package:khfood/nav_bar/nav_bar.dart';

class MyWidget extends StatefulWidget {
  const MyWidget({super.key});

  @override
  State<MyWidget> createState() => _MyWidgetState();
}

class _MyWidgetState extends State<MyWidget> {
  final _drawercontroller = ZoomDrawerController();
  Widget _page = nav_bar();
  @override
  Widget build(BuildContext context) {
    return ZoomDrawer(
      menuScreen: Builder(builder: (context) {
        return menuscreen(
          onPagechange: (e) {
            setState(() {
              _page = e;
            });
            ZoomDrawer.of(context)!.close();
          },
        );
      }),
      mainScreen: _page,
      showShadow: true,
      boxShadow: [
        BoxShadow(
            // offset: Offset(-20, -20),
            color: Color.fromARGB(104, 255, 255, 255),
            blurRadius: 6),
        BoxShadow(
            offset: Offset(20, 20),
            color: Color.fromARGB(104, 255, 255, 255),
            blurRadius: 6)
      ],
      drawerShadowsBackgroundColor: Colors.white,
      menuBackgroundColor: Colors.pink,
    );
  }
}
