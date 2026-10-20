// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046479E .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_0046479e_0046479E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 54h], ecx
        push 3ch
        push 67d074h
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 A6 5A 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5a
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 38: je 0x464809
        __asm _emit 0x74
        __asm _emit 0x38
        push 41h
        push 67d074h
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 7F 5A 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5a
        __asm _emit 0x07
        __asm _emit 0x00
        push 63d0d0h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 A2 59 07 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x464803
        __asm _emit 0x75
        __asm _emit 0x11
        push 42h
        push 67d074h
        ; Exact mapped bytes E8 42 45 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x464803
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4647e1
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 15: je 0x464824
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 A2 44 11 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x464824
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 07: jmp 0x46482b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 1
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 60 82 0C 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        push 4ch
        push 67d074h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 14 5A 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5a
        __asm _emit 0x07
        __asm _emit 0x00
        push 3fffffffh
        push 3fffffffh
        push 0
        push 0
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 73 D9 0C 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 5D D9 0C 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 4ch]
        push ecx
        lea edx, [ebp - 34h]
        push edx
        push 1
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 5E EB 06 00: call 0x4d33e8
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        add eax, 104h
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 3fffffffh
        sub edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, 3fffffffh
        sub ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 4]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        push 0e900h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 89 14 07 00: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x464977
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        add eax, 104h
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 104h]
        sub edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 10h]
        sub eax, edx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 108h]
        sub edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 0ch]
        sub eax, edx
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 44h]
        sub edx, dword ptr [ecx + 10ch]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 40h]
        sub edx, dword ptr [ecx + 110h]
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 35 D8 0C 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        add eax, 114h
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 28 DC 0C 00: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdc
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 0
        ; Exact mapped bytes E8 79 EC 06 00: call 0x4d3632
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 08 30 08 00: call 0x4e79cd
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 7C 2F 08 00: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x2f
        __asm _emit 0x08
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        push 0
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F9 E9 06 00: call 0x4d33e8
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
