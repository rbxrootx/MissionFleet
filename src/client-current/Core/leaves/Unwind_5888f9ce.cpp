// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F9CE .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_5888f9ce() {
    __asm {
        ; Exact mapped bytes 8B 4D BC: mov ecx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 81 C1 B4 12 00 00: add ecx, 0x12b4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 7E BF FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x7e
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
