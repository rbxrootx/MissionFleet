// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588303E0 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_588303e0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 37 F9 FF FF: jmp 0x5882fd20
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
