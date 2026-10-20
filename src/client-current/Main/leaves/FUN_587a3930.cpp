// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3930 .. +0x20F bytes.
extern "C" __declspec(naked) void FUN_587a3930() {
    __asm {
        push -1
        push 58980911h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov eax, dword ptr [esi + 3e8h]
        xor ebp, ebp
        mov dword ptr [esi + 134h], 2
        cmp eax, ebp
        ; Exact mapped bytes 74 09: je 0x587a3976
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 D1 92 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x92
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 44: je 0x587a39d0
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 15 F4 46 A2 58: mov edx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 160h], ebp
        ; Exact mapped bytes 7E 10: jle 0x587a39aa
        __asm _emit 0x7e
        __asm _emit 0x10
        cmp dword ptr [edx + 190h], ebp
        ; Exact mapped bytes 74 08: je 0x587a39aa
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [edx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587a39ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 10524h]
        push 1770h
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 B2 42 16 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587a39d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebx, 0ffffffffh
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes E8 3B F3 15 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf3
        __asm _emit 0x15
        __asm _emit 0x00
        push 60h
        ; Exact mapped bytes E8 62 92 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x92
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 1
        cmp eax, ebp
        ; Exact mapped bytes 74 59: je 0x587a3a58
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 16: jle 0x587a3a24
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x587a3a24
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 300h
        ; Exact mapped bytes EB 02: jmp 0x587a3a26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push ebx
        push 1b58h
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        mov edx, dword ptr [esi + 3f8h]
        push edi
        push edx
        push ecx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 08 38 01 00: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        push 20h
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes E8 EB 91 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x91
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 2
        cmp eax, ebp
        ; Exact mapped bytes 74 44: je 0x587a3aba
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [esi + 4]
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x587a3a86
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        ; Exact mapped bytes 8B 3D DC 46 A2 58: mov edi, dword ptr [0x58a246dc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 7
        cmp dword ptr [edi + 170h], edx
        ; Exact mapped bytes 7E 17: jle 0x587a3aae
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp edx, ebp
        ; Exact mapped bytes 7C 13: jl 0x587a3aae
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [edi + 194h], ebp
        ; Exact mapped bytes 74 0B: je 0x587a3aae
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [edi + 194h]
        mov edx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x587a3ab0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 98 38 01 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebp, eax
        mov dword ptr [esi + 70h], ebp
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 1ch]
        sub eax, dword ptr [ecx + 14h]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        sar eax, 1
        imul eax, eax, 3e8h
        mov dword ptr [esp + 20h], ebx
        mov ebx, dword ptr [edx + 10524h]
        mov edi, dword ptr [ebx + 114h]
        cdq
        idiv edi
        mov dword ptr [esp + 14h], edi
        mov edi, dword ptr [esi + 4]
        sub edi, eax
        mov eax, dword ptr [ecx + 20h]
        sub eax, dword ptr [ecx + 18h]
        sub edi, dword ptr [ebx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv dword ptr [esp + 14h]
        sub eax, dword ptr [esi + 8]
        add eax, dword ptr [ebx + 54h]
        xor ebx, ebx
        cmp ebp, ebx
        ; Exact mapped bytes 74 10: je 0x587a3b25
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push eax
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 DB 38 01 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 13ch], ebx
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 10h
        ret
    }
}
