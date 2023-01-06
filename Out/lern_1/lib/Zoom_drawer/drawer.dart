import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:flutter_zoom_drawer/config.dart';
import 'package:flutter_zoom_drawer/flutter_zoom_drawer.dart';
import 'package:lern_1/Zoom_drawer/mainScreen.dart';
import 'package:lern_1/Zoom_drawer/menuScreen.dart';
import 'package:lern_1/t2.dart';

class drawer extends StatefulWidget {
  drawer({super.key});

  @override
  State<drawer> createState() => _drawerState();
}

class _drawerState extends State<drawer> {
  final _drawerController = ZoomDrawerController();
  Widget _page = mainScreen();

  @override
  Widget build(BuildContext context) {
    return ZoomDrawer(
      menuScreen: Builder(builder: (context) {
        return menuScreen(
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
      drawerShadowsBackgroundColor: Colors.red,
      menuBackgroundColor: Colors.orange,
    );
  }
}
