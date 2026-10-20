// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476310 .. +0x3CA bytes.
extern "C" __declspec(naked) void FUN_00476310_00476310() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63f288h
        push 46d504h
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
        add esp, -38h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        ; Exact mapped bytes 83 3D 58 74 68 00 00: cmp dword ptr [0x687458], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 57: jne 0x476396
        __asm _emit 0x75
        __asm _emit 0x57
        push 1
        push 63f220h
        push 1
        push 63f220h
        push 0
        push 0
        ; Exact mapped bytes FF 15 48 B8 68 00: call dword ptr [0x68b848]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x476367
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 58 74 68 00 01 00 00 00: mov dword ptr [0x687458], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x476396
        __asm _emit 0xeb
        __asm _emit 0x2f
        push 1
        push 63f21ch
        push 1
        push 63f21ch
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC B7 68 00: call dword ptr [0x68b7dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x47638f
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 58 74 68 00 02 00 00 00: mov dword ptr [0x687458], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x476396
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5E 03 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7E 13: jle 0x4763af
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 67 03 00 00: call 0x476710
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp + 14h], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 7E 13: jle 0x4763c8
        __asm _emit 0x7e
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        ; Exact mapped bytes E8 4E 03 00 00: call 0x476710
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp + 1ch], eax
        ; Exact mapped bytes 83 3D 58 74 68 00 02: cmp dword ptr [0x687458], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 23: jne 0x4763f4
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 DC B7 68 00: call dword ptr [0x68b7dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 00 03 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 74 68 00 01: cmp dword ptr [0x687458], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 F1 02 00 00: jne 0x4766f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 09: jne 0x476410
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0D 50 75 68 00: mov ecx, dword ptr [0x687550]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 20h], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0A: je 0x476420
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 0F 85 7C 01 00 00: jne 0x47659c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 75 0A: jne 0x476432
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 C2 02 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 1
        ; Exact mapped bytes 7E 0A: jle 0x476442
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 B2 02 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 7E 0A: jle 0x476452
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 3
        ; Exact mapped bytes E9 A2 02 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes FF 15 7C B9 68 00: call dword ptr [0x68b97c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x47646b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 89 02 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 06: jne 0x476477
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 1ch], 1
        ; Exact mapped bytes 74 2D: je 0x4764a4
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 06: jne 0x476483
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 21: je 0x4764a4
        __asm _emit 0x74
        __asm _emit 0x21
        push 63f248h
        push 0
        push 0b6h
        push 63f240h
        push 2
        ; Exact mapped bytes E8 C5 69 FF FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4764a4
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C1: jne 0x47646b
        __asm _emit 0x75
        __asm _emit 0xc1
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7E 73: jle 0x476523
        __asm _emit 0x7e
        __asm _emit 0x73
        cmp dword ptr [ebp - 3ch], 2
        ; Exact mapped bytes 73 0A: jae 0x4764c0
        __asm _emit 0x73
        __asm _emit 0x0a
        mov eax, 3
        ; Exact mapped bytes E9 34 02 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 36h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 09: jmp 0x4764d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 2
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x476519
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 40h]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        test edx, edx
        ; Exact mapped bytes 74 31: je 0x476519
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 40h]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 7C 1D: jl 0x476517
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 40h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        cmp edx, ecx
        ; Exact mapped bytes 7F 0A: jg 0x476517
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 DD 01 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB AF: jmp 0x4764c8
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov eax, 3
        ; Exact mapped bytes E9 D1 01 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 7E 73: jle 0x47659c
        __asm _emit 0x7e
        __asm _emit 0x73
        cmp dword ptr [ebp - 3ch], 2
        ; Exact mapped bytes 73 0A: jae 0x476539
        __asm _emit 0x73
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 BB 01 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 36h]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 09: jmp 0x47654a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 40h]
        add eax, 2
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 3D: je 0x476592
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 40h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x476592
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp + 18h]
        xor eax, eax
        mov al, byte ptr [edx]
        mov ecx, dword ptr [ebp - 40h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp eax, edx
        ; Exact mapped bytes 7C 1D: jl 0x476590
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 40h]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        cmp ecx, eax
        ; Exact mapped bytes 7F 0A: jg 0x476590
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB AF: jmp 0x476541
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov eax, 1
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 9
        mov eax, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 07: jne 0x4765c4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 C6 F9 FE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], esp
        mov dword ptr [ebp - 18h], esp
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x476606
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 07: jne 0x476613
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 1
        mov eax, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x47663a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        push 9
        mov eax, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 07: jne 0x476662
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x4766f4
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 20h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 28 F9 FE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], esp
        mov dword ptr [ebp - 18h], esp
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x4766a4
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 04: jne 0x4766ae
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 46: jmp 0x4766f4
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        push 1
        mov eax, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4766d2
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 22: jmp 0x4766f4
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
    }
}
