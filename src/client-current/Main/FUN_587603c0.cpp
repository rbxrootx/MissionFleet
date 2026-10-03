// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 2909 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587603C0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_587603c0_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [eax + 8]
        sub esp, 10h
        push ebx
        push ebp
        push esi
        lea eax, [edx - 10h]
        push edi
        mov esi, ecx
        cmp eax, 1eh
        ; Exact mapped bytes 0F 87 50 0B 00 00: ja 0x58760f2c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 58760f64h]
        ; Exact mapped bytes FF 24 8D 3C 0F 76 58: jmp dword ptr [ecx*4 + 0x58760f3c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0x58
        cmp dword ptr [esi + 94h], 0
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x5876056c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [esi + 94h], eax
        ; Exact mapped bytes 7E 37: jle 0x58760438
        __asm _emit 0x7e
        __asm _emit 0x37
        mov edx, dword ptr [esi + 80h]
        test byte ptr [edx + eax], 80h
        ; Exact mapped bytes 74 17: je 0x58760424
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, 1
        ; Exact mapped bytes 7E 0C: jle 0x58760424
        __asm _emit 0x7e
        __asm _emit 0x0c
        add ecx, -2
        cmp ecx, eax
        ; Exact mapped bytes 74 19: je 0x58760438
        __asm _emit 0x74
        __asm _emit 0x19
        add eax, 2
        ; Exact mapped bytes EB 0C: jmp 0x58760430
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 94h]
        dec ecx
        cmp ecx, eax
        ; Exact mapped bytes 74 09: je 0x58760438
        __asm _emit 0x74
        __asm _emit 0x09
        inc eax
        cmp eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 7C CF: jl 0x58760407
        __asm _emit 0x7c
        __asm _emit 0xcf
        cmp dword ptr [esi + 98h], eax
        mov dword ptr [esi + 94h], eax
        mov dword ptr [esi + 0e4h], 0
        ; Exact mapped bytes 7E 06: jle 0x58760456
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 98h], eax
        cmp dword ptr [esi + 108h], 0
        ; Exact mapped bytes 74 0C: je 0x5876046b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [esi + 0e8h], 1
        ; Exact mapped bytes EB 43: jmp 0x587604ae
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 50h]
        mov edi, dword ptr [ecx]
        sub eax, edx
        lea ebx, [esp + 10h]
        push ebx
        push eax
        mov eax, dword ptr [esi + 80h]
        add eax, edx
        mov edx, dword ptr [edi + 4]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esi + 0f4h], eax
        mov dword ptr [esi + 0f0h], eax
        mov eax, dword ptr [esi + 94h]
        mov dword ptr [esi + 0fch], eax
        mov dword ptr [esi + 0f8h], eax
        cmp dword ptr [esi + 0e8h], 0
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x5876056c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esi + 80h]
        xor edi, edi
        cmp byte ptr [ecx + eax], 0
        ; Exact mapped bytes 7D 09: jge 0x587604d8
        __asm _emit 0x7d
        __asm _emit 0x09
        add dword ptr [esi + 0fch], -2
        ; Exact mapped bytes EB 06: jmp 0x587604de
        __asm _emit 0xeb
        __asm _emit 0x06
        dec dword ptr [esi + 0fch]
        mov edx, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 50h]
        mov ebx, dword ptr [ecx]
        sub eax, edx
        lea ebp, [esp + 10h]
        push ebp
        push eax
        mov eax, dword ptr [esi + 80h]
        add edx, eax
        mov eax, dword ptr [ebx + 4]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + 0f8h]
        mov dword ptr [esi + 0f4h], ecx
        mov ecx, dword ptr [esi + 0fch]
        cmp eax, ecx
        ; Exact mapped bytes 7E 2F: jle 0x58760548
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov eax, ecx
        ; Exact mapped bytes EB 03: jmp 0x58760520
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760520 .. +0x824 bytes.
extern "C" __declspec(naked) void FUN_587603c0_segment_01() {
    __asm {
        mov edx, dword ptr [esi + 80h]
        mov dl, byte ptr [eax + edx]
        mov ecx, dword ptr [esi + 100h]
        mov byte ptr [edi + ecx], dl
        inc eax
        inc edi
        cmp eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 7C E4: jl 0x58760520
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 22: jge 0x5876056c
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov cl, byte ptr [eax + ecx]
        mov edx, dword ptr [esi + 100h]
        mov byte ptr [edi + edx], cl
        inc eax
        inc edi
        cmp eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 7C E4: jl 0x58760550
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8ch]
        add edx, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 94h]
        cmp eax, edx
        ; Exact mapped bytes 0F 8D AA 01 00 00: jge 0x5876073c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 0F 84 9E 01 00 00: je 0x5876073c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 80h]
        xor ebx, ebx
        cmp byte ptr [edx + eax], bl
        ; Exact mapped bytes 0F 84 8D 01 00 00: je 0x5876073c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [edx + eax], 80h
        mov dword ptr [esi + 0e4h], ebx
        ; Exact mapped bytes 74 05: je 0x587605c0
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 01: jmp 0x587605c1
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esi + 98h]
        mov edi, dword ptr [ecx]
        lea ebp, [esp + 10h]
        push ebp
        mov ebp, dword ptr [esi + 94h]
        sub ebp, eax
        add eax, edx
        push ebp
        push eax
        mov eax, dword ptr [edi + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 1ch]
        add edx, dword ptr [esp + 10h]
        sub eax, dword ptr [esi + 14h]
        cmp edx, eax
        ; Exact mapped bytes 7C 50: jl 0x5876064c
        __asm _emit 0x7c
        __asm _emit 0x50
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov edx, dword ptr [esi + 80h]
        cmp byte ptr [eax + edx], bl
        ; Exact mapped bytes 7D 05: jge 0x58760616
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 01: jmp 0x58760617
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov ecx, dword ptr [esi + 50h]
        lea ebp, [esp + 10h]
        push ebp
        mov ebp, dword ptr [esi + 94h]
        sub ebp, eax
        mov dword ptr [esi + 98h], eax
        mov edi, dword ptr [ecx]
        add eax, edx
        mov edx, dword ptr [edi + 4]
        push ebp
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [esi + 1ch]
        add ecx, dword ptr [esp + 10h]
        sub edx, dword ptr [esi + 14h]
        cmp ecx, edx
        ; Exact mapped bytes 7D B4: jge 0x58760600
        __asm _emit 0x7d
        __asm _emit 0xb4
        cmp dword ptr [esi + 108h], ebx
        ; Exact mapped bytes 74 0C: je 0x58760660
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [esi + 0e8h], 1
        ; Exact mapped bytes EB 49: jmp 0x587606a9
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        lea edi, [esp + 18h]
        push edi
        mov edi, dword ptr [esi + 94h]
        sub edi, eax
        push edi
        mov edi, dword ptr [esi + 80h]
        add edi, eax
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [esi + 0f4h], eax
        mov dword ptr [esi + 0f0h], eax
        mov eax, dword ptr [esi + 94h]
        mov dword ptr [esi + 0fch], eax
        mov dword ptr [esi + 0f8h], eax
        cmp dword ptr [esi + 0e8h], ebx
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5876073c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0fch]
        mov edx, dword ptr [esi + 80h]
        xor ecx, ecx
        cmp byte ptr [eax + edx], bl
        ; Exact mapped bytes 7D 05: jge 0x587606cd
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 01: jmp 0x587606ce
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov dword ptr [esi + 0fch], eax
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi + 0fch]
        mov dword ptr [esi + 0f4h], eax
        mov eax, dword ptr [esi + 0f8h]
        cmp eax, edx
        ; Exact mapped bytes 7E 2A: jle 0x58760718
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov eax, edx
        mov edx, dword ptr [esi + 80h]
        mov dl, byte ptr [eax + edx]
        mov edi, dword ptr [esi + 100h]
        mov byte ptr [ecx + edi], dl
        inc eax
        inc ecx
        cmp eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 7C E4: jl 0x587606f0
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 22: jge 0x5876073c
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 80h]
        mov dl, byte ptr [eax + edx]
        mov edi, dword ptr [esi + 100h]
        mov byte ptr [ecx + edi], dl
        inc eax
        inc ecx
        cmp eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 7C E4: jl 0x58760720
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C0 45 A2 58: mov edi, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edi + 5fch], -1
        mov ebp, 1
        ; Exact mapped bytes 0F 85 2F 01 00 00: jne 0x5876088f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 26h
        ; Exact mapped bytes 74 09: je 0x5876076e
        __asm _emit 0x74
        __asm _emit 0x09
        cmp edx, 28h
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x5876088f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 30h]
        cmp eax, edi
        ; Exact mapped bytes 75 08: jne 0x5876077d
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [edi + 150h]
        ; Exact mapped bytes EB 14: jmp 0x58760791
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x5876088f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 20d30h]
        test eax, eax
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x5876088f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 80h]
        mov dl, byte ptr [eax]
        mov bl, 77h
        cmp dl, 2fh
        ; Exact mapped bytes 75 32: jne 0x587607da
        __asm _emit 0x75
        __asm _emit 0x32
        cmp byte ptr [eax + 1], bl
        ; Exact mapped bytes 74 6F: je 0x5876081c
        __asm _emit 0x74
        __asm _emit 0x6f
        cmp dl, dl
        ; Exact mapped bytes 75 29: jne 0x587607da
        __asm _emit 0x75
        __asm _emit 0x29
        cmp byte ptr [eax + 1], bl
        ; Exact mapped bytes 75 24: jne 0x587607da
        __asm _emit 0x75
        __asm _emit 0x24
        cmp byte ptr [eax + 2], 68h
        ; Exact mapped bytes 75 1E: jne 0x587607da
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp byte ptr [eax + 3], 69h
        ; Exact mapped bytes 75 18: jne 0x587607da
        __asm _emit 0x75
        __asm _emit 0x18
        cmp byte ptr [eax + 4], 73h
        ; Exact mapped bytes 75 12: jne 0x587607da
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 5], 70h
        ; Exact mapped bytes 75 0C: jne 0x587607da
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp byte ptr [eax + 6], 65h
        ; Exact mapped bytes 75 06: jne 0x587607da
        __asm _emit 0x75
        __asm _emit 0x06
        cmp byte ptr [eax + 7], 72h
        ; Exact mapped bytes 74 42: je 0x5876081c
        __asm _emit 0x74
        __asm _emit 0x42
        mov cl, 0b8h
        cmp dl, 2fh
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x5876088f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 1], 0a4h
        ; Exact mapped bytes 75 05: jne 0x587607f0
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [eax + 2], cl
        ; Exact mapped bytes 74 2C: je 0x5876081c
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dl, 2fh
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x5876088f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 1], 0b1h
        ; Exact mapped bytes 75 29: jne 0x58760828
        __asm _emit 0x75
        __asm _emit 0x29
        mov bl, 0d3h
        cmp byte ptr [eax + 2], bl
        ; Exact mapped bytes 75 22: jne 0x58760828
        __asm _emit 0x75
        __asm _emit 0x22
        cmp byte ptr [eax + 3], 0bch
        ; Exact mapped bytes 75 1C: jne 0x58760828
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp byte ptr [eax + 4], bl
        ; Exact mapped bytes 75 17: jne 0x58760828
        __asm _emit 0x75
        __asm _emit 0x17
        cmp byte ptr [eax + 5], cl
        ; Exact mapped bytes 75 12: jne 0x58760828
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 6], 0bbh
        ; Exact mapped bytes 75 0C: jne 0x58760828
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [edi + 5fch], 0
        ; Exact mapped bytes EB 61: jmp 0x58760889
        __asm _emit 0xeb
        __asm _emit 0x61
        cmp dl, 2fh
        ; Exact mapped bytes 75 62: jne 0x5876088f
        __asm _emit 0x75
        __asm _emit 0x62
        cmp byte ptr [eax + 1], 72h
        ; Exact mapped bytes 74 50: je 0x58760883
        __asm _emit 0x74
        __asm _emit 0x50
        cmp dl, dl
        ; Exact mapped bytes 75 58: jne 0x5876088f
        __asm _emit 0x75
        __asm _emit 0x58
        cmp byte ptr [eax + 1], 72h
        ; Exact mapped bytes 75 18: jne 0x58760855
        __asm _emit 0x75
        __asm _emit 0x18
        cmp byte ptr [eax + 2], 65h
        ; Exact mapped bytes 75 12: jne 0x58760855
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 3], 70h
        ; Exact mapped bytes 75 0C: jne 0x58760855
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp byte ptr [eax + 4], 6ch
        ; Exact mapped bytes 75 06: jne 0x58760855
        __asm _emit 0x75
        __asm _emit 0x06
        cmp byte ptr [eax + 5], 79h
        ; Exact mapped bytes 74 2E: je 0x58760883
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dl, 2fh
        ; Exact mapped bytes 75 35: jne 0x5876088f
        __asm _emit 0x75
        __asm _emit 0x35
        cmp byte ptr [eax + 1], 0a4h
        ; Exact mapped bytes 75 06: jne 0x58760866
        __asm _emit 0x75
        __asm _emit 0x06
        cmp byte ptr [eax + 2], 0a1h
        ; Exact mapped bytes 74 1D: je 0x58760883
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dl, 2fh
        ; Exact mapped bytes 75 24: jne 0x5876088f
        __asm _emit 0x75
        __asm _emit 0x24
        cmp byte ptr [eax + 1], 0b4h
        ; Exact mapped bytes 75 1E: jne 0x5876088f
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp byte ptr [eax + 2], 0e4h
        ; Exact mapped bytes 75 18: jne 0x5876088f
        __asm _emit 0x75
        __asm _emit 0x18
        cmp byte ptr [eax + 3], 0c0h
        ; Exact mapped bytes 75 12: jne 0x5876088f
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 4], 0e5h
        ; Exact mapped bytes 75 0C: jne 0x5876088f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [edi + 5fch], ebp
        ; Exact mapped bytes 8B 3D C0 45 A2 58: mov edi, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [esi + 30h]
        cmp esi, edi
        ; Exact mapped bytes 74 08: je 0x5876089e
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 3B 35 9C 45 A2 58: cmp esi, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 3B: jne 0x587608d9
        __asm _emit 0x75
        __asm _emit 0x3b
        cmp dword ptr [edi + 5fch], ebp
        ; Exact mapped bytes 75 18: jne 0x587608be
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, edi
        ; Exact mapped bytes E8 23 C4 12 00: call 0x5888ccd0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 D0 12 00: call 0x5888d9b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C0 45 A2 58: mov edi, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edi + 5fch], 0
        ; Exact mapped bytes 75 12: jne 0x587608d9
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, edi
        ; Exact mapped bytes E8 92 C4 12 00: call 0x5888cd60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 D1 12 00: call 0x5888dad0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd1
        __asm _emit 0x12
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C0 45 A2 58: mov edi, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edi + 5fch], -1
        mov ebp, 1
        ; Exact mapped bytes 0F 85 2F 01 00 00: jne 0x58760a2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 26h
        ; Exact mapped bytes 74 09: je 0x5876090b
        __asm _emit 0x74
        __asm _emit 0x09
        cmp edx, 28h
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x58760a2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 30h]
        cmp eax, edi
        ; Exact mapped bytes 75 08: jne 0x5876091a
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [edi + 150h]
        ; Exact mapped bytes EB 14: jmp 0x5876092e
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x58760a2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 20d30h]
        test eax, eax
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x58760a2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 80h]
        mov dl, byte ptr [eax]
        mov bl, 77h
        cmp dl, 2fh
        ; Exact mapped bytes 75 32: jne 0x58760977
        __asm _emit 0x75
        __asm _emit 0x32
        cmp byte ptr [eax + 1], bl
        ; Exact mapped bytes 74 6F: je 0x587609b9
        __asm _emit 0x74
        __asm _emit 0x6f
        cmp dl, dl
        ; Exact mapped bytes 75 29: jne 0x58760977
        __asm _emit 0x75
        __asm _emit 0x29
        cmp byte ptr [eax + 1], bl
        ; Exact mapped bytes 75 24: jne 0x58760977
        __asm _emit 0x75
        __asm _emit 0x24
        cmp byte ptr [eax + 2], 68h
        ; Exact mapped bytes 75 1E: jne 0x58760977
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp byte ptr [eax + 3], 69h
        ; Exact mapped bytes 75 18: jne 0x58760977
        __asm _emit 0x75
        __asm _emit 0x18
        cmp byte ptr [eax + 4], 73h
        ; Exact mapped bytes 75 12: jne 0x58760977
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 5], 70h
        ; Exact mapped bytes 75 0C: jne 0x58760977
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp byte ptr [eax + 6], 65h
        ; Exact mapped bytes 75 06: jne 0x58760977
        __asm _emit 0x75
        __asm _emit 0x06
        cmp byte ptr [eax + 7], 72h
        ; Exact mapped bytes 74 42: je 0x587609b9
        __asm _emit 0x74
        __asm _emit 0x42
        mov cl, 0b8h
        cmp dl, 2fh
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x58760a2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 1], 0a4h
        ; Exact mapped bytes 75 05: jne 0x5876098d
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [eax + 2], cl
        ; Exact mapped bytes 74 2C: je 0x587609b9
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dl, 2fh
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x58760a2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 1], 0b1h
        ; Exact mapped bytes 75 29: jne 0x587609c5
        __asm _emit 0x75
        __asm _emit 0x29
        mov bl, 0d3h
        cmp byte ptr [eax + 2], bl
        ; Exact mapped bytes 75 22: jne 0x587609c5
        __asm _emit 0x75
        __asm _emit 0x22
        cmp byte ptr [eax + 3], 0bch
        ; Exact mapped bytes 75 1C: jne 0x587609c5
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp byte ptr [eax + 4], bl
        ; Exact mapped bytes 75 17: jne 0x587609c5
        __asm _emit 0x75
        __asm _emit 0x17
        cmp byte ptr [eax + 5], cl
        ; Exact mapped bytes 75 12: jne 0x587609c5
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 6], 0bbh
        ; Exact mapped bytes 75 0C: jne 0x587609c5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [edi + 5fch], 0
        ; Exact mapped bytes EB 61: jmp 0x58760a26
        __asm _emit 0xeb
        __asm _emit 0x61
        cmp dl, 2fh
        ; Exact mapped bytes 75 62: jne 0x58760a2c
        __asm _emit 0x75
        __asm _emit 0x62
        cmp byte ptr [eax + 1], 72h
        ; Exact mapped bytes 74 50: je 0x58760a20
        __asm _emit 0x74
        __asm _emit 0x50
        cmp dl, dl
        ; Exact mapped bytes 75 58: jne 0x58760a2c
        __asm _emit 0x75
        __asm _emit 0x58
        cmp byte ptr [eax + 1], 72h
        ; Exact mapped bytes 75 18: jne 0x587609f2
        __asm _emit 0x75
        __asm _emit 0x18
        cmp byte ptr [eax + 2], 65h
        ; Exact mapped bytes 75 12: jne 0x587609f2
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 3], 70h
        ; Exact mapped bytes 75 0C: jne 0x587609f2
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp byte ptr [eax + 4], 6ch
        ; Exact mapped bytes 75 06: jne 0x587609f2
        __asm _emit 0x75
        __asm _emit 0x06
        cmp byte ptr [eax + 5], 79h
        ; Exact mapped bytes 74 2E: je 0x58760a20
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dl, 2fh
        ; Exact mapped bytes 75 35: jne 0x58760a2c
        __asm _emit 0x75
        __asm _emit 0x35
        cmp byte ptr [eax + 1], 0a4h
        ; Exact mapped bytes 75 06: jne 0x58760a03
        __asm _emit 0x75
        __asm _emit 0x06
        cmp byte ptr [eax + 2], 0a1h
        ; Exact mapped bytes 74 1D: je 0x58760a20
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dl, 2fh
        ; Exact mapped bytes 75 24: jne 0x58760a2c
        __asm _emit 0x75
        __asm _emit 0x24
        cmp byte ptr [eax + 1], 0b4h
        ; Exact mapped bytes 75 1E: jne 0x58760a2c
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp byte ptr [eax + 2], 0e4h
        ; Exact mapped bytes 75 18: jne 0x58760a2c
        __asm _emit 0x75
        __asm _emit 0x18
        cmp byte ptr [eax + 3], 0c0h
        ; Exact mapped bytes 75 12: jne 0x58760a2c
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 4], 0e5h
        ; Exact mapped bytes 75 0C: jne 0x58760a2c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [edi + 5fch], ebp
        ; Exact mapped bytes 8B 3D C0 45 A2 58: mov edi, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [esi + 30h]
        cmp esi, edi
        ; Exact mapped bytes 74 0C: je 0x58760a3f
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 35 9C 45 A2 58: cmp esi, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 9A FE FF FF: jne 0x587608d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [edi + 5fch], ebp
        ; Exact mapped bytes 75 18: jne 0x58760a5f
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, edi
        ; Exact mapped bytes E8 D2 C2 12 00: call 0x5888cd20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc2
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 CF 12 00: call 0x5888d9b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcf
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C0 45 A2 58: mov edi, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edi + 5fch], 0
        ; Exact mapped bytes 0F 85 6D FE FF FF: jne 0x587608d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 3D C3 12 00: call 0x5888cdb0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc3
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 D0 12 00: call 0x5888dad0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0x12
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 0e8h], 0
        ; Exact mapped bytes 75 49: jne 0x58760adc
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        lea edi, [esp + 18h]
        push edi
        mov edi, dword ptr [esi + 94h]
        sub edi, eax
        push edi
        mov edi, dword ptr [esi + 80h]
        add edi, eax
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [esi + 0f4h], eax
        mov dword ptr [esi + 0f0h], eax
        mov eax, dword ptr [esi + 94h]
        mov dword ptr [esi + 0fch], eax
        mov dword ptr [esi + 0f8h], eax
        mov eax, dword ptr [esi + 34h]
        pop edi
        mov dword ptr [esi + 108h], 1
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 0ech], 0
        ; Exact mapped bytes 0F 85 2C 04 00 00: jne 0x58760f2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        mov dword ptr [esi + 0ech], 1
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        mov edx, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 94h]
        lea edi, [edx + ecx]
        xor ebx, ebx
        cmp eax, edi
        ; Exact mapped bytes 0F 8D C9 00 00 00: jge 0x58760bff
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0fch]
        cmp edi, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x58760bff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 80h]
        test byte ptr [eax + edi], 80h
        ; Exact mapped bytes 74 61: je 0x58760bb5
        __asm _emit 0x74
        __asm _emit 0x61
        cmp edx, 2
        ; Exact mapped bytes 7C 0B: jl 0x58760b64
        __asm _emit 0x7c
        __asm _emit 0x0b
        add edx, -2
        mov dword ptr [esi + 84h], edx
        ; Exact mapped bytes EB 20: jmp 0x58760b84
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp edx, ebx
        ; Exact mapped bytes 74 0E: je 0x58760b76
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x58760b76
        __asm _emit 0x74
        __asm _emit 0x0a
        dec edx
        mov dword ptr [esi + 84h], edx
        dec ecx
        ; Exact mapped bytes EB 08: jmp 0x58760b7e
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp ecx, 2
        ; Exact mapped bytes 7C 09: jl 0x58760b84
        __asm _emit 0x7c
        __asm _emit 0x09
        add ecx, -2
        mov dword ptr [esi + 8ch], ecx
        mov ecx, dword ptr [esi + 84h]
        add ecx, dword ptr [esi + 8ch]
        cmp eax, ecx
        ; Exact mapped bytes 7F 6B: jg 0x58760bff
        __asm _emit 0x7f
        __asm _emit 0x6b
        mov edx, dword ptr [esi + 80h]
        lea ecx, [edx + eax]
        mov dl, byte ptr [ecx + 2]
        mov byte ptr [ecx], dl
        mov ecx, dword ptr [esi + 84h]
        add ecx, dword ptr [esi + 8ch]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7E E1: jle 0x58760b94
        __asm _emit 0x7e
        __asm _emit 0xe1
        ; Exact mapped bytes EB 4A: jmp 0x58760bff
        __asm _emit 0xeb
        __asm _emit 0x4a
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x58760bc2
        __asm _emit 0x74
        __asm _emit 0x09
        dec ecx
        mov dword ptr [esi + 8ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58760bcd
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp edx, ebx
        ; Exact mapped bytes 74 07: je 0x58760bcd
        __asm _emit 0x74
        __asm _emit 0x07
        dec edx
        mov dword ptr [esi + 84h], edx
        mov edx, dword ptr [esi + 84h]
        add edx, dword ptr [esi + 8ch]
        cmp eax, edx
        ; Exact mapped bytes 7F 22: jg 0x58760bff
        __asm _emit 0x7f
        __asm _emit 0x22
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov dl, byte ptr [ecx + eax + 1]
        add ecx, eax
        mov byte ptr [ecx], dl
        mov ecx, dword ptr [esi + 84h]
        add ecx, dword ptr [esi + 8ch]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7E E1: jle 0x58760be0
        __asm _emit 0x7e
        __asm _emit 0xe1
        mov ecx, dword ptr [esi + 0fch]
        mov edx, dword ptr [esi + 0f8h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 19 03 00 00: je 0x58760f2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        cmp edx, ecx
        ; Exact mapped bytes 7D 06: jge 0x58760c1f
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, edx
        mov edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x58760c21
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ecx
        mov edi, dword ptr [esi + 84h]
        add edi, dword ptr [esi + 8ch]
        mov ecx, edx
        cmp edx, edi
        ; Exact mapped bytes 7D 2B: jge 0x58760c5e
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov edi, dword ptr [esi + 80h]
        lea ebx, [edi + eax]
        mov dword ptr [esp + 24h], eax
        mov al, byte ptr [edi + ecx]
        mov byte ptr [ebx + ebp], al
        mov edi, dword ptr [esi + 84h]
        add edi, dword ptr [esi + 8ch]
        mov eax, dword ptr [esp + 24h]
        inc ecx
        inc ebp
        cmp ecx, edi
        ; Exact mapped bytes 7C D7: jl 0x58760c33
        __asm _emit 0x7c
        __asm _emit 0xd7
        xor ebx, ebx
        mov ecx, dword ptr [esi + 80h]
        add ecx, eax
        mov byte ptr [ecx + ebp], bl
        mov ecx, eax
        sub ecx, edx
        mov edx, dword ptr [esi + 90h]
        add dword ptr [esi + 8ch], ecx
        inc edx
        push edx
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esi + 100h]
        push ebx
        push eax
        mov dword ptr [esi + 0fch], ebx
        mov dword ptr [esi + 0f8h], ebx
        mov dword ptr [esi + 0f4h], ebx
        mov dword ptr [esi + 0f0h], ebx
        ; Exact mapped bytes E8 A2 BF 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbf
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        mov edx, dword ptr [esi + 8ch]
        lea eax, [ecx + edx]
        add esp, 0ch
        cmp dword ptr [esi + 94h], eax
        ; Exact mapped bytes 0F 8E 68 02 00 00: jle 0x58760f2c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [esi + 94h], edi
        mov dword ptr [esi + 0e4h], edi
        mov dword ptr [esi + 98h], edi
        cmp dword ptr [esi + 108h], edi
        ; Exact mapped bytes 74 0A: je 0x58760cfd
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [esi + 0e8h], 1
        cmp dword ptr [esi + 0e8h], edi
        ; Exact mapped bytes 0F 84 23 02 00 00: je 0x58760f2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        lea edx, [esp + 18h]
        push edx
        mov edx, dword ptr [esi + 80h]
        mov dword ptr [esi + 0fch], edi
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        push edi
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esi + 0f8h]
        mov dword ptr [esi + 0f4h], ecx
        mov ecx, dword ptr [esi + 0fch]
        cmp eax, ecx
        ; Exact mapped bytes 7E 39: jle 0x58760d79
        __asm _emit 0x7e
        __asm _emit 0x39
        mov eax, ecx
        ; Exact mapped bytes EB 0C: jmp 0x58760d50
        __asm _emit 0xeb
        __asm _emit 0x0c
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760D50 .. +0x186 bytes.
extern "C" __declspec(naked) void FUN_587603c0_segment_02() {
    __asm {
        mov edx, dword ptr [esi + 80h]
        mov dl, byte ptr [eax + edx]
        mov ecx, dword ptr [esi + 100h]
        mov byte ptr [edi + ecx], dl
        inc eax
        inc edi
        cmp eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 7C E4: jl 0x58760d50
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D AD 01 00 00: jge 0x58760f2c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [esi + 80h]
        mov cl, byte ptr [eax + ecx]
        mov edx, dword ptr [esi + 100h]
        mov byte ptr [edi + edx], cl
        inc eax
        inc edi
        cmp eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 7C E4: jl 0x58760d80
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 8ch]
        add eax, edx
        cmp dword ptr [esi + 94h], eax
        ; Exact mapped bytes 74 10: je 0x58760dcf
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [esi + 94h], eax
        mov dword ptr [esi + 0e4h], 0
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        lea edi, [esp + 10h]
        push edi
        mov edi, dword ptr [esi + 94h]
        sub edi, eax
        push edi
        mov edi, dword ptr [esi + 80h]
        add edi, eax
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 1ch]
        add edx, dword ptr [esp + 10h]
        sub eax, dword ptr [esi + 14h]
        cmp edx, eax
        ; Exact mapped bytes 7C 53: jl 0x58760e5d
        __asm _emit 0x7c
        __asm _emit 0x53
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov edx, dword ptr [esi + 80h]
        cmp byte ptr [eax + edx], 0
        ; Exact mapped bytes 7D 05: jge 0x58760e27
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 01: jmp 0x58760e28
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov ecx, dword ptr [esi + 50h]
        lea ebx, [esp + 10h]
        push ebx
        mov ebx, dword ptr [esi + 94h]
        sub ebx, eax
        mov dword ptr [esi + 98h], eax
        mov edi, dword ptr [ecx]
        add eax, edx
        mov edx, dword ptr [edi + 4]
        push ebx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [esi + 1ch]
        add ecx, dword ptr [esp + 10h]
        sub edx, dword ptr [esi + 14h]
        cmp ecx, edx
        ; Exact mapped bytes 7D B3: jge 0x58760e10
        __asm _emit 0x7d
        __asm _emit 0xb3
        cmp dword ptr [esi + 108h], 0
        ; Exact mapped bytes 74 0A: je 0x58760e70
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [esi + 0e8h], 1
        cmp dword ptr [esi + 0e8h], 0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x58760f2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        add eax, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [esi + 0fch], eax
        mov eax, dword ptr [esi + 98h]
        mov edx, dword ptr [ecx]
        lea ebx, [esp + 18h]
        push ebx
        mov ebx, dword ptr [esi + 94h]
        sub ebx, eax
        push ebx
        mov ebx, dword ptr [esi + 80h]
        add ebx, eax
        mov eax, dword ptr [edx + 4]
        push ebx
        xor edi, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esi + 0f8h]
        mov dword ptr [esi + 0f4h], ecx
        mov ecx, dword ptr [esi + 0fch]
        cmp eax, ecx
        ; Exact mapped bytes 7E 37: jle 0x58760f09
        __asm _emit 0x7e
        __asm _emit 0x37
        mov eax, ecx
        ; Exact mapped bytes EB 0A: jmp 0x58760ee0
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760EE0 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_587603c0_segment_03() {
    __asm {
        mov edx, dword ptr [esi + 80h]
        mov dl, byte ptr [eax + edx]
        mov ecx, dword ptr [esi + 100h]
        mov byte ptr [edi + ecx], dl
        inc eax
        inc edi
        cmp eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 7C E4: jl 0x58760ee0
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 21: jge 0x58760f2c
        __asm _emit 0x7d
        __asm _emit 0x21
        ; Exact mapped bytes EB 03: jmp 0x58760f10
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760F10 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_587603c0_segment_04() {
    __asm {
        mov ecx, dword ptr [esi + 80h]
        mov cl, byte ptr [eax + ecx]
        mov edx, dword ptr [esi + 100h]
        mov byte ptr [edi + edx], cl
        inc eax
        inc edi
        cmp eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 7C E4: jl 0x58760f10
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
