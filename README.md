# P2PKH

In this example, we define the public key hash as a hex string (pubkey_hash) and then create the P2PKH output script by pushing the appropriate opcodes and data chunks onto a bc::data_chunk. The resulting script is then stored in a bc::script object (p2pkh_script), which can be used to create a transaction output.
