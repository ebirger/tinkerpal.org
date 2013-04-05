1. Overview
=============
tink.js is a lightweight Javascript interpreter designed for low cost, low power
microcontrollers (MCUs) allowing rapid prototyping of embedded projects

2. Supported Boards
===================
2.1. TI''s Stellaris&reg;
--------------------
* EK-LM4F120XL (Stellaris Launchpad)
* EK-LM3S6965

2.2. STM32
----------
* STM32F3DISCOVERY

3. Quick Start
==============
3.1. Downloading tink.js
------------------------
3.2. Flashing tink.js
---------------------
3.3. Connecting via Serial
--------------------------
3.4. Quick Examples
-------------------

4. Peripherals Support
======================
4.1. Summary
------------

<table class="table table-bordered table-condensed">
<tbody>
  <tr>
    <th></th>
    <th>Stellaris Launchpad</th>
    <th>EK-LM3S6965</th>
    <th>STM32F3DISCOVERY</th>
  </tr>
  <tr>
    <td>GPIO - Digital Write</td>
    <td>Supported</td>
    <td>Supported</td>
    <td>Supported</td>
  <tr>
  <tr>
    <td>GPIO - Digital Read</td>
    <td>Supported</td>
    <td>Not Supportd</td>
    <td>Not Supported</td>
  <tr>
  <tr>
    <td>GPIO - Analog Write</td>
    <td>Supported</td>
    <td>Partial</td>
    <td>Not Supported</td>
  <tr>
  <tr>
    <td>GPIO - Analog Read</td>
    <td>Supported</td>
    <td>Not Supported</td>
    <td>Not Supported</td>
  <tr>
  <tr>
    <td>GPIO - Set Watch</td>
    <td>Supported</td>
    <td>Not Supported</td>
    <td>Not Supported</td>
  <tr>
  <tr>
    <td>UART</td>
    <td>Supported</td>
    <td>Partial</td>
    <td>Partial</td>
  <tr>
  </tbody>
</table>

4.2. Hardware Pin Mapping
-------------------------

5. Hacking tink.js
===================
5.1. Development Environment
----------------------------

5.2. Porting tink.js to a New Board
-----------------------------------

5.3. Porting tink.js to a new Chipset
-------------------------------------

