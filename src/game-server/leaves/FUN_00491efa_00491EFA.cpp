// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00491EFA .. +0x7B6 bytes.
extern "C" __declspec(naked) void FUN_00491efa_00491EFA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e301h
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
        sub esp, 0dch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0e8h], ecx
        mov eax, dword ptr [ebp - 0e8h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 14: je 0x491f41
        __asm _emit 0x74
        __asm _emit 0x14
        push 19eh
        push 5ca8a4h
        ; Exact mapped bytes E8 C4 2A 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x491f41
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x491f21
        __asm _emit 0x75
        __asm _emit 0xda
        push 28h
        lea edx, [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 88 2A 5E 00: call dword ptr [0x5e2a88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        add edx, 4ch
        push edx
        push 58e4e0h
        push 3
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DD FB FF FF: call 0x491b54
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 3C: jge 0x491fbc
        __asm _emit 0x7d
        __asm _emit 0x3c
        lea ecx, [ebp - 70h]
        push ecx
        push 5ca90ch
        ; Exact mapped bytes E8 87 DC 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 5ca93ch
        ; Exact mapped bytes E8 76 DC 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        push 5ca958h
        push 5ca984h
        ; Exact mapped bytes E8 64 DC 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 E1 06 00 00: jmp 0x49269d
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 0e8h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 18 0A 00 00: call 0x4929fe
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x492092
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        add eax, 70h
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 70h]
        and edx, 20000h
        test edx, edx
        ; Exact mapped bytes 74 54: je 0x492092
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 0e8h]
        add eax, 0b8h
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 27: jge 0x492092
        __asm _emit 0x7d
        __asm _emit 0x27
        lea ecx, [ebp - 70h]
        push ecx
        push 5ca988h
        ; Exact mapped bytes E8 9C DB 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 5ca9b4h
        ; Exact mapped bytes E8 8B DB 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 92 05 00 00: jmp 0x492624
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x4920b2
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4920b2
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c8h
        push 5ca8a4h
        ; Exact mapped bytes E8 53 29 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x29
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4920b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x492092
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x4921af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x4921af
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        push 58e4d0h
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C BB 00 00 00: jl 0x4921af
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 3
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x4921af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x492129
        __asm _emit 0x75
        __asm _emit 0x14
        push 1cfh
        push 5ca8a4h
        ; Exact mapped bytes E8 DC 28 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492129
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x49210f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 78h], 0
        lea edx, [ebp - 74h]
        push edx
        lea eax, [ebp - 78h]
        push eax
        push -1
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 74h]
        sub eax, dword ptr [ebp - 78h]
        cmp eax, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 74 14: je 0x49216f
        __asm _emit 0x74
        __asm _emit 0x14
        push 1d6h
        push 5ca8a4h
        ; Exact mapped bytes E8 96 28 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49216f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x492150
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 05: jge 0x4921aa
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A 04 00 00: jmp 0x492624
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0C 04 00 00: jmp 0x4925bb
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x4922af
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        push 58e4c0h
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C CE 00 00 00: jl 0x4922af
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4921fb
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e3h
        push 5ca8a4h
        ; Exact mapped bytes E8 0A 28 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4921fb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4921e1
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x492218
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 59: jmp 0x492271
        __asm _emit 0xeb
        __asm _emit 0x59
        push 0
        push 1000h
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 C2 28 07 00: call 0x504af2
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 0c0h]
        push ecx
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 07 E0 04 00: call 0x4e0250
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 CF 2A 07 00: call 0x504d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 27: jge 0x4922aa
        __asm _emit 0x7d
        __asm _emit 0x27
        lea eax, [ebp - 70h]
        push eax
        push 5ca9d0h
        ; Exact mapped bytes E8 84 D9 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 5ca9fch
        ; Exact mapped bytes E8 73 D9 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 7A 03 00 00: jmp 0x492624
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0C 03 00 00: jmp 0x4925bb
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        push 58e4b0h
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 0F 8C C0 02 00 00: jl 0x492597
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4922f1
        __asm _emit 0x75
        __asm _emit 0x14
        push 1feh
        push 5ca8a4h
        ; Exact mapped bytes E8 14 27 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4922f1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4922d7
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x4923dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], 0
        lea ecx, [ebp - 0cch]
        push ecx
        push 1
        push 0
        ; Exact mapped bytes FF 15 8C 2A 5E 00: call dword ptr [0x5e2a8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8C AE 00 00 00: jl 0x4923d7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 75 14: jne 0x492346
        __asm _emit 0x75
        __asm _emit 0x14
        push 207h
        push 5ca8a4h
        ; Exact mapped bytes E8 BF 26 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x26
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492346
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x492329
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 0d0h], 0
        lea eax, [ebp - 0d0h]
        push eax
        push 0
        push 1012h
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 90 2A 5E 00: call dword ptr [0x5e2a90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 4B: jl 0x4923c5
        __asm _emit 0x7c
        __asm _emit 0x4b
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 75 14: jne 0x492397
        __asm _emit 0x75
        __asm _emit 0x14
        push 20dh
        push 5ca8a4h
        ; Exact mapped bytes E8 6E 26 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x26
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492397
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x49237a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes E9 80 01 00 00: jmp 0x49255c
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 6F 01 00 00: je 0x492555
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 84 23 5E 00: call dword ptr [0x5e2384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 44: je 0x492459
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 28: je 0x492459
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x49246a
        __asm _emit 0xeb
        __asm _emit 0x11
        mov dword ptr [ebp - 18h], 8007000eh
        mov dword ptr [ebp - 0e0h], 0
        mov dword ptr [ebp - 0dch], 0
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x492553
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0dch]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        ; Exact mapped bytes FF 15 8C 2A 5E 00: call dword ptr [0x5e2a8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8C AF 00 00 00: jl 0x492553
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 75 14: jne 0x4924c1
        __asm _emit 0x75
        __asm _emit 0x14
        push 22dh
        push 5ca8a4h
        ; Exact mapped bytes E8 44 25 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x25
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4924c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4924a4
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 0e4h], 0
        lea ecx, [ebp - 0e4h]
        push ecx
        push 0
        push 0
        push 12h
        push 0
        mov edx, dword ptr [ebp - 0dch]
        push edx
        ; Exact mapped bytes FF 15 94 2A 5E 00: call dword ptr [0x5e2a94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 4B: jl 0x492541
        __asm _emit 0x7c
        __asm _emit 0x4b
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 75 14: jne 0x492513
        __asm _emit 0x75
        __asm _emit 0x14
        push 232h
        push 5ca8a4h
        ; Exact mapped bytes E8 F2 24 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492513
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4924f6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes EB 07: jmp 0x49255c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 8000ffffh
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 27: jge 0x492595
        __asm _emit 0x7d
        __asm _emit 0x27
        lea edx, [ebp - 70h]
        push edx
        push 5caa18h
        ; Exact mapped bytes E8 99 D6 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 5caa44h
        ; Exact mapped bytes E8 88 D6 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x492624
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x4925bb
        __asm _emit 0xeb
        __asm _emit 0x24
        lea ecx, [ebp - 70h]
        push ecx
        push 5caa60h
        ; Exact mapped bytes E8 70 D6 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 5caa90h
        ; Exact mapped bytes E8 5F D6 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 69: jmp 0x492624
        __asm _emit 0xeb
        __asm _emit 0x69
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 63: jne 0x492624
        __asm _emit 0x75
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 70h]
        and ecx, 20000h
        test ecx, ecx
        ; Exact mapped bytes 75 50: jne 0x492624
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 0e8h]
        add edx, 0b8h
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 22: jge 0x492624
        __asm _emit 0x7d
        __asm _emit 0x22
        lea eax, [ebp - 70h]
        push eax
        push 5caaach
        ; Exact mapped bytes E8 05 D6 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 5caad8h
        ; Exact mapped bytes E8 F4 D5 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 4B: jge 0x492675
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 0e8h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 3F: je 0x492675
        __asm _emit 0x74
        __asm _emit 0x3f
        push 1
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [eax + 4ch], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0C: je 0x492687
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0D: je 0x49269a
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 07: jl 0x49269a
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp - 18h]
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
