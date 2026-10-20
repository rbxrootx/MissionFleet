// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056198C .. +0xFF bytes.
extern "C" __declspec(naked) void _CanActivate_COleClientItem__MAEHXZ_0056198C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 2ch], 4
        ; Exact mapped bytes 75 07: jne 0x5619a6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x561a86
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x561a75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 6871ech
        ; Exact mapped bytes E8 C3 7E 00 00: call 0x569880
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 23: je 0x5619ec
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 42 FA FC FF: call 0x531416
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3C 4E FF FF: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 0A: je 0x5619ec
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 71: jne 0x561a6c
        __asm _emit 0x75
        __asm _emit 0x71
        ; Exact mapped bytes E8 93 AB FC FF: call 0x52c593
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xab
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x561a27
        __asm _emit 0x74
        __asm _emit 0x1e
        push 636f20h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7A 87 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x561a27
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 77 B0 FC FF: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB DC: jmp 0x561a03
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 636f20h
        ; Exact mapped bytes E8 F0 87 F7 FF: call 0x4da225
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 2B: jne 0x561a6c
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D1 4D FF FF: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 2C 9B FC FF: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
