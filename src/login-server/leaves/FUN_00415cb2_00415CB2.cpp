// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415CB2 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_00415cb2_00415CB2() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp + 8]
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E5 F7 FF FF: call 0x4154ab
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x415d89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 A0 EF FF FF: call 0x414c7e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 10h]
        mov edi, eax
        mov eax, dword ptr [esi]
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x415d77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x415db7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x415d90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 62: je 0x415d62
        __asm _emit 0x74
        __asm _emit 0x62
        push 4
        pop ecx
        sub eax, ecx
        ; Exact mapped bytes 74 17: je 0x415d1e
        __asm _emit 0x74
        __asm _emit 0x17
        sub eax, 3
        ; Exact mapped bytes 75 6B: jne 0x415d77
        __asm _emit 0x75
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [ebp + 8]
        shl edx, 4
        mov eax, dword ptr [eax + 3ch]
        mov dword ptr [eax + edx - 8], ecx
        ; Exact mapped bytes EB 6B: jmp 0x415d89
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 18h]
        mov ebx, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x415d2e
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 04: je 0x415d32
        __asm _emit 0x74
        __asm _emit 0x04
        cmp eax, ebx
        ; Exact mapped bytes 75 57: jne 0x415d89
        __asm _emit 0x75
        __asm _emit 0x57
        cmp dword ptr [esi + 14h], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 15: je 0x415d50
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 E3 EF FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx], 4a4d4120h
        or dword ptr [edi], 0ffffffffh
        ; Exact mapped bytes EB 39: jmp 0x415d89
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 E0 EF FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi], 4
        ; Exact mapped bytes EB 27: jmp 0x415d89
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp dword ptr [ebx], 4a4d4120h
        ; Exact mapped bytes 74 0D: je 0x415d77
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 C3 EF FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ah
        push 4
        push 4
        push edi
        push ebx
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5F F7 FF FF: call 0x4154e8
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 4a4d4120h
        ; Exact mapped bytes 74 EE: je 0x415d89
        __asm _emit 0x74
        __asm _emit 0xee
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 49 EF FF FF: call 0x414cf1
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 85 EF FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D2: jmp 0x415d89
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [edi], -1
        ; Exact mapped bytes 75 CD: jne 0x415d89
        __asm _emit 0x75
        __asm _emit 0xcd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 5F EF FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 4a4d4120h
        ; Exact mapped bytes EB B5: jmp 0x415d89
        __asm _emit 0xeb
        __asm _emit 0xb5
    }
}
