Currently, most GPG/PGP software supports being able to generate keypairs up to 4096 bits. Cryptographically speaking, generating a key larger than 4096 bits is a bit overkill, but it is possible for those who want it! Keep in mind that if you're encrypting large files or a lot of information, the using a key larger than 4096 bits may result in slower encryption times.

First you'll need to download the source code for GNUPG-modern build from their site here: https://www.gnupg.org/download/ you can download it on your ubuntu/debian machine by typing wget https://www.gnupg.org/ftp/gcrypt/gnupg/gnupg-2.1.8.tar.bz2 then extract it using `tar jxf gnupg-2.1.8.tar.bz2`.

Go into the file at `/g10/keygen.c` and replace all instances of `4096` with `8192` (or even higher if you want, but it must be divisble by 32)

Run a `sudo apt-get update` to make sure the apt-get repos are up to date and then type `sudo apt-get install libldap2-dev gtk+-2 libbz2-dev` to install all of the dependencies necessary.

Now cd into the directory by typing `cd gnupg-2.1.8` and run `sudo make -f build-aux/speedo.mk native INSTALL_PREFIX=/usr/local` and type `sudo ldconfig` to finish the make process with speedo.

Now download pinentry by typing `sudo apt-get install pinentry-qt4` and install gpg by typing `./configure && make && sudo make install`

You should now be able to run `gpg2 --full-gen-key` and choose a `8192` bit key for RSA and RSA. Generating large keys via SSH shell can take a while because you need to create entropy while the key is being made. If it's taking a while to generate, in another shell, download rng-tools by typing `sudo apt-get install rng-tools` and run it using `sudo rngd -r /dev/urandom`. (source: http://it.toolbox.com/blogs/lim/how-to-generate-enough-entropy-for-gpg-key-generation-process-on-fedora-linux-38022)

If for some reason it says that pinentry is not found, type `nano ~/.gnupg/gpg-agent.conf` and add this line to the file: `pinentry-program /usr/bin/pinentry-qt4` then try it again.

If pinentry does not run, run `killall gpg-agent && gpg-agent --daemon --use-standard-socket --pinentry-program /usr/bin/pinentry-gtk-2`
