// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4E90 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_587c4e90() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 28 2F 9A 58: mov ecx, dword ptr [0x589a2f28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 48 08: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 48 0C: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 89 48 10: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
