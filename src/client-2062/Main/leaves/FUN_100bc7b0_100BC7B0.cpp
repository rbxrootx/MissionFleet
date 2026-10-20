// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BC7B0 .. +0x3F6 bytes.
extern "C" __declspec(naked) void FUN_100bc7b0_100BC7B0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 204h
        shr eax, 10h
        push ebx
        mov ebx, dword ptr [esp + 210h]
        push ebp
        mov ebp, eax
        and eax, 0ffh
        push esi
        and ebp, 0ff00h
        push edi
        dec eax
        mov esi, ecx
        lea edi, [ebx + 30h]
        ; Exact mapped bytes 0F 84 FB 01 00 00: je 0x100bc9dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x100bc8d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 A3 03 00 00: jne 0x100bcb92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FD 00 08: cmp bp, 0x800
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x08
        push edi
        ; Exact mapped bytes 75 6F: jne 0x100bc866
        __asm _emit 0x75
        __asm _emit 0x6f
        lea eax, [esp + 18h]
        push 101ab784h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 14h]
        push 0a0bec8h
        push -1
        push ecx
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 8F 74 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 0E 76 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, -0ah
        cmp eax, edi
        ; Exact mapped bytes 75 0B: jne 0x100bc844
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 4C 7F 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edx, dword ptr [ecx + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 F9 7E 04 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [esp + 14h]
        push 0a0bec8h
        push eax
        ; Exact mapped bytes E9 8E 02 00 00: jmp 0x100bcaf4
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea ecx, [esp + 1ch]
        push 101ac008h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esi + 0d4h]
        mov ecx, dword ptr [esi + 198h]
        add esp, 10h
        lea edx, [esp + 14h]
        push edi
        push -1
        push edx
        ; Exact mapped bytes E8 1D 74 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov ebx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 9C 75 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        add ebx, -0ah
        cmp eax, ebx
        ; Exact mapped bytes 75 0B: jne 0x100bc8b6
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 DA 7E 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov eax, dword ptr [ecx + 88h]
        dec eax
        push eax
        ; Exact mapped bytes E8 87 7E 04 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        push edi
        push ecx
        ; Exact mapped bytes E9 A3 02 00 00: jmp 0x100bcb77
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FD 00 08: cmp bp, 0x800
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 75 4C: jne 0x100bc927
        __asm _emit 0x75
        __asm _emit 0x4c
        push edi
        lea edx, [esp + 18h]
        push 101ab784h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 198h]
        add esp, 0ch
        lea eax, [esp + 14h]
        push 0a0bec8h
        push -1
        push eax
        ; Exact mapped bytes E8 AA 73 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 29 75 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, -0ah
        cmp eax, edi
        ; Exact mapped bytes 0F 85 22 FF FF FF: jne 0x100bc844
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x100bc839
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 75 47: jne 0x100bc985
        __asm _emit 0x75
        __asm _emit 0x47
        lea ebp, [eax + 220h]
        push ebp
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7E 36: jle 0x100bc985
        __asm _emit 0x7e
        __asm _emit 0x36
        test ebp, ebp
        ; Exact mapped bytes 74 32: je 0x100bc985
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ebp, [eax + 220h]
        push ebp
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor ecx, ecx
        push ebx
        test eax, eax
        setle cl
        dec ecx
        and ecx, ebp
        mov eax, ecx
        push eax
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x100bc985
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 1
        push edi
        push ebx
        lea edx, [esp + 1ch]
        push 101ac000h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 20h]
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x100bc9b5
        __asm _emit 0x74
        __asm _emit 0x13
        mov edi, dword ptr [esi + 0f0h]
        lea eax, [esp + 14h]
        push edi
        push -1
        push eax
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x100bca52
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        lea edx, [esp + 14h]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 48 07 00 00: call 0x100bd110
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 81 0A 00 00: call 0x100bd450
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 204h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [esi + 78h]
        push eax
        push ebx
        ; Exact mapped bytes FF 15 84 50 17 10: call dword ptr [0x10175084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x100bca7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FD 00 08: cmp bp, 0x800
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 75 16: jne 0x100bca0c
        __asm _emit 0x75
        __asm _emit 0x16
        push edi
        lea ecx, [esp + 18h]
        push 101ab784h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 38: jmp 0x100bca44
        __asm _emit 0xeb
        __asm _emit 0x38
        add ebx, 18h
        push ebx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x100bca31
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        push ebx
        lea edx, [esp + 1ch]
        push 101ab770h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes EB 13: jmp 0x100bca44
        __asm _emit 0xeb
        __asm _emit 0x13
        lea eax, [esp + 14h]
        push 101ab758h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        mov edi, dword ptr [esi + 0e4h]
        lea ecx, [esp + 14h]
        push edi
        push -1
        push ecx
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 53 72 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov ebx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 D2 73 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        add ebx, -0ah
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x100bcb5e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x100bcb53
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FD 00 08: cmp bp, 0x800
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x08
        push edi
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x100bcb0e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push 101ab784h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 198h]
        add esp, 0ch
        lea edx, [esp + 14h]
        push 0a0bec8h
        push -1
        push edx
        ; Exact mapped bytes E8 FC 71 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 7B 73 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, -0ah
        cmp eax, edi
        ; Exact mapped bytes 75 0B: jne 0x100bcad7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 B9 7C 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov eax, dword ptr [ecx + 88h]
        dec eax
        push eax
        ; Exact mapped bytes E8 66 7C 04 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        push 0a0bec8h
        push ecx
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 91 C7 04 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 194h]
        mov dword ptr [eax + 6ch], 0a0bec8h
        ; Exact mapped bytes EB 7D: jmp 0x100bcb8b
        __asm _emit 0xeb
        __asm _emit 0x7d
        push ebx
        lea edx, [esp + 1ch]
        push 101ab738h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esi + 0e4h]
        mov ecx, dword ptr [esi + 198h]
        add esp, 10h
        lea eax, [esp + 14h]
        push edi
        push -1
        push eax
        ; Exact mapped bytes E8 75 71 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov ebx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 F4 72 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        add ebx, -0ah
        cmp eax, ebx
        ; Exact mapped bytes 75 0B: jne 0x100bcb5e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 32 7C 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edx, dword ptr [ecx + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 DF 7B 04 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [esp + 14h]
        push edi
        push eax
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 0E C7 04 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 194h]
        mov dword ptr [eax + 6ch], edi
        mov dword ptr [eax + 70h], 0
        mov ecx, esi
        ; Exact mapped bytes E8 B7 08 00 00: call 0x100bd450
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 204h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
