// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005539EB .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_005539eb_005539EB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f969h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 1e9h
        push 5cfa08h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 41 77 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x553a3c
        __asm _emit 0x74
        __asm _emit 0x14
        push 1eah
        push 5cfa08h
        ; Exact mapped bytes E8 C9 0F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553a3c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553a1f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x553a5f
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ebh
        push 5cfa08h
        ; Exact mapped bytes E8 A6 0F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553a5f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553a42
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x553a90
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 DE C3 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x553a90
        __asm _emit 0x75
        __asm _emit 0x14
        push 1edh
        push 5cfa08h
        ; Exact mapped bytes E8 75 0F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553a90
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x553a65
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 E2 FF 00 00: call 0x563a80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CC 09 01 00: call 0x564479
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x553acc
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 07 45 00 00: call 0x557fce
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 47: jmp 0x553b13
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B7 02 00 00: call 0x553d9c
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 1f7h
        push 5cfa08h
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 65 76 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BE 44 00 00: call 0x557fce
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
