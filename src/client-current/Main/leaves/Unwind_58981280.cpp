// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981280 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58981280() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes E9 F3 09 FF FF: jmp 0x58971c7e
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
