// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850013 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58850013() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 F5 FE FF FF: jmp 0x5884ff11
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
