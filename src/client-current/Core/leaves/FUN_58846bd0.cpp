// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846BD0 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58846bd0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 C1 FA 01 00: jmp 0x5886669a
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
