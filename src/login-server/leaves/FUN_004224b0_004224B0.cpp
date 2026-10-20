// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004224B0 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_004224b0_004224B0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes C7 40 50 D8 AE 44 00: mov dword ptr [eax + 0x50], 0x44aed8
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 14 01 00 00 00: mov dword ptr [eax + 0x14], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
