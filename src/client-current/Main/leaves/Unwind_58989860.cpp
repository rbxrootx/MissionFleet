// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989860 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58989860() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 08 18 00 00: add ecx, 0x1808
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 52 9E DC FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
