// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D1F974 .. +0x7 bytes.
extern "C" __declspec(naked) void thunk_FUN_58f4c0b7() {
    __asm {
        ; Exact mapped bytes 32 C3: xor al, bl
        __asm _emit 0x32
        __asm _emit 0xc3
        ; Exact mapped bytes E9 3C C7 22 00: jmp 0x58f4c0b7
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xc7
        __asm _emit 0x22
        __asm _emit 0x00
    }
}
