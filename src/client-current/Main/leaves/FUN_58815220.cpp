// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58815220 .. +0x1DB bytes.
extern "C" __declspec(naked) void FUN_58815220() {
    __asm {
        push -1
        push 58983189h
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
        mov edi, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 30 DF 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi], 5899d768h
        ; Exact mapped bytes E8 C0 79 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 43: je 0x588152e1
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 68 47 A2 58: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 38h
        ; Exact mapped bytes 7E 23: jle 0x588152d0
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 1B: je 0x588152d0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0e0h]
        push 40h
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 92 C9 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc9
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588152e3
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push edi
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 81 C9 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc9
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588152e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes E8 5A 79 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 4D: je 0x58815351
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D 68 47 A2 58: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 16: jle 0x58815329
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58815329
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 240h
        ; Exact mapped bytes EB 02: jmp 0x5881532b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [edi + 1eh]
        push ecx
        lea ecx, [ebp + 0c4h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 51 8A F4 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8a
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58815353
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 10ch
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes E8 EA 78 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 30: je 0x588153a4
        __asm _emit 0x74
        __asm _emit 0x30
        push 646464h
        push ebx
        push 0ffffffh
        lea edx, [edi + 31h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 0bch]
        push ecx
        add edi, 21h
        push edi
        add ebp, 3ah
        push ebp
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EE BC F4 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbc
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588153a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 15h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 58h], eax
        ; Exact mapped bytes E8 8A 3A F3 FF: call 0x58748e40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 58h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e5ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
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
