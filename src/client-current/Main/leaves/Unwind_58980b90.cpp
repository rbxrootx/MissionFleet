// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980B90 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58980b90() {
    __asm {
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 81 C1 4C 01 00 00: add ecx, 0x14c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 22 2B DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x2b
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
