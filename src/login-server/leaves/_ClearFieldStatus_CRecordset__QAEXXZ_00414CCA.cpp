// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414CCA .. +0x14 bytes.
extern "C" __declspec(naked) void _ClearFieldStatus_CRecordset__QAEXXZ_00414CCA() {
    __asm {
        ; Exact mapped bytes FF 71 14: push dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x14
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF B1 EC 00 00 00: push dword ptr [ecx + 0xec]
        __asm _emit 0xff
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 9E 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
