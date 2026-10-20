// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464043 .. +0x642 bytes.
extern "C" __declspec(naked) void FUN_00464043_00464043() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 70h]
        mov ecx, 1ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 68h], ecx
        mov eax, dword ptr [ebp - 68h]
        add eax, 1b0h
        push eax
        mov ecx, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 38 B0 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 F3 05 00 00: je 0x464674
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 186a0h
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 14 F7 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x4640c0
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 13ch], 0
        mov dword ptr [ebp - 20h], 186a0h
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 20h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 D5 F6 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x4640ff
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 140h], 0
        mov dword ptr [ebp - 2ch], 186a0h
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 138h]
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 96 F6 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x46413e
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 140h], 0
        mov dword ptr [ebp - 38h], 186a0h
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 40h], eax
        lea ecx, [ebp - 38h]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 57 F6 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x46417d
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 120h], 0
        mov dword ptr [ebp - 44h], 1fh
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 68h]
        xor eax, eax
        mov al, byte ptr [edx + 5dh]
        mov dword ptr [ebp - 4ch], eax
        lea ecx, [ebp - 44h]
        push ecx
        lea edx, [ebp - 48h]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 19 F6 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4641b5
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, dword ptr [ebp - 68h]
        mov byte ptr [ecx + 5dh], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4641c7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 71: jge 0x46423e
        __asm _emit 0x7d
        __asm _emit 0x71
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4641df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 7D 57: jge 0x46423c
        __asm _emit 0x7d
        __asm _emit 0x57
        mov dword ptr [ebp - 50h], 3e8h
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 6
        mov edx, dword ptr [ebp - 68h]
        lea eax, [edx + ecx + 5eh]
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 48: mov dx, word ptr [eax + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x48
        mov dword ptr [ebp - 58h], edx
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 54h]
        push ecx
        lea edx, [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 A3 F5 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x46423a
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 6
        mov ecx, dword ptr [ebp - 68h]
        lea edx, [ecx + eax + 5eh]
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 04 42 00 00: mov word ptr [edx + eax*2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9A: jmp 0x4641d6
        __asm _emit 0xeb
        __asm _emit 0x9a
        ; Exact mapped bytes EB 80: jmp 0x4641be
        __asm _emit 0xeb
        __asm _emit 0x80
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x464250
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 83 97 00 00 00: jae 0x4642f1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 0ah
        xor edx, edx
        mov dl, byte ptr [eax + ecx + 134h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 68h]
        xor ebx, ebx
        mov bl, byte ptr [ecx + eax*2 + 1dh]
        cmp edx, ebx
        ; Exact mapped bytes 7D 0B: jge 0x4642a3
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 68h]
        mov byte ptr [eax + edx*2 + 1dh], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0ah
        xor ecx, ecx
        mov cl, byte ptr [edx + eax + 135h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 68h]
        xor ebx, ebx
        mov bl, byte ptr [eax + edx*2 + 1eh]
        cmp ecx, ebx
        ; Exact mapped bytes 7D 0B: jge 0x4642ec
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 68h]
        mov byte ptr [edx + ecx*2 + 1eh], 0
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x464247
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 18h]
        cmp edx, dword ptr [ecx + 16ch]
        ; Exact mapped bytes 74 08: je 0x46430a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 33 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x46431c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 83 0A 03 00 00: jae 0x464630
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], 0fah
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 68h]
        xor eax, eax
        mov al, byte ptr [edx + ecx*2 + 1dh]
        mov dword ptr [ebp - 64h], eax
        lea ecx, [ebp - 5ch]
        push ecx
        lea edx, [ebp - 60h]
        push edx
        lea eax, [ebp - 64h]
        push eax
        ; Exact mapped bytes E8 6C F4 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 8C 01 00 00: je 0x4644eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 68h]
        mov cl, byte ptr [esi + ecx*2 + 1dh]
        mov byte ptr [edx + eax + 134h], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 68h]
        mov dl, byte ptr [esi + edx*2 + 1eh]
        mov byte ptr [eax + ecx + 135h], dl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 11 2E 01 00 00: mov ax, word ptr [ecx + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x4644e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0ah
        xor ecx, ecx
        mov cl, byte ptr [edx + eax + 134h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x4644e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        ; Exact mapped bytes E8 FA 4E 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 31 EF 01 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp - 6ch]
        and ecx, 1fh
        shl ecx, 1
        mov edx, dword ptr [eax + edx + 16be0h]
        and edx, 0ffffffc1h
        or edx, ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + ecx + 16be0h], edx
        ; Exact mapped bytes E9 40 01 00 00: jmp 0x46462b
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0ah
        mov byte ptr [edx + eax + 134h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0ah
        mov byte ptr [edx + eax + 135h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x46462b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        ; Exact mapped bytes E8 B5 4D 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 EC ED 01 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp - 70h]
        and ecx, 1fh
        shl ecx, 1
        mov edx, dword ptr [eax + edx + 16be0h]
        and edx, 0ffffffc1h
        or edx, ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + ecx + 16be0h], edx
        ; Exact mapped bytes E9 E3 FC FF FF: jmp 0x464313
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 68h]
        cmp dword ptr [ecx + 134h], 0
        ; Exact mapped bytes 74 1D: je 0x464659
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 3ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 3ch], ecx
        ; Exact mapped bytes EB 1B: jmp 0x464674
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 40h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 40h], eax
        pop edi
        pop esi
        pop ebx
        add esp, 70h
        cmp ebp, esp
        ; Exact mapped bytes E8 5F 41 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
