// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587613C0 .. +0x6B6 bytes.
extern "C" __declspec(naked) void FUN_587613c0() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 20h]
        mov al, byte ptr [edi + 8]
        mov esi, ecx
        cmp al, 8
        ; Exact mapped bytes 0F 85 76 02 00 00: jne 0x5876164e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0fch]
        mov edx, dword ptr [esi + 0f8h]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x587614b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        xor ebp, ebp
        cmp edx, eax
        ; Exact mapped bytes 7D 06: jge 0x587613fa
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ecx, edx
        mov edx, eax
        ; Exact mapped bytes EB 02: jmp 0x587613fc
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, eax
        mov ebx, dword ptr [esi + 84h]
        add ebx, dword ptr [esi + 8ch]
        mov eax, edx
        cmp edx, ebx
        ; Exact mapped bytes 7D 2D: jge 0x5876143b
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edi, edi
        mov edi, dword ptr [esi + 80h]
        lea ebx, [edi + ecx]
        mov dword ptr [esp + 20h], ecx
        mov cl, byte ptr [edi + eax]
        mov byte ptr [ebx + ebp], cl
        mov edi, dword ptr [esi + 84h]
        add edi, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esp + 20h]
        inc eax
        inc ebp
        cmp eax, edi
        ; Exact mapped bytes 7C D7: jl 0x58761410
        __asm _emit 0x7c
        __asm _emit 0xd7
        xor edi, edi
        mov eax, dword ptr [esi + 80h]
        add eax, ecx
        mov byte ptr [eax + ebp], 0
        mov eax, ecx
        mov dword ptr [esi + 94h], ecx
        mov ecx, dword ptr [esi + 90h]
        inc ecx
        push ecx
        sub eax, edx
        mov edx, dword ptr [esi + 100h]
        add dword ptr [esi + 8ch], eax
        push edi
        push edx
        mov dword ptr [esi + 0fch], edi
        mov dword ptr [esi + 0f8h], edi
        mov dword ptr [esi + 0f4h], edi
        mov dword ptr [esi + 0f0h], edi
        ; Exact mapped bytes E8 C4 B7 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        mov ecx, dword ptr [esi + 8ch]
        add eax, ecx
        add esp, 0ch
        cmp dword ptr [esi + 94h], eax
        ; Exact mapped bytes 0F 8E A1 01 00 00: jle 0x58761642
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov dword ptr [esi + 94h], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 84h]
        add edx, dword ptr [esi + 8ch]
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x58761642
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        cmp dword ptr [esi + 94h], ebp
        ; Exact mapped bytes 0F 84 6F 01 00 00: je 0x58761642
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 804h
        ; Exact mapped bytes 66 39 05 50 FC 9C 58: cmp word ptr [0x589cfc50], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 75 3F: jne 0x58761520
        __asm _emit 0x75
        __asm _emit 0x3f
        lea edi, [esi + 0bch]
        lea ebx, [ebp + 0ah]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x58761500
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], ebp
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x587614f0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x58761520
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0b0h], ebp
        mov eax, dword ptr [esi + 94h]
        cmp eax, 1
        mov bl, 80h
        ; Exact mapped bytes 7E 77: jle 0x587615a4
        __asm _emit 0x7e
        __asm _emit 0x77
        mov ecx, dword ptr [esi + 80h]
        add ecx, eax
        test byte ptr [ecx - 1], bl
        ; Exact mapped bytes 74 6A: je 0x587615a4
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [esi + 84h]
        sub edx, eax
        add edx, dword ptr [esi + 8ch]
        push edx
        push ecx
        add ecx, -2
        push ecx
        ; Exact mapped bytes E8 F9 B7 21 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb7
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        add dword ptr [esi + 94h], -2
        add esp, 0ch
        cmp eax, 2
        mov dword ptr [esi + 0e4h], ebp
        ; Exact mapped bytes 7C 08: jl 0x58761576
        __asm _emit 0x7c
        __asm _emit 0x08
        add eax, -2
        ; Exact mapped bytes E9 7E 00 00 00: jmp 0x587615f4
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 74 14: je 0x5876158e
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5876158e
        __asm _emit 0x74
        __asm _emit 0x0a
        dec eax
        dec ecx
        mov dword ptr [esi + 8ch], ecx
        ; Exact mapped bytes EB 66: jmp 0x587615f4
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, dword ptr [esi + 8ch]
        cmp eax, 2
        ; Exact mapped bytes 7C 61: jl 0x587615fa
        __asm _emit 0x7c
        __asm _emit 0x61
        add eax, -2
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes EB 56: jmp 0x587615fa
        __asm _emit 0xeb
        __asm _emit 0x56
        cmp eax, ebp
        ; Exact mapped bytes 7E 52: jle 0x587615fa
        __asm _emit 0x7e
        __asm _emit 0x52
        mov edx, dword ptr [esi + 84h]
        mov ecx, dword ptr [esi + 80h]
        sub edx, eax
        add edx, dword ptr [esi + 8ch]
        add ecx, eax
        push edx
        push ecx
        dec ecx
        push ecx
        ; Exact mapped bytes E8 85 B7 21 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        dec dword ptr [esi + 94h]
        add esp, 0ch
        mov dword ptr [esi + 0e4h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 09: je 0x587615e9
        __asm _emit 0x74
        __asm _emit 0x09
        dec eax
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes EB 11: jmp 0x587615fa
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [esi + 84h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x587615fa
        __asm _emit 0x74
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 84h], eax
        mov eax, dword ptr [esi + 84h]
        add eax, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esi + 80h]
        mov byte ptr [eax + ecx], 0
        mov eax, dword ptr [esi + 98h]
        cmp eax, ebp
        ; Exact mapped bytes 7E 28: jle 0x58761642
        __asm _emit 0x7e
        __asm _emit 0x28
        mov edx, dword ptr [esi + 80h]
        test byte ptr [eax + edx - 1], bl
        ; Exact mapped bytes 74 15: je 0x5876163b
        __asm _emit 0x74
        __asm _emit 0x15
        add eax, -2
        pop edi
        mov dword ptr [esi + 98h], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        dec eax
        mov dword ptr [esi + 98h], eax
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 0dh
        ; Exact mapped bytes 75 11: jne 0x58761663
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 20h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ebx, ebx
        lea ebp, [ebx + 1]
        cmp al, 1bh
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x58761869
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 9
        ; Exact mapped bytes 0F 84 F1 01 00 00: je 0x58761869
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esi + 90h]
        add eax, edx
        sub ecx, ebp
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D D3 01 00 00: jge 0x58761869
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0ech], ebx
        ; Exact mapped bytes 0F 85 D3 01 00 00: jne 0x58761875
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 80h
        ; Exact mapped bytes 0F 83 AE 01 00 00: jae 0x5876185d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        mov ebx, dword ptr [esi + 0f8h]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58761757
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        cmp ebx, ecx
        ; Exact mapped bytes 7D 06: jge 0x587616cf
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, ebx
        mov ebx, ecx
        ; Exact mapped bytes EB 02: jmp 0x587616d1
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ecx
        mov edi, dword ptr [esi + 8ch]
        add edi, edx
        cmp ebx, edi
        mov ecx, ebx
        ; Exact mapped bytes 7D 2A: jge 0x58761709
        __asm _emit 0x7d
        __asm _emit 0x2a
        nop
        mov edi, dword ptr [esi + 80h]
        lea edx, [edi + eax]
        mov dword ptr [esp + 10h], eax
        mov al, byte ptr [edi + ecx]
        mov byte ptr [edx + ebp], al
        mov edx, dword ptr [esi + 84h]
        add edx, dword ptr [esi + 8ch]
        mov eax, dword ptr [esp + 10h]
        inc ecx
        inc ebp
        cmp ecx, edx
        ; Exact mapped bytes 7C D7: jl 0x587616e0
        __asm _emit 0x7c
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 80h]
        add ecx, eax
        mov byte ptr [ecx + ebp], 0
        mov edx, eax
        sub edx, ebx
        add dword ptr [esi + 8ch], edx
        mov ecx, dword ptr [esi + 8ch]
        xor edx, edx
        mov dword ptr [esi + 0fch], edx
        mov dword ptr [esi + 0f8h], edx
        mov dword ptr [esi + 0f4h], edx
        mov dword ptr [esi + 0f0h], edx
        mov edx, dword ptr [esi + 84h]
        add ecx, edx
        cmp eax, ecx
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes 7E 06: jle 0x58761757
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 94h], ecx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esi + 94h]
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 1E: jge 0x58761787
        __asm _emit 0x7d
        __asm _emit 0x1e
        dec eax
        cmp eax, ecx
        ; Exact mapped bytes 7C 19: jl 0x58761787
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edi, edi
        mov ecx, dword ptr [esi + 80h]
        mov dl, byte ptr [ecx + eax]
        add ecx, eax
        dec eax
        mov byte ptr [ecx + 1], dl
        cmp eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 7D E9: jge 0x58761770
        __asm _emit 0x7d
        __asm _emit 0xe9
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esi + 80h]
        mov edx, dword ptr [esp + 20h]
        mov dl, byte ptr [edx + 8]
        mov byte ptr [eax + ecx], dl
        mov ecx, dword ptr [esi + 84h]
        mov edx, dword ptr [esi + 80h]
        mov eax, 1
        add dword ptr [esi + 94h], eax
        add dword ptr [esi + 8ch], eax
        mov eax, dword ptr [esi + 8ch]
        add ecx, eax
        mov dword ptr [esi + 0e4h], 0
        mov byte ptr [ecx + edx], 0
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        lea edi, [esp + 14h]
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
        add edx, dword ptr [esp + 14h]
        sub eax, dword ptr [esi + 14h]
        cmp edx, eax
        ; Exact mapped bytes 7C 52: jl 0x5876185d
        __asm _emit 0x7c
        __asm _emit 0x52
        ; Exact mapped bytes EB 03: jmp 0x58761810
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov edx, dword ptr [esi + 80h]
        cmp byte ptr [eax + edx], 0
        ; Exact mapped bytes 7D 05: jge 0x58761827
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 01: jmp 0x58761828
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov ecx, dword ptr [esi + 50h]
        lea ebx, [esp + 14h]
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
        add ecx, dword ptr [esp + 14h]
        sub edx, dword ptr [esi + 14h]
        cmp ecx, edx
        ; Exact mapped bytes 7D B3: jge 0x58761810
        __asm _emit 0x7d
        __asm _emit 0xb3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 0ech], ebx
        ; Exact mapped bytes 0F 84 04 02 00 00: je 0x58761a79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 3
        ; Exact mapped bytes 75 35: jne 0x587618b0
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [esi + 104h]
        add eax, ebp
        push eax
        push ebx
        push ecx
        ; Exact mapped bytes E8 B7 B3 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb3
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [esi + 100h]
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [esi + 104h]
        add esp, 0ch
        push edx
        add eax, ebp
        push eax
        push ecx
        ; Exact mapped bytes E8 B0 02 FD FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [edi + 8], 16h
        ; Exact mapped bytes 0F 85 B3 01 00 00: jne 0x58761a6d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 104h]
        mov eax, edx
        lea edi, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587618c5
        __asm _emit 0x75
        __asm _emit 0xf9
        mov ecx, dword ptr [esi + 84h]
        sub eax, edi
        add ecx, eax
        add ecx, dword ptr [esi + 8ch]
        cmp ecx, dword ptr [esi + 90h]
        ; Exact mapped bytes 0F 83 5A FD FF FF: jae 0x58761642
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edx
        xor edi, edi
        lea edx, [eax + 1]
        nop
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587618f0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x587619a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, dword ptr [esi + 90h]
        ; Exact mapped bytes 0F 8D 77 00 00 00: jge 0x58761989
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 8ch]
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 24: jge 0x58761948
        __asm _emit 0x7d
        __asm _emit 0x24
        dec eax
        cmp eax, ecx
        ; Exact mapped bytes 7C 1F: jl 0x58761948
        __asm _emit 0x7c
        __asm _emit 0x1f
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov dl, byte ptr [ecx + eax]
        add ecx, eax
        sub eax, ebp
        mov byte ptr [ecx + 1], dl
        cmp eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 7D E8: jge 0x58761930
        __asm _emit 0x7d
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 104h]
        mov al, byte ptr [edi + eax]
        mov ecx, dword ptr [esi + 94h]
        mov edx, dword ptr [esi + 80h]
        mov byte ptr [ecx + edx], al
        add dword ptr [esi + 8ch], ebp
        mov eax, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esi + 84h]
        add dword ptr [esi + 94h], ebp
        mov edx, dword ptr [esi + 80h]
        add ecx, eax
        mov dword ptr [esi + 0e4h], ebx
        mov byte ptr [ecx + edx], bl
        mov eax, dword ptr [esi + 104h]
        add edi, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58761994
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp edi, eax
        ; Exact mapped bytes 0F 82 5B FF FF FF: jb 0x58761900
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [esi + 100h]
        add eax, ebp
        push eax
        push ebx
        push ecx
        mov dword ptr [esi + 0fch], ebx
        mov dword ptr [esi + 0f8h], ebx
        mov dword ptr [esi + 0f4h], ebx
        mov dword ptr [esi + 0f0h], ebx
        ; Exact mapped bytes E8 75 B2 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xb2
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        add esp, 0ch
        lea edi, [esp + 14h]
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
        add edx, dword ptr [esp + 14h]
        sub eax, dword ptr [esi + 14h]
        cmp edx, eax
        ; Exact mapped bytes 7C 5C: jl 0x58761a6d
        __asm _emit 0x7c
        __asm _emit 0x5c
        ; Exact mapped bytes EB 0D: jmp 0x58761a20
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 7D 05: jge 0x58761a37
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 01: jmp 0x58761a38
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov ecx, dword ptr [esi + 50h]
        lea ebx, [esp + 14h]
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
        add ecx, dword ptr [esp + 14h]
        sub edx, dword ptr [esi + 14h]
        cmp ecx, edx
        ; Exact mapped bytes 7D B3: jge 0x58761a20
        __asm _emit 0x7d
        __asm _emit 0xb3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0ch
    }
}
