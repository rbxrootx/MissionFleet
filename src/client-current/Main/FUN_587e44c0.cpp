// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 5224 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E44C0 .. +0x76A bytes.
extern "C" __declspec(naked) void FUN_587e44c0_segment_00() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 4
        ; Exact mapped bytes 0F 84 4F 14 00 00: je 0x587e591f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        push ebx
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        mov ebx, 0fh
        push ebp
        lea ebp, [ebx - 0dh]
        lea edi, [ebx - 0eh]
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 15: je 0x587e4508
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 0C 02 00 00: jne 0x587e4714
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x587e453c
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x587e4525
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x587e4520
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x587e4535
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x587e4534
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x587e4531
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x587e4535
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E4 E7 11 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x587e4570
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x587e4559
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x587e4554
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x587e4569
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x587e4568
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x587e4565
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x587e4569
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 70 E7 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        cmp eax, dword ptr [esi + 28h]
        ; Exact mapped bytes 0F 85 98 01 00 00: jne 0x587e4714
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        cmp ecx, dword ptr [esi + 2ch]
        ; Exact mapped bytes 0F 85 8C 01 00 00: jne 0x587e4714
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 1f00h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x587e469e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x587e45b3
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov cl, byte ptr [esi + 0d54h]
        and cl, bl
        movzx edx, cl
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 DA 24 FF FF: call 0x587d6aa0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e2ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 09 6E 24: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0db8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 0db8h]
        cmp dword ptr [ecx + 0a4h], 0
        ; Exact mapped bytes 74 05: je 0x587e4603
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 8D 1A FD FF: call 0x587b6090
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0adch]
        cmp dword ptr [ecx + 74h], 67h
        ; Exact mapped bytes 7D 18: jge 0x587e462c
        __asm _emit 0x7d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 0ch], 3
        ; Exact mapped bytes 7D 0C: jge 0x587e462c
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 0db8h]
        push edi
        ; Exact mapped bytes E8 D4 E0 0C 00: call 0x588b2700
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 E8 CF F4 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 30000h
        ; Exact mapped bytes E8 38 47 0A 00: call 0x58888d80
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x47
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 15ch]
        and eax, 0f00000h
        cmp eax, 100000h
        ; Exact mapped bytes 75 0A: jne 0x587e466a
        __asm _emit 0x75
        __asm _emit 0x0a
        push 220000h
        ; Exact mapped bytes E8 F6 F1 0A 00: call 0x58893860
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 BE 20 0E 00 00: cmp word ptr [esi + 0xe20], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x587e4714
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 EC 45 A2 58: mov edx, dword ptr [0x58a245ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, ebp
        ; Exact mapped bytes 66 89 8A 28 01 00 00: mov word ptr [edx + 0x128], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 45 A2 58: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, ebp
        ; Exact mapped bytes 66 89 86 20 0E 00 00: mov word ptr [esi + 0xe20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 76: jmp 0x587e4714
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, eax
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 63: jne 0x587e4714
        __asm _emit 0x75
        __asm _emit 0x63
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 64h]
        xor edi, edi
        cmp ecx, edi
        ; Exact mapped bytes 74 1B: je 0x587e46f0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes 75 06: jne 0x587e46ed
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 3D 80 47 A2 58: mov dword ptr [0x58a24780], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e5ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov ecx, esi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E8 C1 2D FF FF: call 0x587d74d0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 1
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 1f00h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 85 91 11 00 00: jne 0x587e58bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1044h]
        cmp byte ptr [eax + 99h], 0
        ; Exact mapped bytes 74 21: je 0x587e475e
        __asm _emit 0x74
        __asm _emit 0x21
        mov byte ptr [eax + 9ah], 0
        mov edx, dword ptr [esi + 1048h]
        mov byte ptr [edx + 96h], 0
        mov eax, dword ptr [esi + 104ch]
        mov byte ptr [eax + 96h], 0
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x587e4779
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [esi + 0dd8h], 0
        ; Exact mapped bytes 75 3C: jne 0x587e47af
        __asm _emit 0x75
        __asm _emit 0x3c
        mov dword ptr [esi + 0dd8h], edi
        cmp dword ptr [esi + 0dd8h], 0
        ; Exact mapped bytes 75 2D: jne 0x587e47af
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 0ch], ebp
        ; Exact mapped bytes 7D 22: jge 0x587e47af
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0adch]
        mov eax, dword ptr [ecx + 74h]
        cmp eax, edi
        ; Exact mapped bytes 74 0A: je 0x587e47a9
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 0ah
        ; Exact mapped bytes 74 05: je 0x587e47a9
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 66h
        ; Exact mapped bytes 75 06: jne 0x587e47af
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 0dd8h], edi
        mov eax, dword ptr [esi + 5d0h]
        mov eax, dword ptr [eax + 58h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x587e47c1
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes EB 03: jmp 0x587e47c4
        __asm _emit 0xeb
        __asm _emit 0x03
        or ecx, 0ffffffffh
        mov eax, 30c30c31h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 15h
        sub ecx, eax
        mov ecx, dword ptr [ecx*4 + 589cc028h]
        ; Exact mapped bytes 03 0D 20 C0 9C 58: add ecx, dword ptr [0x589cc020]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 5f4h]
        ; Exact mapped bytes E8 6D EB 11 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x00
        cmp dword ptr [esi + 0dd8h], 0
        ; Exact mapped bytes 0F 84 F6 06 00 00: je 0x587e4ef6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d78h], 0
        ; Exact mapped bytes 0F 85 41 05 00 00: jne 0x587e4d4e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ddch]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 14: jne 0x587e482f
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [esi + 0ddch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0de0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0de4h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1B: je 0x587e4859
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0de4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0de8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dech]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1B: je 0x587e4883
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0dech]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0df0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0df4h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1B: je 0x587e48ac
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0df4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0df8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        cmp dword ptr [esi + 0e0ch], 2000h
        ; Exact mapped bytes 0F 85 B4 0E 00 00: jne 0x587e5770
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e18h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A5 0C 00 00: jne 0x587e556f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0e1ch], ecx
        ; Exact mapped bytes 0F 85 99 0C 00 00: jne 0x587e556f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0e14h], ecx
        ; Exact mapped bytes 0F 84 74 0A 00 00: je 0x587e5356
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        mov ecx, dword ptr [esi + 348h]
        push edx
        ; Exact mapped bytes E8 92 E9 11 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        mov eax, dword ptr [eax + 50h]
        mov ecx, dword ptr [esi + 348h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e493c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 348h]
        push 100h
        ; Exact mapped bytes E8 94 E3 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe3
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 348h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        mov ecx, dword ptr [esi + 34ch]
        push edx
        ; Exact mapped bytes E8 1E E9 11 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov eax, dword ptr [eax + 50h]
        mov ecx, dword ptr [esi + 34ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e49b0
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 34ch]
        push 100h
        ; Exact mapped bytes E8 20 E3 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe3
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        mov ecx, dword ptr [esi + 350h]
        push edx
        ; Exact mapped bytes E8 AA E8 11 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        mov eax, dword ptr [eax + 54h]
        mov ecx, dword ptr [esi + 350h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e4a24
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 350h]
        push 100h
        ; Exact mapped bytes E8 AC E2 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 350h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        mov ecx, dword ptr [esi + 354h]
        push edx
        ; Exact mapped bytes E8 36 E8 11 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        mov eax, dword ptr [eax + 54h]
        mov ecx, dword ptr [esi + 354h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e4a98
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 354h]
        push 100h
        ; Exact mapped bytes E8 38 E2 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 354h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 340h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        mov ecx, dword ptr [esi + 458h]
        push edx
        ; Exact mapped bytes E8 C2 E7 11 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 340h]
        mov eax, dword ptr [eax + 54h]
        mov ecx, dword ptr [esi + 458h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e4b0c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 458h]
        push 100h
        ; Exact mapped bytes E8 C4 E1 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 458h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        lea edi, [esi + 3d8h]
        mov ebp, 20h
        mov eax, dword ptr [edi - 118h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 47 E7 11 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [edi - 118h]
        mov eax, dword ptr [eax + 54h]
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e4b83
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi - 198h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        mov ecx, dword ptr [edi - 80h]
        push edx
        ; Exact mapped bytes E8 EE E6 11 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe6
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [edi - 198h]
        mov eax, dword ptr [eax + 54h]
        mov ecx, dword ptr [edi - 80h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e4bdd
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi - 80h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 0F 85 41 FF FF FF: jne 0x587e4b31
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        cmp byte ptr [esi + 46ch], al
        ; Exact mapped bytes 76 24: jbe 0x587e4c1e
        __asm _emit 0x76
        __asm _emit 0x24
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 470h]
        mov ecx, dword ptr [ecx + eax*4]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        movzx ecx, byte ptr [esi + 46ch]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C E2: jl 0x587e4c00
        __asm _emit 0x7c
        __asm _emit 0xe2
        xor eax, eax
        cmp byte ptr [esi + 46dh], al
        ; Exact mapped bytes 76 26: jbe 0x587e4c4e
        __asm _emit 0x76
        __asm _emit 0x26
        ; Exact mapped bytes EB 06: jmp 0x587e4c30
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E4C30 .. +0x7A6 bytes.
extern "C" __declspec(naked) void FUN_587e44c0_segment_01() {
    __asm {
        mov edx, dword ptr [esi + 474h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        movzx ecx, byte ptr [esi + 46dh]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C E2: jl 0x587e4c30
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 0bch]
        push 0
        ; Exact mapped bytes E8 85 E0 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e14h]
        cmp eax, 0ffffh
        ; Exact mapped bytes 0F 85 79 03 00 00: jne 0x587e4fe5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 03 A9 FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0ach]
        mov edi, dword ptr [esi + 348h]
        mov dword ptr [esi + 0e18h], 190h
        mov dword ptr [esi + 0e1ch], 10eh
        mov dword ptr [esi + 0e14h], 0
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e4cc0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 90 E2 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e4ccd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 13 E2 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        mov edi, dword ptr [esi + 34ch]
        ; Exact mapped bytes 66 83 C1 32: add cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e4cf2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5E E2 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e4cff
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E1 E1 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b4h]
        mov edi, dword ptr [esi + 350h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e4d24
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2C E2 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e4d31
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AF E1 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov edi, dword ptr [esi + 354h]
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes E9 F9 04 00 00: jmp 0x587e5247
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ddch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1B: je 0x587e4d78
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0ddch]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0de0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [ecx + 0cc0h]
        movzx edi, word ptr [eax + 0eh]
        mov dl, byte ptr [eax + 4]
        and dl, 1fh
        and edi, ebx
        cmp dl, 1
        ; Exact mapped bytes 75 05: jne 0x587e4d9a
        __asm _emit 0x75
        __asm _emit 0x05
        add edi, 3
        ; Exact mapped bytes EB 03: jmp 0x587e4d9d
        __asm _emit 0xeb
        __asm _emit 0x03
        add edi, 5
        ; Exact mapped bytes E8 4E 17 10 00: call 0x588e64f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 0F 8D 7F 00 00 00: jge 0x587e4e29
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0de4h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 14: jne 0x587e4dcd
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [esi + 0de4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0de8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0dech]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1B: je 0x587e4df6
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0dech]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0df0h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0df4h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 0F 84 A3 FA FF FF: je 0x587e48ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0df4h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0df8h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 83 FA FF FF: jmp 0x587e48ac
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0dbch]
        mov eax, dword ptr [edx + 2d8h]
        cmp dword ptr [eax + 50h], 0
        mov ecx, dword ptr [esi + 0de4h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 74 53: je 0x587e4e98
        __asm _emit 0x74
        __asm _emit 0x53
        test dl, 1
        ; Exact mapped bytes 74 1B: je 0x587e4e65
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0de4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0de8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dech]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x587e4fba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0dech]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0df0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 22 01 00 00: jmp 0x587e4fba
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dl, 1
        ; Exact mapped bytes 74 1B: je 0x587e4eb8
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0de4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0de8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5d0h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 0F 84 E1 F9 FF FF: je 0x587e48ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0dech]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 85 CF F9 FF FF: jne 0x587e48ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0dech]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0df0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E9 B6 F9 FF FF: jmp 0x587e48ac
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d78h], 0
        ; Exact mapped bytes 0F 84 A9 F9 FF FF: je 0x587e48ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0d78h]
        mov eax, 78h
        add edx, 9a8h
        lea ebp, [eax - 70h]
        mov edi, dword ptr [edx - 4]
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x587e4f35
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 4F 5E: mov cx, word ptr [edi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        movzx ecx, cl
        xor ecx, 0aah
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x587e4f35
        __asm _emit 0x7d
        __asm _emit 0x02
        mov eax, ecx
        mov edi, dword ptr [edx]
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x587e4f52
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 4F 5E: mov cx, word ptr [edi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        movzx ecx, cl
        xor ecx, 0aah
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x587e4f52
        __asm _emit 0x7d
        __asm _emit 0x02
        mov eax, ecx
        mov edi, dword ptr [edx + 4]
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x587e4f70
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 4F 5E: mov cx, word ptr [edi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        movzx ecx, cl
        xor ecx, 0aah
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x587e4f70
        __asm _emit 0x7d
        __asm _emit 0x02
        mov eax, ecx
        mov edi, dword ptr [edx + 8]
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x587e4f8e
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 4F 5E: mov cx, word ptr [edi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        movzx ecx, cl
        xor ecx, 0aah
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x587e4f8e
        __asm _emit 0x7d
        __asm _emit 0x02
        mov eax, ecx
        add edx, 10h
        sub ebp, 1
        ; Exact mapped bytes 75 81: jne 0x587e4f17
        __asm _emit 0x75
        __asm _emit 0x81
        cmp eax, 3
        ; Exact mapped bytes 7C 09: jl 0x587e4fa4
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp eax, 78h
        ; Exact mapped bytes 0F 85 DF F8 FF FF: jne 0x587e4883
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0dbch]
        mov ecx, dword ptr [eax + 2d8h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 84 D7 F8 FF FF: je 0x587e4891
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0df4h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 85 E0 F8 FF FF: jne 0x587e48ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0df4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0df8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E9 C7 F8 FF FF: jmp 0x587e48ac
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov eax, dword ptr [esi + 0d78h]
        ; Exact mapped bytes 0F 8E 34 01 00 00: jle 0x587e5127
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x587e4fff
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0e10h]
        ; Exact mapped bytes EB 45: jmp 0x587e5044
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [eax + 0ce4h]
        mov cl, byte ptr [esi + 61h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x587e5035
        __asm _emit 0x74
        __asm _emit 0x27
        mov edi, edi
        mov edx, dword ptr [eax + 0cc0h]
        cmp byte ptr [edx + 35ch], cl
        ; Exact mapped bytes 75 09: jne 0x587e5027
        __asm _emit 0x75
        __asm _emit 0x09
        cmp dword ptr [eax + 0ech], 0
        ; Exact mapped bytes 74 0C: je 0x587e5033
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 0ce4h]
        test eax, eax
        ; Exact mapped bytes 75 DF: jne 0x587e5010
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes EB 02: jmp 0x587e5035
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 75 78 F8 FF: call 0x5876c8b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        neg eax
        sbb eax, eax
        and eax, edi
        mov dword ptr [esi + 0d78h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 0F 02 00 00: je 0x587e5261
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 26 A5 FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        dec dword ptr [esi + 0e14h]
        mov eax, dword ptr [esi + 0ach]
        mov edi, dword ptr [esi + 348h]
        mov dword ptr [esi + 0e18h], 190h
        mov dword ptr [esi + 0e1ch], 10eh
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 32: add cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e5099
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B7 DE 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e50a6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3A DE 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b0h]
        mov edi, dword ptr [esi + 34ch]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e50cb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 85 DE 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e50d8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 08 DE 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        mov edi, dword ptr [esi + 350h]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e50fd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 53 DE 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e510a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D6 DD 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        mov edi, dword ptr [esi + 354h]
        ; Exact mapped bytes 66 83 C1 32: add cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x587e5247
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x587e5133
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0e10h]
        ; Exact mapped bytes EB 36: jmp 0x587e5169
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [eax + 0ce0h]
        mov cl, byte ptr [esi + 61h]
        xor edx, edx
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x587e5167
        __asm _emit 0x74
        __asm _emit 0x25
        mov edi, dword ptr [eax + 0cc0h]
        cmp byte ptr [edi + 35ch], cl
        ; Exact mapped bytes 75 09: jne 0x587e5159
        __asm _emit 0x75
        __asm _emit 0x09
        cmp dword ptr [eax + 0ech], 0
        ; Exact mapped bytes 74 0C: je 0x587e5165
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 0ce0h]
        test eax, eax
        ; Exact mapped bytes 75 DF: jne 0x587e5142
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes EB 02: jmp 0x587e5167
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, eax
        mov eax, edx
        mov dword ptr [esi + 0d78h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x587e5261
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 01 A4 FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [esi + 0e14h]
        mov edx, dword ptr [esi + 0ach]
        mov edi, dword ptr [esi + 348h]
        mov dword ptr [esi + 0e18h], 0fffffe70h
        mov dword ptr [esi + 0e1ch], 0fffffef2h
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 E8 32: sub ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e51be
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 92 DD 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e51cb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 15 DD 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        mov edi, dword ptr [esi + 34ch]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 EA 32: sub dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e51f0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 DD 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e51fd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E3 DC 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdc
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        mov edi, dword ptr [esi + 350h]
        ; Exact mapped bytes 66 83 E9 32: sub cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e5222
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2E DD 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e522f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B1 DC 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        mov edi, dword ptr [esi + 354h]
        ; Exact mapped bytes 66 83 E8 32: sub ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e5254
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FC DC 11 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdc
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e5261
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7F DC 11 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdc
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e1ch]
        mov edx, dword ptr [esi + 0e18h]
        neg ecx
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        neg edx
        push edx
        ; Exact mapped bytes E8 92 DB 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 0
        ; Exact mapped bytes E8 55 DA 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e1ch]
        mov ecx, dword ptr [esi + 0e18h]
        neg eax
        neg ecx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 68 DB 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 0
        ; Exact mapped bytes E8 2B DA 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0e1ch]
        mov eax, dword ptr [esi + 0e18h]
        mov ecx, dword ptr [esi + 0b4h]
        neg edx
        push edx
        neg eax
        push eax
        ; Exact mapped bytes E8 3E DB 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 0
        ; Exact mapped bytes E8 01 DA 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e1ch]
        mov edx, dword ptr [esi + 0e18h]
        neg ecx
        push ecx
        mov ecx, dword ptr [esi + 0b8h]
        neg edx
        push edx
        ; Exact mapped bytes E8 14 DB 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 0
        ; Exact mapped bytes E8 D7 D9 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0db4h]
        mov eax, dword ptr [eax + 0f4h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 F9 24 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 47ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587e533a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 480h]
        test eax, eax
        ; Exact mapped bytes 0F 84 61 05 00 00: je 0x587e58a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 53 05 00 00: jmp 0x587e58a9
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d84h]
        ; Exact mapped bytes E8 1F 85 F8 FF: call 0x5876d880
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0d78h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 11 A2 FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0dc8h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 0D: je 0x587e538d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0dc8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 348h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 350h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 354h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 458h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 8
        lea eax, [esi + 358h]
        lea edi, [edx - 7]
        ; Exact mapped bytes EB 0A: jmp 0x587e53e0
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E53E0 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_587e44c0_segment_02() {
    __asm {
        mov ecx, dword ptr [eax + 80h]
        mov ebp, 0fff0h
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        add eax, 10h
        sub edx, edi
        ; Exact mapped bytes 75 B1: jne 0x587e53e0
        __asm _emit 0x75
        __asm _emit 0xb1
        mov eax, dword ptr [esi + 45ch]
        mov edx, ebp
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 464h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 468h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 468h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 460h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0db8h]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        shr dl, 1
        test dl, 1
        ; Exact mapped bytes 75 12: jne 0x587e548e
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi + 0db4h]
        mov eax, dword ptr [eax + 0f4h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes EB 41: jmp 0x587e54cf
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 0dbch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 16: je 0x587e54ba
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 0dbch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 4
        ; Exact mapped bytes 75 0D: jne 0x587e54c7
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0dbch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 51 23 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 47ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x587e54dd
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 480h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x587e54eb
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, 0a9h
        mov dword ptr [esi + 0e0ch], 0
        ; Exact mapped bytes 66 39 4E 60: cmp word ptr [esi + 0x60], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 0F 84 A5 03 00 00: je 0x587e58a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov edx, edi
        cmp byte ptr [esi + 46ch], al
        ; Exact mapped bytes 76 1A: jbe 0x587e552a
        __asm _emit 0x76
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 470h]
        mov ecx, dword ptr [ecx + eax*4]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        movzx ecx, byte ptr [esi + 46ch]
        add eax, edx
        cmp eax, ecx
        ; Exact mapped bytes 7C E6: jl 0x587e5510
        __asm _emit 0x7c
        __asm _emit 0xe6
        xor eax, eax
        cmp byte ptr [esi + 46dh], al
        ; Exact mapped bytes 76 26: jbe 0x587e555a
        __asm _emit 0x76
        __asm _emit 0x26
        ; Exact mapped bytes EB 0A: jmp 0x587e5540
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E5540 .. +0x402 bytes.
extern "C" __declspec(naked) void FUN_587e44c0_segment_03() {
    __asm {
        mov ecx, dword ptr [esi + 474h]
        mov ecx, dword ptr [ecx + eax*4]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        movzx ecx, byte ptr [esi + 46dh]
        add eax, edx
        cmp eax, ecx
        ; Exact mapped bytes 7C E6: jl 0x587e5540
        __asm _emit 0x7c
        __asm _emit 0xe6
        mov ecx, dword ptr [esi + 0bch]
        push 80h
        ; Exact mapped bytes E8 76 D7 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A 03 00 00: jmp 0x587e58a9
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0e1ch]
        lea edx, [ecx + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 27: ja 0x587e55a4
        __asm _emit 0x77
        __asm _emit 0x27
        lea eax, [ecx + 3]
        cmp eax, 6
        ; Exact mapped bytes 77 14: ja 0x587e5599
        __asm _emit 0x77
        __asm _emit 0x14
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x587e558e
        __asm _emit 0x7d
        __asm _emit 0x05
        or ebp, 0ffffffffh
        ; Exact mapped bytes EB 23: jmp 0x587e55b1
        __asm _emit 0xeb
        __asm _emit 0x23
        xor edx, edx
        test ecx, ecx
        setg dl
        mov ebp, edx
        ; Exact mapped bytes EB 18: jmp 0x587e55b1
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, ecx
        cdq
        sub eax, edx
        mov ebp, eax
        sar ebp, 1
        ; Exact mapped bytes EB 0D: jmp 0x587e55b1
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        mov ebp, eax
        sar ebp, 2
        lea eax, [ebx + 7]
        cmp eax, 0eh
        ; Exact mapped bytes 77 27: ja 0x587e55e0
        __asm _emit 0x77
        __asm _emit 0x27
        lea edx, [ebx + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x587e55d5
        __asm _emit 0x77
        __asm _emit 0x14
        test ebx, ebx
        ; Exact mapped bytes 7D 05: jge 0x587e55ca
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 23: jmp 0x587e55ed
        __asm _emit 0xeb
        __asm _emit 0x23
        xor eax, eax
        test ebx, ebx
        setg al
        mov edi, eax
        ; Exact mapped bytes EB 18: jmp 0x587e55ed
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, ebx
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0D: jmp 0x587e55ed
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, ebx
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        sub ecx, ebp
        push edi
        mov dword ptr [esi + 0e18h], ecx
        mov ecx, dword ptr [esi + 348h]
        sub ebx, edi
        push ebp
        mov dword ptr [esi + 0e1ch], ebx
        ; Exact mapped bytes E8 06 D8 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd8
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 34ch]
        push edi
        push ebp
        ; Exact mapped bytes E8 F9 D7 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 350h]
        push edi
        push ebp
        ; Exact mapped bytes E8 EC D7 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 354h]
        push edi
        push ebp
        ; Exact mapped bytes E8 DF D7 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push edi
        push ebp
        ; Exact mapped bytes E8 D2 D7 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push edi
        push ebp
        ; Exact mapped bytes E8 C5 D7 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push edi
        push ebp
        ; Exact mapped bytes E8 B8 D7 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push edi
        push ebp
        ; Exact mapped bytes E8 AB D7 11 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e1ch]
        mov edx, dword ptr [esi + 0e18h]
        push ecx
        mov ecx, dword ptr [esi + 0d84h]
        push edx
        ; Exact mapped bytes E8 22 7A F8 FF: call 0x5876d0a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 348h]
        mov edi, dword ptr [ecx + 28h]
        test edi, edi
        ; Exact mapped bytes 0F 84 1A 02 00 00: je 0x587e58a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 10h
        ; Exact mapped bytes 7E 69: jle 0x587e56fd
        __asm _emit 0x7e
        __asm _emit 0x69
        sub edi, 10h
        mov ebp, 100h
        push edi
        sub ebp, edi
        ; Exact mapped bytes E8 3C D6 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 34ch]
        push edi
        ; Exact mapped bytes E8 30 D6 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 350h]
        push edi
        ; Exact mapped bytes E8 24 D6 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 354h]
        push edi
        ; Exact mapped bytes E8 18 D6 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push ebp
        ; Exact mapped bytes E8 0C D6 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push ebp
        ; Exact mapped bytes E8 00 D6 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push ebp
        ; Exact mapped bytes E8 F4 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push ebp
        ; Exact mapped bytes E8 E8 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 AC 01 00 00: jmp 0x587e58a9
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 DC D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 34ch]
        push 0
        ; Exact mapped bytes E8 CF D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 350h]
        push 0
        ; Exact mapped bytes E8 C2 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 354h]
        push 0
        ; Exact mapped bytes E8 B5 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 100h
        ; Exact mapped bytes E8 A5 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 100h
        ; Exact mapped bytes E8 95 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 100h
        ; Exact mapped bytes E8 85 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 100h
        ; Exact mapped bytes E8 75 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x587e58a9
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d78h], 0
        mov ecx, dword ptr [esi + 0b4h]
        mov edi, dword ptr [ecx + 28h]
        ; Exact mapped bytes 75 6A: jne 0x587e57ec
        __asm _emit 0x75
        __asm _emit 0x6a
        test edi, edi
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x587e58a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 10h
        ; Exact mapped bytes 7E 1A: jle 0x587e57a9
        __asm _emit 0x7e
        __asm _emit 0x1a
        sub edi, 10h
        push edi
        ; Exact mapped bytes E8 48 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push edi
        ; Exact mapped bytes E8 3C D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x587e58a9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 30 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 0
        ; Exact mapped bytes E8 23 D5 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x587e58a9
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 100h
        ; Exact mapped bytes 74 32: je 0x587e5826
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, 100h
        sub edx, edi
        cmp edx, 10h
        ; Exact mapped bytes 7E 0C: jle 0x587e580c
        __asm _emit 0x7e
        __asm _emit 0x0c
        add edi, 10h
        push edi
        ; Exact mapped bytes E8 D7 D4 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes EB 0F: jmp 0x587e581b
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 100h
        ; Exact mapped bytes E8 CA D4 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        push 100h
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes E8 BA D4 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 0B: jne 0x587e5840
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov edx, dword ptr [esi + 350h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 5B: je 0x587e58a9
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [esi + 350h]
        mov edi, dword ptr [ecx + 28h]
        test edi, edi
        ; Exact mapped bytes 74 4E: je 0x587e58a9
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp edi, 10h
        ; Exact mapped bytes 7E 17: jle 0x587e5877
        __asm _emit 0x7e
        __asm _emit 0x17
        sub edi, 10h
        push edi
        ; Exact mapped bytes E8 77 D4 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 354h]
        push edi
        ; Exact mapped bytes E8 6B D4 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x587e58a9
        __asm _emit 0xeb
        __asm _emit 0x32
        push 0
        ; Exact mapped bytes E8 62 D4 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 350h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 354h]
        push 0
        ; Exact mapped bytes E8 46 D4 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 354h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        cmp dword ptr [esi + 1050h], 0
        ; Exact mapped bytes 0F 84 67 00 00 00: je 0x587e591d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 73 E9 FF FF: call 0x587e4230
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5E: jmp 0x587e591d
        __asm _emit 0xeb
        __asm _emit 0x5e
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 0d00h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 48: jne 0x587e591d
        __asm _emit 0x75
        __asm _emit 0x48
        cmp dword ptr [esi + 0e04h], 64h
        ; Exact mapped bytes 75 3F: jne 0x587e591d
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [esi + 0dfch]
        push -1
        push eax
        ; Exact mapped bytes FF 15 28 C1 98 58: call dword ptr [0x5898c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0dfch]
        push ecx
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 12ch
        ; Exact mapped bytes E8 96 B4 0D 00: call 0x588c0da0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 5C 45 A2 58 00 00 00 00: mov dword ptr [0x58a2455c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop ebp
        pop ebx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x587e593b
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x587e593e
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x587e5926
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
