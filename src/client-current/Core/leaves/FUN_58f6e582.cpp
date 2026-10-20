// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F6E582 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58f6e582() {
    __asm {
        ; Exact mapped bytes 0F 83 09 DC DA FF: jae 0x58d1c191
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 80 3A 50: cmp byte ptr [edx], 0x50
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x50
        ; Exact mapped bytes E9 4F C5 F5 FF: jmp 0x58ecaadf
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xc5
        __asm _emit 0xf5
        __asm _emit 0xff
    }
}
