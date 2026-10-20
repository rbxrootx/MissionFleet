// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AAAD0 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_587aaad0_587AAAD0() {
    __asm {
        ; Exact mapped bytes A1 8C 9C 96 58: mov eax, dword ptr [0x58969c8c]
        __asm _emit 0xa1
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587aaaec
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 55: jne 0x587aab3b
        __asm _emit 0x75
        __asm _emit 0x55
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 75 F4: jne 0x587aaae0
        __asm _emit 0x75
        __asm _emit 0xf4
        push 40h
        push 3000h
        push 1000h
        push 0
        ; Exact mapped bytes FF 15 74 43 89 58: call dword ptr [0x58894374]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x587aab49
        __asm _emit 0x74
        __asm _emit 0x45
        push esi
        push edi
        xor edi, edi
        mov dword ptr [eax + 8], 0
        lea edx, [eax + 20h]
        lea esi, [edi + 20h]
        mov dword ptr [edx], edi
        mov ecx, edx
        mov dword ptr [eax + 4], edx
        add esi, 20h
        add edx, 20h
        mov edi, ecx
        cmp esi, 0fe0h
        ; Exact mapped bytes 76 E9: jbe 0x587aab15
        __asm _emit 0x76
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 0D 8C 9C 96 58: mov ecx, dword ptr [0x58969c8c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        pop edi
        mov dword ptr [eax], ecx
        pop esi
        ; Exact mapped bytes A3 8C 9C 96 58: mov dword ptr [0x58969c8c], eax
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [edx]
        inc dword ptr [eax + 8]
        mov dword ptr [eax + 4], ecx
        mov eax, edx
        ret
        xor eax, eax
        ret
    }
}
