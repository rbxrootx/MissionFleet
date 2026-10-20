// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897FA7E .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_5897fa7e() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 81 C1 70 08 00 00: add ecx, 0x870
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 34 3C DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
