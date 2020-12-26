# Ethereal
Is a completely open source geometric modeling kernel built to take advantage of modern computing hardware and solve modern design problems.

Geometry kernels are the machines that make CAD applications work. Geometry kernels are traditionally completely single threaded, making them unable to take advantage of the multithreaded computing power of modern hardware. 

Ethereal will be built from the ground up to take advantage of the multicored computing power of modern cpu's, gpu's and other hardware accelerators. With the goal of creating CAD software that radially changes and improves the design and engineering process. 


# Building

Ethereal uses the cmake build system. I've spent a decent bit of timing trying to implement cmake to allow this project to be built and used across systems and IDEs. That being said I am new to CMake so if you see something definitly do 

say something. The Ethereal Cmake should either generate the required project files for your IDE or open directly within. Once loaded a simple build command should be all that is necessary. Thank you to Pablo Speciale and

any other contributors for providing this excellent CMake example (https://github.com/pablospe/cmake-example-library) upon which Ethereal's is currently based. Please find below a copy of the the cmake-example-library's license. 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

MIT License

Copyright (c) 2020 Pablo Speciale

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////