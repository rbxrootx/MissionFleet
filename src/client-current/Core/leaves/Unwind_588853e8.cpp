// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588853E8 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_588853e8() {
    __asm {
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 81 C1 A4 06 01 00: add ecx, 0x106a4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 AA 8B D3 FF: jmp 0x585bdfa0
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x8b
        __asm _emit 0xd3
        __asm _emit 0xff
    }
}
