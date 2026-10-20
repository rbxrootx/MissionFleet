// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4A80 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587c4a80() {
    __asm {
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 02: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        ; Exact mapped bytes B8 03 00 00 00: mov eax, 3
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
