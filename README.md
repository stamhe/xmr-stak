###### Stam He's
# XMR-Stak - Monero/Aeon All-in-One Mining Software

XMR-Stak is a universal Stratum pool miner. This miner supports CPUs, AMD and NVIDIA gpus and can be used to mine the crypto currency Monero and Aeon.

## HTML reports
<img src="https://gist.githubusercontent.com/fireice-uk/2da301131ac01695ff79539a27b81d68/raw/4c09cdeee86f94df2e9dd86b927e64aded6184f5/xmr-stak-cpu-hashrate.png" width="260"> <img src="https://gist.githubusercontent.com/fireice-uk/2da301131ac01695ff79539a27b81d68/raw/4c09cdeee86f94df2e9dd86b927e64aded6184f5/xmr-stak-cpu-results.png" width="260"> <img src="https://gist.githubusercontent.com/fireice-uk/2da301131ac01695ff79539a27b81d68/raw/4c09cdeee86f94df2e9dd86b927e64aded6184f5/xmr-stak-cpu-connection.png" width="260">

## Overview
* [Features](#features)
* [Supported altcoins](#supported-altcoins)
* [Download](#download)
* [Linux Portable Binary](doc/Linux_deployment.md)
* [Usage](doc/usage.md)
* [HowTo Compile](doc/compile.md)
* [FAQ](doc/FAQ.md)
* [Developer Donation](#default-developer-donation)
* [Release Cheksums](#release-checksums)
* [Developer PGP Key's](doc/pgp_keys.md)

## Features

- support all common backends (CPU/x86, AMD-GPU and NVIDIA-GPU)
- support all common OS (Linux, Windows and MacOS)
- supports algorithm cryptonight for Monero (XMR), cryptonight-light (AEON), Dero(DERO), Haven(XHV) 
- easy to use
  - guided start (no need to edit a config file for the first start)
  - auto configuration for each backend
- open source software (GPLv3)
- TLS support
- HTML statistics
- JSON API for monitoring

## Supported altcoins

Besides Monero, following coins can be mined using this miner:

- [Aeon](http://www.aeon.cash/)
- [Electroneum](https://electroneum.com)
- [Intense](https://intensecoin.com)
- [Sumokoin](https://www.sumokoin.org)
- [Dero](https://dero.io)
- [HavenProtocol](http://havenprotocol.com)

For all coins, except Aeon, you can use Monero settings.

Please note, this list is not complete, and is not an endorsement.

## Download

You can find the latest releases and precompiled binaries on GitHub under [Releases](https://github.com/stamhe/xmr-stak/releases).
If you are running on Linux (especially Linux VMs), checkout [Linux Portable Binary](doc/Linux_deployment.md).

## Default Developer Donation

By default the miner will donate 1% of the hashpower (1 minute in 100 minutes) to my pool. If you want to change that, edit [donate-level.hpp](xmrstak/donate-level.hpp) before you build the binaries.

If you want to donate directly to support future development, here is my address

BTC:
```
144CN5PzuJavx7pvrx5jq3d8JsWXaDer7B
```
XMR:
```
48RsjkCS7953VENG1EXCfrD9Ykw8EvqrjiY9E9YWC94sQd6iMBjL9wRLgkviZ9EtJBfHW91QvbbFh1pRjUTPo1KSVBCoRPe
```

## Thanks
Thanks for fireice-uk and psychocrypt's work. Great Job!

