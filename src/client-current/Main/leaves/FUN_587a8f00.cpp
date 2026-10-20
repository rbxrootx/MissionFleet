// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A8F00 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_587a8f00() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 40h], 0
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x587a9068
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push edi
        push 10h
        ; Exact mapped bytes E8 36 3D 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3d
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov dl, byte ptr [esp + 28h]
        mov edi, eax
        xor eax, eax
        mov dword ptr [edi], eax
        mov dword ptr [edi + 8], eax
        mov al, byte ptr [esp + 20h]
        mov byte ptr [edi], al
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [edi + 4], ecx
        mov byte ptr [edi + 8], dl
        lea ebp, [esi + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ebx, dword ptr [ebp + 0ch]
        add esp, 4
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 1ch], ebp
        cmp ebx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 76 05: jbe 0x587a8f57
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 1B 3D 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3d
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esi, dword ptr [ebp]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esp + 1ch]
        cmp dword ptr [ecx + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x587a8f71
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 01 3D 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3d
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [edx]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x587a8f7f
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x587a8f84
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 EE 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        cmp ebx, ebp
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x587a9046
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x587a902f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587a8fa5
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 CD 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov cl, byte ptr [eax]
        cmp cl, byte ptr [edi]
        ; Exact mapped bytes 75 61: jne 0x587a900e
        __asm _emit 0x75
        __asm _emit 0x61
        test esi, esi
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x587a9036
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B8 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587a8fc6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 AC 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [edi + 4]
        ; Exact mapped bytes 75 3E: jne 0x587a900e
        __asm _emit 0x75
        __asm _emit 0x3e
        test esi, esi
        ; Exact mapped bytes 75 66: jne 0x587a903a
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes E8 99 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587a8fe5
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 8D 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov dl, byte ptr [ecx + 8]
        cmp dl, byte ptr [edi + 8]
        ; Exact mapped bytes 75 1F: jne 0x587a900e
        __asm _emit 0x75
        __asm _emit 0x1f
        test esi, esi
        ; Exact mapped bytes 75 4B: jne 0x587a903e
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes E8 7A 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587a9004
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 6E 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [eax + 0ch]
        cmp ecx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 74 4E: je 0x587a905c
        __asm _emit 0x74
        __asm _emit 0x4e
        test esi, esi
        ; Exact mapped bytes 75 30: jne 0x587a9042
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes E8 5B 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587a9023
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 4F 3C 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x3c
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        add ebx, 4
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x587a8f60
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x587a8f9b
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 82: jmp 0x587a8fbc
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 9D: jmp 0x587a8fdb
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB B8: jmp 0x587a8ffa
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB D3: jmp 0x587a9019
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [esp + 1ch]
        lea edx, [esp + 10h]
        push edx
        ; Exact mapped bytes E8 7C C4 FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebp
        pop ebx
        pop esi
        pop ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 E0 3B 1D 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop ebp
    }
}
