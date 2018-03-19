#pragma once

/*
 * Dev donation.
 * Percentage of your hashing power that you want to donate to the developer, can be 0.0 if you don't want to do that.
 * Example of how it works for the default setting of 1.0:
 * You miner will mine into your usual pool for 99 minutes, then switch to the developer's pool for 1.0 minute.
 * Switching is instant, and only happens after a successful connection, so you never loose any hashes.
 *
 * If you plan on changing this setting to 0.0 please consider making a one off donation to my wallets:
 * BTC:
 * 144CN5PzuJavx7pvrx5jq3d8JsWXaDer7B
 *
 * XMR:
 * 48RsjkCS7953VENG1EXCfrD9Ykw8EvqrjiY9E9YWC94sQd6iMBjL9wRLgkviZ9EtJBfHW91QvbbFh1pRjUTPo1KSVBCoRPe
 *
 */

constexpr double fDevDonationLevel = 1.0 / 100.0;
