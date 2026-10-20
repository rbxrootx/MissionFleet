// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044DC48 .. +0x4A6 bytes.
extern "C" __declspec(naked) void FUN_0044dc48_0044DC48() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dd78h
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
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 5ch], ecx
        mov dword ptr [ebp - 1ch], 80004005h
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 20h], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 20 3F 0E 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 35: je 0x44dcbd
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 14: je 0x44dca5
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a1h
        push 67702ch
        ; Exact mapped bytes E8 A0 B0 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44dca5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x44dc88
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 38h], eax
        ; Exact mapped bytes E8 B3 24 0F 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x24
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 75 11: jne 0x44dce2
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes E8 BC 7E 0F 00: call 0x545b92
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x44dce2
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E9 F9 03 00 00: jmp 0x44e0db
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 2ch]
        push edx
        mov eax, dword ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 25 08 00 00: call 0x44e51f
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 8C 65 03 00 00: jl 0x44e06c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x44dd24
        __asm _emit 0x75
        __asm _emit 0x14
        push 0adh
        push 67702ch
        ; Exact mapped bytes E8 21 B0 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44dd24
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x44dd07
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [edx + 28h], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x44ddc5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 4A A8 09 00: call 0x4e8591
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 18h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 48: call dword ptr [ecx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x48
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 B1 EC 0C 00: call 0x51ca23
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 AC 44 0E 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 2ch
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 80 A8 09 00: call 0x4e8643
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 38: jmp 0x44ddfd
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 63 44 0E 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 2ch
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 68h], 30000h
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 70h]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x44de25
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 68h]
        or edx, 1
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 68h], edx
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 70h]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x44de40
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 14h]
        and eax, 0efffffffh
        mov dword ptr [ebp + 14h], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp + 14h]
        and edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 6ch], edx
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 74 3C: je 0x44de91
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 0cch
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        add edx, 3ch
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E3 0F 00 00: call 0x44ee51
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 5ch]
        add edx, 0c8h
        push edx
        push 640c40h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C6 0F 00 00: call 0x44ee51
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 5ch]
        add edx, 0d4h
        push edx
        push 640bf0h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 A9 0F 00 00: call 0x44ee51
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 84h], eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 2D FC FF FF: call 0x44dae6
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 5ch]
        add edx, 50h
        push edx
        push 640c50h
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 8C AC 00 00 00: jl 0x44df8f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x44df06
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push -5
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x44df8d
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffff8300h
        push 0ffff8300h
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 2ch
        ; Exact mapped bytes E8 57 46 0E 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x46
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0
        push -5
        mov eax, dword ptr [ebp - 5ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7C 5A: jl 0x44df8d
        __asm _emit 0x7c
        __asm _emit 0x5a
        push 0
        push -3
        mov eax, dword ptr [ebp - 5ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7C 42: jl 0x44df8d
        __asm _emit 0x7c
        __asm _emit 0x42
        push 7d00h
        push 7d00h
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 2ch
        ; Exact mapped bytes E8 12 46 0E 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x46
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 2ch
        ; Exact mapped bytes E8 57 44 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 2ch
        ; Exact mapped bytes E8 4B 44 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 22: jmp 0x44dfb1
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 20h]
        push eax
        push 677038h
        ; Exact mapped bytes E8 78 26 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push 677078h
        ; Exact mapped bytes E8 67 26 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7C 08: jl 0x44dfbf
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E8 13 00 00: call 0x44f3a7
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x44e06c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 74 1C: je 0x44dfee
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4D 0F 00 00: call 0x44ef51
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 64h]
        push edx
        push 640c40h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 39 0F 00 00: call 0x44ef51
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 640bf0h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 22 0F 00 00: call 0x44ef51
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 4ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7C 66: jl 0x44e0d8
        __asm _emit 0x7c
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 00 16 00 00: call 0x44f67a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x44e097
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ah
        push 67702ch
        ; Exact mapped bytes E8 AE AC 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e097
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x44e07a
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 12: je 0x44e0b5
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp + 14h]
        and eax, 8800000h
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 6ch]
        or edx, eax
        push edx
        push 0
        mov eax, dword ptr [ebp - 5ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
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
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
