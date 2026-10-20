// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A424F .. +0x389 bytes.
extern "C" __declspec(naked) void FUN_004a424f_004A424F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d3c9h
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
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 06: je 0x4a4295
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 04: jmp 0x4a4299
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 24h], 20h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 78h]
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x4a4356
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 200h
        test ecx, ecx
        ; Exact mapped bytes 75 29: jne 0x4a42ec
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D 86 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        or edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 D9 02 00 00: jmp 0x4a45c5
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 55 DC: movsx edx, byte ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xdc
        cmp ecx, edx
        ; Exact mapped bytes 74 1B: je 0x4a4315
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x4a4315
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 03 54 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB D7: jmp 0x4a42ec
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F2 53 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 28: jne 0x4a4356
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 78h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 86 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        or al, 1
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 6F 02 00 00: jmp 0x4a45c5
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 78h]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 13 86 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 63: jne 0x4a43d5
        __asm _emit 0x75
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        ; Exact mapped bytes 0F BE 4D DC: movsx ecx, byte ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xdc
        cmp eax, ecx
        ; Exact mapped bytes 74 11: je 0x4a439a
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 7E 53 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB E1: jmp 0x4a437b
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [eax + 78h]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 9A CD FF FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 1D 87 02 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 17 85 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 91 85 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        ; Exact mapped bytes 0F BE 45 DC: movsx eax, byte ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xdc
        cmp edx, eax
        ; Exact mapped bytes 74 1B: je 0x4a4414
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4a4414
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 04 53 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB D7: jmp 0x4a43eb
        __asm _emit 0xeb
        __asm _emit 0xd7
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 15: jne 0x4a442f
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x4a442f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 6A: jmp 0x4a4499
        __asm _emit 0xeb
        __asm _emit 0x6a
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 38: jne 0x4a446d
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 34h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 02 CD FF FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 85 86 02 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 7F 84 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 9A 52 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x52
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x4a4491
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 08: jmp 0x4a4499
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 EB 08 08 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x4a4568
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F7 08 08 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 4E CE F5 FF: call 0x401307
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 16: jne 0x4a44db
        __asm _emit 0x75
        __asm _emit 0x16
        push 2fh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 DB 08 08 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 32 CE F5 FF: call 0x401307
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x4a4568
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BD 08 08 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 2ch]
        sub esi, eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 66 08 08 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        sub eax, 1
        cmp esi, eax
        ; Exact mapped bytes 75 67: jne 0x4a4568
        __asm _emit 0x75
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 74 1F: je 0x4a452b
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2fh
        ; Exact mapped bytes 74 14: je 0x4a452b
        __asm _emit 0x74
        __asm _emit 0x14
        push 122h
        push 674ab0h
        ; Exact mapped bytes E8 1A 48 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a452b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x4a4501
        __asm _emit 0x75
        __asm _emit 0xd0
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 77 87 02 00: call 0x4cccb9
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        or ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 95 83 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 89 83 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 5D: jmp 0x4a45c5
        __asm _emit 0xeb
        __asm _emit 0x5d
        lea edx, [ebp - 18h]
        push edx
        push 5ch
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 AA C2 FF FF: call 0x4a0825
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], edx
        mov byte ptr [ebp - 4], 5
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 24 87 02 00: call 0x4cccb9
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        or edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 42 83 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 36 83 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 2A 83 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
