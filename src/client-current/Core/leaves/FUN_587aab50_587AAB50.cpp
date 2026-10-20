// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AAB50 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_587aab50_587AAB50() {
    __asm {
        ; Exact mapped bytes A1 8C 9C 96 58: mov eax, dword ptr [0x58969c8c]
        __asm _emit 0xa1
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        xor edx, edx
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, esi
        and ecx, 0fffff000h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x587aabb0
        __asm _emit 0x74
        __asm _emit 0x48
        cmp eax, ecx
        ; Exact mapped bytes 74 0A: je 0x587aab76
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, eax
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 75 F4: jne 0x587aab68
        __asm _emit 0x75
        __asm _emit 0xf4
        pop esi
        ret
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi], ecx
        add dword ptr [eax + 8], -1
        mov dword ptr [eax + 4], esi
        ; Exact mapped bytes 75 2C: jne 0x587aabb0
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [eax]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x587aab9c
        __asm _emit 0x74
        __asm _emit 0x12
        push 8000h
        push 0
        push eax
        mov dword ptr [edx], ecx
        ; Exact mapped bytes FF 15 78 43 89 58: call dword ptr [0x58894378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        ret
        push 8000h
        push 0
        push eax
        ; Exact mapped bytes 89 0D 8C 9C 96 58: mov dword ptr [0x58969c8c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 78 43 89 58: call dword ptr [0x58894378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        ret
    }
}
