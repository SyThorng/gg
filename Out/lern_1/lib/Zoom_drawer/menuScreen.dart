import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:lern_1/Zoom_drawer/mainScreen.dart';
import 'package:lern_1/t1.dart';
import 'package:lern_1/t2.dart';

class menuScreen extends StatelessWidget {
  menuScreen({super.key, required this.onPagechange});
  final Function(Widget) onPagechange;

  List<ListItem> DrawerItem = [
    ListItem(icon: Icon(Icons.person), tile: Text('Profile'), page: t_1()),
    ListItem(icon: Icon(Icons.payment), tile: Text('Payment'), page: t_2()),
  ];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Colors.orange,
        body: Theme(
          data: ThemeData.dark(),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: DrawerItem.map((e) => ListTile(
                  onTap: () {
                    onPagechange(e.page);
                  },
                  title: e.tile,
                  leading: e.icon,
                )).toList(),
          ),
        ));
  }
}

class ListItem {
  late final Icon icon;
  late final Text tile;
  final Widget page;
  ListItem({required this.icon, required this.tile, required this.page});
}
