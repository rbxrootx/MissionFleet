// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10079440 .. +0x1AC7 bytes.
extern "C" __declspec(naked) void FUN_10079440_10079440() {
    __asm {
        push -1
        push 1016fbabh
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
        sub esp, 0ch
        ; Exact mapped bytes 0F BF 44 24 28: movsx eax, word ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        push ebx
        mov ebx, dword ptr [esp + 28h]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 30h]
        xor ebp, ebp
        push 40h
        mov esi, ecx
        push ebp
        mov ecx, dword ptr [esp + 34h]
        push eax
        push ebx
        push edi
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes E8 2D 55 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        push 198h
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esi], 10175d2ch
        ; Exact mapped bytes E8 EF 32 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebp
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes 74 0F: je 0x100794d0
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 101ab924h
        mov ecx, eax
        ; Exact mapped bytes E8 F2 65 08 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100794d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 BF 32 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebp
        mov byte ptr [esp + 24h], 2
        ; Exact mapped bytes 74 6A: je 0x1007955d
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x1007950e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x1007950e
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x10079510
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8C 54 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007955f
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
        ; Exact mapped bytes EB 02: jmp 0x1007955f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 ED 5B 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 1D 32 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 24h], 3
        ; Exact mapped bytes 74 6A: je 0x100795ff
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100795b0
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100795b0
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100795b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EA 53 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10079601
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
        ; Exact mapped bytes EB 02: jmp 0x10079601
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 90 31 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x31
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 24h], 4
        ; Exact mapped bytes 74 6A: je 0x1007968c
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 4
        ; Exact mapped bytes 7E 0F: jle 0x1007963d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1007963d
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes EB 02: jmp 0x1007963f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5D 53 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007968e
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
        ; Exact mapped bytes EB 02: jmp 0x1007968e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 BE 5A 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 EE 30 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 24h], 5
        ; Exact mapped bytes 74 6C: je 0x10079730
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 3
        ; Exact mapped bytes 7E 0F: jle 0x100796df
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100796df
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x100796e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BB 52 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1007972c
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10079732
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes E8 1C 5A 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esp + 2ch], 9
        lea edi, [esi + 74h]
        mov dword ptr [esp + 34h], 24h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        push 54h
        ; Exact mapped bytes E8 39 30 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 18h], ebp
        test ebp, ebp
        mov byte ptr [esp + 24h], 6
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x10079808
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi + 60h]
        lea ecx, [edx + 1]
        mov edx, dword ptr [eax + 164h]
        cmp edx, ecx
        ; Exact mapped bytes 7E 1C: jle 0x100797ad
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x100797ad
        __asm _emit 0x7c
        __asm _emit 0x18
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x100797ad
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [eax + ecx + 4]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes EB 08: jmp 0x100797b5
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 0
        mov eax, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 E7 51 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ebp], 1017523ch
        test eax, eax
        mov dword ptr [ebp + 50h], eax
        ; Exact mapped bytes 74 29: je 0x10079804
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebp + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x1007980a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 28h], 0
        mov dword ptr [edi + 10h], ecx
        ; Exact mapped bytes E8 44 59 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 10h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [edi + 10h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 6B 2F 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 18h], ebp
        test ebp, ebp
        mov byte ptr [esp + 24h], 7
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100798d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 2ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1B: jle 0x10079875
        __asm _emit 0x7e
        __asm _emit 0x1b
        test ecx, ecx
        ; Exact mapped bytes 7C 17: jl 0x10079875
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10079875
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes EB 08: jmp 0x1007987d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 0
        mov eax, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 1F 51 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ebp], 1017523ch
        test eax, eax
        mov dword ptr [ebp + 50h], eax
        ; Exact mapped bytes 74 29: je 0x100798cc
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebp + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100798d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [edi], ecx
        ; Exact mapped bytes E8 7D 58 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esp + 2ch]
        add edi, 4
        add edx, 2
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [edi - 4]
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 34h]
        add eax, 8
        cmp eax, 44h
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 8C 4A FE FF FF: jl 0x10079760
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 74h
        ; Exact mapped bytes E8 83 2E 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 8
        ; Exact mapped bytes 74 4B: je 0x10079978
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 164h]
        test edx, edx
        ; Exact mapped bytes 7E 0E: jle 0x10079948
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10079948
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x1007994a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [esp + 30h]
        add edx, 32h
        push edx
        lea edx, [ebx + 182h]
        push edx
        lea edx, [ebp + 0fah]
        push edx
        push ecx
        push esi
        push 0
        push 0f4240h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 EA 05 FB FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x1007997e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 30h]
        xor eax, eax
        push 74h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 10 2E 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x2e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 9
        ; Exact mapped bytes 74 47: je 0x100799e7
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 164h]
        test edx, edx
        ; Exact mapped bytes 7E 0E: jle 0x100799bb
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100799bb
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x100799bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        add edx, 32h
        push edx
        lea edx, [ebx + 16dh]
        push edx
        lea edx, [ebp + 0fah]
        push edx
        push ecx
        push esi
        push 0
        push 0f4240h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 7B 05 FB FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100799e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 A5 2D 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x2d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 0ah
        ; Exact mapped bytes 74 74: je 0x10079a81
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 6eh]
        mov dword ptr [esp + 34h], eax
        push 40h
        lea edx, [ebp + 1e4h]
        push ecx
        lea eax, [ebx + 5ah]
        push edx
        lea ecx, [ebp + 162h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7A 4F 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esp + 34h]
        xor eax, eax
        mov dword ptr [edi + 50h], edx
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], 1
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 28h], 0bh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 2A 2D 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x2d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10079a83
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esi + 0d8h], edi
        mov ecx, dword ptr [edi + 40h]
        add eax, 5ah
        test ecx, ecx
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10079aaa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F6 54 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10079ab7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 49 54 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 E2 2C 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 0ch
        ; Exact mapped bytes 74 54: je 0x10079b24
        __asm _emit 0x74
        __asm _emit 0x54
        push 1
        push 0
        lea ecx, [ebx + 0b4h]
        push 0ffffffh
        lea edx, [ebp + 1e4h]
        push ecx
        lea eax, [ebx + 0a0h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 162h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7C C0 F9 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 28h], 0dh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 87 2C 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10079b26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 34: mov ax, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        mov dword ptr [esi + 0dch], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 24h], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10079b47
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 59 54 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10079b54
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AC 53 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 45 2C 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        test edi, edi
        mov byte ptr [esp + 24h], 0eh
        ; Exact mapped bytes 74 7B: je 0x10079be8
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 0fch]
        mov dword ptr [esp + 2ch], ecx
        push 40h
        lea eax, [ebp + 1e4h]
        push edx
        lea ecx, [ebx + 0e8h]
        push eax
        lea edx, [ebp + 162h]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 13 4E 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], eax
        xor eax, eax
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], 1
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 28h], 0fh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 C3 2B 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10079bea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 4C 24 34: mov cx, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        mov dword ptr [esi + 0e0h], edi
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 74 06: je 0x10079c0b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 95 53 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10079c18
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E8 52 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 81 2B 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 10h
        ; Exact mapped bytes 74 53: je 0x10079c84
        __asm _emit 0x74
        __asm _emit 0x53
        push 1
        push 0
        lea edx, [ebx + 134h]
        push 0ffffffh
        lea eax, [ebp + 1e4h]
        push edx
        lea ecx, [ebx + 120h]
        push eax
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 162h]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1C BF F9 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 28h], 11h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 27 2B 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10079c86
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 4C 24 34: mov cx, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        mov dword ptr [esi + 0e4h], edi
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 74 06: je 0x10079ca7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F9 52 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10079cb4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4C 52 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E2 2A 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 12h
        mov edi, 2ch
        ; Exact mapped bytes 74 3D: je 0x10079d10
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10079cf3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079cf3
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b00h]
        ; Exact mapped bytes EB 02: jmp 0x10079cf5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 17dh]
        push ecx
        lea ecx, [ebp + 20dh]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 82 55 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10079d12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 79 2A 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 13h
        ; Exact mapped bytes 74 3D: je 0x10079d74
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10079d57
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079d57
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x10079d59
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 17dh]
        push edx
        lea edx, [ebp + 23fh]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1E 55 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10079d76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 15 2A 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 14h
        ; Exact mapped bytes 74 3D: je 0x10079dd8
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10079dbb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079dbb
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x10079dbd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 169h]
        push edx
        lea edx, [ebp + 20dh]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BA 54 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10079dda
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 B1 29 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x29
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 15h
        ; Exact mapped bytes 74 3D: je 0x10079e3c
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10079e1f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079e1f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x10079e21
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 169h]
        push edx
        lea edx, [ebp + 23fh]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 56 54 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10079e3e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 4D 29 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x29
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 16h
        ; Exact mapped bytes 74 3D: je 0x10079ea0
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10079e83
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079e83
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x10079e85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0feh]
        push edx
        lea edx, [ebp + 221h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F2 53 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10079ea2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 E9 28 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 17h
        ; Exact mapped bytes 74 3D: je 0x10079f04
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10079ee7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079ee7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x10079ee9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0feh]
        push edx
        lea edx, [ebp + 244h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8E 53 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10079f06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 85 28 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 18h
        ; Exact mapped bytes 74 3D: je 0x10079f68
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10079f4b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079f4b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x10079f4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 136h]
        push edx
        lea edx, [ebp + 107h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2A 53 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10079f6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 21 28 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x28
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 19h
        ; Exact mapped bytes 74 3D: je 0x10079fcc
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10079faf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079faf
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x10079fb1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0feh]
        push edx
        lea edx, [ebp + 107h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C6 52 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10079fce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 BD 27 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x27
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 1ah
        ; Exact mapped bytes 74 3D: je 0x1007a030
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a013
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a013
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a015
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0feh]
        push edx
        lea edx, [ebp + 13bh]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 62 52 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a032
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 59 27 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x27
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 1bh
        ; Exact mapped bytes 74 3A: je 0x1007a091
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a077
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a077
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a079
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 70h]
        push edx
        lea edx, [ebp + 107h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 01 52 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a093
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 F8 26 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x26
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 1ch
        ; Exact mapped bytes 74 3A: je 0x1007a0f2
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a0d8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a0d8
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a0da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 7eh]
        push edx
        lea edx, [ebp + 107h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A0 51 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a0f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 97 26 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x26
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 1dh
        ; Exact mapped bytes 74 3D: je 0x1007a156
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a139
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a139
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a13b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0b6h]
        push edx
        lea edx, [ebp + 107h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3C 51 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a158
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 33 26 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x26
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 1eh
        ; Exact mapped bytes 74 3D: je 0x1007a1ba
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a19d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a19d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a19f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0c4h]
        push edx
        lea edx, [ebp + 107h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D8 50 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a1bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 CF 25 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 1fh
        ; Exact mapped bytes 74 3A: je 0x1007a21b
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a201
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a201
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a203
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 5ah]
        push edx
        lea edx, [ebp + 118h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 77 50 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a21d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 6E 25 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 20h
        ; Exact mapped bytes 74 3A: je 0x1007a27c
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a262
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a262
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a264
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 5ah]
        push edx
        lea edx, [ebp + 12eh]
        push edx
        push 1
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 16 50 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a27e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 0D 25 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 21h
        ; Exact mapped bytes 74 3D: je 0x1007a2e0
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a2c3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a2c3
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a2c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0a0h]
        push edx
        lea edx, [ebp + 118h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B2 4F 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a2e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 A9 24 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x24
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 22h
        ; Exact mapped bytes 74 3D: je 0x1007a344
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a327
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a327
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a329
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0a0h]
        push edx
        lea edx, [ebp + 12eh]
        push edx
        push 1
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4E 4F 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a346
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 45 24 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x24
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 23h
        ; Exact mapped bytes 74 3D: je 0x1007a3a8
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a38b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a38b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a38d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0e7h]
        push edx
        lea edx, [ebp + 115h]
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EA 4E 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x4e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a3aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0f8h], eax
        ; Exact mapped bytes E8 E1 23 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x23
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 24h
        ; Exact mapped bytes 74 3D: je 0x1007a40c
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1007a3ef
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a3ef
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007a3f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 120h]
        add ebp, 115h
        push edx
        push ebp
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 86 4E 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a40e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0fch], eax
        mov ecx, dword ptr [esi + 0b4h]
        push 101h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 37 4D 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 101h
        ; Exact mapped bytes E8 27 4D 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 101h
        ; Exact mapped bytes E8 17 4D 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 101h
        ; Exact mapped bytes E8 07 4D 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 101h
        ; Exact mapped bytes E8 F7 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 101h
        ; Exact mapped bytes E8 E7 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 D7 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 C7 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        ; Exact mapped bytes E8 B7 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 101h
        ; Exact mapped bytes E8 A7 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        ; Exact mapped bytes E8 97 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 87 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push 101h
        ; Exact mapped bytes E8 77 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push 101h
        ; Exact mapped bytes E8 67 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        push 101h
        ; Exact mapped bytes E8 57 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        push 101h
        ; Exact mapped bytes E8 47 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        push 101h
        ; Exact mapped bytes E8 37 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        push 101h
        ; Exact mapped bytes E8 27 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        push 101h
        ; Exact mapped bytes E8 17 4C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0a4h]
        mov edi, dword ptr [esp + 34h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a564
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 3C 4A 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a571
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 8F 49 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0a8h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a588
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 18 4A 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a595
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 6B 49 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 9ch]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a5ac
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 F4 49 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a5b9
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 47 49 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0a0h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a5d0
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 D0 49 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a5dd
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 23 49 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0bch]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a5f4
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 AC 49 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a601
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 FF 48 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a618
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 88 49 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a625
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 DB 48 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a63c
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 64 49 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a649
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 B7 48 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0c8h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a660
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 40 49 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a66d
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 93 48 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0cch]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a684
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 1C 49 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a691
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 6F 48 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0d0h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a6a8
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 F8 48 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a6b5
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 4B 48 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0d4h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a6cc
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 D4 48 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a6d9
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 27 48 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 100h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a6f0
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 B0 48 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a6fd
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 03 48 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 104h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a714
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 8C 48 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a721
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 DF 47 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 108h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a738
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 68 48 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a745
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 BB 47 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 10ch]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a75c
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 44 48 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a769
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 97 47 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0f8h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a780
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 20 48 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a78d
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 73 47 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0fch]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a7a4
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 FC 47 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a7b1
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 4F 47 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        lea ebp, [esi + 124h]
        mov dword ptr [esp + 2ch], 5
        mov dword ptr [esp + 34h], ebp
        push 0fch
        ; Exact mapped bytes E8 D3 1F 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 25h
        ; Exact mapped bytes 74 3C: je 0x1007a819
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x1007a7fe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a7fe
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b00h]
        ; Exact mapped bytes EB 02: jmp 0x1007a800
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push ebx
        add ecx, 212h
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 79 4A 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a81b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E8 31 49 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 14h]
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi + 40h]
        lea eax, [edx + 5ah]
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1007a84a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 56 47 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a857
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A9 46 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 3F 1F 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 26h
        ; Exact mapped bytes 74 3C: je 0x1007a8ad
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x1007a892
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007a892
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b00h]
        ; Exact mapped bytes EB 02: jmp 0x1007a894
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push ebx
        add ecx, 23ah
        push ecx
        push 8
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E5 49 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007a8af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebp], eax
        ; Exact mapped bytes E8 9D 48 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [ebp]
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi + 40h]
        lea eax, [edx + 5ah]
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1007a8de
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C2 46 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007a8eb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 15 46 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 AE 1E 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        test edi, edi
        mov byte ptr [esp + 24h], 27h
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x1007a98c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x1007a926
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1007a926
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 240h]
        ; Exact mapped bytes EB 02: jmp 0x1007a928
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 30h]
        add eax, 5ah
        add ecx, 27bh
        push eax
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 68 40 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x1007a986
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        mov ebp, dword ptr [esp + 34h]
        ; Exact mapped bytes EB 02: jmp 0x1007a98e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebp + 14h], edi
        ; Exact mapped bytes E8 BE 47 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        add ebp, 4
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        dec eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 0F 85 02 FE FF FF: jne 0x1007a7c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ebp, [esi + 0e8h]
        mov dword ptr [esp + 34h], 4
        push 0fch
        ; Exact mapped bytes E8 C7 1D 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x1d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 28h
        ; Exact mapped bytes 74 3C: je 0x1007aa25
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x1007aa0a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007aa0a
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b00h]
        ; Exact mapped bytes EB 02: jmp 0x1007aa0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push ebx
        add ecx, 1e0h
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6D 48 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007aa27
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebp], eax
        ; Exact mapped bytes E8 25 47 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [ebp]
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi + 40h]
        lea eax, [edx + 5ah]
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1007aa56
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4A 45 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007aa63
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9D 44 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        add ebp, 4
        dec eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 5A FF FF FF: jne 0x1007a9cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 30h]
        lea edi, [esi + 15ch]
        mov dword ptr [esp + 34h], 4
        push 0a0h
        ; Exact mapped bytes E8 0F 1D 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 29h
        ; Exact mapped bytes 74 4C: je 0x1007aaed
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x1007aabf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007aabf
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 100h]
        ; Exact mapped bytes EB 02: jmp 0x1007aac1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 32h
        push ecx
        lea ecx, [ebx + 5ah]
        push ecx
        lea ecx, [ebp + 138h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D5 C7 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1007aaef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [edi - 10h], eax
        ; Exact mapped bytes E8 9F 1C 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x1c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 2ah
        ; Exact mapped bytes 74 4C: je 0x1007ab5d
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x1007ab2f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007ab2f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x1007ab31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        add edx, 32h
        push edx
        lea edx, [ebx + 64h]
        push edx
        lea edx, [ebp + 138h]
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
        ; Exact mapped bytes E8 65 C7 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1007ab5f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi], eax
        mov ecx, dword ptr [edi - 10h]
        push 101h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 ED 45 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 E1 45 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        add edi, 4
        dec eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 F6 FE FF FF: jne 0x1007aa87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 110h]
        lea edi, [ebx + 5dh]
        push edi
        ; Exact mapped bytes E8 20 42 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push edi
        ; Exact mapped bytes E8 14 42 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 124h]
        push edi
        ; Exact mapped bytes E8 08 42 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 138h]
        lea eax, [ebx + 5bh]
        push eax
        ; Exact mapped bytes E8 F9 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebx + 57h]
        push ecx
        mov ecx, dword ptr [esi + 14ch]
        ; Exact mapped bytes E8 EA 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 15ch]
        lea edx, [ebx + 61h]
        push edx
        ; Exact mapped bytes E8 DB 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        lea edi, [ebx + 0a3h]
        push edi
        ; Exact mapped bytes E8 C9 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        push edi
        ; Exact mapped bytes E8 BD 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        push edi
        ; Exact mapped bytes E8 B1 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        lea eax, [ebx + 0a1h]
        push eax
        ; Exact mapped bytes E8 9F 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebx + 9dh]
        push ecx
        mov ecx, dword ptr [esi + 150h]
        ; Exact mapped bytes E8 8D 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 160h]
        lea edx, [ebx + 0a7h]
        push edx
        ; Exact mapped bytes E8 7B 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        lea edi, [ebx + 0eah]
        push edi
        ; Exact mapped bytes E8 69 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        push edi
        ; Exact mapped bytes E8 5D 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12ch]
        push edi
        ; Exact mapped bytes E8 51 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 140h]
        lea eax, [ebx + 0e8h]
        push eax
        ; Exact mapped bytes E8 3F 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebx + 0e5h]
        push ecx
        mov ecx, dword ptr [esi + 154h]
        ; Exact mapped bytes E8 2D 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        lea edx, [ebx + 0efh]
        push edx
        ; Exact mapped bytes E8 1B 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        lea edi, [ebx + 123h]
        push edi
        ; Exact mapped bytes E8 09 41 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        push edi
        ; Exact mapped bytes E8 FD 40 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 130h]
        push edi
        ; Exact mapped bytes E8 F1 40 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 144h]
        lea eax, [ebx + 121h]
        push eax
        ; Exact mapped bytes E8 DF 40 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebx + 11dh]
        push ecx
        mov ecx, dword ptr [esi + 158h]
        ; Exact mapped bytes E8 CD 40 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 168h]
        lea edx, [ebx + 127h]
        push edx
        ; Exact mapped bytes E8 BB 40 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea edi, [ebx + 198h]
        lea eax, [ebp + 107h]
        push edi
        push eax
        ; Exact mapped bytes E8 B2 3F 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp + 230h]
        push edi
        push ecx
        mov ecx, dword ptr [esi + 134h]
        ; Exact mapped bytes E8 9F 3F 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 148h]
        lea edx, [ebx + 196h]
        lea eax, [ebp + 270h]
        push edx
        push eax
        ; Exact mapped bytes E8 86 3F 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 4C 1A 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 2bh
        ; Exact mapped bytes 74 4F: je 0x1007adb3
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x1007ad82
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007ad82
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x1007ad84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 38h]
        lea edx, [edi + 64h]
        push edx
        lea edx, [ebx + 1b3h]
        push edx
        lea edx, [ebp + 1cch]
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
        ; Exact mapped bytes E8 0F C5 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x1007adb9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 38h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 16ch], eax
        ; Exact mapped bytes E8 D2 19 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x19
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 2ch
        ; Exact mapped bytes 74 4B: je 0x1007ae29
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x1007adfc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007adfc
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x1007adfe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 64h]
        push edx
        lea edx, [ebx + 1b3h]
        push edx
        lea edx, [ebp + 21dh]
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
        ; Exact mapped bytes E8 99 C4 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1007ae2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 16ch]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 170h], eax
        ; Exact mapped bytes E8 1A 43 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        push 101h
        ; Exact mapped bytes E8 0A 43 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 40 19 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x19
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 2dh
        ; Exact mapped bytes 74 16: je 0x1007ae86
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [esi + 60h]
        lea ecx, [edi + 63h]
        push ecx
        push ebx
        push ebp
        push esi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 0E 24 00 00: call 0x1007d290
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x1007ae88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov dword ptr [esi + 174h], ebx
        mov ecx, dword ptr [ebx + 40h]
        add edi, 2710h
        mov byte ptr [esp + 24h], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 7B 26: mov word ptr [ebx + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7b
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1007aeaa
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 F6 40 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007aeb7
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 49 40 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 174h]
        push 0b74h
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 D3 18 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x18
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [esi + 198h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 20h]
        and eax, 0e5f0h
        add esp, 4
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 178h], 0
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
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
