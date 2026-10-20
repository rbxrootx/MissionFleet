// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C9680 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_587c9680() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 91 EC 00 00 00: mov edx, dword ptr [ecx + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 82 B8 00 00 00: mov dword ptr [edx + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 E4 00 00 00: mov dword ptr [ecx + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
