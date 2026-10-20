// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846B71 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58846b71() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 35 87 00 00: jmp 0x5884f2af
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
