A HARDWARE IMPLEMENTATION OF ARTIFICIAL NEURAL NETWORKS FOR INFERENCE
=====================================================================

The growing investment in the use of artificial neural networks for end-user services, which require low latency and high responsiveness, make it desirable to have dedicated hardware accelerators for inference. FPGA (*Field-Programmable Gate Arrays*) programmable devices have the required ideal flexibility for the deployment of artificial neural network accelerators, while being able to support different architectural network models and still keeping performance. A modular artificial neural network design is developed in hardware description language in order to allow inference from reconfigurable devices with desirable performance. The modular design enables it to be easily scaled to support new neural network architectures and different activation functions. The project’s validation is verified by a hardware implementation of a simple and widely known neural network (*exclusive*-OR (XOR) function).


Implementation
--------------
The VHDL code was developed in a modular fashion, allowing different activation functions and mixing of different neuron approaches (*e.g.* behavioral, structural, area or speed optimizations *etc*). The same modularity is observed in artifical neural networks, so that developing on this same fashion becomes intuitive. Developing and adding different activation functions or neural architectures thus becomes trivial.

The code uses the following hierarchical organization, from lowest to highest level:

```
types.vhd
```
Integer and fractional bit size configuration for the components (defaults to Q16.16). Some other functions for easier conversion and value setting in VHDL. Mainly responsible for setting the desired network precision (compromise between performance and precision);

```
act_func.vhd
```
Activation functions implementation. Other activation functions or reimplementation of existing activation function must be implemented in this file through an `architecture`;

```
neuron.vhd
```
Artificial neuron implementation. New neuron descriptions must be implemented in this file through an `architecture`. Neurons use an activation function described in `act_func.vhd`. Thus, it is possible to mix different activation functions on the same neural network, as needed;

```
network.vhd
```
Implementation of the network and its interconnections. This is where the neurons are instantiated and positioned on the network, as needed in the architecture. Different architectures can be implemented. The inputs of the network are directly connected to the input neurons. The network is controlled through the neuron connections of the hidden layer.


Remarks
-------
Further work is needed to address a few issues:
* Routing becomes non-trivial for wider networks and can be difficult;
* More complex activation functions need to be implemented;
* Better documentation is needed;
* An automated way of converting high-level code to its VHDL equivalent should be made (perhaps using ONNX as an intermediate representation);
* More testing is needed.



```
gabrieljcs [at] protonmail [dot] com
```
