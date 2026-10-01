// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1008AD20 .. +0x234C bytes.
extern "C" __declspec(naked) void FUN_1008ad20() {
    __asm {
        push -1
        push 10170695h
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
        push ecx
        mov eax, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 2ch]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [esp + 28h]
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 40h]
        mov edi, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 3ch]
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push edx
        mov edx, dword ptr [esp + 3ch]
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        push edx
        push ebx
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 34h], esi
        ; Exact mapped bytes E8 1C D2 FB FF: call 0x10047f90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dl, byte ptr [esp + 28h]
        xor ecx, ecx
        mov dword ptr [esp + 1ch], ecx
        mov byte ptr [esi + 214h], dl
        mov dword ptr [esi + 218h], ecx
        mov dword ptr [esi + 21ch], ecx
        mov dword ptr [esi + 220h], ecx
        mov dword ptr [esi], 10175e70h
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 52h]
        mov byte ptr [esp + 1ch], 1
        mov eax, dword ptr [eax + 50h]
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 68h], edx
        mov eax, dword ptr [esi + 90h]
        mov edx, 77h
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 12: jle 0x1008addd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 08: je 0x1008addd
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1dch]
        ; Exact mapped bytes EB 02: jmp 0x1008addf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 4]
        add eax, edi
        mov dword ptr [esi + 6ch], eax
        lea eax, [ebx + 172h]
        mov dword ptr [esi + 70h], eax
        mov dword ptr [esi + 78h], 140h
        mov dword ptr [esi + 7ch], ebx
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 12: jle 0x1008ae1a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 08: je 0x1008ae1a
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1dch]
        ; Exact mapped bytes EB 02: jmp 0x1008ae1c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 8]
        mov ebp, 70h
        mov dword ptr [esi + 74h], eax
        lea eax, [esi + 94h]
        mov dword ptr [esp + 40h], ebp
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 44h], 1c0h
        ; Exact mapped bytes EB 04: jmp 0x1008ae43
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 40h]
        push 54h
        ; Exact mapped bytes E8 56 19 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x19
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 74: je 0x1008aed0
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x1008ae81
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x1008ae81
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1008ae81
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 44h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x1008ae83
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 19 3B 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008aed2
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x1008aed2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 40h]
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 44h]
        sub eax, 4
        dec edx
        cmp eax, 1b8h
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 40h], edx
        ; Exact mapped bytes 0F 8F 3C FF FF FF: jg 0x1008ae3f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        ; Exact mapped bytes E8 4D 42 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes E8 3D 42 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, 7eh
        lea eax, [esi + 9ch]
        mov dword ptr [esp + 40h], ebp
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 44h], 1f8h
        ; Exact mapped bytes EB 04: jmp 0x1008af44
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 40h]
        push 54h
        ; Exact mapped bytes E8 55 18 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7D: je 0x1008afda
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x1008af82
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x1008af82
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1008af82
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 44h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x1008af84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        lea eax, [ebx + 4fh]
        push 0
        add ecx, 1bfh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0F 3A 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008afdc
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008afdc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 40h]
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 44h]
        sub eax, 4
        dec edx
        cmp eax, 1f0h
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 40h], edx
        ; Exact mapped bytes 0F 8F 33 FF FF FF: jg 0x1008af40
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 9ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 43 41 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 101h
        ; Exact mapped bytes E8 33 41 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        lea eax, [esi + 0a4h]
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 40h], 2
        lea edi, [ebp + 1dfh]
        push 0fch
        ; Exact mapped bytes E8 4D 17 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 38: je 0x1008b09b
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x1008b087
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008b087
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x1008b089
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 50h]
        push ecx
        push edi
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F7 41 07 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1008b09d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 44h]
        add edi, 11h
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 40h]
        add ecx, 4
        dec eax
        mov dword ptr [esp + 44h], ecx
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 75 8C: jne 0x1008b049
        __asm _emit 0x75
        __asm _emit 0x8c
        mov ecx, dword ptr [esi + 0a4h]
        push 1
        ; Exact mapped bytes E8 56 46 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 2
        ; Exact mapped bytes E8 49 46 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C2 16 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x1008b179
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0a6h
        ; Exact mapped bytes 7E 16: jle 0x1008b11c
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008b11c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 298h]
        mov dword ptr [esp + 44h], edx
        ; Exact mapped bytes EB 08: jmp 0x1008b124
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 44h], 0
        push 40h
        push 0
        lea eax, [ebx + 4fh]
        push 0
        lea ecx, [ebp + 1f8h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 73 38 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1008b17b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008b17b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0ach], edi
        ; Exact mapped bytes E8 13 16 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x1008b228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0abh
        ; Exact mapped bytes 7E 16: jle 0x1008b1cb
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008b1cb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 2ach]
        mov dword ptr [esp + 44h], ecx
        ; Exact mapped bytes EB 08: jmp 0x1008b1d3
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 44h], 0
        push 40h
        push 0
        lea edx, [ebx + 4fh]
        push 0
        lea eax, [ebp + 211h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C4 37 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1008b22a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008b22a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes E8 61 15 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 49: je 0x1008b298
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 12: jle 0x1008b270
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008b270
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x1008b272
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 4fh]
        push 40h
        push edx
        lea edx, [ebp + 1f8h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2A C0 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008b29a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 F1 14 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 49: je 0x1008b308
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 1ah
        ; Exact mapped bytes 7E 12: jle 0x1008b2e0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008b2e0
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 680h
        ; Exact mapped bytes EB 02: jmp 0x1008b2e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 4fh]
        push 40h
        push edx
        lea edx, [ebp + 211h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 BA BF F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008b30a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b8h], eax
        mov ecx, dword ptr [esi + 0ach]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 3B 3E 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 2B 3E 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 101h
        ; Exact mapped bytes E8 1B 3E 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 101h
        ; Exact mapped bytes E8 0B 3E 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        push 54h
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes E8 37 14 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 28: je 0x1008b3a3
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea eax, [ebx + 7ah]
        push 0
        lea ecx, [ebp + 92h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1C 36 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x1008b3a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0bch], edi
        ; Exact mapped bytes E8 E9 13 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 28: je 0x1008b3f1
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea edx, [ebx + 7ah]
        push 0
        lea eax, [ebp + 92h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CE 35 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x1008b3f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0c0h], edi
        ; Exact mapped bytes E8 9B 13 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 74: je 0x1008b48b
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 89h]
        mov dword ptr [esp + 44h], ecx
        push 40h
        lea eax, [ebp + 121h]
        push edx
        lea ecx, [ebx + 7ch]
        push eax
        lea edx, [ebp + 0abh]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6C 35 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], eax
        xor eax, eax
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 0ch
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 20 13 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x1008b48d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0c4h], edi
        ; Exact mapped bytes E8 01 13 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 77: je 0x1008b528
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 9bh]
        mov dword ptr [esp + 44h], ecx
        push 40h
        lea eax, [ebp + 109h]
        push edx
        lea ecx, [ebx + 8eh]
        push eax
        lea edx, [ebp + 92h]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CF 34 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], eax
        xor eax, eax
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 0eh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 83 12 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x1008b52a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes E8 64 12 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 77: je 0x1008b5c5
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 0adh]
        mov dword ptr [esp + 44h], ecx
        push 40h
        lea eax, [ebp + 109h]
        push edx
        lea ecx, [ebx + 0a0h]
        push eax
        lea edx, [ebp + 92h]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 32 34 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], eax
        xor eax, eax
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 10h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 E6 11 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x11
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x1008b5c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0cch], edi
        ; Exact mapped bytes E8 C7 11 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x11
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 54: je 0x1008b63f
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        lea ecx, [ebx + 0bfh]
        push 0ffffffh
        lea edx, [ebp + 109h]
        push ecx
        lea eax, [ebx + 0b2h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 92h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 61 A5 F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 12h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 6C 11 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x11
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x1008b641
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0d0h], edi
        ; Exact mapped bytes E8 4A 11 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 3B: je 0x1008b6a1
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x1008b687
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008b687
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1008b689
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 60h]
        push edx
        lea edx, [ebp + 18ch]
        push edx
        push 0bh
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F1 3B 07 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1008b6a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d4h], eax
        push 54h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [eax + 54h], 7fffffffh
        ; Exact mapped bytes E8 E4 10 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x1008b757
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0b5h
        ; Exact mapped bytes 7E 16: jle 0x1008b6fa
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008b6fa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 2d4h]
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes EB 08: jmp 0x1008b702
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 44h], 0
        push 40h
        push 0
        lea ecx, [ebx + 7ah]
        push 0
        lea edx, [ebp + 1e8h]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 95 32 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1008b759
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008b759
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0d8h], edi
        ; Exact mapped bytes E8 32 10 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 49: je 0x1008b7c7
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 12: jle 0x1008b79f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008b79f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x1008b7a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 7ah
        push 40h
        add ebp, 1e8h
        push ebx
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 FB BA F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008b7c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0dch], eax
        mov ecx, dword ptr [esi + 0d8h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 7C 39 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 101h
        ; Exact mapped bytes E8 6C 39 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        lea ebp, [esi + 0e0h]
        mov dword ptr [esp + 44h], 0ah
        push 58h
        ; Exact mapped bytes E8 97 0F 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 7A: je 0x1008b895
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 160h], 1dh
        ; Exact mapped bytes 7E 12: jle 0x1008b83c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008b83c
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 740h]
        ; Exact mapped bytes EB 02: jmp 0x1008b83e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5A 31 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x1008b897
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebx]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008b897
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [ebp], edi
        ; Exact mapped bytes E8 FA 0E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 7A: je 0x1008b932
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x1008b8d9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008b8d9
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 780h]
        ; Exact mapped bytes EB 02: jmp 0x1008b8db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BD 30 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x1008b934
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x1008b934
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 28h], edi
        mov ecx, dword ptr [ebp]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 17 38 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov ecx, 0fffbh
        add ebp, 4
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 44h]
        dec eax
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x1008b802
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 2B 0E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 7F: je 0x1008ba06
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0fbh
        ; Exact mapped bytes 7E 12: jle 0x1008b9ab
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008b9ab
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 3ech]
        ; Exact mapped bytes EB 02: jmp 0x1008b9ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        lea edx, [ebx + 7ah]
        push 0
        add eax, 1b9h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E3 2F 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 32: je 0x1008ba0c
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 06: jmp 0x1008ba0c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 130h], edi
        ; Exact mapped bytes E8 7F 0D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 4D: je 0x1008ba7e
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 2ah
        ; Exact mapped bytes 7E 12: jle 0x1008ba52
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008ba52
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a80h
        ; Exact mapped bytes EB 02: jmp 0x1008ba54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 7ah]
        push 40h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1b9h
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 44 B8 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008ba80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 134h], eax
        mov ecx, dword ptr [esi + 130h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 C5 36 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 134h]
        push 101h
        ; Exact mapped bytes E8 B5 36 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 EE 0C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 7F: je 0x1008bb43
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 10ah
        ; Exact mapped bytes 7E 12: jle 0x1008bae8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008bae8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 428h]
        ; Exact mapped bytes EB 02: jmp 0x1008baea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        lea eax, [ebx + 0dbh]
        push 0
        add ecx, 1afh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A6 2E 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008bb45
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008bb45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 138h], edi
        ; Exact mapped bytes E8 46 0C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 50: je 0x1008bbba
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 2dh
        ; Exact mapped bytes 7E 12: jle 0x1008bb8b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008bb8b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x1008bb8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0dbh]
        push 40h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1afh
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 08 B7 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008bbbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 13ch], eax
        mov ecx, dword ptr [esi + 138h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 89 35 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        push 101h
        ; Exact mapped bytes E8 79 35 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        lea eax, [esi + 17ch]
        mov dword ptr [esp + 44h], 134h
        mov dword ptr [esp + 38h], eax
        lea eax, [ebx + 101h]
        mov dword ptr [esp + 40h], eax
        mov eax, dword ptr [esp + 38h]
        xor ebx, ebx
        mov dword ptr [esp + 3ch], eax
        push 54h
        ; Exact mapped bytes E8 8C 0B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x1008bcad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov ecx, dword ptr [esi + 90h]
        lea eax, [ebx + edx]
        mov edx, dword ptr [ecx + 164h]
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x1008bc54
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x1008bc54
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x1008bc54
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1008bc56
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 40h]
        push 40h
        push 0
        push 0
        add ecx, 118h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3C 2D 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008bcaf
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008bcaf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        inc ebx
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [eax], edi
        add eax, 4
        cmp ebx, 2
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 8C 42 FF FF FF: jl 0x1008bc0d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 38h]
        push 0fffffeffh
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 85 34 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 44h]
        mov edi, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        add ecx, 4
        add edi, 12h
        cmp ecx, 148h
        mov dword ptr [esp + 44h], ecx
        mov dword ptr [esp + 40h], edi
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C 02 FF FF FF: jl 0x1008bc07
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        lea edx, [esi + 1a4h]
        mov dword ptr [esp + 44h], edx
        mov dword ptr [esp + 40h], 5
        lea ebp, [eax + 101h]
        push 70h
        ; Exact mapped bytes E8 78 0A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 69: je 0x1008bda3
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 1D 9C 56 1C 10: mov ebx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 0fh]
        push 40h
        lea edx, [eax + 1dbh]
        push ecx
        push edx
        add eax, 134h
        push ebp
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 50 2C 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 1eh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 08 0A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x1008bda5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        add ebp, 12h
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 44h], eax
        mov eax, dword ptr [esp + 40h]
        dec eax
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 85 58 FF FF FF: jne 0x1008bd21
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5ch
        ; Exact mapped bytes E8 D0 09 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1fh
        ; Exact mapped bytes 74 14: je 0x1008bdf4
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7E 8F F8 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008bdf6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 140h], eax
        ; Exact mapped bytes E8 67 90 F8 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ebx, 12ch
        mov dword ptr [esp + 44h], 4b0h
        push 54h
        ; Exact mapped bytes E8 83 09 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 20h
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x1008beba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x1008be58
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x1008be58
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1008be58
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 44h]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x1008be5a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 140h]
        push 40h
        push 0
        add edx, 0fbh
        push 0
        add ecx, 56h
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 2F 2B 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008bebc
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008bebc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [esi + eax - 36ch], edi
        add eax, 4
        inc ebx
        mov dword ptr [esp + 44h], eax
        lea ecx, [ebx - 12ch]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 33 FF FF FF: jl 0x1008be16
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 B6 08 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 21h
        ; Exact mapped bytes 74 7A: je 0x1008bf76
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ebx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 140h]
        push 40h
        lea edx, [ebx + 10ah]
        ; Exact mapped bytes 8B 2D 9C 56 1C 10: mov ebp, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        lea edx, [ecx + 0ech]
        push edx
        lea edx, [ebx + 0fbh]
        add ecx, 73h
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 7D 2A 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 22h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 35 08 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 06: jmp 0x1008bf7c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor edi, edi
        mov dword ptr [esi + 14ch], edi
        mov ecx, dword ptr [esi + 144h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 C9 31 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 02 08 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 23h
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x1008c038
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0e7h
        ; Exact mapped bytes 7E 12: jle 0x1008bfd8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008bfd8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 39ch]
        ; Exact mapped bytes EB 02: jmp 0x1008bfda
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esi + 140h]
        push 40h
        push 0
        lea eax, [ebx + 101h]
        push 0
        push eax
        mov eax, dword ptr [esp + 38h]
        add eax, 1e8h
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 B1 29 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008c03a
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1008c03a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 150h], edi
        ; Exact mapped bytes E8 51 07 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 24h
        ; Exact mapped bytes 74 56: je 0x1008c0b5
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 26h
        ; Exact mapped bytes 7E 12: jle 0x1008c080
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008c080
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 980h]
        ; Exact mapped bytes EB 02: jmp 0x1008c082
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 101h]
        push 40h
        push ecx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 1e8h
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esi + 140h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 0D B2 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008c0b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 154h], eax
        mov ecx, dword ptr [esi + 150h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 8E 30 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 154h]
        push 101h
        ; Exact mapped bytes E8 7E 30 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 B7 06 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 25h
        ; Exact mapped bytes 74 14: je 0x1008c10d
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 65 8C F8 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008c10f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 158h], eax
        ; Exact mapped bytes E8 4E 8D F8 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        lea ebx, [esi + 15ch]
        mov dword ptr [esp + 44h], 5
        lea ebp, [eax + 0f6h]
        push 58h
        ; Exact mapped bytes E8 5F 06 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 26h
        ; Exact mapped bytes 74 2D: je 0x1008c180
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 158h]
        push 40h
        push 0
        push 0
        add ecx, 52h
        push ebp
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 40 28 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x1008c182
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [ebx], edi
        add ebx, 4
        add ebp, 12h
        dec eax
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 75 A0: jne 0x1008c13a
        __asm _emit 0x75
        __asm _emit 0xa0
        push 90h
        ; Exact mapped bytes E8 FC 05 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 27h
        ; Exact mapped bytes 74 41: je 0x1008c1f5
        __asm _emit 0x74
        __asm _emit 0x41
        mov ebx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 0
        push 0
        lea edx, [ebx + 14dh]
        push 0ffffffh
        push edx
        lea edx, [ecx + 0f6h]
        push edx
        lea edx, [ebx + 0f7h]
        add ecx, 6ah
        push edx
        mov edx, dword ptr [esi + 158h]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 FD 00 FA FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x1008c1fb
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 170h], eax
        ; Exact mapped bytes E8 93 05 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 28h
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x1008c2a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0f1h
        ; Exact mapped bytes 7E 12: jle 0x1008c247
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008c247
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 3c4h]
        ; Exact mapped bytes EB 02: jmp 0x1008c249
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esi + 158h]
        push 40h
        push 0
        lea eax, [ebx + 101h]
        push 0
        push eax
        mov eax, dword ptr [esp + 38h]
        add eax, 1e8h
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 42 27 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008c2a9
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1008c2a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 174h], edi
        ; Exact mapped bytes E8 E2 04 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 29h
        ; Exact mapped bytes 74 56: je 0x1008c324
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 28h
        ; Exact mapped bytes 7E 12: jle 0x1008c2ef
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008c2ef
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a00h
        ; Exact mapped bytes EB 02: jmp 0x1008c2f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 101h]
        push 40h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1e8h
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 158h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9E AF F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008c326
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 178h], eax
        mov ecx, dword ptr [esi + 174h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 1F 2E 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 178h]
        push 101h
        ; Exact mapped bytes E8 0F 2E 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 178h]
        mov ebp, 7eh
        mov dword ptr [esp + 44h], ebp
        mov ebx, 1f8h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [esi + 1b8h]
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes EB 04: jmp 0x1008c37b
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 44h]
        push 54h
        ; Exact mapped bytes E8 1E 04 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2ah
        ; Exact mapped bytes 74 7F: je 0x1008c413
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x1008c3b5
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x1008c3b5
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008c3b5
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x1008c3b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        add edx, 18fh
        push 0
        add eax, 1bfh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D6 25 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008c415
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1008c415
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 44h]
        sub ebx, 4
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [eax], edi
        add eax, 4
        dec ecx
        cmp ebx, 1f0h
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 44h], ecx
        ; Exact mapped bytes 0F 8F 38 FF FF FF: jg 0x1008c377
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1b8h]
        push 0fffffeffh
        ; Exact mapped bytes E8 11 2D 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1bch]
        push 101h
        ; Exact mapped bytes E8 01 2D 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        lea ebp, [esi + 1c0h]
        mov ebx, 2
        lea edi, [eax + 1dfh]
        push 0fch
        ; Exact mapped bytes E8 22 03 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2bh
        ; Exact mapped bytes 74 3F: je 0x1008c4cd
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x1008c4b2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1008c4b2
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x1008c4b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 190h
        push ecx
        push edi
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C5 2D 07 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1008c4cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 11h
        dec ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 75 94: jne 0x1008c474
        __asm _emit 0x75
        __asm _emit 0x94
        mov ecx, dword ptr [esi + 1c0h]
        push 2
        ; Exact mapped bytes E8 33 32 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1c4h]
        push 2
        ; Exact mapped bytes E8 26 32 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 9F 02 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2ch
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x1008c59a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0a6h
        ; Exact mapped bytes 7E 12: jle 0x1008c53b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008c53b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 298h]
        ; Exact mapped bytes EB 02: jmp 0x1008c53d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 28h]
        push 40h
        push 0
        add edx, 18fh
        push 0
        lea eax, [ebx + 1f8h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4F 24 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 32: je 0x1008c5a0
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 06: jmp 0x1008c5a0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 28h]
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 1c8h], edi
        ; Exact mapped bytes E8 EE 01 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2dh
        ; Exact mapped bytes 74 7E: je 0x1008c642
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0abh
        ; Exact mapped bytes 7E 12: jle 0x1008c5e8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008c5e8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 2ach]
        ; Exact mapped bytes EB 02: jmp 0x1008c5ea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        add eax, 18fh
        push 0
        lea ecx, [ebx + 211h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A7 23 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008c644
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008c644
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 1cch], edi
        ; Exact mapped bytes E8 47 01 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2eh
        ; Exact mapped bytes 74 50: je 0x1008c6b9
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 12: jle 0x1008c68a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008c68a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x1008c68c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        add edx, 18fh
        push edx
        lea edx, [ebx + 1f8h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 09 AC F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xac
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008c6bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 1d0h], eax
        ; Exact mapped bytes E8 D0 00 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2fh
        ; Exact mapped bytes 74 50: je 0x1008c730
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 1ah
        ; Exact mapped bytes 7E 12: jle 0x1008c701
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008c701
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 680h
        ; Exact mapped bytes EB 02: jmp 0x1008c703
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        add edx, 18fh
        push edx
        lea edx, [ebx + 211h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 92 AB F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xab
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008c732
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1c8h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 1d4h], eax
        ; Exact mapped bytes E8 13 2A 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1cch]
        push 0fffffeffh
        ; Exact mapped bytes E8 03 2A 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1d0h]
        push 101h
        ; Exact mapped bytes E8 F3 29 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1d4h]
        push 101h
        ; Exact mapped bytes E8 E3 29 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1d4h]
        push 54h
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes E8 0F 00 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 30h
        ; Exact mapped bytes 74 78: je 0x1008c81b
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 75h
        ; Exact mapped bytes 7E 12: jle 0x1008c7c4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008c7c4
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1d4h]
        ; Exact mapped bytes EB 02: jmp 0x1008c7c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        add eax, 1abh
        push 0
        lea ecx, [ebx + 40h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CE 21 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008c81d
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008c81d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1d8h], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        lea edi, [ebx + 136h]
        mov byte ptr [esp + 1ch], 1
        lea ebp, [esi + 1dch]
        mov ebx, 3
        push 0fch
        ; Exact mapped bytes E8 57 FF 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 31h
        ; Exact mapped bytes 74 3F: je 0x1008c898
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x1008c87d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1008c87d
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x1008c87f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 1a1h
        push ecx
        push edi
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FA 29 07 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1008c89a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        add ebp, 4
        add edi, 20h
        dec ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 75 94: jne 0x1008c83f
        __asm _emit 0x75
        __asm _emit 0x94
        mov eax, dword ptr [esp + 2ch]
        lea edx, [esi + 1e8h]
        add eax, 1c4h
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], 4
        mov ebx, edx
        mov ebp, 2eh
        mov dword ptr [esp + 44h], 0b80h
        mov dword ptr [esp + 40h], ebp
        ; Exact mapped bytes EB 04: jmp 0x1008c8e3
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 40h]
        push 58h
        ; Exact mapped bytes E8 B6 FE 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 32h
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x1008c982
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x1008c925
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x1008c925
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1008c925
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 44h]
        lea ebp, [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x1008c927
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 38h]
        push 40h
        push 0
        push 0
        add eax, 4eh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6E 20 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008c984
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1008c984
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 44h]
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        add ebp, 40h
        add ebx, 4
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esp + 40h]
        inc eax
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [esp + 40h], eax
        add eax, -2eh
        cmp eax, 2
        mov dword ptr [esp + 44h], ebp
        ; Exact mapped bytes 0F 8C 22 FF FF FF: jl 0x1008c8df
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 3ch]
        push 0fffffeffh
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 93 27 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        add ecx, 12h
        dec eax
        mov dword ptr [esp + 3ch], ebx
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 E1 FE FF FF: jne 0x1008c8cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 AB FD 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 33h
        ; Exact mapped bytes 74 3B: je 0x1008ca40
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ebp, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 28h]
        push 0
        push 0
        lea ecx, [ebp + 212h]
        push 0ffffffh
        lea edx, [ebx + 0cah]
        push ecx
        push edx
        lea edx, [ebp + 1c4h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 70h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B2 F8 F9 FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x1008ca4a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 28h]
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 208h], eax
        ; Exact mapped bytes E8 41 FD 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 34h
        ; Exact mapped bytes 74 36: je 0x1008caa5
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea ecx, [ebp + 212h]
        push 0ffffffh
        push ecx
        lea edx, [ebx + 0feh]
        lea ecx, [ebp + 1c4h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea ecx, [ebx + 0d8h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4D F8 F9 FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008caa7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 20ch], eax
        ; Exact mapped bytes E8 E4 FC 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 35h
        ; Exact mapped bytes 74 36: je 0x1008cb02
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea ecx, [ebp + 212h]
        push 0ffffffh
        push ecx
        lea edx, [ebx + 17ch]
        lea ecx, [ebp + 1c4h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea ecx, [ebx + 10dh]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F0 F7 F9 FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008cb04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 210h], eax
        mov eax, dword ptr [esi + 218h]
        test eax, eax
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 14: je 0x1008cb2d
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 220h]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 20h
        ; Exact mapped bytes 0F 83 82 00 00 00: jae 0x1008cbaf
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        ; Exact mapped bytes E8 69 FC 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esi + 21ch]
        mov edi, eax
        mov eax, dword ptr [esi + 218h]
        add esp, 4
        cmp eax, edx
        mov dword ptr [esp + 28h], edi
        mov ecx, edi
        ; Exact mapped bytes 74 16: je 0x1008cb68
        __asm _emit 0x74
        __asm _emit 0x16
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008cb5e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax]
        mov dword ptr [ecx], edi
        mov edi, dword ptr [esp + 28h]
        add eax, 4
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 75 EA: jne 0x1008cb52
        __asm _emit 0x75
        __asm _emit 0xea
        mov eax, dword ptr [esi + 218h]
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes E8 0C FC 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 218h]
        add esp, 4
        lea edx, [edi + 80h]
        test ecx, ecx
        mov dword ptr [esi + 220h], edx
        ; Exact mapped bytes 75 04: jne 0x1008cb95
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x1008cba0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 21ch]
        sub eax, ecx
        sar eax, 2
        lea eax, [edi + eax*4]
        mov dword ptr [esi + 218h], edi
        mov dword ptr [esi + 21ch], eax
        push 70h
        ; Exact mapped bytes E8 EA FB 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 36h
        ; Exact mapped bytes 74 77: je 0x1008cc3f
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 1f8h]
        mov dword ptr [esp + 28h], ecx
        push 40h
        lea eax, [ebx + 213h]
        push edx
        lea ecx, [ebp + 1eah]
        push eax
        lea edx, [ebx + 19dh]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B8 1D 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], eax
        xor eax, eax
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 37h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 6C FB 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x1008cc41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 230h], edi
        ; Exact mapped bytes E8 4D FB 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 38h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x1008ccf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0ech
        ; Exact mapped bytes 7E 16: jle 0x1008cc91
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008cc91
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 3b0h]
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes EB 08: jmp 0x1008cc99
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 28h], 0
        push 40h
        push 0
        lea edx, [ebp + 1feh]
        push 0
        lea eax, [ebx + 1c2h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FB 1C 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1008ccf3
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008ccf3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 234h], edi
        ; Exact mapped bytes E8 9B FA 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 39h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x1008cda3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 10fh
        ; Exact mapped bytes 7E 16: jle 0x1008cd43
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008cd43
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 43ch]
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes EB 08: jmp 0x1008cd4b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 28h], 0
        push 40h
        push 0
        lea edx, [ebp + 1feh]
        push 0
        lea eax, [ebx + 1a4h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 49 1C 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1008cda5
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008cda5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 238h], edi
        ; Exact mapped bytes E8 E9 F9 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3ah
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x1008ce59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0d3h
        ; Exact mapped bytes 7E 16: jle 0x1008cdf5
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008cdf5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 34ch]
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes EB 08: jmp 0x1008cdfd
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 28h], 0
        push 40h
        push 0
        lea edx, [ebp + 1feh]
        push 0
        lea eax, [ebx + 1f4h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 97 1B 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x1008ce53
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, edi
        xor edi, edi
        ; Exact mapped bytes EB 04: jmp 0x1008ce5d
        __asm _emit 0xeb
        __asm _emit 0x04
        xor edi, edi
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 23ch], eax
        ; Exact mapped bytes E8 2E F9 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf9
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 3bh
        ; Exact mapped bytes 74 4C: je 0x1008cece
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 27h
        ; Exact mapped bytes 7E 12: jle 0x1008cea3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x1008cea3
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 9c0h
        ; Exact mapped bytes EB 02: jmp 0x1008cea5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 1feh]
        push 40h
        push edx
        lea edx, [ebx + 1c2h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F4 A3 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008ced0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 248h], eax
        ; Exact mapped bytes E8 BB F8 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 3ch
        ; Exact mapped bytes 74 4C: je 0x1008cf41
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 35h
        ; Exact mapped bytes 7E 12: jle 0x1008cf16
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x1008cf16
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x1008cf18
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 1feh]
        push 40h
        push edx
        lea edx, [ebx + 1a4h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 81 A3 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008cf43
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 24ch], eax
        ; Exact mapped bytes E8 48 F8 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 3dh
        ; Exact mapped bytes 74 4C: je 0x1008cfb4
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 22h
        ; Exact mapped bytes 7E 12: jle 0x1008cf89
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x1008cf89
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 880h
        ; Exact mapped bytes EB 02: jmp 0x1008cf8b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 1feh
        push 40h
        add ebx, 1f4h
        push ebp
        push ebx
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 0E A3 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008cfb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 234h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 250h], eax
        ; Exact mapped bytes E8 8F 21 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 238h]
        push 0fffffeffh
        ; Exact mapped bytes E8 7F 21 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 23ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 6F 21 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        mov dword ptr [esi + 25ch], edi
        or ah, 5
        mov dword ptr [esi + 260h], edi
        mov dword ptr [esi + 264h], edi
        mov dword ptr [esi + 268h], edi
        mov dword ptr [esi + 26ch], edi
        mov dword ptr [esi + 270h], edi
        mov dword ptr [esi + 274h], edi
        mov dword ptr [esi + 278h], edi
        mov dword ptr [esi + 27ch], edi
        mov dword ptr [esi + 280h], edi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov byte ptr [esi + 2d6h], 0
        mov dword ptr [esi + 2d8h], 1
        mov byte ptr [esi + 2d5h], 0
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret 24h
    }
}
