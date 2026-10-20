// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836A20 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_58836a20() {
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
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 75 04: jne 0x58836a4a
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 33: jmp 0x58836a7d
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp esi, ebx
        ; Exact mapped bytes 76 05: jbe 0x58836a53
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 1F 62 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x58836a61
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ecx, eax
        ; Exact mapped bytes 74 05: je 0x58836a66
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 0C 62 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        sub ecx, esi
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
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
        ; Exact mapped bytes E8 5B F2 FF FF: call 0x58835cf0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [edi + 0ch]
        cmp ebx, dword ptr [edi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58836aa2
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 D0 61 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x61
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, dword ptr [edi]
        mov ebp, edi
        mov dword ptr [esp + 14h], ebx
        test edi, edi
        ; Exact mapped bytes 75 19: jne 0x58836ac7
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes E8 BF 61 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x61
        __asm _emit 0x14
        __asm _emit 0x00
        xor eax, eax
        imul esi, esi, 54h
        add esi, ebx
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 13: ja 0x58836ad2
        __asm _emit 0x77
        __asm _emit 0x13
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x58836acb
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [edi]
        ; Exact mapped bytes EB 06: jmp 0x58836acd
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB EA: jmp 0x58836ab5
        __asm _emit 0xeb
        __asm _emit 0xea
        xor edi, edi
        cmp esi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 73 05: jae 0x58836ad7
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 9B 61 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x61
        __asm _emit 0x14
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
