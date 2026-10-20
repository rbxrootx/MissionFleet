// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754E80 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_58754e80() {
    __asm {
        sub esp, 820h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 81ch], eax
        push ebx
        mov ebx, dword ptr [esp + 828h]
        push ebp
        mov ebp, dword ptr [esp + 834h]
        push esi
        push edi
        mov edi, dword ptr [esp + 838h]
        push edi
        push ebx
        mov esi, ecx
        ; Exact mapped bytes E8 0A EE FF FF: call 0x58753cc0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 70: jne 0x58754f2a
        __asm _emit 0x75
        __asm _emit 0x70
        mov eax, dword ptr [esp + 840h]
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esp + 28h], edi
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x58754ef6
        __asm _emit 0x75
        __asm _emit 0x29
        push ebp
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 800h
        ; Exact mapped bytes 7C 0D: jl 0x58754ee8
        __asm _emit 0x7c
        __asm _emit 0x0d
        push 800h
        push ebp
        lea eax, [esp + 34h]
        push eax
        ; Exact mapped bytes EB 15: jmp 0x58754efd
        __asm _emit 0xeb
        __asm _emit 0x15
        push ebp
        lea ecx, [esp + 30h]
        push ecx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 0D: jmp 0x58754f03
        __asm _emit 0xeb
        __asm _emit 0x0d
        push eax
        push ebp
        lea edx, [esp + 34h]
        push edx
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea eax, [esp + 24h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 51 FE FF FF: call 0x58754d60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 82ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 B9 7C 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 820h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, dword ptr [esi + 28h]
        cmp edi, dword ptr [esi + 2ch]
        ; Exact mapped bytes 76 05: jbe 0x58754f37
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 3B 7D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7d
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        mov ebx, dword ptr [esi + 1ch]
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 18h], eax
        cmp dword ptr [esi + 28h], eax
        ; Exact mapped bytes 76 05: jbe 0x58754f53
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 1F 7D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7d
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ch]
        ; Exact mapped bytes 8B 35 94 C1 98 58: mov esi, dword ptr [0x5898c194]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esp + 1ch], ecx
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x58754f6a
        __asm _emit 0x74
        __asm _emit 0x06
        cmp ebx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 74 05: je 0x58754f6f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 03 7D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7d
        __asm _emit 0x22
        __asm _emit 0x00
        cmp edi, dword ptr [esp + 18h]
        ; Exact mapped bytes 74 9A: je 0x58754f0f
        __asm _emit 0x74
        __asm _emit 0x9a
        test ebx, ebx
        ; Exact mapped bytes 75 6E: jne 0x58754fe7
        __asm _emit 0x75
        __asm _emit 0x6e
        ; Exact mapped bytes E8 F4 7C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58754f8a
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 E8 7C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [esp + 834h]
        cmp dword ptr [edi], edx
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x58755022
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 4E: jne 0x58754feb
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes E8 D0 7C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58754fae
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 C4 7C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esp + 838h]
        cmp dword ptr [edi + 4], eax
        ; Exact mapped bytes 75 68: jne 0x58755022
        __asm _emit 0x75
        __asm _emit 0x68
        cmp dword ptr [esp + 840h], 0
        ; Exact mapped bytes 75 3D: jne 0x58755001
        __asm _emit 0x75
        __asm _emit 0x3d
        push ebp
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 800h
        lea ecx, [esp + 10h]
        ; Exact mapped bytes 7C 19: jl 0x58754fef
        __asm _emit 0x7c
        __asm _emit 0x19
        push 800h
        push ebp
        ; Exact mapped bytes E8 9F 00 05 00: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 8
        push eax
        ; Exact mapped bytes EB 39: jmp 0x58755020
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB 95: jmp 0x58754f80
        __asm _emit 0xeb
        __asm _emit 0x95
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB B5: jmp 0x58754fa4
        __asm _emit 0xeb
        __asm _emit 0xb5
        push ebp
        ; Exact mapped bytes E8 8B 00 05 00: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 21: jmp 0x58755022
        __asm _emit 0xeb
        __asm _emit 0x21
        test ebx, ebx
        ; Exact mapped bytes 75 41: jne 0x58755046
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes E8 68 7C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58755016
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 5C 7C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        push 800h
        push ebp
        lea ecx, [edi + 8]
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test ebx, ebx
        ; Exact mapped bytes 75 24: jne 0x5875504a
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes E8 47 7C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58755037
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 3B 7C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        add edi, 808h
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x58754f60
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB C2: jmp 0x5875500c
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB DF: jmp 0x5875502d
        __asm _emit 0xeb
        __asm _emit 0xdf
    }
}
