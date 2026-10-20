// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E660 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_5897e660() {
    __asm {
        ; Exact mapped bytes A1 4C FC 9C 58: mov eax, dword ptr [0x589cfc4c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 83 E0 FE: and eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0xfe
        ; Exact mapped bytes A3 4C FC 9C 58: mov dword ptr [0x589cfc4c], eax
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
