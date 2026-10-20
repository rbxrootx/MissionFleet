// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427110 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_00427110_00427110() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 30: mov esi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x30
        ; Exact mapped bytes 89 34 01: mov dword ptr [ecx + eax], esi
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0x01
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 75 F5: jne 0x42711e
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
