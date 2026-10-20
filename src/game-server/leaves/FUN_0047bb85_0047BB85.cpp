// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BB85 .. +0x346 bytes.
extern "C" __declspec(naked) void FUN_0047bb85_0047BB85() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 05 03 00 00: je 0x47beb0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD 23 00 00: call 0x47df60
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 0F 85 F4 02 00 00: jne 0x47beb0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 23 00 00: call 0x47df40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x47bc01
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 AB FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 24h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 02 AB FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x47bbee
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 28h], 0
        ; Exact mapped bytes EB 11: jmp 0x47bbff
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 AA FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A1 23 00 00: call 0x47dfa0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4C: jmp 0x47bc4d
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 AA FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E 23 00 00: call 0x47df40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 67 23 00 00: call 0x47df80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF AA FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x47bc35
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 23 00 00: call 0x47df40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 28h], eax
        ; Exact mapped bytes EB 18: jmp 0x47bc4d
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 23 00 00: call 0x47df40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A AA FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 23 00 00: call 0x47dfa0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 23 00 00: call 0x47dfa0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 23 00 00: call 0x47df80
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 23 00 00: call 0x47dfc0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 30h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 30h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 22 00 00: call 0x47df20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [ecx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8A C0 00 00 00: mov cx, word ptr [edx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 38h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 72 11: jb 0x47bcb9
        __asm _emit 0x72
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 38h]
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 38h], edx
        ; Exact mapped bytes EB 0A: jmp 0x47bcc3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 8
        ; Exact mapped bytes 74 2A: je 0x47bd02
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0f8h], 0
        ; Exact mapped bytes 74 1F: je 0x47bd0c
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 4
        ; Exact mapped bytes 75 0A: jne 0x47bd0c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 AD 01 00 00: jmp 0x47beb9
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 904h
        ; Exact mapped bytes E8 EA 12 00 00: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A9 CA 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x47bd59
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 904h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 14h
        ; Exact mapped bytes E8 2C 0F 00 00: call 0x47cc80
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x47bddd
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 14h
        ; Exact mapped bytes E8 38 0E 00 00: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 08: jmp 0x47bd77
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C9 12 00 00: call 0x47d040
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 14h
        ; Exact mapped bytes E8 6A 0E 00 00: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 81 13 00 00: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x47bddd
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 65 12 00 00: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 24 CA 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x47bddb
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 904h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 14h
        ; Exact mapped bytes E8 A7 0E 00 00: call 0x47cc80
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x47bddd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 92: jmp 0x47bd6f
        __asm _emit 0xeb
        __asm _emit 0x92
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 14h
        ; Exact mapped bytes E8 D8 0F 00 00: call 0x47cdc0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 14h
        ; Exact mapped bytes E8 F9 0D 00 00: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        push 0
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B6 12 00 00: call 0x47d0c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 FE 11 00 00: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 E5 96 0B 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x96
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 AE C9 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 6F 32 FC FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 62: je 0x47beae
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 0F B6 91 70 01 00 00: movzx dx, byte ptr [ecx + 0x170]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 30h]
        mov cl, byte ptr [eax + 2ch]
        mov byte ptr [ebp - 10h], cl
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 66 8B 88 84 01 00 00: mov cx, word ptr [eax + 0x184]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A0 89 F8 FF: call 0x404820
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 0fh], al
        push 6
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 170h]
        or edx, 400000h
        push edx
        push 80020116h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 48 DC 00 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x47beb4
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x47beb9
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 1B C9 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
