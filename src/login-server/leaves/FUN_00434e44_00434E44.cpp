// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434E44 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_00434e44_00434E44() {
    __asm {
        ; Exact mapped bytes E8 3D 0C 00 00: call 0x435a86
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 C4 00 00 00: mov eax, dword ptr [eax + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
