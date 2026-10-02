// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 655 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58751BF0 .. +0x28F bytes.
extern "C" __declspec(naked) void FUN_58751bf0_segment_00() {
    __asm {
        sub esp, 444h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 440h], eax
        mov eax, dword ptr [esp + 458h]
        push ebx
        push edi
        mov ebx, ecx
        mov ecx, dword ptr [esp + 450h]
        xor edi, edi
        mov dword ptr [esp + 10h], ecx
        cmp eax, edi
        ; Exact mapped bytes 74 06: je 0x58751c26
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ebx + 84h], eax
        ; Exact mapped bytes 66 83 7B 7C 02: cmp word ptr [ebx + 0x7c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes 7D 1F: jge 0x58751c4c
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 45ch]
        mov edx, dword ptr [esp + 458h]
        push edi
        push eax
        push edx
        push edi
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 19 FE FF FF: call 0x58751a60
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1A 02 00 00: jmp 0x58751e66
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 458h]
        push esi
        push 3ffh
        lea eax, [esp + 55h]
        push edi
        push eax
        mov byte ptr [esp + 5ch], 20h
        ; Exact mapped bytes E8 DE AF 22 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaf
        __asm _emit 0x22
        __asm _emit 0x00
        push 31h
        lea ecx, [esp + 2dh]
        push edi
        push ecx
        mov byte ptr [esp + 34h], 20h
        ; Exact mapped bytes E8 CC AF 22 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xaf
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        add esp, 18h
        push edx
        mov dword ptr [esp + 14h], edi
        xor esi, esi
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 8C C8 01 00 00: jl 0x58751e64
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov al, byte ptr [eax + edi]
        mov byte ptr [esp + esi + 1ch], al
        cmp al, 20h
        ; Exact mapped bytes 74 3B: je 0x58751cea
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp al, 9
        ; Exact mapped bytes 74 37: je 0x58751cea
        __asm _emit 0x74
        __asm _emit 0x37
        cmp al, 0ah
        ; Exact mapped bytes 74 33: je 0x58751cea
        __asm _emit 0x74
        __asm _emit 0x33
        test al, al
        ; Exact mapped bytes 74 2F: je 0x58751cea
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp al, 0dh
        ; Exact mapped bytes 74 2B: je 0x58751cea
        __asm _emit 0x74
        __asm _emit 0x2b
        inc esi
        cmp esi, 30h
        ; Exact mapped bytes 0F 8E 69 01 00 00: jle 0x58751e32
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esp + 10h], esi
        mov eax, 400h
        lea ecx, [esp + 50h]
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x58751d6d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc ecx
        sub eax, 1
        ; Exact mapped bytes 75 F1: jne 0x58751cd6
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x58751db0
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F BF 43 7C: movsx eax, word ptr [ebx + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x7c
        inc esi
        lea edx, [esi + ecx]
        cmp edx, eax
        ; Exact mapped bytes 7E CF: jle 0x58751cc9
        __asm _emit 0x7e
        __asm _emit 0xcf
        mov edi, dword ptr [esp + 464h]
        mov ecx, dword ptr [esp + 460h]
        push 0
        push edi
        push ecx
        push ebp
        lea edx, [esp + 60h]
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 47 FD FF FF: call 0x58751a60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 10h], esi
        push 400h
        xor esi, esi
        lea eax, [esp + 54h]
        push esi
        push eax
        inc ebp
        ; Exact mapped bytes E8 18 AF 22 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xaf
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        push 5898d61ch
        push 400h
        lea ecx, [esp + 58h]
        push ecx
        ; Exact mapped bytes E8 89 FE FD FF: call 0x58731bd0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [esp + 1ch]
        push edx
        push 400h
        lea eax, [esp + 58h]
        push eax
        ; Exact mapped bytes E8 75 FE FD FF: call 0x58731bd0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 4B 7C: movsx ecx, word ptr [ebx + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4b
        __asm _emit 0x7c
        push ecx
        lea edx, [esp + 20h]
        push esi
        push edx
        ; Exact mapped bytes E8 DD AE 22 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xae
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes EB 5C: jmp 0x58751dc9
        __asm _emit 0xeb
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58751db0
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, 400h
        sub edx, eax
        mov ecx, 400h
        sub ecx, edx
        lea eax, [esp + edx + 50h]
        ; Exact mapped bytes 74 27: je 0x58751dac
        __asm _emit 0x74
        __asm _emit 0x27
        lea edi, [esp + 1ch]
        lea esi, [ecx + edx + 7ffffbffh]
        sub edi, eax
        test esi, esi
        ; Exact mapped bytes 74 12: je 0x58751da8
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [edi + eax]
        test dl, dl
        ; Exact mapped bytes 74 0B: je 0x58751da8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], dl
        dec ecx
        inc eax
        dec esi
        test ecx, ecx
        ; Exact mapped bytes 75 EC: jne 0x58751d92
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes EB 04: jmp 0x58751dac
        __asm _emit 0xeb
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 01: jne 0x58751dad
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        ; Exact mapped bytes 0F BF 43 7C: movsx eax, word ptr [ebx + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x7c
        push eax
        xor esi, esi
        lea ecx, [esp + 20h]
        push esi
        push ecx
        ; Exact mapped bytes E8 86 AE 22 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xae
        __asm _emit 0x22
        __asm _emit 0x00
        mov edi, dword ptr [esp + 470h]
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        mov al, byte ptr [edx + eax]
        add esp, 0ch
        cmp al, 0ah
        ; Exact mapped bytes 74 71: je 0x58751e4c
        __asm _emit 0x74
        __asm _emit 0x71
        test al, al
        ; Exact mapped bytes 74 6D: je 0x58751e4c
        __asm _emit 0x74
        __asm _emit 0x6d
        cmp al, 0dh
        ; Exact mapped bytes 75 46: jne 0x58751e29
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 7E 05: jle 0x58751df0
        __asm _emit 0x7e
        __asm _emit 0x05
        mov byte ptr [esp + eax + 4fh], 20h
        mov ecx, dword ptr [esp + 460h]
        inc dword ptr [esp + 14h]
        push 0
        push edi
        push ecx
        push ebp
        lea edx, [esp + 60h]
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 24h], 0
        ; Exact mapped bytes E8 4C FC FF FF: call 0x58751a60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 400h
        lea eax, [esp + 54h]
        push 0
        push eax
        inc ebp
        ; Exact mapped bytes E8 22 AE 22 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xae
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        cmp ebp, 0ah
        ; Exact mapped bytes 74 36: je 0x58751e64
        __asm _emit 0x74
        __asm _emit 0x36
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        inc edi
        push ecx
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp edi, eax
        ; Exact mapped bytes 0F 8E 56 FE FF FF: jle 0x58751ca0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 18: jmp 0x58751e64
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [esp + 460h]
        push 0
        push edi
        push edx
        push ebp
        lea eax, [esp + 60h]
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 FC FB FF FF: call 0x58751a60
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        mov ecx, dword ptr [esp + 448h]
        pop edi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 64 AD 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xad
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 444h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
