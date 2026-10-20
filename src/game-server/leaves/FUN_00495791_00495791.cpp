// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00495791 .. +0x6BB bytes.
extern "C" __declspec(naked) void FUN_00495791_00495791() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e426h
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
        sub esp, 0e8h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0e4h], ecx
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 0e4h]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 0F 84 AB 02 00 00: je 0x495a8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        push 58dbc0h
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 08: jge 0x495812
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 29 06 00 00: jmp 0x495e3b
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 24h]
        push eax
        push 58e500h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 0F 8C 9D 00 00 00: jl 0x4958cb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 14: jne 0x495848
        __asm _emit 0x75
        __asm _emit 0x14
        push 897h
        push 5ca8a4h
        ; Exact mapped bytes E8 BD F1 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf1
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x495848
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x49582e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 28h], 0
        lea edx, [ebp - 28h]
        push edx
        push 58da50h
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 51: jl 0x4958bf
        __asm _emit 0x7c
        __asm _emit 0x51
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 14: jne 0x495888
        __asm _emit 0x75
        __asm _emit 0x14
        push 89ch
        push 5ca8a4h
        ; Exact mapped bytes E8 7D F1 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf1
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x495888
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x49586e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0e4h]
        add ecx, 58h
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [edx + 4]
        add eax, 0d8h
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        push 8a5h
        push 5ca8a4h
        push 10h
        ; Exact mapped bytes E8 57 77 05 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0c8h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 17: je 0x49590c
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 2C 38 00 00: call 0x499130
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x495916
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 0c4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 0E 3E 00 00: call 0x499760
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        push 8a8h
        push 5ca8a4h
        push 1ch
        ; Exact mapped bytes E8 D0 76 05 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0d0h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 13: je 0x49598f
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 39 3E 00 00: call 0x4997c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x495999
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 0cch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 A7 50 00 00: call 0x49aa70
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 78 3E 00 00: call 0x499850
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [edx + 54h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 B0 3D 00 00: call 0x4997a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 32 3E 00 00: call 0x499830
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [edx + 10h]
        imul eax, eax, 28h
        push eax
        ; Exact mapped bytes FF 15 80 2A 5E 00: call dword ptr [0x5e2a80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 0e4h]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x495a43
        __asm _emit 0x75
        __asm _emit 0x14
        push 8adh
        push 5ca8a4h
        ; Exact mapped bytes E8 C2 EF 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x495a43
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x495a23
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx + 10h]
        imul edx, edx, 28h
        push edx
        push 0
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        ; Exact mapped bytes E8 09 39 01 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 A8 37 00 00: call 0x499220
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 1A 36 00 00: call 0x4990a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 02 00 00: jmp 0x495c8f
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 75 07: jne 0x495aaa
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 91 03 00 00: jmp 0x495e3b
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0a4h]
        push eax
        lea ecx, [ebp - 0b4h]
        push ecx
        push 58e570h
        mov edx, dword ptr [ebp - 0b0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 08: jge 0x495ae0
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 5B 03 00 00: jmp 0x495e3b
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 58e640h
        lea edx, [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 55 03 00 00: call 0x495e4c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], 0
        mov dword ptr [ebp - 84h], 0
        mov dword ptr [ebp - 7ch], 18h
        mov dword ptr [ebp - 80h], 0ffffffffh
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 74h], 1fbh
        push 58e718h
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 11 03 00 00: call 0x495e4c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], 1ch
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 4ch], 20h
        mov dword ptr [ebp - 50h], 0ffffffffh
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 44h], 1eh
        push 0
        push 28h
        lea ecx, [ebp - 0a0h]
        push ecx
        push 2
        mov edx, dword ptr [ebp - 0b4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 1A: jge 0x495ba7
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 0b4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 94 02 00 00: jmp 0x495e3b
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 0a8h], 0
        mov dword ptr [ebp - 0ach], 0
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 1A: jge 0x495c27
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 0b4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 14 02 00 00: jmp 0x495e3b
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [ebp - 0e4h]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x495c53
        __asm _emit 0x75
        __asm _emit 0x14
        push 8e9h
        push 5ca8a4h
        ; Exact mapped bytes E8 B2 ED 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x495c53
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x495c33
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 0b4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x495ca1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 7D 77: jge 0x495d26
        __asm _emit 0x7d
        __asm _emit 0x77
        push 8f3h
        push 5ca8a4h
        push 1ch
        ; Exact mapped bytes E8 9F 73 05 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 15: je 0x495ceb
        __asm _emit 0x74
        __asm _emit 0x15
        push 0ah
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 0D 13 05 00: call 0x4e6ff0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x495cf5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0d4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 28h
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [edx + 14h]
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + ecx + 24h], edx
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x495c98
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x495e38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x495d4b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0b8h]
        add eax, 1
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D D4 00 00 00: jge 0x495e2e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b8h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx + 24h]
        ; Exact mapped bytes E8 1F CF 09 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 46: je 0x495dc4
        __asm _emit 0x74
        __asm _emit 0x46
        lea ecx, [ebp - 0bch]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + edx + 24h]
        ; Exact mapped bytes E8 10 CF 09 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0c0h], edx
        push 1
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB B1: jmp 0x495d75
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov eax, dword ptr [ebp - 0b8h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + eax + 24h]
        ; Exact mapped bytes E8 C3 12 05 00: call 0x4e709c
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b8h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx + 24h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 0dch], edx
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 1B: je 0x495e1f
        __asm _emit 0x74
        __asm _emit 0x1b
        push 1
        mov eax, dword ptr [ebp - 0dch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x495e29
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x495d3c
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
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
        ret
    }
}
