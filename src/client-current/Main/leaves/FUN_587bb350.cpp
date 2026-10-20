// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB350 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_587bb350() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 13: je 0x587bb36f
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 54 24 0C: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 66 8B 32: mov si, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 30: mov word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x30
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 F3: jne 0x587bb361
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
