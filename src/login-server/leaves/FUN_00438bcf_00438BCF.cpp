// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438BCF .. +0x46B bytes.
extern "C" __declspec(naked) void FUN_00438bcf_00438BCF() {
    __asm {
        mov eax, 43b1c9h
        ; Exact mapped bytes E8 2F 6A FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 60h
        push ebx
        mov ebx, ecx
        push esi
        push edi
        cmp dword ptr [ebx], 0
        mov dword ptr [ebp - 28h], ebx
        ; Exact mapped bytes 0F 84 39 04 00 00: je 0x439026
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea eax, [ebp - 4ch]
        push 0
        push eax
        ; Exact mapped bytes E8 E6 5E FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 18h]
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 74 0C: je 0x438c10
        __asm _emit 0x74
        __asm _emit 0x0c
        push edi
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 03: jmp 0x438c13
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 44h]
        test byte ptr [ebp + 0ch], 0ch
        mov dword ptr [ebp - 1ch], 0fffffffdh
        ; Exact mapped bytes 74 0D: je 0x438c2d
        __asm _emit 0x74
        __asm _emit 0x0d
        lea ecx, [ebp - 1ch]
        mov dword ptr [ebp - 40h], 1
        mov dword ptr [ebp - 48h], ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 03 02 00 00: je 0x438e38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 AE 4C FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 44h]
        shl eax, 4
        push eax
        push 0
        push esi
        mov dword ptr [ebp - 4ch], esi
        ; Exact mapped bytes E8 8E 5E FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        add esp, 10h
        shl eax, 4
        cmp byte ptr [edi], 0
        mov dword ptr [ebp - 14h], edi
        lea esi, [eax + esi - 10h]
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 0F 84 CA 01 00 00: je 0x438e38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add esi, 8
        push 4
        mov dword ptr [ebp - 18h], esi
        lea ebx, [eax - 4]
        add eax, -8
        mov dword ptr [ebp + 1ch], eax
        pop edi
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 0F B6 00: movzx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x00
        test al, 40h
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 74 0A: je 0x438c9e
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 25 BF FF: and ax, 0xffbf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xbf
        __asm _emit 0xff
        or ah, 40h
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        movzx eax, word ptr [ecx]
        mov ecx, 4002h
        cmp eax, ecx
        ; Exact mapped bytes 0F 8F 38 01 00 00: jg 0x438de6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 5B 01 00 00: je 0x438e0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, -2
        cmp eax, 0fh
        ; Exact mapped bytes 0F 87 59 01 00 00: ja 0x438e19
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 3A 90 43 00: jmp dword ptr [eax*4 + 0x43903a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x00
        add dword ptr [ebp + 1ch], edi
        mov al, byte ptr [ebx + edi]
        add ebx, edi
        mov byte ptr [esi], al
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x438e19
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [ebp + 1ch], edi
        ; Exact mapped bytes 66 8B 04 3B: mov ax, word ptr [ebx + edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x3b
        add ebx, edi
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x438e19
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [ebp + 1ch], 8
        add ebx, 8
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes D9 1E: fstp dword ptr [esi]
        __asm _emit 0xd9
        __asm _emit 0x1e
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x438e19
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [ebp + 1ch], 8
        add ebx, 8
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DD 1E: fstp qword ptr [esi]
        __asm _emit 0xdd
        __asm _emit 0x1e
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x438e19
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [ebp + 1ch], edi
        mov eax, dword ptr [ebx + edi]
        add ebx, edi
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x438e19
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + edi]
        add dword ptr [ebp + 1ch], edi
        add ebx, edi
        push eax
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes FF 15 50 C3 43 00: call dword ptr [0x43c350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        mov dword ptr [esi], eax
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x438e19
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x438e19
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D2 3F FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x438e19
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + edi]
        add dword ptr [ebp + 1ch], edi
        add ebx, edi
        mov dword ptr [ebp - 18h], eax
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x438d9a
        __asm _emit 0x74
        __asm _emit 0x37
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        inc eax
        mov dword ptr [ebp - 20h], eax
        add eax, eax
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 84 61 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esp
        push dword ptr [ebp - 20h]
        xor ecx, ecx
        mov dword ptr [ebp - 24h], eax
        push eax
        push -1
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        push ecx
        push ecx
        ; Exact mapped bytes FF 15 90 C2 43 00: call dword ptr [0x43c290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 50 C3 43 00: call dword ptr [0x43c350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        mov dword ptr [esi], eax
        ; Exact mapped bytes 74 09: je 0x438db2
        __asm _emit 0x74
        __asm _emit 0x09
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x438db2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 6F 3F FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 00 08 00: mov word ptr [eax], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 5D: jmp 0x438e19
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov eax, dword ptr [ebx + edi]
        add dword ptr [ebp + 1ch], edi
        add ebx, edi
        neg eax
        sbb eax, eax
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x438cdf
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [ebp + 1ch], 4
        mov esi, dword ptr [ebx + 4]
        mov edi, dword ptr [ebp - 10h]
        add ebx, 4
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov esi, dword ptr [ebp - 18h]
        push 4
        pop edi
        ; Exact mapped bytes EB 33: jmp 0x438e19
        __asm _emit 0xeb
        __asm _emit 0x33
        add eax, 0ffffbffdh
        cmp eax, 0eh
        ; Exact mapped bytes 77 29: ja 0x438e19
        __asm _emit 0x77
        __asm _emit 0x29
        ; Exact mapped bytes FF 24 85 7A 90 43 00: jmp dword ptr [eax*4 + 0x43907a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebx + edi]
        add dword ptr [ebp + 1ch], edi
        add ebx, edi
        mov ecx, dword ptr [eax]
        neg ecx
        sbb ecx, ecx
        and ecx, 0ffffh
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 08: jmp 0x438e17
        __asm _emit 0xeb
        __asm _emit 0x08
        add dword ptr [ebp + 1ch], edi
        mov eax, dword ptr [ebx + edi]
        add ebx, edi
        mov dword ptr [esi], eax
        sub dword ptr [ebp - 10h], 10h
        sub esi, 10h
        inc dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], esi
        mov eax, dword ptr [ebp - 14h]
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 0F 85 51 FE FF FF: jne 0x438c83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 28h]
        mov edi, dword ptr [ebp + 18h]
        lea eax, [ebp - 3ch]
        xor esi, esi
        push eax
        ; Exact mapped bytes E8 C7 EB FD FF: call 0x417a0a
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 39 75 10: cmp word ptr [ebp + 0x10], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 74 03: je 0x438e4c
        __asm _emit 0x74
        __asm _emit 0x03
        lea esi, [ebp - 3ch]
        push 20h
        lea eax, [ebp - 6ch]
        push 0
        push eax
        ; Exact mapped bytes E8 87 5C FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        lea edx, [ebp - 2ch]
        mov eax, dword ptr [ebx]
        or dword ptr [ebp - 2ch], 0ffffffffh
        push edx
        lea edx, [ebp - 6ch]
        push edx
        lea edx, [ebp - 4ch]
        push esi
        push edx
        push dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push 0
        push 440448h
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp + 18h], eax
        mov eax, dword ptr [ebp - 44h]
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x438eb7
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4ch]
        mov esi, edi
        shl eax, 4
        cmp byte ptr [edi], 0
        lea ebx, [eax + ecx - 10h]
        ; Exact mapped bytes 74 1A: je 0x438eb7
        __asm _emit 0x74
        __asm _emit 0x1a
        mov al, byte ptr [esi]
        cmp al, 8
        ; Exact mapped bytes 74 04: je 0x438ea7
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 0eh
        ; Exact mapped bytes 75 07: jne 0x438eae
        __asm _emit 0x75
        __asm _emit 0x07
        push ebx
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        sub ebx, 10h
        inc esi
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 E6: jne 0x438e9d
        __asm _emit 0x75
        __asm _emit 0xe6
        push dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 56 4A FF FF: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        pop ecx
        cmp dword ptr [ebp + 18h], ebx
        ; Exact mapped bytes 0F 8D B1 00 00 00: jge 0x438f7c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 80020009h
        ; Exact mapped bytes 74 08: je 0x438ee6
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 D0 E8 FF FF: call 0x4377b6
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 54h], ebx
        ; Exact mapped bytes 74 07: je 0x438ef2
        __asm _emit 0x74
        __asm _emit 0x07
        lea eax, [ebp - 6ch]
        push eax
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        push 20h
        ; Exact mapped bytes E8 F3 49 FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp + 14h], eax
        cmp eax, ebx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 10: je 0x438f14
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ebp - 6ch]
        mov ecx, eax
        push ebx
        push ebx
        ; Exact mapped bytes E8 CF FB FF FF: call 0x438adf
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x438f16
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        or dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 68h], ebx
        ; Exact mapped bytes 8B 3D 44 C3 43 00: mov edi, dword ptr [0x43c344]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x438f35
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ebp - 68h]
        lea ecx, [esi + 18h]
        ; Exact mapped bytes E8 2B 4E FF FF: call 0x42dd5b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 68h]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [ebp - 64h], ebx
        ; Exact mapped bytes 74 10: je 0x438f4a
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ebp - 64h]
        lea ecx, [esi + 0ch]
        ; Exact mapped bytes E8 16 4E FF FF: call 0x42dd5b
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 64h]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [ebp - 60h], ebx
        ; Exact mapped bytes 74 10: je 0x438f5f
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ebp - 60h]
        lea ecx, [esi + 14h]
        ; Exact mapped bytes E8 01 4E FF FF: call 0x42dd5b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 60h]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 5ch]
        push 4457c0h
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [esi + 1ch], eax
        lea eax, [ebp + 14h]
        push eax
        mov dword ptr [ebp + 14h], esi
        ; Exact mapped bytes E8 AB 66 FE FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x439026
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 0C: cmp di, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 74 26: je 0x438fb4
        __asm _emit 0x74
        __asm _emit 0x26
        push edi
        lea eax, [ebp - 3ch]
        push ebx
        push eax
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes FF 15 58 C3 43 00: call dword ptr [0x43c358]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        cmp esi, ebx
        ; Exact mapped bytes 7D 10: jge 0x438fb4
        __asm _emit 0x7d
        __asm _emit 0x10
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 02 E8 FF FF: call 0x4377b6
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, di
        add eax, -2
        cmp eax, 0fh
        ; Exact mapped bytes 77 67: ja 0x439026
        __asm _emit 0x77
        __asm _emit 0x67
        ; Exact mapped bytes FF 24 85 B6 90 43 00: jmp dword ptr [eax*4 + 0x4390b6]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov cl, byte ptr [ebp - 34h]
        mov byte ptr [eax], cl
        ; Exact mapped bytes EB 56: jmp 0x439026
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 4D CC: mov cx, word ptr [ebp - 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes EB 4A: jmp 0x439026
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 3A: jmp 0x439026
        __asm _emit 0xeb
        __asm _emit 0x3a
        push dword ptr [ebp - 34h]
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 5E E6 FF FF: call 0x437655
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 15 44 C3 43 00: call dword ptr [0x43c344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x439026
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 14h]
        xor eax, eax
        ; Exact mapped bytes 66 39 5D CC: cmp word ptr [ebp - 0x34], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0xcc
        setne al
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 14: jmp 0x439026
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edi, dword ptr [ebp + 14h]
        lea esi, [ebp - 3ch]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes EB 08: jmp 0x439026
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 0ch]
        lea esp, [ebp - 78h]
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
        pop ebx
        leave
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
