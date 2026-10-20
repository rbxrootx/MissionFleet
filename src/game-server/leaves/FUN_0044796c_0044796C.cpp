// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044796C .. +0x48A bytes.
extern "C" __declspec(naked) void FUN_0044796c_0044796C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b02bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 44h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 24h], 10h
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov dword ptr [ebp - 2ch], ecx
        lea edx, [ebp - 24h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 F8 BD FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 05 04 00 00: je 0x447dd8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 8d0h], 0
        ; Exact mapped bytes 74 15: je 0x4479f4
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40cc8h]
        ; Exact mapped bytes E8 8B AB 02 00: call 0x47257f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 85 27 03 00 00: jne 0x447d3e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x447adb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C0 29 FC FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x447abf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B0 29 FC FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 89 C5 FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 502h
        ; Exact mapped bytes 74 71: je 0x447abf
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        sar ecx, 8
        mov edx, dword ptr [ebp - 38h]
        mov byte ptr [edx + 12ch], cl
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x447a82
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x447a82
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 1
        ; Exact mapped bytes EB 07: jmp 0x447a89
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 38h]
        mov cl, byte ptr [ebp - 3ch]
        mov byte ptr [eax + 12dh], cl
        mov esi, esp
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40ccch]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 48h]
        mov edx, dword ptr [eax + 40ccch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 21 0D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 2ah
        push 8000010ah
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5C F7 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 5E 02 00 00: jmp 0x447d39
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 F5 7D FF FF: call 0x43f8ef
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x447c28
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 25bh
        push 5b68a0h
        push 0cbch
        ; Exact mapped bytes E8 18 55 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 23: je 0x447b51
        __asm _emit 0x74
        __asm _emit 0x23
        push 500h
        push 5b68fch
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 DD 58 00 00: call 0x44d420
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E4 2E FC FF: call 0x40aa30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x447b58
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 24 2F 04 00: call 0x48aa9e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0ca4h], eax
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffffh
        sar edx, 8
        mov eax, dword ptr [ebp - 18h]
        mov byte ptr [eax + 0ca8h], dl
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x447bbf
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x447bbf
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 07: jmp 0x447bc6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 18h]
        mov cl, byte ptr [ebp - 44h]
        mov byte ptr [eax + 0ca9h], cl
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cach]
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx + 0ca8h]
        imul eax, eax, 0ab4h
        lea ecx, [ecx + eax + 4]
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx + 0ca9h]
        imul eax, eax, 112h
        ; Exact mapped bytes 66 8B 55 F0: mov dx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 14 01: mov word ptr [ecx + eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 23 0B FF FF: call 0x438740
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 4F 79 FF FF: call 0x43f577
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 40 BD FB FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 0F 8D 8F 00 00 00: jge 0x447cc8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 8F 0B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 71: jne 0x447cc6
        __asm _emit 0x75
        __asm _emit 0x71
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        sar ecx, 8
        mov edx, dword ptr [ebp - 38h]
        mov byte ptr [edx + 12ch], cl
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x447c89
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x447c89
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 1
        ; Exact mapped bytes EB 07: jmp 0x447c90
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 38h]
        mov cl, byte ptr [ebp - 48h]
        mov byte ptr [eax + 12dh], cl
        mov esi, esp
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40ccch]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 48h]
        mov edx, dword ptr [eax + 40ccch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 1A 0B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 71: jmp 0x447d39
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        sar edx, 8
        mov eax, dword ptr [ebp - 38h]
        mov byte ptr [eax + 12ch], dl
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x447cfc
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x447cfc
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes EB 07: jmp 0x447d03
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dl, byte ptr [ebp - 4ch]
        mov byte ptr [ecx + 12dh], dl
        mov esi, esp
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ccch]
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax + 48h]
        mov eax, dword ptr [edx + 40ccch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 A7 0A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x447dd1
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 1
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x447dd1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        sar edx, 8
        mov byte ptr [ebp - 1ch], dl
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x447d79
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x447d79
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 1
        ; Exact mapped bytes EB 07: jmp 0x447d80
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov al, byte ptr [ebp - 50h]
        mov byte ptr [ebp - 20h], al
        push 0
        push 112h
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40cach]
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffh
        imul ecx, ecx, 0ab4h
        lea edx, [eax + ecx + 4]
        mov eax, dword ptr [ebp - 20h]
        and eax, 0ffh
        imul eax, eax, 112h
        add edx, eax
        push edx
        push 1
        push 0b0000h
        push 80020115h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 61 F4 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x447dda
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 F0 09 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
