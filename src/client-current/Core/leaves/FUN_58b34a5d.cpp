// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B34A5D .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58b34a5d() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 BE 7E FF FF: jmp 0x58b2c923
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
