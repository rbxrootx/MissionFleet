// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F80E .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_5883f80e_5883F80E() {
    __asm {
        push 8
        mov eax, 58892c70h
        ; Exact mapped bytes E8 1E 2D FF FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x5883f82c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 131h
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x5883f984
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 93 96 58 00: cmp dword ptr [0x589693b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, 5896939ch
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 07: je 0x5883f848
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 3D B8 42 89 58: mov edi, dword ptr [0x588942b8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        sub eax, dword ptr [esi + 88h]
        cmp eax, 64h
        ; Exact mapped bytes 73 08: jae 0x5883f867
        __asm _emit 0x73
        __asm _emit 0x08
        push 64h
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [ebp + 0ch]
        xor edi, edi
        mov dword ptr [esi + 88h], eax
        test ebx, ebx
        mov eax, 1bbh
        cmove ebx, eax
        cmp dword ptr [ebp + 10h], edi
        push 5
        pop eax
        cmovne eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [esi + 4b0h], eax
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5883f8a6
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [esi + 78h], edi
        ; Exact mapped bytes 74 09: je 0x5883f8a6
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [esi + 74h], edi
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x5883f96e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 5D FC FF FF: call 0x5883f50c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 88h]
        ; Exact mapped bytes E8 D3 13 01 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 AC 13 01 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes 66 89 5E 6C: mov word ptr [esi + 0x6c], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x6c
        ; Exact mapped bytes E8 E5 56 00 00: call 0x58844fb6
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x5883f96e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push 588f00bfh
        ; Exact mapped bytes FF 56 4C: call dword ptr [esi + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x4c
        mov ecx, eax
        mov dword ptr [esi + 74h], ecx
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x5883f8f9
        __asm _emit 0x75
        __asm _emit 0x07
        mov edi, 0c8h
        ; Exact mapped bytes EB 75: jmp 0x5883f96e
        __asm _emit 0xeb
        __asm _emit 0x75
        imul eax, dword ptr [ebp + 10h], 3e8h
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [esi + 68h]
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5883f94d
        __asm _emit 0x74
        __asm _emit 0x43
        push 4
        pop ebx
        push ebx
        lea edx, [ebp + 10h]
        push edx
        push 2
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push ebx
        lea eax, [ebp + 10h]
        push eax
        push 6
        push dword ptr [esi + 74h]
        ; Exact mapped bytes FF 56 68: call dword ptr [esi + 0x68]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x68
        push ebx
        lea eax, [ebp + 10h]
        push eax
        push 5
        push dword ptr [esi + 74h]
        ; Exact mapped bytes FF 56 68: call dword ptr [esi + 0x68]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x68
        push ebx
        lea eax, [ebp + 10h]
        push eax
        push 7
        push dword ptr [esi + 74h]
        ; Exact mapped bytes FF 56 68: call dword ptr [esi + 0x68]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x68
        push ebx
        lea eax, [ebp + 10h]
        push eax
        push 8
        push dword ptr [esi + 74h]
        ; Exact mapped bytes FF 56 68: call dword ptr [esi + 0x68]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x68
        xor ebx, ebx
        movzx eax, word ptr [esi + 6ch]
        push ebx
        push ebx
        push 3
        push ebx
        push ebx
        push eax
        push dword ptr [ebp + 8]
        push dword ptr [esi + 74h]
        ; Exact mapped bytes FF 56 50: call dword ptr [esi + 0x50]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x50
        test eax, eax
        mov dword ptr [esi + 78h], eax
        mov ecx, 0c9h
        cmove edi, ecx
        ; Exact mapped bytes 83 3D B4 93 96 58 00: cmp dword ptr [0x589693b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5883f982
        __asm _emit 0x74
        __asm _emit 0x0b
        push 5896939ch
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, edi
        ; Exact mapped bytes E8 8C 2B FF FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
