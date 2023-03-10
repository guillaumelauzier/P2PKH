# P2PKH

Pay-to-Public-Key-Hash (P2PKH) is a commonly used transaction script in Bitcoin that allows a recipient to receive bitcoins by providing their public key hash. When someone wants to send bitcoins to another person, they create a transaction that includes a P2PKH output script. The output script contains the recipient's public key hash, which is obtained by taking the RIPEMD160 hash of the SHA256 hash of the recipient's public key. When the transaction is broadcasted to the Bitcoin network and included in a block, the recipient can spend the bitcoins by providing a valid digital signature and the corresponding public key. To do so, they need to create a transaction input that references the previous transaction output and includes a P2PKH input script that contains the digital signature and the public key. The Bitcoin network then verifies that the provided signature is valid for the public key hash and that the transaction input spends the correct amount of bitcoins before including the transaction in the blockchain.

# src.cpp

In this example, we define the public key hash as a hex string (pubkey_hash) and then create the P2PKH output script by pushing the appropriate opcodes and data chunks onto a bc::data_chunk. The resulting script is then stored in a bc::script object (p2pkh_script), which can be used to create a transaction output.
