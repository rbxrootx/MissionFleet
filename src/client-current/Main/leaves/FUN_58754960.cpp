// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754960 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58754960() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 10h]
        mov esi, dword ptr [edi + 0ch]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 7f807f81h
        imul ecx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 75 04: jne 0x5875498a
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 33: jmp 0x587549bd
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp esi, ebx
        ; Exact mapped bytes 76 05: jbe 0x58754993
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 DF 82 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x587549a1
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ecx, eax
        ; Exact mapped bytes 74 05: je 0x587549a6
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 CC 82 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        sub ecx, esi
        mov eax, 7f807f81h
        imul ecx
        sar edx, 0ah
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        push ecx
        push 1
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 8B F9 FF FF: call 0x58754360
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [edi + 0ch]
        cmp ebx, dword ptr [edi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x587549e2
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 90 82 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0x00
        mov edi, dword ptr [edi]
        mov ebp, edi
        mov dword ptr [esp + 14h], ebx
        test edi, edi
        ; Exact mapped bytes 75 1C: jne 0x58754a0a
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 7F 82 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        imul esi, esi, 808h
        add esi, ebx
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 13: ja 0x58754a15
        __asm _emit 0x77
        __asm _emit 0x13
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x58754a0e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [edi]
        ; Exact mapped bytes EB 06: jmp 0x58754a10
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB E7: jmp 0x587549f5
        __asm _emit 0xeb
        __asm _emit 0xe7
        xor edi, edi
        cmp esi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 73 05: jae 0x58754a1a
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 58 82 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
