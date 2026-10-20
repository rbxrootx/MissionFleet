// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588892C3 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_588892c3() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 80 00 00 00: add ecx, 0x80
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F E5 BF FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xe5
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
