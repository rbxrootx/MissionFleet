// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D8F0 .. +0x1DF bytes.
extern "C" __declspec(naked) void FUN_5884d8f0() {
    __asm {
        push -1
        push 58984fe9h
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
        mov dword ptr [esp + 14h], esi
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebp
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 60 58 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 44ch
        mov edx, 47eh
        mov eax, 474h
        push 54h
        mov dword ptr [esp + 24h], 0
        mov dword ptr [esi], 5899e814h
        ; Exact mapped bytes 66 89 4E 6C: mov word ptr [esi + 0x6c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 56 6E: mov word ptr [esi + 0x6e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x6e
        ; Exact mapped bytes 66 89 46 70: mov word ptr [esi + 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes E8 DE F2 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5884d9bd
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 206h
        ; Exact mapped bytes 7E 17: jle 0x5884d9a9
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5884d9a9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 818h]
        ; Exact mapped bytes EB 02: jmp 0x5884d9ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        movzx edx, word ptr [esi + 6ch]
        push edx
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A5 42 EE FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884d9bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 80 F2 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 2
        test edi, edi
        ; Exact mapped bytes 74 2D: je 0x5884da0d
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 66 8B 46 6C: mov ax, word ptr [esi + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x6c
        ; Exact mapped bytes 66 40: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        movzx eax, ax
        push eax
        push 0
        push 0
        lea ecx, [ebp + 0ch]
        push ecx
        lea edx, [ebx + 10h]
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A2 57 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x57
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5884da0f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 80h], edi
        ; Exact mapped bytes E8 2A F2 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5884da71
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 22h
        ; Exact mapped bytes 7E 17: jle 0x5884da5a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5884da5a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 880h
        ; Exact mapped bytes EB 02: jmp 0x5884da5c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebp, 4
        push ebp
        add ebx, 6eh
        push ebx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 91 96 0B 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x96
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5884da73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 99 52 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x52
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, dword ptr [esi + 78h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 8B 46 6E: mov ax, word ptr [esi + 0x6e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x6e
        xor ebx, ebx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5884daa1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AF 54 0B 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5884daae
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 32 54 0B 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 5ch], ebx
        mov eax, esi
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
