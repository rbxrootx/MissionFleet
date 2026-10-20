// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042ECD1 .. +0x290B bytes.
extern "C" __declspec(naked) void FUN_0042ecd1_0042ECD1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1f4h
        push esi
        push edi
        lea edi, [ebp - 1f4h]
        mov ecx, 7dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 06: jne 0x42ecfa
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 43: je 0x42ed3d
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 16ch], 31h
        mov dword ptr [ebp - 170h], 0
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 174h], eax
        lea ecx, [ebp - 16ch]
        push ecx
        lea edx, [ebp - 170h]
        push edx
        lea eax, [ebp - 174h]
        push eax
        ; Exact mapped bytes E8 8F 4A FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x42ed3d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8A 28 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1d4h], ecx
        mov edx, dword ptr [ebp - 1d4h]
        sub edx, 1
        mov dword ptr [ebp - 1d4h], edx
        cmp dword ptr [ebp - 1d4h], 0ch
        ; Exact mapped bytes 0F 87 65 28 00 00: ja 0x4315c7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x65
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes FF 24 85 DC 15 43 00: jmp dword ptr [eax*4 + 0x4315dc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x15
        __asm _emit 0x43
        __asm _emit 0x00
        push 917h
        push 5b539ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 80h]
        imul eax, eax, 0ch
        push eax
        ; Exact mapped bytes E8 A2 E2 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 178h], eax
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 80h]
        imul ecx, ecx, 0ch
        push ecx
        push 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 AF A5 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x42ef45
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x42ede7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F 83 41 01 00 00: jae 0x42ef40
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        cmp dword ptr [ecx + eax + 10h], 0
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x42ef3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 368h
        mov edx, dword ptr [eax + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A 48 03 00 00: mov ax, word ptr [edx + ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e000h
        sar eax, 0dh
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 12ch]
        cmp dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x42ef3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 10 48 03 00 00: mov cx, word ptr [eax + edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 86 27 00 00: call 0x431610
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x42eebe
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 01 48 03 00 00: mov dx, word ptr [ecx + eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 74 0C: je 0x42eebe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 75 7D: jne 0x42ef3b
        __asm _emit 0x75
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + edx + 4ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        push 0ch
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1d8h], eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes E8 E8 A0 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 9E FE FF FF: jmp 0x42edde
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AD 04 00 00: jmp 0x42f3f2
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 0F 85 A3 04 00 00: jne 0x42f3f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D AB FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 0F 84 66 04 00 00: je 0x42f3f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x42efa7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F 83 33 04 00 00: jae 0x42f3f2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 38h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 01 48 03 00 00: mov dx, word ptr [ecx + eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffe0h
        mov eax, dword ptr [ebp - 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 48 03 00 00: mov cx, word ptr [eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and ecx, 0ffe0h
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 EF 03 00 00: jne 0x42f3ed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 38h]
        imul ecx, ecx, 368h
        mov edx, dword ptr [eax + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A 48 03 00 00: mov ax, word ptr [edx + ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffffh
        cmp eax, edx
        ; Exact mapped bytes 0F 84 B1 03 00 00: je 0x42f3ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 38h]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 10 48 03 00 00: mov cx, word ptr [eax + edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and ecx, 1fh
        mov edx, dword ptr [ebp - 34h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 48 03 00 00: mov ax, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1fh
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 78 03 00 00: je 0x42f3ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x42f087
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 64h
        ; Exact mapped bytes 0F 83 5C 03 00 00: jae 0x42f3ed
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov eax, dword ptr [ebp - 38h]
        imul eax, eax, 368h
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 44 01 0C: mov ax, word ptr [ecx + eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 25 FF 00: and ax, 0xff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x00
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 0F 82 06 03 00 00: jb 0x42f3e8
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 38h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 01 48 03 00 00: mov dx, word ptr [ecx + eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffe0h
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffe0h
        cmp eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x42f1c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 38h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 38h]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + edx + 4ch]
        sub ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 B8 AD 07 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        push 0ch
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1dch], eax
        mov ecx, dword ptr [ebp - 1dch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes E8 61 9E 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 26 02 00 00: jmp 0x42f3ed
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0C: je 0x42f1d9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes E9 14 02 00 00: jmp 0x42f3ed
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x42f1eb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 8
        ; Exact mapped bytes 0F 83 CB 00 00 00: jae 0x42f2c0
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 44h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 51 9C 00 00 00: mov ax, word ptr [ecx + edx*2 + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffe0h
        cmp eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x42f2bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 38h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 38h]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + edx + 4ch]
        sub ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 C8 AC 07 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        push 0ch
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1e0h], eax
        mov ecx, dword ptr [ebp - 1e0h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes E8 71 9D 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 05: jmp 0x42f2c0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 22 FF FF FF: jmp 0x42f1e2
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0C: je 0x42f2d2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x42f3ed
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x42f2e4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 20h
        ; Exact mapped bytes 0F 83 EB 00 00 00: jae 0x42f3d9
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [edx + 168h]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 2f0h]
        and edx, 0ffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov eax, dword ptr [ebp - 38h]
        imul eax, eax, 368h
        mov ecx, dword ptr [ecx + 4]
        xor esi, esi
        ; Exact mapped bytes 66 8B B4 01 48 03 00 00: mov si, word ptr [ecx + eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and esi, 1fe0h
        sar esi, 5
        cmp edx, esi
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x42f3d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 38h]
        imul ecx, ecx, 368h
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 8B 04 0A: mov ax, word ptr [edx + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 38h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ecx + eax + 4ch]
        sub edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 AF AB 07 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xab
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 8], ecx
        push 0ch
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, eax
        mov dword ptr [ebp - 1e4h], ecx
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E8 58 9C 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 05: jmp 0x42f3d9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 02 FF FF FF: jmp 0x42f2db
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 09: je 0x42f3e8
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 05: jmp 0x42f3ed
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 91 FC FF FF: jmp 0x42f07e
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AC FB FF FF: jmp 0x42ef9e
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 1
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        shl edx, 10h
        or edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov eax, dword ptr [ebp - 20h]
        imul eax, eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 07 7E 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1F: je 0x42f450
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 17ch]
        push ecx
        ; Exact mapped bytes E8 C3 DF 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdf
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes E9 72 21 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push 9a8h
        push 5b539ch
        push 2000h
        ; Exact mapped bytes E8 CA DB 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xdb
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 180h], eax
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 74h], edx
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E A6 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 0F 84 44 04 00 00: je 0x42f91f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes EB 09: jmp 0x42f4ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 1
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 7ch]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 0F 8D 1A 04 00 00: jge 0x42f91f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 7ch]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 8B 04 0A: mov ax, word ptr [edx + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x0a
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        and eax, 0ffffh
        cmp eax, 1f4h
        ; Exact mapped bytes 75 02: jne 0x42f534
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB B0: jmp 0x42f4e4
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 68h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 4A C6 00 00 00: mov ax, word ptr [edx + ecx*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 7ch]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [edx + 8]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 0A 1E: mov si, word ptr [edx + ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x1e
        cmp eax, esi
        ; Exact mapped bytes 7F 10: jg 0x42f574
        __asm _emit 0x7f
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 0F 85 A6 03 00 00: jne 0x42f91a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], 0
        ; Exact mapped bytes EB 09: jmp 0x42f586
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 80h]
        add ecx, 1
        mov dword ptr [ebp - 80h], ecx
        cmp dword ptr [ebp - 80h], 8
        ; Exact mapped bytes 0F 8D 8A 03 00 00: jge 0x42f91a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 7ch]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 8]
        add edx, ecx
        mov eax, dword ptr [ebp - 80h]
        cmp dword ptr [edx + eax*4 + 28h], 0
        ; Exact mapped bytes 74 21: je 0x42f5d2
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 7ch]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 8]
        add ecx, eax
        mov edx, dword ptr [ebp - 80h]
        cmp dword ptr [ecx + edx*4 + 48h], -1
        ; Exact mapped bytes 75 05: jne 0x42f5d7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 43 03 00 00: jmp 0x42f91a
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], 0
        ; Exact mapped bytes EB 0F: jmp 0x42f5f2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 84h]
        add eax, 1
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 64h
        ; Exact mapped bytes 0F 83 0E 03 00 00: jae 0x42f90d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 84h]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 0
        ; Exact mapped bytes 0F 85 06 02 00 00: jne 0x42f828
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 7ch]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + 168h]
        mov esi, dword ptr [ebp - 84h]
        imul esi, esi, 37ch
        mov eax, dword ptr [ecx + eax + 68h]
        and eax, dword ptr [edx + esi + 2b8h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 7ch]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [edx + 8]
        cmp eax, dword ptr [edx + ecx + 68h]
        ; Exact mapped bytes 0F 85 AD 01 00 00: jne 0x42f823
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 7ch]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        add eax, edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 84h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 80h]
        cmp dword ptr [eax + ecx*4 + 28h], edx
        ; Exact mapped bytes 0F 87 64 01 00 00: ja 0x42f823
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 7ch]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 84h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 234h]
        and edx, 0fh
        cmp eax, edx
        ; Exact mapped bytes 75 30: jne 0x42f72e
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 7ch]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        add eax, edx
        mov ecx, dword ptr [ebp - 80h]
        cmp dword ptr [eax + ecx*4 + 28h], 0ch
        ; Exact mapped bytes 77 0F: ja 0x42f72e
        __asm _emit 0x77
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x42f7a0
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 7ch]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 01 06: mov dx, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp - 84h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ecx + eax + 234h]
        and ecx, 0fh
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x42f823
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 7ch]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 12ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x42f823
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 7ch]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 66 8B 0C 10: mov cx, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 7ch]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 3ch]
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 74h]
        add eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4ch]
        add edx, 0ch
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 60h]
        add eax, 1
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 78h], 1
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x42f90d
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x42f908
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 7ch]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        and edx, 0ffffh
        cmp edx, 1
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x42f908
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 7ch]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x42f908
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 7ch]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 7ch]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 3ch]
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 74h]
        add ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4ch]
        add eax, 0ch
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 1
        mov dword ptr [ebp - 60h], ecx
        mov dword ptr [ebp - 78h], 1
        ; Exact mapped bytes EB 05: jmp 0x42f90d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 D6 FC FF FF: jmp 0x42f5e3
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 02: je 0x42f915
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x42f91a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 63 FC FF FF: jmp 0x42f57d
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 FB FF FF: jmp 0x42f4e4
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E A1 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 130h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C A1 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 132h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A A1 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 27: je 0x42f9e2
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 09: je 0x42f9d3
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 09: je 0x42f9e2
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 54h], ecx
        push 10h
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 74h]
        add eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 2C 96 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 10h
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 14h], 5
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 10h
        or eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FC 77 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 184h], ecx
        mov edx, dword ptr [ebp - 184h]
        push edx
        ; Exact mapped bytes E8 BE D9 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 74 1B 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a1ch
        push 5b539ch
        push 2000h
        ; Exact mapped bytes E8 CC D5 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 188h], eax
        mov eax, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 94h], eax
        mov dword ptr [ebp - 88h], 0
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 18h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A A0 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 0F 84 E1 01 00 00: je 0x42fca6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], 0
        ; Exact mapped bytes EB 0F: jmp 0x42fae0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 98h]
        add edx, 1
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 98h]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 0F 8D AB 01 00 00: jge 0x42fca6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 98h]
        imul edx, edx, 0a4h
        mov eax, dword ptr [ecx + 14h]
        ; Exact mapped bytes 66 8B 0C 10: mov cx, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        and ecx, 0ffffh
        cmp ecx, 3ch
        ; Exact mapped bytes 75 02: jne 0x42fb2d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB A4: jmp 0x42fad1
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov edx, dword ptr [ebp - 90h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C4 00 00 00: mov ax, word ptr [edx + 0xc4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 98h]
        imul ecx, ecx, 0a4h
        mov edx, dword ptr [edx + 14h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 0A 1E: mov si, word ptr [edx + ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x1e
        cmp eax, esi
        ; Exact mapped bytes 7C 6E: jl 0x42fbcd
        __asm _emit 0x7c
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 90h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 48 03 00 00: mov cx, word ptr [eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sar ecx, 0dh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 98h]
        imul edx, edx, 0a4h
        mov eax, dword ptr [eax + 14h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 06: mov si, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x06
        cmp ecx, esi
        ; Exact mapped bytes 74 49: je 0x42fbdd
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 90h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sar edx, 0dh
        test edx, edx
        ; Exact mapped bytes 74 33: je 0x42fbdd
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 98h]
        imul edx, edx, 0a4h
        mov eax, dword ptr [ecx + 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x42fbdd
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x42fca1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 98h]
        imul edx, edx, 0a4h
        mov eax, dword ptr [ecx + 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x42fca1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 98h]
        imul eax, eax, 0a4h
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 98h]
        imul edx, edx, 0a4h
        mov eax, dword ptr [ecx + 14h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 94h]
        add ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 88h]
        add eax, 0ch
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes E9 2B FE FF FF: jmp 0x42fad1
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 3
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 10h
        or eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4D 75 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 18ch], ecx
        mov edx, dword ptr [ebp - 18ch]
        push edx
        ; Exact mapped bytes E8 0C D7 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 C2 18 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a4ch
        push 5b539ch
        push 2000h
        ; Exact mapped bytes E8 1A D3 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 190h], eax
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 0a0h], eax
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 18h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 9D FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 0F 84 E4 01 00 00: je 0x42ff5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes EB 0F: jmp 0x42fd92
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ach]
        add edx, 1
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0ach]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 0F 8D AE 01 00 00: jge 0x42ff5b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0ach]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 8B 0C 10: mov cx, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        and ecx, 0ffffh
        cmp ecx, 0bah
        ; Exact mapped bytes 75 02: jne 0x42fde2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB A1: jmp 0x42fd83
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov edx, dword ptr [ebp - 0a8h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C2 00 00 00: mov ax, word ptr [edx + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 0ach]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [edx + 10h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 0A 1E: mov si, word ptr [edx + ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x1e
        cmp eax, esi
        ; Exact mapped bytes 7C 6E: jl 0x42fe82
        __asm _emit 0x7c
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 0a8h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 48 03 00 00: mov cx, word ptr [eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sar ecx, 0dh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 0ach]
        imul edx, edx, 0ach
        mov eax, dword ptr [eax + 10h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 06: mov si, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x06
        cmp ecx, esi
        ; Exact mapped bytes 74 49: je 0x42fe92
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 0a8h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sar edx, 0dh
        test edx, edx
        ; Exact mapped bytes 74 33: je 0x42fe92
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0ach]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x42fe92
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x42ff56
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0ach]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x42ff56
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 0ach]
        imul eax, eax, 0ach
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0ach]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 10h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0a0h]
        add ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 9ch]
        add eax, 0ch
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 0a4h]
        add ecx, 1
        mov dword ptr [ebp - 0a4h], ecx
        ; Exact mapped bytes E9 28 FE FF FF: jmp 0x42fd83
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 2
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 10h
        or eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 98 72 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 194h], ecx
        mov edx, dword ptr [ebp - 194h]
        push edx
        ; Exact mapped bytes E8 57 D4 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 0D 16 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a7ah
        push 5b539ch
        push 2000h
        ; Exact mapped bytes E8 65 D0 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 198h], eax
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 0d0h], eax
        mov dword ptr [ebp - 0b0h], 0
        mov dword ptr [ebp - 0c8h], 0
        mov dword ptr [ebp - 0c4h], 0
        mov dword ptr [ebp - 0c0h], 0
        mov dword ptr [ebp - 0bch], 0
        mov dword ptr [ebp - 0b8h], 0
        mov dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes EB 0F: jmp 0x43003a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 1
        mov dword ptr [ebp - 0cch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 0cch]
        cmp ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes 0F 8D 14 01 00 00: jge 0x430169
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 0cch]
        imul ecx, ecx, 9ch
        mov edx, dword ptr [eax + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 74 27: je 0x4300a0
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 0cch]
        imul eax, eax, 9ch
        mov ecx, dword ptr [edx + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 01 06: mov dx, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x06
        test edx, edx
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x430164
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0cch]
        imul edx, edx, 9ch
        mov eax, dword ptr [ecx + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x430164
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 0cch]
        imul eax, eax, 9ch
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0cch]
        imul edx, edx, 9ch
        mov eax, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0d0h]
        add ecx, dword ptr [ebp - 0b0h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 0b0h]
        add eax, 0ch
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 1
        mov dword ptr [ebp - 0c8h], ecx
        ; Exact mapped bytes E9 C2 FE FF FF: jmp 0x43002b
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16c0ah]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 99 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 99 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 18h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c0eh]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 99 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16c10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 98 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 0F: je 0x430221
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0c4h], ecx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 0F: je 0x430239
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 0F: je 0x430251
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 0F: je 0x430269
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0d8h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0b8h], ecx
        push 10h
        lea edx, [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        add eax, dword ptr [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 9C 8D 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0b0h]
        add ecx, 10h
        mov dword ptr [ebp - 0b0h], ecx
        mov dword ptr [ebp - 14h], 4
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 10h
        or eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5D 6F 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 19ch], ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        ; Exact mapped bytes E8 1C D1 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 D2 12 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        cmp dword ptr [ecx + edx + 16bdch], 1
        ; Exact mapped bytes 74 70: je 0x430381
        __asm _emit 0x74
        __asm _emit 0x70
        mov dword ptr [ebp - 1a0h], 32h
        mov dword ptr [ebp - 1a4h], 0
        lea eax, [ebp - 1a0h]
        push eax
        lea ecx, [ebp - 1a4h]
        push ecx
        lea edx, [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 A4 35 FD FF: call 0x4038e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x430381
        __asm _emit 0x74
        __asm _emit 0x3e
        mov dword ptr [ebp - 1a8h], 20h
        mov dword ptr [ebp - 1ach], 0
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1b0h], eax
        lea ecx, [ebp - 1a8h]
        push ecx
        lea edx, [ebp - 1ach]
        push edx
        lea eax, [ebp - 1b0h]
        push eax
        ; Exact mapped bytes E8 46 34 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x430386
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 41 12 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0f0h], 0
        mov dword ptr [ebp - 0e0h], 0
        mov dword ptr [ebp - 0f4h], 0
        mov dword ptr [ebp - 0ech], 0
        push 0ab9h
        push 5b539ch
        push 2000h
        ; Exact mapped bytes E8 71 CC 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 0e8h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 0dh
        ; Exact mapped bytes 75 37: jne 0x430444
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 96 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 35: jmp 0x430479
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 96 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 75 41: jne 0x4304c3
        __asm _emit 0x75
        __asm _emit 0x41
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 75 38: jne 0x4304c3
        __asm _emit 0x75
        __asm _emit 0x38
        mov dword ptr [ebp - 14h], 0bh
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 14h]
        shl edx, 10h
        or edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 74 6D 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 11 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4304de
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0e4h]
        add ecx, 1
        mov dword ptr [ebp - 0e4h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 0e4h]
        cmp ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes 0F 8D 7F 02 00 00: jge 0x430778
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 0e4h]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [eax + 20h]
        ; Exact mapped bytes 66 8B 04 0A: mov ax, word ptr [edx + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x0a
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        and eax, 0ffffh
        cmp eax, 2bch
        ; Exact mapped bytes 75 02: jne 0x43052b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB A4: jmp 0x4304cf
        __asm _emit 0xeb
        __asm _emit 0xa4
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 49: je 0x43057d
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 40: je 0x43057d
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 0e4h]
        imul eax, eax, 0ach
        mov ecx, dword ptr [edx + 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 01 A2 00 00 00: mov dx, word ptr [ecx + eax + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ech]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 9C 00 00 00: mov cx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp edx, ecx
        sete al
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x430587
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 74: je 0x430604
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 0ech]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov eax, dword ptr [ebp - 0e4h]
        imul eax, eax, 0ach
        mov ecx, dword ptr [ecx + 20h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 01 06: mov si, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x06
        cmp edx, esi
        ; Exact mapped bytes 75 45: jne 0x430604
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 0e4h]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [eax + 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 12ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x4306e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 12ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x4306e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 49: je 0x430656
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 40: je 0x430656
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 0e4h]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [eax + 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A A2 00 00 00: mov ax, word ptr [edx + ecx + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0f4h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 A2 00 00 00: mov dx, word ptr [ecx + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, edx
        sete cl
        mov dword ptr [ebp - 1ech], ecx
        ; Exact mapped bytes EB 0A: jmp 0x430660
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x430773
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0f4h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 0e4h]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [edx + 20h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 0A 06: mov si, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x06
        cmp eax, esi
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x430773
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0e4h]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 74 13: je 0x4306e1
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 12ch]
        test edx, edx
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x430773
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0e4h]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 20h]
        ; Exact mapped bytes 66 8B 0C 10: mov cx, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 0e4h]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 44h]
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0e8h]
        add eax, dword ptr [ebp - 0e0h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 0e0h]
        add edx, 0ch
        mov dword ptr [ebp - 0e0h], edx
        mov eax, dword ptr [ebp - 0f0h]
        add eax, 1
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes E9 57 FD FF FF: jmp 0x4304cf
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0bh
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        shl edx, 10h
        or edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7B 6A 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 1b8h], eax
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        ; Exact mapped bytes E8 3A CC 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 F0 0D 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0af8h
        push 5b539ch
        push 2000h
        ; Exact mapped bytes E8 48 C8 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1bch], eax
        mov edx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 114h], edx
        mov dword ptr [ebp - 0f8h], 0
        mov dword ptr [ebp - 110h], 0
        mov dword ptr [ebp - 118h], 0
        mov dword ptr [ebp - 108h], 0
        mov dword ptr [ebp - 104h], 0
        mov dword ptr [ebp - 100h], 0
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 92 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 AE 04 00 00: je 0x430d29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes EB 0F: jmp 0x430896
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 128h]
        add ecx, 1
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 128h]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 0F 8D 23 03 00 00: jge 0x430bd4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 10ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 50 C6 00 00 00: mov cx, word ptr [eax + edx*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 128h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [eax + 18h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 1E: mov si, word ptr [eax + edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x1e
        cmp ecx, esi
        ; Exact mapped bytes 7D 10: jge 0x4308f7
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 908h], 1
        ; Exact mapped bytes 0F 85 D8 02 00 00: jne 0x430bcf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 128h]
        imul ecx, ecx, 0a8h
        mov edx, dword ptr [eax + 18h]
        add edx, ecx
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 91 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 128h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [ecx + 18h]
        cmp dword ptr [eax + edx + 28h], 0
        ; Exact mapped bytes 74 1F: je 0x43095e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 128h]
        imul eax, eax, 0a8h
        mov ecx, dword ptr [edx + 18h]
        cmp dword ptr [ecx + eax + 48h], -1
        ; Exact mapped bytes 75 05: jne 0x430963
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 71 02 00 00: jmp 0x430bd4
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x43097e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 12ch]
        add edx, 1
        mov dword ptr [ebp - 12ch], edx
        cmp dword ptr [ebp - 12ch], 64h
        ; Exact mapped bytes 0F 83 44 02 00 00: jae 0x430bcf
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 12ch]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2e4h], 0
        ; Exact mapped bytes 0F 85 1C 02 00 00: jne 0x430bca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 128h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [ecx + 18h]
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 168h]
        mov esi, dword ptr [ebp - 12ch]
        imul esi, esi, 37ch
        mov edx, dword ptr [eax + edx + 68h]
        and edx, dword ptr [ecx + esi + 2b8h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov eax, dword ptr [ebp - 128h]
        imul eax, eax, 0a8h
        mov ecx, dword ptr [ecx + 18h]
        cmp edx, dword ptr [ecx + eax + 68h]
        ; Exact mapped bytes 0F 85 C2 01 00 00: jne 0x430bca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 128h]
        imul ecx, ecx, 0a8h
        mov edx, dword ptr [eax + 18h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp - 12ch]
        imul esi, esi, 37ch
        mov eax, dword ptr [eax + esi + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp dword ptr [edx + ecx + 28h], eax
        ; Exact mapped bytes 0F 87 7C 01 00 00: ja 0x430bca
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 128h]
        imul eax, eax, 0a8h
        mov ecx, dword ptr [edx + 18h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 01 06: mov dx, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp - 12ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ecx + eax + 234h]
        and ecx, 0fh
        cmp edx, ecx
        ; Exact mapped bytes 75 2E: jne 0x430abe
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 128h]
        imul ecx, ecx, 0a8h
        mov edx, dword ptr [eax + 18h]
        cmp dword ptr [edx + ecx + 28h], 0ch
        ; Exact mapped bytes 77 0F: ja 0x430abe
        __asm _emit 0x77
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 12ch]
        test ecx, ecx
        ; Exact mapped bytes 74 78: je 0x430b36
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 128h]
        imul ecx, ecx, 0a8h
        mov edx, dword ptr [eax + 18h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 12ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 234h]
        and edx, 0fh
        cmp eax, edx
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x430bca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 128h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [ecx + 18h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x430bca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 128h]
        imul eax, eax, 0a8h
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 128h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [ecx + 18h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 40h]
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, dword ptr [ebp - 0f8h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 0f8h]
        add eax, 0ch
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 110h]
        add ecx, 1
        mov dword ptr [ebp - 110h], ecx
        ; Exact mapped bytes EB 05: jmp 0x430bcf
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A0 FD FF FF: jmp 0x43096f
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B3 FC FF FF: jmp 0x430887
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 8E FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 130h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 8E FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 132h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 8E FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 3F: je 0x430cbb
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 0F: je 0x430ca3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 120h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 104h], edx
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 0F: je 0x430cbb
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 100h], ecx
        push 10h
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        add eax, dword ptr [ebp - 0f8h]
        push eax
        ; Exact mapped bytes E8 4A 83 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0f8h]
        add ecx, 10h
        mov dword ptr [ebp - 0f8h], ecx
        mov dword ptr [ebp - 14h], 6
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 10h
        or eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0B 65 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x430d5c
        __asm _emit 0xeb
        __asm _emit 0x33
        mov dword ptr [ebp - 14h], 6
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D6 64 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 1c0h], eax
        mov ecx, dword ptr [ebp - 1c0h]
        push ecx
        ; Exact mapped bytes E8 95 C6 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 4B 08 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 370h
        cmp dword ptr [eax + ecx + 16bdch], 1
        ; Exact mapped bytes 75 05: jne 0x430d9d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2A 08 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 0
        mov dword ptr [ebp - 138h], 0
        mov dword ptr [ebp - 148h], 0
        mov dword ptr [ebp - 144h], 0
        push 0b5eh
        push 5b539ch
        push 2000h
        ; Exact mapped bytes E8 5A C2 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1c4h], eax
        mov edx, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 08 2E 01 00 00: mov dx, word ptr [eax + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 0dh
        ; Exact mapped bytes 75 37: jne 0x430e5b
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 8C FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 35: jmp 0x430e90
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 8C FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 75 41: jne 0x430eda
        __asm _emit 0x75
        __asm _emit 0x41
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 75 38: jne 0x430eda
        __asm _emit 0x75
        __asm _emit 0x38
        mov dword ptr [ebp - 14h], 0bh
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 14h]
        shl eax, 10h
        or eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5D 63 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 ED 06 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], 0
        ; Exact mapped bytes EB 0F: jmp 0x430ef5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 140h]
        add edx, 1
        mov dword ptr [ebp - 140h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 140h]
        cmp edx, dword ptr [ecx + 98h]
        ; Exact mapped bytes 0F 8D 4D 02 00 00: jge 0x43115d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 49: je 0x430f62
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 40: je 0x430f62
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 140h]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 1ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 10 B0 00 00 00: mov cx, word ptr [eax + edx + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 144h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 9C 00 00 00: mov ax, word ptr [edx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp ecx, eax
        sete dl
        mov dword ptr [ebp - 1f0h], edx
        ; Exact mapped bytes EB 0A: jmp 0x430f6c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        cmp dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes 74 74: je 0x430fe9
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 144h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 140h]
        imul edx, edx, 0b4h
        mov eax, dword ptr [eax + 1ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 06: mov si, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x06
        cmp ecx, esi
        ; Exact mapped bytes 75 45: jne 0x430fe9
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 140h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 1ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 01 06: mov dx, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 12ch]
        cmp edx, ecx
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x4310c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x4310c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 49: je 0x43103b
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 40: je 0x43103b
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 140h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 1ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 01 B0 00 00 00: mov dx, word ptr [ecx + eax + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 148h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 A4 00 00 00: mov cx, word ptr [eax + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp edx, ecx
        sete al
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x431045
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        cmp dword ptr [ebp - 1f4h], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x431158
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 148h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov eax, dword ptr [ebp - 140h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [ecx + 1ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 01 06: mov si, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x06
        cmp edx, esi
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x431158
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 140h]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 1ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 12ch]
        cmp eax, edx
        ; Exact mapped bytes 74 13: je 0x4310c6
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 12ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x431158
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 140h]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 66 8B 04 0A: mov ax, word ptr [edx + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 140h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 1ch]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [ebp - 140h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 134h]
        add edx, dword ptr [ebp - 138h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 0ch
        mov dword ptr [ebp - 138h], ecx
        mov edx, dword ptr [ebp - 13ch]
        add edx, 1
        mov dword ptr [ebp - 13ch], edx
        ; Exact mapped bytes E9 89 FD FF FF: jmp 0x430ee6
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0ch
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov edx, dword ptr [ebp - 138h]
        push edx
        mov eax, dword ptr [ebp - 134h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 96 60 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 1c8h], edx
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        ; Exact mapped bytes E8 55 C2 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 0B 04 00 00: jmp 0x4315c7
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0b9bh
        push 5b539ch
        push 2000h
        ; Exact mapped bytes E8 63 BE 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1cch], eax
        mov ecx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 15ch], ecx
        mov dword ptr [ebp - 14ch], 0
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp + 14h]
        shr edx, 10h
        ; Exact mapped bytes 66 89 95 B0 FE FF FF: mov word ptr [ebp - 0x150], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 18h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 88 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 0F 84 34 03 00 00: je 0x431579
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 164h], 0
        ; Exact mapped bytes EB 0F: jmp 0x431260
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 164h]
        add ecx, 1
        mov dword ptr [ebp - 164h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 164h]
        cmp ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes 0F 8D BD 02 00 00: jge 0x431538
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 164h]
        imul ecx, ecx, 0d4h
        mov edx, dword ptr [eax + 24h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A 98 00 00 00: mov ax, word ptr [edx + ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 150h]
        and ecx, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 82 02 00 00: jne 0x431533
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 164h]
        imul ecx, ecx, 0d4h
        mov edx, dword ptr [eax + 24h]
        cmp dword ptr [edx + ecx + 28h], 0
        ; Exact mapped bytes 74 1F: je 0x4312ef
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 164h]
        imul edx, edx, 0d4h
        mov eax, dword ptr [ecx + 24h]
        cmp dword ptr [eax + edx + 48h], -1
        ; Exact mapped bytes 75 05: jne 0x4312f4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 44 02 00 00: jmp 0x431538
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], 0
        ; Exact mapped bytes EB 0F: jmp 0x43130f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 168h]
        add ecx, 1
        mov dword ptr [ebp - 168h], ecx
        cmp dword ptr [ebp - 168h], 64h
        ; Exact mapped bytes 0F 83 17 02 00 00: jae 0x431533
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 168h]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2e4h], 0
        ; Exact mapped bytes 0F 85 EF 01 00 00: jne 0x43152e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 164h]
        imul ecx, ecx, 0d4h
        mov edx, dword ptr [eax + 24h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp - 168h]
        imul esi, esi, 37ch
        mov ecx, dword ptr [edx + ecx + 68h]
        and ecx, dword ptr [eax + esi + 2b8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 164h]
        imul edx, edx, 0d4h
        mov eax, dword ptr [eax + 24h]
        cmp ecx, dword ptr [eax + edx + 68h]
        ; Exact mapped bytes 0F 85 95 01 00 00: jne 0x43152e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 164h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [edx + 24h]
        mov edx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + 168h]
        mov esi, dword ptr [ebp - 168h]
        imul esi, esi, 37ch
        mov edx, dword ptr [edx + esi + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp dword ptr [ecx + eax + 28h], edx
        ; Exact mapped bytes 0F 87 4E 01 00 00: ja 0x43152e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 168h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x431422
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 164h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [edx + 24h]
        cmp dword ptr [ecx + eax + 28h], 0ch
        ; Exact mapped bytes 76 46: jbe 0x431468
        __asm _emit 0x76
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 164h]
        imul ecx, ecx, 0d4h
        mov edx, dword ptr [eax + 24h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 168h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 234h]
        and edx, 0fh
        cmp eax, edx
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x43152e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 164h]
        imul edx, edx, 0d4h
        mov eax, dword ptr [ecx + 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x43152e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 164h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [edx + 24h]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 164h]
        imul edx, edx, 0d4h
        mov eax, dword ptr [ecx + 24h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 164h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 15ch]
        add ecx, dword ptr [ebp - 14ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 14ch]
        add eax, 0ch
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 154h]
        add ecx, 1
        mov dword ptr [ebp - 154h], ecx
        ; Exact mapped bytes EB 05: jmp 0x431533
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 CD FD FF FF: jmp 0x431300
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 19 FD FF FF: jmp 0x431251
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0dh
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 10h
        or eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 15ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BB 5C 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x4315ac
        __asm _emit 0xeb
        __asm _emit 0x33
        mov dword ptr [ebp - 14h], 0dh
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 80021002h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 86 5C 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 1d0h], eax
        mov ecx, dword ptr [ebp - 1d0h]
        push ecx
        ; Exact mapped bytes E8 45 BE 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        add esp, 1f4h
        cmp ebp, esp
        ; Exact mapped bytes E8 0A 72 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
