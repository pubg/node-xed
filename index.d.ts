declare module 'node-xed' {
    export interface Instruction {
      addr: string;
      asm: string;
      offset: number;
      len: number;
    }
  
    export interface Xed {
      disassemble(data: Uint8Array, address: string, address_length: number): Instruction[];
    }
  
    const _default: Xed;
    export default _default;
  }
  