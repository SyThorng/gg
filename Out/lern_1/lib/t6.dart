import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';

class ui extends StatefulWidget {
  const ui({super.key});

  @override
  State<ui> createState() => _uiState();
}

class _uiState extends State<ui> {
  @override
  Widget build(BuildContext context) {
    TextEditingController name_con = TextEditingController();
    TextEditingController qty_con = TextEditingController();
    TextEditingController price_con = TextEditingController();
    TextEditingController total_con = TextEditingController();

    return Scaffold(
      body: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Padding(
            padding: const EdgeInsets.all(20),
            child: Column(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: TextField(
                    controller: name_con,
                    decoration: const InputDecoration(
                      border: OutlineInputBorder(),
                      label: Text('Name'),
                    ),
                  ),
                ),
                Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: TextField(
                    keyboardType: TextInputType.number,
                    controller: qty_con,
                    decoration: const InputDecoration(
                      hintText: 'Qty',
                      border: OutlineInputBorder(),
                    ),
                  ),
                ),
                Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: TextField(
                    // onChanged: ((newvalue) {
                    //   setState(() {
                    //     // int qty = int.parse(qty_con.text);
                    //     // double price = double.parse(price_con.text);
                    //     // total_con.text = (qty * price).toString();
                    //   });
                    // }),
                    controller: price_con,
                    keyboardType: TextInputType.number,
                    decoration: const InputDecoration(
                        border: OutlineInputBorder(), label: Text('Price')),
                  ),
                ),
                Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: TextField(
                    keyboardType: TextInputType.number,
                    controller: total_con,
                    decoration: const InputDecoration(
                      hintText: 'Total',
                      border: OutlineInputBorder(),
                    ),
                  ),
                ),
                MaterialButton(
                  onPressed: () {},
                  child: const Text('Next Page'),
                  color: Colors.blue,
                )
              ],
            ),
          )
        ],
      ),
      floatingActionButton: Row(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: [
          FloatingActionButton(
            onPressed: () {},
            child: const Icon(Icons.save),
          ),
          FloatingActionButton(
            onPressed: () {},
            child: const Icon(Icons.clear),
          ),
        ],
      ),
    );
  }
}
