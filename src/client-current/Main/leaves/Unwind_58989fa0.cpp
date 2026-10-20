// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989FA0 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58989fa0() {
    __asm {
        ; Exact mapped bytes A1 BC 84 A2 58: mov eax, dword ptr [0x58a284bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 E0 FE: and eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0xfe
        ; Exact mapped bytes A3 BC 84 A2 58: mov dword ptr [0x58a284bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
