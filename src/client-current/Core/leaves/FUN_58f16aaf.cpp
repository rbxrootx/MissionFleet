// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F16AAF .. +0xC bytes.
extern "C" __declspec(naked) void FUN_58f16aaf() {
    __asm {
        ; Exact mapped bytes 0F 82 8E 2F BE FF: jb 0x58af9a43
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8e
        __asm _emit 0x2f
        __asm _emit 0xbe
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 D6 E5 E0 FF: jmp 0x58d25091
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xe5
        __asm _emit 0xe0
        __asm _emit 0xff
    }
}
