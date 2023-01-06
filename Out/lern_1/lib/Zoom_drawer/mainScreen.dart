import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:flutter_zoom_drawer/flutter_zoom_drawer.dart';

class mainScreen extends StatelessWidget {
  const mainScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('MainScreen1'),
        leading: IconButton(
          onPressed: () => ZoomDrawer.of(context)!.toggle(),
          icon: Icon(Icons.menu),
        ),
      ),
    );
  }
}
