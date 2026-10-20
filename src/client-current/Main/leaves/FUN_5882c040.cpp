// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C040 .. +0x2CE bytes.
extern "C" __declspec(naked) void FUN_5882c040() {
    __asm {
        sub esp, 0ch
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 B0 02 00 00: je 0x5882c303
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x5882c085
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5882c07b
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0E: je 0x5882c085
        __asm _emit 0x74
        __asm _emit 0x0e
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5882c065
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        sub eax, 200h
        push ebx
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x5882c1a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0ah
        ; Exact mapped bytes 0F 85 65 02 00 00: jne 0x5882c302
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D C8 84 A2 58: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [esi + 190h]
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 3F FE FF FF: call 0x5882bef0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x5882c0f3
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 66 83 7F 0A 00: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 2
        ; Exact mapped bytes 7E 17: jle 0x5882c0dc
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 0e8h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [esi + 1a0h]
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 EF FD FF FF: call 0x5882bef0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5882c148
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 66 83 7F 0A 00: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 2
        ; Exact mapped bytes 7E 1C: jle 0x5882c12c
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 0f0h]
        mov edx, dword ptr [edx + 18h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [esi + 1b0h]
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 9A FD FF FF: call 0x5882bef0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 01 00 00: je 0x5882c302
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7F 0A 00: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 2
        ; Exact mapped bytes 7E 1C: jle 0x5882c185
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 0f8h]
        mov edx, dword ptr [edx + 18h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x5882c302
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DC 9E F5 FF: call 0x58786090
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 170h]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes E8 2D 9F F5 FF: call 0x587860f0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [esp + 14h], eax
        lea eax, [esi + 124h]
        mov dword ptr [esp + 1ch], 0
        xor ebx, ebx
        mov dword ptr [esp + 0ch], eax
        push ebp
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        ; Exact mapped bytes E8 85 BF 0D 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx]
        add edx, 4
        mov ebp, eax
        push edx
        mov ecx, edi
        add ebp, ebx
        ; Exact mapped bytes E8 3A 53 F0 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5882c21e
        __asm _emit 0x74
        __asm _emit 0x14
        cmp ebp, dword ptr [esp + 14h]
        ; Exact mapped bytes 73 0E: jae 0x5882c21e
        __asm _emit 0x73
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 4F 24 01: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x01
        mov byte ptr [esi + 189h], 1
        ; Exact mapped bytes EB 09: jmp 0x5882c227
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        add dword ptr [esp + 10h], 4
        inc ebx
        cmp ebx, 5
        ; Exact mapped bytes 7C AE: jl 0x5882c1e0
        __asm _emit 0x7c
        __asm _emit 0xae
        xor edi, edi
        lea ecx, [esi + 138h]
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 10h], ecx
        mov al, byte ptr [esi + 188h]
        cmp al, 1
        ; Exact mapped bytes 75 15: jne 0x5882c261
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 19 BF 0D 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebp, eax
        add ebp, edi
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes EB 19: jmp 0x5882c27a
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp al, 2
        ; Exact mapped bytes 75 11: jne 0x5882c276
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 00 BF 0D 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        add eax, edi
        mov dword ptr [esp + 20h], eax
        mov ebp, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [edi + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 4C: jl 0x5882c2e1
        __asm _emit 0x7c
        __asm _emit 0x4c
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 43: jge 0x5882c2e1
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 34: jl 0x5882c2e1
        __asm _emit 0x7c
        __asm _emit 0x34
        mov edi, dword ptr [eax + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 2B: jge 0x5882c2e1
        __asm _emit 0x7d
        __asm _emit 0x2b
        cmp ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes 73 25: jae 0x5882c2e1
        __asm _emit 0x73
        __asm _emit 0x25
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov al, byte ptr [esi + 188h]
        cmp al, 1
        ; Exact mapped bytes 75 09: jne 0x5882c2d4
        __asm _emit 0x75
        __asm _emit 0x09
        mov byte ptr [esi + 189h], 2
        ; Exact mapped bytes EB 16: jmp 0x5882c2ea
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp al, 2
        ; Exact mapped bytes 75 12: jne 0x5882c2ea
        __asm _emit 0x75
        __asm _emit 0x12
        mov byte ptr [esi + 189h], 3
        ; Exact mapped bytes EB 09: jmp 0x5882c2ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esp + 14h]
        add dword ptr [esp + 10h], 4
        inc edi
        cmp edi, 3
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 8C 41 FF FF FF: jl 0x5882c242
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop ebx
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
