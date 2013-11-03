I have modified the Open Lighting Architecture to run on a pi that is installed in an amp rack that I built for my fraternity. Most of the changes are made to work with personal hardware and pathways.


Template Readme:
Open Lighting Architecture - OLA
===============================================================================

OLA consists of three parts, the daemon olad, the olad plugins and the client
library, libola.

For documentation on OLA, including examples on how to get started please see
http://www.opendmx.net/index.php/OLA


Plugins
------------------------------------------------------------------------------

Are located in ./plugins. To create a new plugin you'll need to subclass the
Plugin, Device and Port classes. See any of the current plugins for an example.


C++ Library
-------------------------------------------------------------------------------

Is located in ./ola . You'll want to create a new OlaClient and call start().
To do anything useful you'll need to subclass OlaClientObserver and implement
some of the methods.

If you have pthreads installed this library *should* be thread safe (currently
implemented with one big lock).


Python Module
-------------------------------------------------------------------------------

The Python module can be built by running configure with
--enable-python-libs. There are examples on how to use the Python API in
python/examples.

Java Library
-------------------------------------------------------------------------------

There is an experimental Java library which can be built by running configure
with --enable-java-libs.


Credits
-------------------------------------------------------------------------------

Thanks to the following people/organisations:

 - Wayne and Simon from Artistic Licence for providing a Net-Lynx
 - Nic from Enttec who provided a DMX USB Pro for testing.
 - West Australian Academy of Performing Arts (WAAPA) for access to a Strand
    console.
 - Shaun Jackman from Pathway, for answering my questions about the Pathport
    protocol
 - Florian from eventa.ag who donated a StageProfi and a USBDMX2
 - Hamish Dumbreck for jese.co.uk who donated a DMX-TRI
 - Davy Vanherbergen who provided the Java API