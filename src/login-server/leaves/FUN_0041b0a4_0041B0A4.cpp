// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B0A4 .. +0x320 bytes.
extern "C" __declspec(naked) void FUN_0041b0a4_0041B0A4() {
    __asm {
        mov eax, 43aee7h
        ; Exact mapped bytes E8 5A 45 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 98h
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 14h]
        cmp dword ptr [esi + 48h], edi
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x41b1f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4ch]
        lea edx, [ebp - 14h]
        push edx
        push 440308h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        cmp eax, edi
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 0F 8C C8 02 00 00: jl 0x41b3b5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        lea edx, [ebp - 18h]
        push edx
        push 440418h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 42: jl 0x41b144
        __asm _emit 0x7c
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 18h]
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 10h], edi
        push edx
        mov ecx, dword ptr [eax]
        push 4402e8h
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 20: jl 0x41b13b
        __asm _emit 0x7c
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 10h]
        lea edx, [esi + 58h]
        push edx
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        add edx, 0d8h
        push edx
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 10h
        ; Exact mapped bytes E8 A1 27 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 24h], eax
        cmp eax, edi
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes 74 0C: je 0x41b162
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 14h]
        mov ecx, eax
        ; Exact mapped bytes E8 64 02 00 00: call 0x41b3c4
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x41b164
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [esi + 50h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes E8 6C 03 00 00: call 0x41b4e8
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        ; Exact mapped bytes E8 69 27 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, edi
        pop ecx
        ; Exact mapped bytes 74 13: je 0x41b19b
        __asm _emit 0x74
        __asm _emit 0x13
        mov dword ptr [eax], edi
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 10h], edi
        mov dword ptr [eax + 14h], edi
        ; Exact mapped bytes EB 02: jmp 0x41b19d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [esi + 54h], eax
        push dword ptr [ecx]
        mov ecx, eax
        ; Exact mapped bytes E8 51 03 00 00: call 0x41b4fd
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [esi + 54h]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 10h], eax
        lea eax, [eax + eax*4]
        shl eax, 3
        push eax
        ; Exact mapped bytes FF 15 14 C6 43 00: call dword ptr [0x43c614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [esi + 14h], eax
        lea ecx, [ecx + ecx*4]
        shl ecx, 3
        push ecx
        push edi
        push eax
        ; Exact mapped bytes E8 01 39 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        add esp, 0ch
        ; Exact mapped bytes E8 2B 02 00 00: call 0x41b415
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes E8 4D FC FF FF: call 0x41ae3f
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x41b30b
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        cmp eax, edi
        ; Exact mapped bytes 75 07: jne 0x41b205
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x41b3b5
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        lea edx, [ebp - 24h]
        push edx
        lea edx, [ebp - 1ch]
        push edx
        push 440478h
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp eax, edi
        ; Exact mapped bytes 0F 8C 95 01 00 00: jl 0x41b3b5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0a4h]
        push 440548h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A0 06 00 00: call 0x41b8d3
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 84h], 0ffffffffh
        lea eax, [ebp - 74h]
        push 440620h
        push eax
        mov ecx, esi
        mov dword ptr [ebp - 8ch], edi
        mov dword ptr [ebp - 88h], edi
        mov dword ptr [ebp - 80h], 18h
        mov dword ptr [ebp - 7ch], edi
        mov dword ptr [ebp - 78h], 1fbh
        ; Exact mapped bytes E8 6C 06 00 00: call 0x41b8d3
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        or dword ptr [ebp - 54h], 0ffffffffh
        push edi
        lea edx, [ebp - 0a4h]
        push 28h
        mov dword ptr [ebp - 5ch], 1ch
        mov dword ptr [ebp - 58h], edi
        mov dword ptr [ebp - 50h], 20h
        mov dword ptr [ebp - 4ch], edi
        mov dword ptr [ebp - 48h], 1eh
        mov ecx, dword ptr [eax]
        push edx
        push 2
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov ebx, eax
        cmp ebx, edi
        ; Exact mapped bytes 7D 10: jge 0x41b2b1
        __asm _emit 0x7d
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, ebx
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x41b3b5
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        lea ebx, [ebp - 44h]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 1ch]
        xor ecx, ecx
        push ebx
        mov dword ptr [ebp - 40h], 1
        mov dword ptr [ebp - 3ch], edi
        mov dword ptr [ebp - 38h], edi
        mov dword ptr [ebp - 34h], edi
        mov edx, dword ptr [eax]
        push ecx
        push ecx
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp eax, edi
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 7D 0E: jge 0x41b2ed
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x41b3b2
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [esi + 14h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [esi + 34h], ecx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [esi + 10h], edi
        mov dword ptr [ebp - 14h], edi
        ; Exact mapped bytes 7E 3E: jle 0x41b351
        __asm _emit 0x7e
        __asm _emit 0x3e
        xor ebx, ebx
        push 1ch
        ; Exact mapped bytes E8 D0 25 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 18h], eax
        cmp eax, edi
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 0B: je 0x41b336
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0ah
        mov ecx, eax
        ; Exact mapped bytes E8 05 1F 01 00: call 0x42d239
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x41b338
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 14h]
        or dword ptr [ebp - 4], 0ffffffffh
        inc dword ptr [ebp - 14h]
        mov dword ptr [ebx + ecx + 24h], eax
        mov eax, dword ptr [ebp - 14h]
        add ebx, 28h
        cmp eax, dword ptr [esi + 10h]
        ; Exact mapped bytes 7C C4: jl 0x41b315
        __asm _emit 0x7c
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 28h]
        cmp ecx, edi
        ; Exact mapped bytes 74 5A: je 0x41b3b2
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, edi
        ; Exact mapped bytes 7E 4A: jle 0x41b3a9
        __asm _emit 0x7e
        __asm _emit 0x4a
        add ecx, 24h
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax]
        mov ebx, dword ptr [eax + 4]
        cmp ebx, edi
        ; Exact mapped bytes 74 12: je 0x41b386
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [esi]
        mov eax, ebx
        mov ebx, dword ptr [ebx]
        push 1
        push dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB EA: jmp 0x41b370
        __asm _emit 0xeb
        __asm _emit 0xea
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 E8 1E 01 00: call 0x42d278
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        cmp ecx, edi
        ; Exact mapped bytes 74 07: je 0x41b3a0
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        add dword ptr [ebp - 10h], 28h
        dec dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 BF: jne 0x41b368
        __asm _emit 0x75
        __asm _emit 0xbf
        push dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 15 10 C6 43 00: call dword ptr [0x43c610]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
