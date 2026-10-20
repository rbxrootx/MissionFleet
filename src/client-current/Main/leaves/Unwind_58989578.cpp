// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989578 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58989578() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 81 C1 4C 03 00 00: add ecx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A E1 F5 FF: jmp 0x588e76c0
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
    }
}
