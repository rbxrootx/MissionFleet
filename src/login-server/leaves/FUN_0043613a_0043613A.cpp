// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043613A .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_0043613a_0043613A() {
    __asm {
        mov eax, 43a988h
        ; Exact mapped bytes E8 C4 94 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43e0a8h
        mov ecx, dword ptr [esi + 80h]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 07: je 0x436168
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0a8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x436179
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes E8 35 FB FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [eax + 14h], bl
        ; Exact mapped bytes 75 2E: jne 0x4361b1
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 1C F6 44 00: mov ecx, dword ptr [0x44f61c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x43619a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 1D 1C F6 44 00: mov dword ptr [0x44f61c], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 F6 44 00: mov ecx, dword ptr [0x44f618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x4361b1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 1D 18 F6 44 00: mov dword ptr [0x44f618], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x4361c1
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 B4 E8 FF FF: call 0x434a75
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 98h]
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x4361d1
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 A4 E8 FF FF: call 0x434a75
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 86 B0 00 00 00: mov ax, word ptr [esi + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 00 C2 43 00: mov edi, dword ptr [0x43c200]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 03: je 0x4361e7
        __asm _emit 0x74
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 8B 86 B2 00 00 00: mov ax, word ptr [esi + 0xb2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 03: je 0x4361f6
        __asm _emit 0x74
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0ach]
        pop edi
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x436208
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes E8 A6 FA FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 10h]
        cmp ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes 75 03: jne 0x436218
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [eax + 10h], ebx
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 75 03: jne 0x436220
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [eax + 4], ebx
        push dword ptr [esi + 78h]
        ; Exact mapped bytes E8 F6 92 FE FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 EE 92 FE FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [esi + 88h]
        ; Exact mapped bytes E8 E3 92 FE FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [esi + 8ch]
        ; Exact mapped bytes E8 D8 92 FE FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [esi + 90h]
        ; Exact mapped bytes E8 CD 92 FE FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        or dword ptr [ebp - 4], 0ffffffffh
        add esp, 14h
        mov ecx, esi
        mov dword ptr [esi + 28h], ebx
        ; Exact mapped bytes E8 F5 2E 00 00: call 0x439157
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
