#include <iostream>
#include <bitcoin/bitcoin.hpp>

int main() {
  // Public key hash (20 bytes)
  const std::string pubkey_hash = "3c3fa3d4adcaf8f52d5b1843975e122548269937";

  // Create the script
  bc::data_chunk script_data;
  script_data.push_back(bc::machine::opcode::dup);
  script_data.push_back(bc::machine::opcode::hash160);
  script_data.push_back(bc::make_chunk(bc::hash_literal(pubkey_hash)));
  script_data.push_back(bc::machine::opcode::equalverify);
  script_data.push_back(bc::machine::opcode::checksig);

  bc::script p2pkh_script(script_data);

  std::cout << "P2PKH script: " << bc::encode_base16(p2pkh_script.to_data()) << std::endl;

  return 0;
}
