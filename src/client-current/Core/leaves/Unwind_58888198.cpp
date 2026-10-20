// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58888198 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58888198() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 90 01 00 00: add ecx, 0x190
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6A CF DB FF: jmp 0x58645110
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xcf
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
