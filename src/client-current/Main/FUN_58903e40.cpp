// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903E40 .. +0x2F44 bytes.
extern "C" __declspec(naked) void FUN_58903e40() {
    __asm {
        push -1
        push 5898a9a6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 29ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 298h], eax
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 2b0h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D FC DF 9C 58 00: cmp dword ptr [0x589cdffc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        mov esi, dword ptr [esp + 2c0h]
        mov ebx, ecx
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 0F 84 BF 2E 00 00: je 0x58906d58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2c4h]
        test eax, eax
        ; Exact mapped bytes 0F 85 66 20 00 00: jne 0x58905f0e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 1e8480h
        push ebp
        mov dword ptr [esp + 34h], ebp
        mov dword ptr [esp + 24h], ebp
        ; Exact mapped bytes E8 7F 96 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        push ebp
        mov dword ptr [esp + 48h], edi
        ; Exact mapped bytes E8 73 96 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        push esi
        mov ebp, eax
        ; Exact mapped bytes FF 15 80 C1 98 58: call dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [ebx + 4], eax
        cmp eax, -1
        ; Exact mapped bytes 0F 84 67 2E 00 00: je 0x58906d58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 90 C1 98 58: mov esi, dword ptr [0x5898c190]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        lea edx, [esp + 3ch]
        push edx
        push 84h
        lea ecx, [ebx + 108h]
        push ecx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, 1
        ; Exact mapped bytes 0F 85 3E 1B 00 00: jne 0x58905a54
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x58903f20
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebx + eax + 108h]
        cmp cl, byte ptr [eax + 5898d6c8h]
        ; Exact mapped bytes 75 34: jne 0x58903f63
        __asm _emit 0x75
        __asm _emit 0x34
        inc eax
        cmp eax, 28h
        ; Exact mapped bytes 7C EB: jl 0x58903f20
        __asm _emit 0x7c
        __asm _emit 0xeb
        mov al, byte ptr [ebx + 15ch]
        cmp al, 3
        ; Exact mapped bytes 7E 48: jle 0x58903f87
        __asm _emit 0x7e
        __asm _emit 0x48
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a2928h
        lea edx, [esp + 1b4h]
        push 100h
        push edx
        ; Exact mapped bytes E8 05 7B E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7b
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 E7 2D 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a2904h
        lea eax, [esp + 1b4h]
        push 100h
        push eax
        ; Exact mapped bytes E8 E1 7A E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7a
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 C3 2D 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 74 4D: je 0x58903fd8
        __asm _emit 0x74
        __asm _emit 0x4d
        cmp al, 2
        ; Exact mapped bytes 74 49: je 0x58903fd8
        __asm _emit 0x74
        __asm _emit 0x49
        cmp al, 3
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x589040d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 4
        lea ecx, [esp + 50h]
        push ecx
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, 1
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x589040d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a28d4h
        lea ecx, [esp + 1b4h]
        push 100h
        push ecx
        ; Exact mapped bytes E8 90 7A E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x7a
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 72 2D 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push 0
        push 0
        push 0
        push edx
        ; Exact mapped bytes FF 15 64 C1 98 58: call dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 84h
        lea ecx, [esp + 74h]
        push ecx
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 4
        lea ecx, [esp + 50h]
        push ecx
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, 1
        ; Exact mapped bytes 0F 85 E3 1E 00 00: jne 0x58905eff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 90h]
        mov dl, byte ptr [esp + 0bdh]
        mov dword ptr [ebx + 130h], eax
        mov al, byte ptr [esp + 0beh]
        mov byte ptr [ebx + 15eh], al
        mov eax, dword ptr [esp + 0c8h]
        mov ecx, 0ah
        lea esi, [esp + 68h]
        lea edi, [ebx + 108h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov byte ptr [ebx + 15dh], dl
        mov edx, dword ptr [esp + 0c4h]
        mov dword ptr [ebx + 168h], eax
        xor eax, eax
        lea edi, [ebx + 134h]
        mov ecx, 0ah
        lea esi, [esp + 94h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov cl, byte ptr [esp + 0bch]
        mov byte ptr [ebx + 15ch], cl
        mov ecx, dword ptr [esp + 0c0h]
        mov dword ptr [ebx + 160h], ecx
        mov dword ptr [ebx + 164h], edx
        mov dword ptr [ebx + 16ch], eax
        mov dword ptr [ebx + 170h], eax
        mov dword ptr [ebx + 174h], eax
        mov dword ptr [ebx + 178h], eax
        mov dword ptr [ebx + 17ch], eax
        mov dword ptr [ebx + 180h], eax
        mov dword ptr [ebx + 184h], eax
        ; Exact mapped bytes 66 89 83 88 01 00 00: mov word ptr [ebx + 0x188], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebx + 18ah], al
        mov al, byte ptr [ebx + 15ch]
        cmp al, 2
        ; Exact mapped bytes 74 08: je 0x589040e7
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 3
        ; Exact mapped bytes 0F 85 02 03 00 00: jne 0x589043e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 170h]
        xor ecx, ecx
        mov edx, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 4B 8B 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8b
        __asm _emit 0x07
        __asm _emit 0x00
        xor edi, edi
        add esp, 4
        mov dword ptr [ebx + 194h], eax
        cmp eax, edi
        ; Exact mapped bytes 75 24: jne 0x58904136
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a28ach
        lea ecx, [esp + 1b4h]
        push 100h
        push ecx
        ; Exact mapped bytes E8 32 79 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x79
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 14 2C 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        cmp dword ptr [ebx + 170h], edi
        ; Exact mapped bytes 0F 8E A5 02 00 00: jle 0x589043e9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4]
        push edi
        lea edx, [esp + 3ch]
        push edx
        push 64h
        lea eax, [esp + 0f8h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 D0 02 00 00: je 0x58904436
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4]
        push edi
        lea edx, [esp + 3ch]
        push edx
        push 4
        lea eax, [esp + 50h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esp + 0f0h]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 09 02 00 00: jne 0x58904395
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 138h], 100000h
        ; Exact mapped bytes 0F 83 40 01 00 00: jae 0x589042dd
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 AA 8A 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], edi
        cmp eax, edi
        ; Exact mapped bytes 74 0B: je 0x589041c1
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 D1 38 00 00: call 0x58907a90
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x589041c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ebx + 194h]
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [edx + esi*4], eax
        cmp eax, edi
        ; Exact mapped bytes 0F 84 FD 01 00 00: je 0x589043dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 138h]
        mov edx, dword ptr [ebx + 194h]
        push 2
        push eax
        lea ecx, [esp + 124h]
        push ecx
        mov ecx, dword ptr [edx + esi*4]
        ; Exact mapped bytes E8 B1 31 00 00: call 0x589073b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 194h]
        mov ecx, dword ptr [eax + esi*4]
        lea eax, [eax + esi*4]
        cmp dword ptr [ecx + 18h], edi
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x589042c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push edi
        mov edx, ecx
        push edi
        mov dword ptr [esp + 20h], edi
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [eax]
        lea edx, [esp + 40h]
        push edx
        lea edx, [esp + 24h]
        push edx
        mov edx, dword ptr [esp + 14ch]
        push edx
        push edi
        push eax
        mov eax, dword ptr [ecx + 2ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7C 6A: jl 0x589042a9
        __asm _emit 0x7c
        __asm _emit 0x6a
        mov ecx, dword ptr [ebx + 194h]
        mov edx, dword ptr [ecx + esi*4]
        mov eax, dword ptr [esp + 14h]
        push edi
        mov dword ptr [edx + 10h], eax
        mov edx, dword ptr [esp + 13ch]
        mov eax, dword ptr [esp + 18h]
        lea ecx, [esp + 38h]
        push ecx
        mov ecx, dword ptr [ebx + 4]
        push edx
        push eax
        push ecx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 10: jne 0x58904281
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebx + 194h]
        mov ecx, dword ptr [edx + esi*4]
        push edi
        push edi
        ; Exact mapped bytes E8 AF FA FF FF: call 0x58903d30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 194h]
        mov ecx, dword ptr [eax + esi*4]
        mov eax, dword ptr [ecx + 18h]
        mov ecx, dword ptr [esp + 138h]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 4ch]
        push edi
        push edi
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x589043dc
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 138h]
        mov ecx, dword ptr [ebx + 4]
        push 1
        push edi
        push eax
        push ecx
        ; Exact mapped bytes FF 15 64 C1 98 58: call dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x589043dc
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 138h]
        mov eax, dword ptr [ebx + 4]
        push 1
        push edi
        push edx
        push eax
        ; Exact mapped bytes FF 15 64 C1 98 58: call dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x589043dc
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 6A 89 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 1
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x58904303
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 5F 81 06 00: call 0x5896c460
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58904305
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 194h]
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [ecx + esi*4], eax
        cmp eax, edi
        ; Exact mapped bytes 74 61: je 0x5890437e
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebx + 194h]
        mov ecx, dword ptr [edx + esi*4]
        mov eax, dword ptr [ebx + 4]
        push 1
        push edi
        mov dword ptr [ecx + 3ch], eax
        mov edx, dword ptr [ebx + 4]
        push edi
        push edx
        ; Exact mapped bytes FF 15 64 C1 98 58: call dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 194h]
        mov edx, dword ptr [ecx + esi*4]
        mov dword ptr [edx + 30h], eax
        mov eax, dword ptr [ebx + 194h]
        mov eax, dword ptr [eax + esi*4]
        mov ecx, dword ptr [eax + 30h]
        add ecx, dword ptr [esp + 138h]
        push 0c0h
        push 8000h
        mov dword ptr [eax + 34h], ecx
        mov eax, dword ptr [ebx + 194h]
        mov ecx, dword ptr [eax + esi*4]
        push 0ah
        lea edx, [esp + 128h]
        push edx
        ; Exact mapped bytes E8 92 7C 06 00: call 0x5896c010
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 138h]
        mov edx, dword ptr [ebx + 4]
        push 1
        push edi
        push ecx
        push edx
        ; Exact mapped bytes FF 15 64 C1 98 58: call dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 47: jmp 0x589043dc
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp eax, 1
        ; Exact mapped bytes 75 42: jne 0x589043dc
        __asm _emit 0x75
        __asm _emit 0x42
        push 10h
        ; Exact mapped bytes E8 AD 88 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 2
        cmp eax, edi
        ; Exact mapped bytes 74 0B: je 0x589043c2
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 50 7B 06 00: call 0x5896bf10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x589043c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 194h]
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [ecx + esi*4], eax
        cmp eax, edi
        ; Exact mapped bytes 74 69: je 0x58904445
        __asm _emit 0x74
        __asm _emit 0x69
        inc esi
        cmp esi, dword ptr [ebx + 170h]
        ; Exact mapped bytes 0F 8C 5B FD FF FF: jl 0x58904144
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 164h]
        xor ecx, ecx
        mov edx, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 49 88 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebx + 18ch], eax
        test eax, eax
        ; Exact mapped bytes 75 57: jne 0x58904469
        __asm _emit 0x75
        __asm _emit 0x57
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a2884h
        lea ecx, [esp + 1b4h]
        push 100h
        push ecx
        ; Exact mapped bytes E8 32 76 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 14 29 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a28ach
        ; Exact mapped bytes E9 28 FB FF FF: jmp 0x58903f6d
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a2844h
        lea edx, [esp + 1b4h]
        push 100h
        push edx
        ; Exact mapped bytes E8 FF 75 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 E1 28 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 164h], 0
        mov edi, dword ptr [esp + 40h]
        mov dword ptr [esp + 24h], 0
        ; Exact mapped bytes 0F 8E 04 11 00 00: jle 0x58905586
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 24h]
        push 6ch
        lea edx, [esp + 70h]
        push 0
        push edx
        mov dword ptr [esp + 74h], 0
        ; Exact mapped bytes E8 AC 87 07 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        mov al, byte ptr [ebx + 15ch]
        add esp, 0ch
        cmp al, 2
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x58904607
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x58904607
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 3
        ; Exact mapped bytes 0F 85 39 02 00 00: jne 0x589046f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebx + 15dh]
        cmp al, 2
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x589045d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 3
        ; Exact mapped bytes 0F 84 05 01 00 00: je 0x589045d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 58h
        lea ecx, [esp + 0f8h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 FB 10 00 00: je 0x589055f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ech]
        mov cl, byte ptr [esp + 118h]
        mov dl, byte ptr [esp + 119h]
        mov dword ptr [esp + 68h], eax
        mov eax, dword ptr [esp + 11ch]
        mov dword ptr [esp + 98h], eax
        mov eax, dword ptr [esp + 128h]
        mov byte ptr [esp + 94h], cl
        mov ecx, dword ptr [esp + 120h]
        mov byte ptr [esp + 95h], dl
        mov edx, dword ptr [esp + 124h]
        mov dword ptr [esp + 0a4h], eax
        mov eax, dword ptr [esp + 134h]
        mov dword ptr [esp + 9ch], ecx
        mov ecx, dword ptr [esp + 12ch]
        mov dword ptr [esp + 0a0h], edx
        mov edx, dword ptr [esp + 130h]
        mov dword ptr [esp + 0b0h], eax
        xor eax, eax
        mov dword ptr [esp + 0a8h], ecx
        mov ecx, dword ptr [esp + 138h]
        mov dword ptr [esp + 0ach], edx
        mov edx, dword ptr [esp + 13ch]
        mov dword ptr [esp + 0b8h], eax
        mov dword ptr [esp + 0bch], eax
        mov dword ptr [esp + 0c0h], eax
        mov dword ptr [esp + 0c4h], eax
        mov dword ptr [esp + 0c8h], eax
        mov eax, dword ptr [esp + 140h]
        mov byte ptr [esp + 6ch], 0
        mov dword ptr [esp + 0cch], ecx
        mov dword ptr [esp + 0d0h], edx
        mov dword ptr [esp + 0d4h], eax
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x589046eb
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        push 0
        lea ecx, [esp + 3ch]
        push ecx
        push 70h
        lea edx, [esp + 74h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x589046f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a2818h
        ; Exact mapped bytes E9 66 F9 FF FF: jmp 0x58903f6d
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 4]
        push 0
        lea ecx, [esp + 3ch]
        push ecx
        push 48h
        lea edx, [esp + 0f8h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 EB 0F 00 00: je 0x58905615
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 119h]
        mov ecx, dword ptr [esp + 0ech]
        mov dl, byte ptr [esp + 118h]
        mov byte ptr [esp + 95h], al
        mov eax, dword ptr [esp + 128h]
        mov dword ptr [esp + 0cch], eax
        mov eax, dword ptr [esp + 12ch]
        mov dword ptr [esp + 68h], ecx
        mov ecx, dword ptr [esp + 11ch]
        mov dword ptr [esp + 0d0h], eax
        mov eax, dword ptr [esp + 130h]
        mov byte ptr [esp + 94h], dl
        mov edx, dword ptr [esp + 124h]
        mov dword ptr [esp + 98h], ecx
        mov ecx, dword ptr [esp + 120h]
        mov dword ptr [esp + 0d4h], eax
        xor eax, eax
        mov byte ptr [esp + 6ch], 0
        mov dword ptr [esp + 9ch], ecx
        mov dword ptr [esp + 0a0h], edx
        mov dword ptr [esp + 0a4h], eax
        mov dword ptr [esp + 0a8h], eax
        mov dword ptr [esp + 0ach], ecx
        mov dword ptr [esp + 0b0h], edx
        mov dword ptr [esp + 0b8h], eax
        mov dword ptr [esp + 0bch], eax
        mov dword ptr [esp + 0c0h], eax
        mov dword ptr [esp + 0c4h], eax
        mov dword ptr [esp + 0c8h], eax
        mov dword ptr [esp + 0b4h], 100h
        mov eax, dword ptr [ebx + 4]
        push 0
        lea ecx, [esp + 3ch]
        push ecx
        push 4
        lea edx, [esp + 50h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 0F 85 79 0F 00 00: jne 0x58905690
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 05 F0 DF 9C 58 00 00 80 00: test dword ptr [0x589cdff0], 0x800000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 0C 03 00 00: je 0x58904a33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 FC DF 9C 58: mov eax, dword ptr [0x589cdffc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        cmp eax, 2
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x589048a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 94h]
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x589047f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0
        ; Exact mapped bytes 74 74: je 0x589047c6
        __asm _emit 0x74
        __asm _emit 0x74
        sub eax, 1
        ; Exact mapped bytes 74 3C: je 0x58904793
        __asm _emit 0x74
        __asm _emit 0x3c
        sub eax, 1
        ; Exact mapped bytes 0F 85 DB 02 00 00: jne 0x58904a3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 E7 84 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 5
        test eax, eax
        ; Exact mapped bytes 0F 84 D3 01 00 00: je 0x58904954
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 B2 E5 05 00: call 0x58962d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x58904956
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 B4 84 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 4
        test eax, eax
        ; Exact mapped bytes 0F 84 58 02 00 00: je 0x58904a0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 1F 1C 05 00: call 0x589563e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 02 00 00: jmp 0x58904a0e
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 81 84 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 3
        test eax, eax
        ; Exact mapped bytes 0F 84 6D 01 00 00: je 0x58904954
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 6C 84 04 00: call 0x5894cc60
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x58904956
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0
        ; Exact mapped bytes 74 74: je 0x58904872
        __asm _emit 0x74
        __asm _emit 0x74
        sub eax, 1
        ; Exact mapped bytes 74 3C: je 0x5890483f
        __asm _emit 0x74
        __asm _emit 0x3c
        sub eax, 1
        ; Exact mapped bytes 0F 85 2F 02 00 00: jne 0x58904a3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 3B 84 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 8
        test eax, eax
        ; Exact mapped bytes 0F 84 DF 01 00 00: je 0x58904a0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 36 F4 03 00: call 0x58943c70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x58904a0e
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 08 84 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 7
        test eax, eax
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x58904954
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 A3 2C 03 00: call 0x58937510
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x58904956
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 D5 83 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 6
        test eax, eax
        ; Exact mapped bytes 0F 84 79 01 00 00: je 0x58904a0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 50 96 02 00: call 0x5892def0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x58904a0e
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x5890496f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 94h]
        sub eax, 0
        ; Exact mapped bytes 74 6D: je 0x58904928
        __asm _emit 0x74
        __asm _emit 0x6d
        sub eax, 1
        ; Exact mapped bytes 74 35: je 0x589048f5
        __asm _emit 0x74
        __asm _emit 0x35
        sub eax, 1
        ; Exact mapped bytes 0F 85 72 01 00 00: jne 0x58904a3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 7E 83 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 0bh
        test eax, eax
        ; Exact mapped bytes 74 6E: je 0x58904954
        __asm _emit 0x74
        __asm _emit 0x6e
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 1D 23 02 00: call 0x58926c10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x58904956
        __asm _emit 0xeb
        __asm _emit 0x61
        push 38h
        ; Exact mapped bytes E8 52 83 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 0ah
        test eax, eax
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x58904a0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 ED B1 01 00: call 0x5891fb10
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x58904a0e
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 1F 83 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 9
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58904954
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 AE 83 01 00: call 0x5891cd00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58904956
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 18ch]
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [ecx + esi*4], eax
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x58904a3b
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x58904a24
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 94h]
        sub eax, 0
        ; Exact mapped bytes 74 61: je 0x589049e6
        __asm _emit 0x74
        __asm _emit 0x61
        sub eax, 1
        ; Exact mapped bytes 74 2F: je 0x589049b9
        __asm _emit 0x74
        __asm _emit 0x2f
        sub eax, 1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x58904a3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 B4 82 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x58904a0c
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, eax
        ; Exact mapped bytes E8 A9 21 01 00: call 0x58916b60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 55: jmp 0x58904a0e
        __asm _emit 0xeb
        __asm _emit 0x55
        push 38h
        ; Exact mapped bytes E8 8E 82 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 0dh
        test eax, eax
        ; Exact mapped bytes 0F 84 7A FF FF FF: je 0x58904954
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3F C2 00 00: call 0x58910c20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 70 FF FF FF: jmp 0x58904956
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 38h
        ; Exact mapped bytes E8 61 82 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 2b8h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58904a0c
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 F6 9B 00 00: call 0x5890e600
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58904a0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ebx + 18ch]
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [edx + esi*4], eax
        ; Exact mapped bytes EB 17: jmp 0x58904a3b
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebx + 18ch]
        mov dword ptr [eax + esi*4], 0
        ; Exact mapped bytes EB 08: jmp 0x58904a3b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov byte ptr [esp + 94h], 0
        mov ecx, dword ptr [ebx + 18ch]
        mov edx, dword ptr [ecx + esi*4]
        mov eax, dword ptr [esp + 9ch]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebx + 18ch]
        mov edx, dword ptr [ecx + esi*4]
        mov eax, dword ptr [esp + 0a0h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 18ch]
        mov eax, dword ptr [ecx + esi*4]
        mov edx, dword ptr [esp + 0a4h]
        mov dword ptr [eax + 18h], edx
        mov ecx, dword ptr [esp + 0a8h]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [esp + 0ach]
        mov dword ptr [eax + 20h], edx
        mov ecx, dword ptr [esp + 0b0h]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebx + 18ch]
        mov ecx, dword ptr [esp + 0bch]
        add eax, 18h
        mov eax, dword ptr [edx + esi*4]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [esp + 0c0h]
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebx + 18ch]
        mov ecx, dword ptr [eax + esi*4]
        mov edx, dword ptr [esp + 0b4h]
        mov dword ptr [ecx + 28h], edx
        mov eax, dword ptr [ebx + 18ch]
        mov ecx, dword ptr [eax + esi*4]
        mov edx, dword ptr [esp + 0b8h]
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebx + 18ch]
        mov ecx, dword ptr [eax + esi*4]
        mov edx, dword ptr [esp + 0c4h]
        mov dword ptr [ecx + 30h], edx
        mov eax, dword ptr [ebx + 18ch]
        mov edx, dword ptr [esp + 0c8h]
        mov ecx, dword ptr [eax + esi*4]
        mov dword ptr [ecx + 30h], edx
        ; Exact mapped bytes 8B 15 FC DF 9C 58: mov edx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        cmp edx, 2
        ; Exact mapped bytes 0F 85 5F 08 00 00: jne 0x5890536c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 95h]
        cmp al, 3
        ; Exact mapped bytes 0F 85 F8 06 00 00: jne 0x58905214
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 98h]
        cmp eax, dword ptr [esp + 30h]
        ; Exact mapped bytes 7E 2A: jle 0x58904b53
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov esi, eax
        push edi
        mov dword ptr [esp + 34h], esi
        ; Exact mapped bytes E8 61 84 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 FF 89 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 8
        mov dword ptr [esp + 40h], edi
        test edi, edi
        ; Exact mapped bytes 0F 84 ED 0A 00 00: je 0x58905639
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 98h]
        mov edx, dword ptr [ebx + 4]
        push 0
        lea ecx, [esp + 3ch]
        push ecx
        push eax
        push edi
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 EF 0A 00 00: je 0x5890565d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 94h]
        cmp al, 2
        ; Exact mapped bytes 0F 85 A5 02 00 00: jne 0x58904e22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0a0h]
        imul eax, dword ptr [esp + 9ch]
        ; Exact mapped bytes 0F AF 05 FC DF 9C 58: imul eax, dword ptr [0x589cdffc]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        movzx ecx, byte ptr [esp + 95h]
        lea eax, [eax + eax*2]
        add eax, eax
        cdq
        idiv ecx
        xor esi, esi
        mov dword ptr [esp + 18h], esi
        cmp eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 7E 21: jle 0x58904bd0
        __asm _emit 0x7e
        __asm _emit 0x21
        push ebp
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes E8 DD 83 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        push edx
        ; Exact mapped bytes E8 77 89 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        ; Exact mapped bytes 0F 84 9C 0A 00 00: je 0x5890566c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC DF 9C 58: mov ecx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x58904d04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x58904bf0
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [esp + 18h]
        movzx eax, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C E0 00 00 00: jl 0x58904ce1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        imul edx, eax
        mov eax, dword ptr [esp + 18h]
        add eax, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        mov dword ptr [esp + 18h], eax
        movzx eax, word ptr [eax + edi]
        add dword ptr [esp + 18h], 2
        mov edx, ecx
        imul edx, eax
        add esi, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        add esi, 2
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58904cd0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 95h]
        mov edx, dword ptr [esp + 18h]
        lea ecx, [edi + 1]
        mov dword ptr [esp + 3ch], eax
        lea eax, [edx + ecx]
        mov edx, edi
        sub edx, ecx
        sub edi, ecx
        movzx ecx, word ptr [esp + 2ch]
        imul ecx, dword ptr [esp + 3ch]
        add edx, 2
        add dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 14h], edi
        mov edx, dword ptr [esp + 34h]
        ; Exact mapped bytes 66 0F BE 0C 02: movsx cx, byte ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x02
        mov edx, 0fff8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0fch
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BE 14 02: movsx edx, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x02
        add eax, dword ptr [esp + 3ch]
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D FC DF 9C 58: mov ecx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        dec edx
        add esi, ecx
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 A3: jne 0x58904c6f
        __asm _emit 0x75
        __asm _emit 0xa3
        mov edi, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 18h]
        movzx eax, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8D 20 FF FF FF: jge 0x58904c01
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 18h]
        movzx eax, word ptr [edx + edi]
        ; Exact mapped bytes 66 83 F8 FE: cmp ax, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x58904e11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esp + 18h], 2
        ; Exact mapped bytes 66 89 04 2E: mov word ptr [esi + ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x2e
        add esi, 2
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x58904bf0
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        movzx eax, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C DD 00 00 00: jl 0x58904df2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        imul edx, eax
        mov eax, dword ptr [esp + 18h]
        add eax, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        mov dword ptr [esp + 18h], eax
        movzx eax, word ptr [eax + edi]
        add dword ptr [esp + 18h], 2
        mov edx, ecx
        imul edx, eax
        add esi, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        add esi, 2
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x58904de1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 95h]
        mov edx, dword ptr [esp + 18h]
        lea ecx, [edi + 1]
        mov dword ptr [esp + 3ch], eax
        lea eax, [edx + ecx]
        mov edx, edi
        sub edx, ecx
        sub edi, ecx
        movzx ecx, word ptr [esp + 2ch]
        imul ecx, dword ptr [esp + 3ch]
        add edx, 2
        add dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 14h], edi
        mov edx, dword ptr [esp + 34h]
        ; Exact mapped bytes 66 0F BE 0C 10: movsx cx, byte ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x10
        mov edx, 0f8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0f8h
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BE 14 10: movsx edx, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x10
        add eax, dword ptr [esp + 3ch]
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D FC DF 9C 58: mov ecx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        dec edx
        add esi, ecx
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 A6: jne 0x58904d83
        __asm _emit 0x75
        __asm _emit 0xa6
        mov edi, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 18h]
        movzx eax, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8D 23 FF FF FF: jge 0x58904d15
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 18h]
        movzx eax, word ptr [edx + edi]
        ; Exact mapped bytes 66 83 F8 FE: cmp ax, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xfe
        ; Exact mapped bytes 74 11: je 0x58904e11
        __asm _emit 0x74
        __asm _emit 0x11
        add dword ptr [esp + 18h], 2
        ; Exact mapped bytes 66 89 04 2E: mov word ptr [esi + ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x2e
        add esi, 2
        ; Exact mapped bytes E9 F3 FE FF FF: jmp 0x58904d04
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 8B 0C 38: mov cx, word ptr [eax + edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x38
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        ; Exact mapped bytes E9 1F 07 00 00: jmp 0x58905541
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 85 A1 02 00 00: jne 0x589050cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0a0h]
        imul eax, dword ptr [esp + 9ch]
        ; Exact mapped bytes 0F AF 05 FC DF 9C 58: imul eax, dword ptr [0x589cdffc]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        movzx ecx, byte ptr [esp + 95h]
        lea eax, [eax + eax*2]
        add eax, eax
        cdq
        idiv ecx
        xor esi, esi
        mov dword ptr [esp + 18h], esi
        cmp eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 7C 21: jl 0x58904e7d
        __asm _emit 0x7c
        __asm _emit 0x21
        push ebp
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes E8 30 81 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        push edx
        ; Exact mapped bytes E8 CA 86 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        ; Exact mapped bytes 0F 84 BC 07 00 00: je 0x58905639
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC DF 9C 58: mov ecx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x58904fb0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        movzx eax, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C E0 00 00 00: jl 0x58904f84
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        imul edx, eax
        mov eax, dword ptr [esp + 18h]
        add eax, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        mov dword ptr [esp + 18h], eax
        movzx eax, word ptr [eax + edi]
        add dword ptr [esp + 18h], 2
        mov edx, ecx
        imul edx, eax
        add esi, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        add esi, 2
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58904f73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 95h]
        mov edx, dword ptr [esp + 18h]
        lea ecx, [edi + 1]
        mov dword ptr [esp + 3ch], eax
        lea eax, [edx + ecx]
        mov edx, edi
        sub edx, ecx
        sub edi, ecx
        movzx ecx, word ptr [esp + 2ch]
        imul ecx, dword ptr [esp + 3ch]
        add edx, 2
        add dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 14h], edi
        mov edx, dword ptr [esp + 34h]
        ; Exact mapped bytes 66 0F BE 0C 10: movsx cx, byte ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x10
        mov edx, 0fff8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0fch
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BE 14 10: movsx edx, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x10
        add eax, dword ptr [esp + 3ch]
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D FC DF 9C 58: mov ecx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        dec edx
        add esi, ecx
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 A3: jne 0x58904f12
        __asm _emit 0x75
        __asm _emit 0xa3
        mov edi, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 18h]
        movzx eax, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8D 20 FF FF FF: jge 0x58904ea4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 83 3C 3A FE: cmp word ptr [edx + edi], -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x3a
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x589050bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esp + 18h], 2
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 04 2E: mov word ptr [esi + ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x2e
        add esi, 2
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x58904e93
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x58904fb0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        movzx eax, word ptr [edx + edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C DD 00 00 00: jl 0x5890509e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        imul edx, eax
        mov eax, dword ptr [esp + 18h]
        add eax, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        mov dword ptr [esp + 18h], eax
        movzx eax, word ptr [eax + edi]
        add dword ptr [esp + 18h], 2
        mov edx, ecx
        imul edx, eax
        add esi, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        add esi, 2
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5890508d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 95h]
        mov edx, dword ptr [esp + 18h]
        lea ecx, [edi + 1]
        mov dword ptr [esp + 3ch], eax
        lea eax, [edx + ecx]
        mov edx, edi
        sub edx, ecx
        sub edi, ecx
        movzx ecx, word ptr [esp + 2ch]
        imul ecx, dword ptr [esp + 3ch]
        add edx, 2
        add dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 14h], edi
        mov edx, dword ptr [esp + 34h]
        ; Exact mapped bytes 66 0F BE 0C 10: movsx cx, byte ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x10
        mov edx, 0f8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0f8h
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BE 14 10: movsx edx, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x10
        add eax, dword ptr [esp + 3ch]
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D FC DF 9C 58: mov ecx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        dec edx
        add esi, ecx
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 A6: jne 0x5890502f
        __asm _emit 0x75
        __asm _emit 0xa6
        mov edi, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 18h]
        movzx eax, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8D 23 FF FF FF: jge 0x58904fc1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 83 3C 3A FE: cmp word ptr [edx + edi], -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x3a
        __asm _emit 0xfe
        ; Exact mapped bytes 74 14: je 0x589050bd
        __asm _emit 0x74
        __asm _emit 0x14
        add dword ptr [esp + 18h], 2
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 04 2E: mov word ptr [esi + ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x2e
        add esi, 2
        ; Exact mapped bytes E9 F3 FE FF FF: jmp 0x58904fb0
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 0fffffffeh
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        ; Exact mapped bytes E9 76 04 00 00: jmp 0x58905541
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 85 9E 04 00 00: jne 0x58905571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0a0h]
        imul eax, dword ptr [esp + 9ch]
        xor esi, esi
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5890518c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x58905206
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + 1]
        mov ecx, edi
        sub ecx, eax
        add ecx, 2
        mov dword ptr [esp + 34h], ecx
        mov ecx, edi
        sub ecx, eax
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 2ch], ecx
        mov edx, dword ptr [esp + 34h]
        ; Exact mapped bytes 66 0F BE 0C 02: movsx cx, byte ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 66 0F BE 00: movsx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x00
        mov edx, 0fff8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edx, 0fch
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov eax, dword ptr [esp + 3ch]
        ; Exact mapped bytes 66 0F BE 14 02: movsx dx, byte ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x02
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        movzx ecx, byte ptr [esp + 95h]
        ; Exact mapped bytes 03 35 FC DF 9C 58: add esi, dword ptr [0x589cdffc]
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        add eax, ecx
        sub dword ptr [esp + 14h], 1
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 75 9C: jne 0x5890511a
        __asm _emit 0x75
        __asm _emit 0x9c
        mov eax, 0fffffffeh
        ; Exact mapped bytes 66 89 04 2E: mov word ptr [esi + ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x2e
        ; Exact mapped bytes E9 B5 03 00 00: jmp 0x58905541
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x58905206
        __asm _emit 0x74
        __asm _emit 0x76
        lea eax, [edi + 1]
        mov ecx, edi
        sub ecx, eax
        add ecx, 2
        mov dword ptr [esp + 34h], ecx
        mov ecx, edi
        sub ecx, eax
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 2ch], ecx
        mov edx, dword ptr [esp + 34h]
        ; Exact mapped bytes 66 0F BE 0C 02: movsx cx, byte ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 66 0F BE 00: movsx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x00
        mov edx, 0f8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov eax, dword ptr [esp + 3ch]
        ; Exact mapped bytes 66 0F BE 14 02: movsx dx, byte ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x02
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        movzx ecx, byte ptr [esp + 95h]
        ; Exact mapped bytes 03 35 FC DF 9C 58: add esi, dword ptr [0x589cdffc]
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        add eax, ecx
        sub dword ptr [esp + 14h], 1
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 75 A4: jne 0x589051aa
        __asm _emit 0x75
        __asm _emit 0xa4
        mov eax, 0fffffffeh
        ; Exact mapped bytes 66 89 04 2E: mov word ptr [esi + ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x2e
        ; Exact mapped bytes E9 2D 03 00 00: jmp 0x58905541
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 55 03 00 00: jne 0x58905571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 98h]
        push eax
        ; Exact mapped bytes E8 11 83 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 18ch]
        mov edx, dword ptr [esp + 28h]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ecx + edx*4]
        push 0
        mov dword ptr [eax + 0ch], esi
        mov edx, dword ptr [esp + 9ch]
        mov eax, dword ptr [ebx + 4]
        lea ecx, [esp + 3ch]
        push ecx
        push edx
        push esi
        push eax
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 FD 03 00 00: je 0x5890565d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 01 03 00 00: jne 0x58905571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 94h]
        cmp al, 2
        ; Exact mapped bytes 75 52: jne 0x589052cd
        __asm _emit 0x75
        __asm _emit 0x52
        ; Exact mapped bytes EB 03: jmp 0x58905280
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3E 00: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 7C 38: jl 0x589052be
        __asm _emit 0x7c
        __asm _emit 0x38
        movzx edx, word ptr [esi + 3]
        add esi, 3
        add esi, 2
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 23: je 0x589052b8
        __asm _emit 0x74
        __asm _emit 0x23
        movzx ecx, word ptr [esi]
        mov eax, ecx
        shr eax, 1
        and eax, 7fe0h
        and ecx, 1fh
        or eax, ecx
        sub edx, 2
        add esi, 2
        movzx eax, ax
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 E1: jne 0x58905295
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes 66 89 45 00: mov word ptr [ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3E 00: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 7D C8: jge 0x58905286
        __asm _emit 0x7d
        __asm _emit 0xc8
        ; Exact mapped bytes 66 83 3E FE: cmp word ptr [esi], -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 A9 02 00 00: je 0x58905571
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        ; Exact mapped bytes EB B3: jmp 0x58905280
        __asm _emit 0xeb
        __asm _emit 0xb3
        cmp al, 1
        ; Exact mapped bytes 75 57: jne 0x58905328
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 66 83 3E 00: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 7C 42: jl 0x58905319
        __asm _emit 0x7c
        __asm _emit 0x42
        ; Exact mapped bytes EB 07: jmp 0x589052e0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [esi + 3]
        add esi, 3
        add esi, 2
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 24: je 0x58905313
        __asm _emit 0x74
        __asm _emit 0x24
        nop
        movzx ecx, word ptr [esi]
        mov eax, ecx
        shr eax, 1
        and eax, 7fe0h
        and ecx, 1fh
        or eax, ecx
        sub edx, 2
        add esi, 2
        movzx eax, ax
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 E1: jne 0x589052f0
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes 66 89 45 00: mov word ptr [ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3E 00: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 7D C7: jge 0x589052e0
        __asm _emit 0x7d
        __asm _emit 0xc7
        ; Exact mapped bytes 66 83 3E FE: cmp word ptr [esi], -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 4E 02 00 00: je 0x58905571
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        ; Exact mapped bytes EB A9: jmp 0x589052d1
        __asm _emit 0xeb
        __asm _emit 0xa9
        test al, al
        ; Exact mapped bytes 0F 85 41 02 00 00: jne 0x58905571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0a0h]
        imul edx, dword ptr [esp + 9ch]
        test edx, edx
        ; Exact mapped bytes 0F 84 2A 02 00 00: je 0x58905571
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi]
        mov eax, ecx
        shr eax, 1
        and eax, 7fe0h
        and ecx, 1fh
        or eax, ecx
        add esi, 2
        sub edx, 1
        movzx eax, ax
        ; Exact mapped bytes 75 E4: jne 0x58905347
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 45 00: mov word ptr [ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 02 00 00: jmp 0x58905571
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 3
        ; Exact mapped bytes 0F 8C FC 01 00 00: jl 0x58905571
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 94h]
        cmp al, 2
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x58905425
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor esi, esi
        ; Exact mapped bytes EB 06: jmp 0x58905390
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 66: jl 0x589053ff
        __asm _emit 0x7c
        __asm _emit 0x66
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, ecx
        movzx ecx, word ptr [eax + edi + 3]
        add eax, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 15 FC DF 9C 58: mov edx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        imul edx, ecx
        add esi, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 26: je 0x589053f0
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + edi]
        mov dword ptr [esi + ebp], edx
        movzx edx, byte ptr [esp + 95h]
        add eax, edx
        ; Exact mapped bytes 8B 15 FC DF 9C 58: mov edx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        dec ecx
        add esi, edx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 E2: jne 0x589053d0
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes EB 06: jmp 0x589053f6
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 15 FC DF 9C 58: mov edx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        movzx ecx, word ptr [eax + edi]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D A1: jge 0x589053a0
        __asm _emit 0x7d
        __asm _emit 0xa1
        movzx ecx, word ptr [eax + edi]
        ; Exact mapped bytes 66 83 F9 FE: cmp cx, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xfe
        ; Exact mapped bytes 74 0F: je 0x58905418
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x58905390
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 04 38: mov ax, word ptr [eax + edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x38
        ; Exact mapped bytes 66 89 04 2E: mov word ptr [esi + ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x2e
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x58905541
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x589054f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0a0h]
        imul eax, dword ptr [esp + 9ch]
        movzx ecx, byte ptr [esp + 95h]
        imul eax, edx
        lea eax, [eax + eax*2]
        add eax, eax
        cdq
        idiv ecx
        xor esi, esi
        mov dword ptr [esp + 14h], esi
        cmp eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 7C 21: jl 0x5890547c
        __asm _emit 0x7c
        __asm _emit 0x21
        push ebp
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes E8 31 7B 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        push edx
        ; Exact mapped bytes E8 CB 80 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        ; Exact mapped bytes 0F 84 F0 01 00 00: je 0x5890566c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        lea ecx, [eax + edi]
        test ecx, ecx
        ; Exact mapped bytes 76 5C: jbe 0x589054e3
        __asm _emit 0x76
        __asm _emit 0x5c
        movzx ecx, word ptr [ecx]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 54: jl 0x589054e3
        __asm _emit 0x7c
        __asm _emit 0x54
        ; Exact mapped bytes 8B 15 FC DF 9C 58: mov edx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        imul edx, ecx
        movzx ecx, word ptr [eax + edi + 3]
        add eax, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 15 FC DF 9C 58: mov edx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        imul edx, ecx
        add esi, 3
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1D: je 0x589054dc
        __asm _emit 0x74
        __asm _emit 0x1d
        nop
        mov edx, dword ptr [eax + edi]
        mov dword ptr [esi + ebp], edx
        movzx edx, byte ptr [esp + 95h]
        ; Exact mapped bytes 03 35 FC DF 9C 58: add esi, dword ptr [0x589cdffc]
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        dec ecx
        add eax, edx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 E4: jne 0x589054c0
        __asm _emit 0x75
        __asm _emit 0xe4
        lea ecx, [eax + edi]
        test ecx, ecx
        ; Exact mapped bytes 77 A4: ja 0x58905487
        __asm _emit 0x77
        __asm _emit 0xa4
        ; Exact mapped bytes 66 83 3C 38 FE: cmp word ptr [eax + edi], -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x38
        __asm _emit 0xfe
        ; Exact mapped bytes 74 4E: je 0x58905538
        __asm _emit 0x74
        __asm _emit 0x4e
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 0C 2E: mov word ptr [esi + ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x2e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes EB 87: jmp 0x58905480
        __asm _emit 0xeb
        __asm _emit 0x87
        test al, al
        ; Exact mapped bytes 75 74: jne 0x58905571
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [esp + 0a0h]
        imul eax, dword ptr [esp + 9ch]
        xor esi, esi
        mov dword ptr [esp + 14h], eax
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x58905538
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, edi
        ; Exact mapped bytes EB 06: jmp 0x58905520
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + ebp], ecx
        movzx ecx, byte ptr [esp + 95h]
        add eax, ecx
        add esi, edx
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 E8: jne 0x58905520
        __asm _emit 0x75
        __asm _emit 0xe8
        mov edx, 0fffffffeh
        ; Exact mapped bytes 66 89 14 2E: mov word ptr [esi + ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x2e
        add esi, 2
        push esi
        ; Exact mapped bytes E8 F0 7F 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 18ch]
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebx + 18ch]
        mov ecx, dword ptr [eax + ecx*4]
        mov edx, dword ptr [ecx + 0ch]
        push esi
        push ebp
        push edx
        ; Exact mapped bytes E8 DE 77 07 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 10h
        mov esi, dword ptr [esp + 24h]
        inc esi
        cmp esi, dword ptr [ebx + 164h]
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes 0F 8C 00 EF FF FF: jl 0x58904486
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebx + 160h]
        test esi, esi
        ; Exact mapped bytes 0F 8E 5C 09 00 00: jle 0x58905ef0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, esi
        mov edx, 40h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        xor eax, eax
        add ecx, 4
        setb al
        neg eax
        or eax, ecx
        push eax
        ; Exact mapped bytes E8 96 76 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 0fh
        test eax, eax
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x589056b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58903a80h
        push 58903d10h
        push esi
        lea edi, [eax + 4]
        push 40h
        push edi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 D4 7A 07 00: call 0x5897d0be
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, edi
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x589056b6
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a27e0h
        lea ecx, [esp + 1b4h]
        push 100h
        push ecx
        ; Exact mapped bytes E8 53 64 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x64
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 35 17 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a2818h
        lea edx, [esp + 1b4h]
        push 100h
        push edx
        ; Exact mapped bytes E8 2F 64 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x64
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 11 17 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a27b8h
        lea ecx, [esp + 1b4h]
        push 100h
        push ecx
        ; Exact mapped bytes E8 0B 64 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x64
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 ED 16 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a2790h
        ; Exact mapped bytes E9 01 E9 FF FF: jmp 0x58903f6d
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a27b8h
        lea edx, [esp + 1b4h]
        push 100h
        push edx
        ; Exact mapped bytes E8 D8 63 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x63
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 BA 16 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a275ch
        lea ecx, [esp + 1b4h]
        push 100h
        push ecx
        ; Exact mapped bytes E8 B4 63 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x63
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 96 16 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor esi, esi
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [ebx + 190h], eax
        cmp eax, esi
        ; Exact mapped bytes 75 24: jne 0x589056f1
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a2734h
        lea edx, [esp + 1b4h]
        push 100h
        push edx
        ; Exact mapped bytes E8 77 63 E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x63
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 59 16 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebx + 15dh]
        test al, al
        ; Exact mapped bytes 0F 84 E2 03 00 00: je 0x58905ae1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 84 DA 03 00 00: je 0x58905ae1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 74 08: je 0x58905713
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 3
        ; Exact mapped bytes 0F 85 3D 03 00 00: jne 0x58905a50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 160h], esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes 0F 8E 2D 03 00 00: jle 0x58905a50
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        ; Exact mapped bytes 8B 3D 90 C1 98 58: mov edi, dword ptr [0x5898c190]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 5ch
        lea ecx, [esp + 15ch]
        push ecx
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 84 1E 07 00 00: je 0x58905e66
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 4
        lea ecx, [esp + 50h]
        push ecx
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 1
        ; Exact mapped bytes 0F 85 58 03 00 00: jne 0x58905abd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 18eh]
        xor ecx, ecx
        mov edx, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 CB 74 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esp + 38h], eax
        movzx eax, word ptr [esp + 192h]
        xor ecx, ecx
        mov edx, 24h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 A9 74 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 190h]
        mov dword ptr [ecx + esi + 10h], eax
        mov al, byte ptr [ebx + 15dh]
        add esp, 8
        cmp al, 2
        ; Exact mapped bytes 0F 85 2C 01 00 00: jne 0x589058ec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes 66 3B 94 24 8E 01 00 00: cmp dx, word ptr [esp + 0x18e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 9E 01 00 00: jae 0x58905976
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 4
        lea ecx, [esp + 38h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 06 00 00: je 0x58905e8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 20h
        lea ecx, [esp + 54h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 6A 02 00 00: je 0x58905a8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 190h]
        mov eax, dword ptr [eax + esi + 10h]
        mov ecx, dword ptr [esp + 48h]
        mov dword ptr [eax + edi], ecx
        mov edx, dword ptr [esp + 4ch]
        mov dword ptr [eax + edi + 4], edx
        mov eax, dword ptr [ebx + 190h]
        mov ecx, dword ptr [eax + esi + 10h]
        mov edx, dword ptr [esp + 50h]
        mov dword ptr [ecx + edi + 8], edx
        mov eax, dword ptr [ebx + 190h]
        mov ecx, dword ptr [eax + esi + 10h]
        mov edx, dword ptr [esp + 54h]
        mov dword ptr [ecx + edi + 0ch], edx
        mov eax, dword ptr [ebx + 190h]
        mov ecx, dword ptr [eax + esi + 10h]
        mov dword ptr [ecx + edi + 10h], 0ffffffffh
        mov edx, dword ptr [ebx + 190h]
        mov eax, dword ptr [edx + esi + 10h]
        mov ecx, dword ptr [esp + 58h]
        mov dword ptr [eax + edi + 14h], ecx
        mov edx, dword ptr [ebx + 190h]
        mov eax, dword ptr [edx + esi + 10h]
        mov ecx, dword ptr [esp + 5ch]
        mov dword ptr [eax + edi + 18h], ecx
        mov edx, dword ptr [ebx + 190h]
        mov eax, dword ptr [edx + esi + 10h]
        mov ecx, dword ptr [esp + 60h]
        mov dword ptr [eax + edi + 1ch], ecx
        mov edx, dword ptr [ebx + 190h]
        mov eax, dword ptr [edx + esi + 10h]
        mov ecx, dword ptr [esp + 64h]
        mov dword ptr [eax + edi + 20h], ecx
        mov edx, dword ptr [ebx + 18ch]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [edx + eax*4]
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [edx + eax*4], ecx
        movzx ecx, word ptr [esp + 18eh]
        inc eax
        add edi, 24h
        cmp eax, ecx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 8C F9 FE FF FF: jl 0x589057e0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x58905976
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 3
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x58905976
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        xor edi, edi
        ; Exact mapped bytes 66 3B 94 24 8E 01 00 00: cmp dx, word ptr [esp + 0x18e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 74: jae 0x58905976
        __asm _emit 0x73
        __asm _emit 0x74
        mov dword ptr [esp + 14h], edi
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 4
        lea ecx, [esp + 38h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 97 05 00 00: je 0x58905ebd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 190h]
        mov edx, dword ptr [ecx + esi + 10h]
        add edx, dword ptr [esp + 14h]
        push 0
        lea eax, [esp + 3ch]
        push eax
        mov eax, dword ptr [ebx + 4]
        push 24h
        push edx
        push eax
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 5E 01 00 00: je 0x58905aae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 18ch]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [esp + 34h]
        add dword ptr [esp + 14h], 24h
        mov dword ptr [ecx + edi*4], eax
        movzx edx, word ptr [esp + 18eh]
        inc edi
        cmp edi, edx
        ; Exact mapped bytes 7C 90: jl 0x58905906
        __asm _emit 0x7c
        __asm _emit 0x90
        mov eax, dword ptr [ebx + 190h]
        xor ecx, ecx
        mov dword ptr [eax + esi + 4], ecx
        ; Exact mapped bytes 0F BF 94 24 8C 01 00 00: movsx edx, word ptr [esp + 0x18c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 190h]
        mov dword ptr [eax + esi + 8], edx
        mov edx, dword ptr [ebx + 190h]
        ; Exact mapped bytes 66 8B 84 24 8E 01 00 00: mov ax, word ptr [esp + 0x18e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 44 32 0C: mov word ptr [edx + esi + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x0c
        mov edx, dword ptr [ebx + 190h]
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [edx + esi + 14h], eax
        mov edx, dword ptr [ebx + 190h]
        lea eax, [edx + esi + 20h]
        mov edx, dword ptr [esp + 17ch]
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 180h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 184h]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esp + 188h]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebx + 190h]
        mov edx, dword ptr [esp + 190h]
        mov dword ptr [eax + esi + 30h], edx
        mov eax, dword ptr [ebx + 190h]
        mov edx, dword ptr [esp + 194h]
        mov dword ptr [eax + esi + 34h], edx
        mov eax, dword ptr [ebx + 190h]
        mov edx, dword ptr [esp + 198h]
        mov dword ptr [eax + esi + 18h], edx
        mov edx, dword ptr [esp + 19ch]
        mov dword ptr [eax + esi + 1ch], edx
        mov eax, dword ptr [ebx + 190h]
        mov dword ptr [eax + esi + 38h], ecx
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [ebx + 190h]
        mov dword ptr [edx + esi + 3ch], ecx
        inc eax
        add esi, 40h
        cmp eax, dword ptr [ebx + 160h]
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8C D3 FC FF FF: jl 0x58905723
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 40h]
        push edi
        ; Exact mapped bytes E8 3C 75 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes E8 36 75 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebx + 170h], 0
        ; Exact mapped bytes 0F 85 1D 13 00 00: jne 0x58906d8d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 4], 0ffffffffh
        ; Exact mapped bytes E9 03 13 00 00: jmp 0x58906d8d
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a26f8h
        lea edx, [esp + 1b4h]
        push 100h
        push edx
        ; Exact mapped bytes E8 BA 5F E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5f
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 9C 12 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a26f8h
        ; Exact mapped bytes E9 B0 E4 FF FF: jmp 0x58903f6d
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a26bch
        lea edx, [esp + 1b4h]
        push 100h
        push edx
        ; Exact mapped bytes E8 87 5F E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5f
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 69 12 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 160h], esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes 0F 8E 5F FF FF FF: jle 0x58905a50
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        xor esi, esi
        mov edx, dword ptr [ebx + 4]
        push edi
        lea eax, [esp + 3ch]
        push eax
        push 3ch
        lea ecx, [esp + 0f8h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 4F 03 00 00: je 0x58905e66
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push edi
        lea eax, [esp + 3ch]
        push eax
        push 4
        lea ecx, [esp + 50h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 0F 85 AA 03 00 00: jne 0x58905ee1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 122h]
        xor ecx, ecx
        mov edx, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 F9 70 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esp + 38h], eax
        movzx eax, word ptr [esp + 126h]
        xor ecx, ecx
        mov edx, 24h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 D7 70 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 190h]
        mov dword ptr [ecx + esi + 10h], eax
        mov al, byte ptr [ebx + 15dh]
        add esp, 8
        xor edi, edi
        test al, al
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x58905c8c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 66 3B 94 24 22 01 00 00: cmp dx, word ptr [esp + 0x122]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 EE 01 00 00: jae 0x58905d96
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x58905bb0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 4
        lea ecx, [esp + 20h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 BA 02 00 00: je 0x58905e8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 190h]
        mov ecx, dword ptr [eax + esi + 10h]
        xor eax, eax
        mov dword ptr [edi + ecx], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 4], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 8], 100h
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 0ch], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 10h], 0ffffffffh
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 14h], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 18h], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 1ch], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 20h], eax
        mov edx, dword ptr [ebx + 18ch]
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [edx + eax*4], ecx
        movzx ecx, word ptr [esp + 122h]
        inc eax
        add edi, 24h
        cmp eax, ecx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 8C 29 FF FF FF: jl 0x58905bb0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x58905d94
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 85 02 01 00 00: jne 0x58905d96
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 66 3B 94 24 22 01 00 00: cmp dx, word ptr [esp + 0x122]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 EE 00 00 00: jae 0x58905d96
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        push 0
        lea eax, [esp + 3ch]
        push eax
        push 4
        lea ecx, [esp + 20h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 C9 01 00 00: je 0x58905e99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 190h]
        mov edx, dword ptr [ecx + esi + 10h]
        push 0
        lea eax, [esp + 3ch]
        push eax
        mov eax, dword ptr [ebx + 4]
        push 8
        add edx, edi
        push edx
        push eax
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x58905ebd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 190h]
        mov edx, dword ptr [ecx + esi + 10h]
        mov dword ptr [edx + edi + 8], 100h
        mov eax, dword ptr [ebx + 190h]
        mov ecx, dword ptr [eax + esi + 10h]
        xor eax, eax
        mov dword ptr [ecx + edi + 0ch], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 10h], 0ffffffffh
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 14h], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 18h], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 1ch], eax
        mov edx, dword ptr [ebx + 190h]
        mov ecx, dword ptr [edx + esi + 10h]
        mov dword ptr [ecx + edi + 20h], eax
        mov edx, dword ptr [ebx + 18ch]
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [edx + eax*4], ecx
        movzx ecx, word ptr [esp + 122h]
        inc eax
        add edi, 24h
        cmp eax, ecx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 8C 1C FF FF FF: jl 0x58905cb0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        mov edx, dword ptr [ebx + 190h]
        mov dword ptr [edx + esi + 4], edi
        ; Exact mapped bytes 0F BF 84 24 20 01 00 00: movsx eax, word ptr [esp + 0x120]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 190h]
        mov dword ptr [ecx + esi + 8], eax
        mov edx, dword ptr [ebx + 190h]
        ; Exact mapped bytes 66 8B 84 24 22 01 00 00: mov ax, word ptr [esp + 0x122]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 44 32 0C: mov word ptr [edx + esi + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x0c
        mov ecx, dword ptr [ebx + 190h]
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [ecx + esi + 14h], edx
        mov eax, dword ptr [ebx + 190h]
        mov dword ptr [eax + esi + 18h], edi
        mov ecx, dword ptr [ebx + 190h]
        mov dword ptr [ecx + esi + 1ch], edi
        mov edx, dword ptr [ebx + 190h]
        mov dword ptr [edx + esi + 20h], edi
        mov eax, dword ptr [ebx + 190h]
        mov dword ptr [eax + esi + 24h], edi
        mov ecx, dword ptr [ebx + 190h]
        mov edx, dword ptr [esp + 118h]
        mov dword ptr [ecx + esi + 28h], edx
        mov eax, dword ptr [ebx + 190h]
        mov ecx, dword ptr [esp + 11ch]
        mov dword ptr [eax + esi + 2ch], ecx
        mov edx, dword ptr [ebx + 190h]
        mov dword ptr [edx + esi + 30h], 100h
        mov eax, dword ptr [ebx + 190h]
        mov dword ptr [eax + esi + 34h], edi
        mov ecx, dword ptr [ebx + 190h]
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [ecx + esi + 38h], edi
        mov edx, dword ptr [ebx + 190h]
        mov dword ptr [edx + esi + 3ch], edi
        inc eax
        add esi, 40h
        cmp eax, dword ptr [ebx + 160h]
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8C 94 FC FF FF: jl 0x58905af5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EA FB FF FF: jmp 0x58905a50
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a268ch
        lea ecx, [esp + 1b4h]
        push 100h
        push ecx
        ; Exact mapped bytes E8 DE 5B E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5b
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 C0 0E 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a2660h
        ; Exact mapped bytes E9 D4 E0 FF FF: jmp 0x58903f6d
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a2660h
        lea edx, [esp + 1b4h]
        push 100h
        push edx
        ; Exact mapped bytes E8 AB 5B E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x5b
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 8D 0E 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a2660h
        lea ecx, [esp + 1b4h]
        push 100h
        push ecx
        ; Exact mapped bytes E8 87 5B E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5b
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 69 0E 00 00: jmp 0x58906d4a
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a26bch
        ; Exact mapped bytes E9 7D E0 FF FF: jmp 0x58903f6d
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 190h], 0
        ; Exact mapped bytes E9 55 FB FF FF: jmp 0x58905a54
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a28d4h
        ; Exact mapped bytes E9 3B E0 FF FF: jmp 0x58903f49
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 76 0E 00 00: jne 0x58906d8d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 84 A2 58: mov eax, dword ptr [0x58a284c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 69 0E 00 00: je 0x58906d8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 589a265ch
        mov ecx, esi
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 C1 98 58: call dword ptr [0x5898c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 52 0E 00 00: je 0x58906d8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C0 84 A2 58: mov edx, dword ptr [0x58a284c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push edx
        ; Exact mapped bytes FF 15 B8 C1 98 58: call dword ptr [0x5898c1b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 88 C1 98 58: call dword ptr [0x5898c188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 0F 84 33 0E 00 00: je 0x58906d8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push 1e8480h
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes E8 CC 75 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        add edx, 108h
        mov esi, ebp
        mov ecx, 21h
        mov edi, edx
        add esp, 4
        mov ebx, eax
        add ebp, 84h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        xor eax, eax
        mov cl, byte ptr [edx + eax]
        cmp cl, byte ptr [eax + 5898d6c8h]
        ; Exact mapped bytes 75 2F: jne 0x58905fca
        __asm _emit 0x75
        __asm _emit 0x2f
        inc eax
        cmp eax, 28h
        ; Exact mapped bytes 7C EF: jl 0x58905f90
        __asm _emit 0x7c
        __asm _emit 0xef
        mov eax, dword ptr [esp + 28h]
        cmp byte ptr [eax + 15ch], 1
        ; Exact mapped bytes 74 38: je 0x58905fe6
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a263ch
        push 100h
        lea edx, [esp + 1b8h]
        push edx
        ; Exact mapped bytes E9 6B 0D 00 00: jmp 0x58906d35
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a2614h
        push 100h
        lea eax, [esp + 1b8h]
        push eax
        ; Exact mapped bytes E9 4F 0D 00 00: jmp 0x58906d35
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        xor ecx, ecx
        mov dword ptr [esp + 14h], edx
        add eax, 109h
        mov dword ptr [esp + 30h], 21h
        ; Exact mapped bytes 0F BE 70 FF: movsx esi, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0xff
        add dword ptr [esp + 20h], esi
        ; Exact mapped bytes 0F BE 30: movsx esi, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x30
        add ecx, esi
        ; Exact mapped bytes 0F BE 70 01: movsx esi, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0x01
        add edx, esi
        ; Exact mapped bytes 0F BE 70 02: movsx esi, byte ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0x02
        add dword ptr [esp + 14h], esi
        add eax, 4
        sub dword ptr [esp + 30h], 1
        ; Exact mapped bytes 75 DB: jne 0x58905ffb
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [esp + 20h]
        add ecx, edx
        add ecx, dword ptr [esp + 14h]
        add eax, ecx
        cmp eax, dword ptr [ebp]
        ; Exact mapped bytes 74 0F: je 0x58906040
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a25f0h
        ; Exact mapped bytes E9 E8 0C 00 00: jmp 0x58906d28
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [edx + 164h]
        xor ecx, ecx
        mov edx, 4
        add ebp, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 EB 6B 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        xor ecx, ecx
        add esp, 4
        mov dword ptr [edx + 18ch], eax
        cmp eax, ecx
        ; Exact mapped bytes 75 0F: jne 0x58906085
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a2884h
        ; Exact mapped bytes E9 A3 0C 00 00: jmp 0x58906d28
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 164h], ecx
        mov dword ptr [esp + 24h], ecx
        ; Exact mapped bytes 0F 8E C4 09 00 00: jle 0x58906a59
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D FC DF 9C 58: mov edi, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x589060a2
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, ebp
        mov dword ptr [esp + 20h], eax
        add ebp, 48h
        mov dword ptr [esp + 34h], ecx
        mov dword ptr [esp + 40h], ecx
        mov dword ptr [esp + 14h], ecx
        inc eax
        mov dword ptr [esp + 30h], 12h
        ; Exact mapped bytes 0F BE 50 FF: movsx edx, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0xff
        add ecx, edx
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        add dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F BE 50 01: movsx edx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x01
        add dword ptr [esp + 40h], edx
        ; Exact mapped bytes 0F BE 50 02: movsx edx, byte ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x02
        add dword ptr [esp + 34h], edx
        add eax, 4
        sub dword ptr [esp + 30h], 1
        ; Exact mapped bytes 75 D9: jne 0x589060c0
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 40h]
        add eax, edx
        add eax, dword ptr [esp + 34h]
        add ecx, eax
        cmp ecx, dword ptr [ebp]
        ; Exact mapped bytes 0F 85 C1 09 00 00: jne 0x58906ac1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, 4
        ; Exact mapped bytes F7 05 F0 DF 9C 58 00 00 80 00: test dword ptr [0x589cdff0], 0x800000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 30 03 00 00: je 0x58906443
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 2
        ; Exact mapped bytes 0F 85 98 01 00 00: jne 0x589062b4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x589061e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        movzx eax, byte ptr [eax + 2ch]
        sub eax, 0
        ; Exact mapped bytes 74 74: je 0x589061ad
        __asm _emit 0x74
        __asm _emit 0x74
        sub eax, 1
        ; Exact mapped bytes 74 3C: je 0x5890617a
        __asm _emit 0x74
        __asm _emit 0x3c
        sub eax, 1
        ; Exact mapped bytes 0F 85 FC 02 00 00: jne 0x58906443
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 00 6B 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 12h
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 02 00 00: je 0x5890640e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 CB CB 05 00: call 0x58962d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xcb
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 96 02 00 00: jmp 0x58906410
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 CD 6A 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 11h
        test eax, eax
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x5890625e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 38 02 05 00: call 0x589563e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x58906260
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 9A 6A 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 10h
        test eax, eax
        ; Exact mapped bytes 0F 84 40 02 00 00: je 0x5890640e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 85 6A 04 00: call 0x5894cc60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 30 02 00 00: jmp 0x58906410
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        movzx eax, byte ptr [edx + 2ch]
        sub eax, 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x58906281
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 74 3C: je 0x58906232
        __asm _emit 0x74
        __asm _emit 0x3c
        sub eax, 1
        ; Exact mapped bytes 0F 85 44 02 00 00: jne 0x58906443
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 48 6A 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 15h
        test eax, eax
        ; Exact mapped bytes 0F 84 EE 01 00 00: je 0x5890640e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 43 DA 03 00: call 0x58943c70
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x58906410
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 15 6A 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 14h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x5890625e
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 B4 12 03 00: call 0x58937510
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58906260
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [edx + 18ch]
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x58906443
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 C6 69 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 13h
        test eax, eax
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x5890640e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 41 7C 02 00: call 0x5892def0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x58906410
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x58906371
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        movzx eax, byte ptr [edx + 2ch]
        sub eax, 0
        ; Exact mapped bytes 74 74: je 0x5890633e
        __asm _emit 0x74
        __asm _emit 0x74
        sub eax, 1
        ; Exact mapped bytes 74 3C: je 0x5890630b
        __asm _emit 0x74
        __asm _emit 0x3c
        sub eax, 1
        ; Exact mapped bytes 0F 85 6B 01 00 00: jne 0x58906443
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 6F 69 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 18h
        test eax, eax
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x5890640e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 0A 09 02 00: call 0x58926c10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x58906410
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 3C 69 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 17h
        test eax, eax
        ; Exact mapped bytes 0F 84 32 FF FF FF: je 0x5890625e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 D7 97 01 00: call 0x5891fb10
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 22 FF FF FF: jmp 0x58906260
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 38h
        ; Exact mapped bytes E8 09 69 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 16h
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5890640e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 94 69 01 00: call 0x5891cd00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x58906410
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x5890642e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        movzx eax, byte ptr [edx + 2ch]
        sub eax, 0
        ; Exact mapped bytes 74 61: je 0x589063e8
        __asm _emit 0x74
        __asm _emit 0x61
        sub eax, 1
        ; Exact mapped bytes 74 2F: je 0x589063bb
        __asm _emit 0x74
        __asm _emit 0x2f
        sub eax, 1
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x58906443
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 B2 68 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x5890640e
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, eax
        ; Exact mapped bytes E8 A7 07 01 00: call 0x58916b60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 55: jmp 0x58906410
        __asm _emit 0xeb
        __asm _emit 0x55
        push 38h
        ; Exact mapped bytes E8 8C 68 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 1ah
        test eax, eax
        ; Exact mapped bytes 0F 84 82 FE FF FF: je 0x5890625e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D A8 00 00: call 0x58910c20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 78 FE FF FF: jmp 0x58906260
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 38h
        ; Exact mapped bytes E8 5F 68 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2b8h], 19h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5890640e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 F4 81 00 00: call 0x5890e600
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58906410
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes EB 15: jmp 0x58906443
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [eax + ecx*4], 0
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [esp + 24h]
        mov esi, dword ptr [eax + ecx*4]
        mov eax, dword ptr [esp + 20h]
        mov edi, dword ptr [eax + 34h]
        mov dword ptr [esi + 4], edi
        mov edx, dword ptr [edx + 18ch]
        mov ecx, dword ptr [edx + ecx*4]
        mov edx, dword ptr [eax + 38h]
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes 8B 3D FC DF 9C 58: mov edi, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        cmp edi, 2
        ; Exact mapped bytes 0F 85 46 04 00 00: jne 0x589068c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax + 2ch]
        cmp al, 2
        ; Exact mapped bytes 0F 85 97 01 00 00: jne 0x5890661e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor esi, esi
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x58906560
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x589064a0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 92 00 00 00: jl 0x5890653f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dl, byte ptr [eax + ebp + 2]
        add eax, 2
        add ecx, ecx
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        movzx ecx, word ptr [eax + ebp + 1]
        inc eax
        add esi, 2
        mov byte ptr [esi + ebx], dl
        inc esi
        lea edx, [ecx + ecx]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 52: je 0x58906532
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 66 0F BE 4C 28 02: movsx cx, byte ptr [eax + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x02
        mov edx, 0fff8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 54 28 01: movsx edx, byte ptr [eax + ebp + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0fch
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 14 28: movsx edx, byte ptr [eax + ebp]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x28
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        mov ecx, dword ptr [esp + 14h]
        dec ecx
        add eax, 3
        add esi, 2
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 AE: jne 0x589064e0
        __asm _emit 0x75
        __asm _emit 0xae
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8D 71 FF FF FF: jge 0x589064b0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 83 F9 FE: cmp cx, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x58906615
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x589064a0
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 8F 00 00 00: jl 0x589065fc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dl, byte ptr [eax + ebp + 2]
        add eax, 2
        add ecx, ecx
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        movzx ecx, word ptr [eax + ebp + 1]
        inc eax
        add esi, 2
        mov byte ptr [esi + ebx], dl
        inc esi
        lea edx, [ecx + ecx]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 4F: je 0x589065ef
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 66 0F BE 4C 28 02: movsx cx, byte ptr [eax + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x02
        mov edx, 0f8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 54 28 01: movsx edx, byte ptr [eax + ebp + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0f8h
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 14 28: movsx edx, byte ptr [eax + ebp]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x28
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        mov ecx, dword ptr [esp + 14h]
        dec ecx
        add eax, 3
        add esi, 2
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 B1: jne 0x589065a0
        __asm _emit 0x75
        __asm _emit 0xb1
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8D 74 FF FF FF: jge 0x58906570
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 83 F9 FE: cmp cx, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xfe
        ; Exact mapped bytes 74 0F: je 0x58906615
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x58906560
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 04 28: mov ax, word ptr [eax + ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x28
        ; Exact mapped bytes E9 D6 03 00 00: jmp 0x589069f4
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 85 CA 01 00 00: jne 0x589067f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor esi, esi
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x58906700
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
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
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 93 00 00 00: jl 0x589066e0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea edx, [ecx + ecx]
        mov cl, byte ptr [eax + ebp + 2]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        mov byte ptr [esi + ebx], cl
        movzx ecx, word ptr [eax + ebp + 1]
        inc eax
        inc esi
        lea edx, [ecx + ecx]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 52: je 0x589066d3
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 66 0F BE 4C 28 02: movsx cx, byte ptr [eax + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x02
        mov edx, 0fff8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 54 28 01: movsx edx, byte ptr [eax + ebp + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0fch
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 14 28: movsx edx, byte ptr [eax + ebp]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x28
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        mov ecx, dword ptr [esp + 14h]
        dec ecx
        add eax, 3
        add esi, 2
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 AE: jne 0x58906681
        __asm _emit 0x75
        __asm _emit 0xae
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8D 70 FF FF FF: jge 0x58906650
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 3C 28 FE: cmp word ptr [eax + ebp], -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x589067b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x58906640
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 90 00 00 00: jl 0x5890679d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea edx, [ecx + ecx]
        mov cl, byte ptr [eax + ebp + 2]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        mov byte ptr [esi + ebx], cl
        movzx ecx, word ptr [eax + ebp + 1]
        inc eax
        inc esi
        lea edx, [ecx + ecx]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 4F: je 0x58906790
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 66 0F BE 4C 28 02: movsx cx, byte ptr [eax + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x02
        mov edx, 0f8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 54 28 01: movsx edx, byte ptr [eax + ebp + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0f8h
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 14 28: movsx edx, byte ptr [eax + ebp]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x28
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        mov ecx, dword ptr [esp + 14h]
        dec ecx
        add eax, 3
        add esi, 2
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 B1: jne 0x58906741
        __asm _emit 0x75
        __asm _emit 0xb1
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8D 73 FF FF FF: jge 0x58906710
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 3C 28 FE: cmp word ptr [eax + ebp], -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0xfe
        ; Exact mapped bytes 74 12: je 0x589067b6
        __asm _emit 0x74
        __asm _emit 0x12
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x58906700
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 0fffffffeh
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add esi, 2
        push esi
        ; Exact mapped bytes E8 72 6D 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        mov edi, dword ptr [edx + 18ch]
        mov ecx, dword ptr [esp + 28h]
        mov edi, dword ptr [edi + ecx*4]
        mov dword ptr [edi + 0ch], eax
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [eax + ecx*4]
        mov edx, dword ptr [ecx + 0ch]
        push esi
        push ebx
        push edx
        ; Exact mapped bytes E9 34 02 00 00: jmp 0x58906a24
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 85 3A 02 00 00: jne 0x58906a32
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [ecx + 38h]
        imul eax, dword ptr [ecx + 34h]
        xor esi, esi
        ; Exact mapped bytes F7 05 FC 84 A2 58 00 80 00 00: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 74 58: je 0x5890686d
        __asm _emit 0x74
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 01 00 00: je 0x589069ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 1]
        ; Exact mapped bytes 66 0F BE 48 01: movsx cx, byte ptr [eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        mov edx, 0fff8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0fch
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 50 FF: movsx edx, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        add eax, 3
        add esi, 2
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 B8: jne 0x58906820
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x589069ef
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 7A 01 00 00: je 0x589069ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 1]
        ; Exact mapped bytes 66 0F BE 48 01: movsx cx, byte ptr [eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        mov edx, 0f8h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E1 05: shl cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        mov edi, 0f8h
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE 50 FF: movsx edx, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 C1 EA 03: shr dx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 66 03 C9: add cx, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        add eax, 3
        add esi, 2
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 BB: jne 0x58906878
        __asm _emit 0x75
        __asm _emit 0xbb
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x589069ef
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 8C 67 01 00 00: jl 0x58906a32
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax + 2ch]
        cmp al, 2
        ; Exact mapped bytes 75 72: jne 0x58906944
        __asm _emit 0x75
        __asm _emit 0x72
        xor eax, eax
        xor esi, esi
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 4B: jl 0x5890692a
        __asm _emit 0x7c
        __asm _emit 0x4b
        nop
        lea edx, [ecx + ecx]
        mov cl, byte ptr [eax + ebp + 2]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        mov byte ptr [esi + ebx], cl
        movzx ecx, word ptr [eax + ebp + 1]
        inc eax
        inc esi
        lea edx, [ecx + ecx]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 14: je 0x58906921
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax + ebp]
        mov dword ptr [esi + ebx], edx
        dec ecx
        add eax, 3
        add esi, edi
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 EF: jne 0x58906910
        __asm _emit 0x75
        __asm _emit 0xef
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D B6: jge 0x589068e0
        __asm _emit 0x7d
        __asm _emit 0xb6
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 83 F9 FE: cmp cx, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 DD FC FF FF: je 0x58906615
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes EB 92: jmp 0x589068d6
        __asm _emit 0xeb
        __asm _emit 0x92
        cmp al, 1
        ; Exact mapped bytes 0F 85 78 00 00 00: jne 0x589069c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor esi, esi
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 51: jl 0x589069aa
        __asm _emit 0x7c
        __asm _emit 0x51
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ecx + ecx]
        mov cl, byte ptr [eax + ebp + 2]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        mov byte ptr [esi + ebx], cl
        movzx ecx, word ptr [eax + ebp + 1]
        inc eax
        inc esi
        lea edx, [ecx + ecx]
        ; Exact mapped bytes 66 89 14 1E: mov word ptr [esi + ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 14: je 0x589069a1
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax + ebp]
        mov dword ptr [esi + ebx], edx
        dec ecx
        add eax, 3
        add esi, edi
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 EF: jne 0x58906990
        __asm _emit 0x75
        __asm _emit 0xef
        movzx ecx, word ptr [eax + ebp]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D B6: jge 0x58906960
        __asm _emit 0x7d
        __asm _emit 0xb6
        ; Exact mapped bytes 66 83 3C 28 FE: cmp word ptr [eax + ebp], -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 01 FE FF FF: je 0x589067b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 0C 1E: mov word ptr [esi + ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x1e
        add eax, 2
        add esi, 2
        ; Exact mapped bytes EB 8C: jmp 0x58906950
        __asm _emit 0xeb
        __asm _emit 0x8c
        test al, al
        ; Exact mapped bytes 75 6A: jne 0x58906a32
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [eax + 38h]
        imul ecx, dword ptr [eax + 34h]
        xor esi, esi
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x589069ef
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, ebp
        ; Exact mapped bytes EB 03: jmp 0x589069e0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [esi + ebx], edx
        add eax, 3
        add esi, edi
        sub ecx, 1
        ; Exact mapped bytes 75 F1: jne 0x589069e0
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, 0fffffffeh
        ; Exact mapped bytes 66 89 04 1E: mov word ptr [esi + ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x1e
        add esi, 2
        push esi
        ; Exact mapped bytes E8 39 6B 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        mov edi, dword ptr [edx + 18ch]
        mov edi, dword ptr [edi + ecx*4]
        mov dword ptr [edi + 0ch], eax
        mov edx, dword ptr [edx + 18ch]
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [eax + 0ch]
        push esi
        push ebx
        push ecx
        ; Exact mapped bytes E8 23 63 07 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x63
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D FC DF 9C 58: mov edi, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        add esp, 10h
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [eax + 44h]
        add ebp, dword ptr [eax + 30h]
        mov eax, dword ptr [esp + 24h]
        add dword ptr [esp + 2ch], edx
        mov edx, dword ptr [esp + 28h]
        inc eax
        cmp eax, dword ptr [edx + 164h]
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8C 47 F6 FF FF: jl 0x589060a0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [edx + 160h]
        test esi, esi
        ; Exact mapped bytes 0F 8E 9D 02 00 00: jle 0x58906d04
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, esi
        mov edx, 40h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        xor eax, eax
        add ecx, 4
        setb al
        neg eax
        or eax, ecx
        push eax
        ; Exact mapped bytes E8 C3 61 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x61
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        xor ecx, ecx
        mov dword ptr [esp + 2b8h], 1ch
        cmp eax, ecx
        ; Exact mapped bytes 74 2D: je 0x58906ad0
        __asm _emit 0x74
        __asm _emit 0x2d
        push 58903a80h
        push 58903d10h
        push esi
        lea edi, [eax + 4]
        push 40h
        push edi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 03 66 07 00: call 0x5897d0be
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, edi
        xor ecx, ecx
        ; Exact mapped bytes EB 11: jmp 0x58906ad2
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a25c4h
        ; Exact mapped bytes E9 58 02 00 00: jmp 0x58906d28
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [esp + 2b8h], 0ffffffffh
        mov dword ptr [edx + 190h], eax
        cmp eax, ecx
        ; Exact mapped bytes 75 1C: jne 0x58906b07
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 589a2734h
        push 100h
        lea edx, [esp + 1b8h]
        push edx
        ; Exact mapped bytes E9 2E 02 00 00: jmp 0x58906d35
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 160h], ecx
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes 0F 8E F7 01 00 00: jle 0x58906d0e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], ecx
        ; Exact mapped bytes EB 05: jmp 0x58906b22
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        xor ecx, ecx
        mov esi, ebp
        add ebp, 3ch
        mov dword ptr [esp + 40h], ecx
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 14h], ecx
        lea eax, [esi + 1]
        mov dword ptr [esp + 30h], 0fh
        ; Exact mapped bytes 0F BE 50 FF: movsx edx, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0xff
        add ecx, edx
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        add dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F BE 50 01: movsx edx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x01
        add dword ptr [esp + 20h], edx
        ; Exact mapped bytes 0F BE 50 02: movsx edx, byte ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x02
        add dword ptr [esp + 40h], edx
        add eax, 4
        sub dword ptr [esp + 30h], 1
        ; Exact mapped bytes 75 D9: jne 0x58906b3e
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 20h]
        add eax, edx
        add eax, dword ptr [esp + 40h]
        add ecx, eax
        cmp ecx, dword ptr [ebp]
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x58906cdf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 36h]
        xor ecx, ecx
        mov edx, 8
        add ebp, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 B3 60 07 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        movzx eax, word ptr [esi + 36h]
        add eax, eax
        add eax, eax
        push eax
        ; Exact mapped bytes E8 8D 69 07 00: call 0x5897d53a
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, dword ptr [esp + 30h]
        mov dword ptr [esp + 28h], eax
        mov al, byte ptr [edi + 15dh]
        add esp, 8
        xor ecx, ecx
        test al, al
        ; Exact mapped bytes 75 57: jne 0x58906c1b
        __asm _emit 0x75
        __asm _emit 0x57
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 3B 46 36: cmp ax, word ptr [esi + 0x36]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x36
        ; Exact mapped bytes 0F 83 A6 00 00 00: jae 0x58906c78
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x58906be0
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x58906be0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 28h]
        mov dword ptr [eax + edx*8], 0
        mov dword ptr [eax + edx*8 + 4], 0
        mov eax, dword ptr [ebp]
        mov edi, dword ptr [edi + 18ch]
        mov eax, dword ptr [edi + eax*4]
        mov edi, dword ptr [esp + 20h]
        mov dword ptr [edi + edx*4], eax
        movzx eax, word ptr [esi + 36h]
        add ecx, dword ptr [ebp]
        inc edx
        add ebp, 4
        cmp edx, eax
        ; Exact mapped bytes 7C C7: jl 0x58906be0
        __asm _emit 0x7c
        __asm _emit 0xc7
        ; Exact mapped bytes EB 59: jmp 0x58906c74
        __asm _emit 0xeb
        __asm _emit 0x59
        cmp al, 1
        ; Exact mapped bytes 75 59: jne 0x58906c78
        __asm _emit 0x75
        __asm _emit 0x59
        xor edx, edx
        xor eax, eax
        ; Exact mapped bytes 66 3B 56 36: cmp dx, word ptr [esi + 0x36]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x36
        ; Exact mapped bytes 73 4F: jae 0x58906c78
        __asm _emit 0x73
        __asm _emit 0x4f
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [esp + 30h], edx
        mov edx, dword ptr [ebp]
        mov edi, dword ptr [esp + 28h]
        mov edi, dword ptr [edi + 18ch]
        mov edx, dword ptr [edi + edx*4]
        mov edi, dword ptr [esp + 20h]
        mov dword ptr [edi + eax*4], edx
        add ecx, dword ptr [ebp]
        mov edx, dword ptr [esp + 30h]
        mov edi, dword ptr [ebp + 4]
        add ebp, 4
        mov dword ptr [edx], edi
        mov edi, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], edi
        add edi, dword ptr [edx]
        add edx, 8
        mov dword ptr [esp + 30h], edx
        movzx edx, word ptr [esi + 36h]
        inc eax
        add ecx, edi
        add ebp, 8
        cmp eax, edx
        ; Exact mapped bytes 7C BD: jl 0x58906c31
        __asm _emit 0x7c
        __asm _emit 0xbd
        mov edi, dword ptr [esp + 28h]
        cmp ecx, dword ptr [esi + 38h]
        ; Exact mapped bytes 75 6E: jne 0x58906ceb
        __asm _emit 0x75
        __asm _emit 0x6e
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [edi + 190h]
        mov dword ptr [ecx + eax + 4], 0
        ; Exact mapped bytes 0F BF 56 34: movsx edx, word ptr [esi + 0x34]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x56
        __asm _emit 0x34
        mov ecx, dword ptr [edi + 190h]
        mov dword ptr [ecx + eax + 8], edx
        mov edx, dword ptr [edi + 190h]
        ; Exact mapped bytes 66 8B 4E 36: mov cx, word ptr [esi + 0x36]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x36
        ; Exact mapped bytes 66 89 4C 02 0C: mov word ptr [edx + eax + 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x0c
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [edx + eax + 14h], ecx
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esi + 38h]
        add dword ptr [esp + 2ch], edx
        inc ecx
        add eax, 40h
        cmp ecx, dword ptr [edi + 160h]
        mov dword ptr [esp + 34h], ecx
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 8C 43 FE FF FF: jl 0x58906b20
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2F: jmp 0x58906d0e
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a2594h
        ; Exact mapped bytes EB 3D: jmp 0x58906d28
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [esp + 1ch]
        push edx
        push 589a2564h
        push 100h
        lea eax, [esp + 1b8h]
        push eax
        ; Exact mapped bytes EB 31: jmp 0x58906d35
        __asm _emit 0xeb
        __asm _emit 0x31
        mov dword ptr [edx + 190h], 0
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [ecx + 168h]
        cmp edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 74 66: je 0x58906d84
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, dword ptr [esp + 1ch]
        push eax
        push 589a253ch
        push 100h
        lea ecx, [esp + 1b8h]
        push ecx
        ; Exact mapped bytes E8 26 4D E4 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x4d
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        push ebx
        ; Exact mapped bytes E8 53 62 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x62
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 2ch]
        add esp, 4
        xor eax, eax
        mov dword ptr [ebx + 18ch], eax
        mov dword ptr [ebx + 190h], eax
        xor eax, eax
        mov ecx, dword ptr [esp + 2b0h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 298h]
        xor ecx, esp
        ; Exact mapped bytes E8 5F 5E 07 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5e
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 2a8h
        ret 8
    }
}
