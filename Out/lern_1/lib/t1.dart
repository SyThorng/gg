import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:flutter_zoom_drawer/flutter_zoom_drawer.dart';
import 'package:lottie/lottie.dart';

class t_1 extends StatelessWidget {
  const t_1({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
          leading: IconButton(
              onPressed: () => ZoomDrawer.of(context)!.toggle(),
              icon: Icon(Icons.menu))),
      body: Center(
        child: Lottie.network(
            'https://assets7.lottiefiles.com/packages/lf20_4mu3hoco.json',
            fit: BoxFit.cover),
      ),
    );
  }
}
