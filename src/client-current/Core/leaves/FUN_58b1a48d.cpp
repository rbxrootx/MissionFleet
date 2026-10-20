// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B1A48D .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58b1a48d() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 A6 46 1C 00: jmp 0x58cdeb3b
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x46
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
