// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4161 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885AAA0 .. +0x1041 bytes.
extern "C" __declspec(naked) void FUN_5885aaa0_segment_00() {
    __asm {
        push -1
        push 5898564ch
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
        mov ebx, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebx
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 40 D4 FF FF: call 0x58857f30
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        push 54h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi], 5899ea14h
        ; Exact mapped bytes E8 4B 21 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x21
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebp
        ; Exact mapped bytes 74 3C: je 0x5885ab4f
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 226h
        ; Exact mapped bytes 7E 16: jle 0x5885ab3b
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x5885ab3b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 898h]
        ; Exact mapped bytes EB 02: jmp 0x5885ab3d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7d0h
        push ebx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 13 71 ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885ab51
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 38h], ebp
        mov ebp, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 970h], eax
        mov dword ptr [esp + 3ch], ebp
        lea ebx, [esi + 0d0h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        mov dword ptr [ebx - 28h], 0
        mov byte ptr [esi + edx + 0c8h], 0
        push 58h
        mov dword ptr [ebx], 0
        ; Exact mapped bytes E8 BE 20 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x20
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 2
        test edi, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5885ac29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 13h
        ; Exact mapped bytes 7E 17: jle 0x5885abcb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885abcb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x5885abcd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 3ch]
        push 834h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B8 85 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x5885ac23
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        mov ebp, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x5885ac2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffbh
        mov dword ptr [ebx + 910h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        push 0ach
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 05 20 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 3
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x5885aca5
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 17: jle 0x5885ac7f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885ac7f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 780h
        ; Exact mapped bytes EB 02: jmp 0x5885ac81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push 834h
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
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
        ; Exact mapped bytes E8 FD 30 F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x30
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885aca7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx + 950h], eax
        ; Exact mapped bytes E8 92 1F 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1f
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 4
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x5885ad1b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 17: jle 0x5885acf2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885acf2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 700h
        ; Exact mapped bytes EB 02: jmp 0x5885acf4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push 834h
        push ecx
        lea ecx, [ebp + 2]
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
        ; Exact mapped bytes E8 87 30 F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885ad1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [ebx + 8a8h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 16 1F 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1f
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 5
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x5885adc8
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 219h
        ; Exact mapped bytes 7E 17: jle 0x5885ad72
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5885ad72
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 864h]
        ; Exact mapped bytes EB 02: jmp 0x5885ad74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 3ch]
        push 834h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 11 84 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x5885adc2
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        mov ebp, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x5885adca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0fff0h
        mov dword ptr [ebx + 930h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 6ch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 69 1E 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1e
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x5885ae33
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 17: jle 0x5885ae1b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885ae1b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 440h
        ; Exact mapped bytes EB 02: jmp 0x5885ae1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push 7d1h
        push ecx
        push ebp
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BF 91 F3 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885ae35
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebx + 8f0h], eax
        ; Exact mapped bytes E8 B9 8F F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esp + 38h]
        inc eax
        add ebp, 2ah
        add ebx, 4
        cmp eax, 8
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 3ch], ebp
        ; Exact mapped bytes 0F 8C 0D FD FF FF: jl 0x5885ab70
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 39h
        ; Exact mapped bytes 7E 16: jle 0x5885ae87
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5885ae87
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0e40h
        ; Exact mapped bytes EB 02: jmp 0x5885ae89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 998h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 3ah
        ; Exact mapped bytes 7E 16: jle 0x5885aeb3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5885aeb3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0e80h
        ; Exact mapped bytes EB 02: jmp 0x5885aeb5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov dword ptr [esi + 99ch], eax
        ; Exact mapped bytes E8 89 1D 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x5885af31
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 17: jle 0x5885aefb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885aefb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 640h
        ; Exact mapped bytes EB 02: jmp 0x5885aefd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 30h]
        push 834h
        lea ecx, [ebp + 82h]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 112h
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
        ; Exact mapped bytes E8 71 2E F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x2e
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5885af37
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 30h]
        xor eax, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a78h], eax
        lea ebx, [esi + 0a50h]
        mov dword ptr [esp + 3ch], 4
        push 0fch
        ; Exact mapped bytes E8 F4 1C 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1c
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 8
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5885afb0
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 17: jle 0x5885af90
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885af90
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885af92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 70h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 0eeh
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 54 C1 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5885afb2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885afcf
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 81 7F 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885afdc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 04 7F 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5885af50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 30h]
        lea ebp, [esi + 0a68h]
        add ebx, 44h
        mov dword ptr [esp + 3ch], 3
        nop
        push 0fch
        ; Exact mapped bytes E8 44 1C 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1c
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 9
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5885b05d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 17: jle 0x5885b040
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b040
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885b042
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push ebx
        add ecx, 0e0h
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A7 C0 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5885b05f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b07d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D3 7E 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b08a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 56 7E 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        add ebp, 4
        add ebx, 0ah
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 0F 85 65 FF FF FF: jne 0x5885b000
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 A9 1B 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1b
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ah
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5885b0fd
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 20h
        ; Exact mapped bytes 7E 17: jle 0x5885b0db
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b0db
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 800h
        ; Exact mapped bytes EB 02: jmp 0x5885b0dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        lea ecx, [ebp + 70h]
        push ecx
        lea ecx, [ebx + 11ah]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 05 C0 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x5885b107
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a48h], eax
        ; Exact mapped bytes E8 32 1B 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1b
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0bh
        mov edi, 21h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5885b170
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5885b156
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b156
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885b158
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 70h]
        push ecx
        lea ecx, [ebx + 400h]
        push ecx
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 92 BF 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885b172
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a44h], eax
        ; Exact mapped bytes E8 C7 1A 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x1a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5885b1d6
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5885b1bc
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b1bc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885b1be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 70h]
        push ecx
        lea ecx, [ebx + 0d7h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2C BF 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885b1d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a4ch], eax
        ; Exact mapped bytes E8 61 1A 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5885b23c
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5885b222
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b222
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885b224
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 70h]
        push ecx
        lea ecx, [ebx + 0c8h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C6 BE 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885b23e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a60h], eax
        ; Exact mapped bytes E8 FE 19 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x5885b292
        __asm _emit 0x74
        __asm _emit 0x32
        push 0
        push 0
        push 0ffffffh
        lea edx, [ebp + 78h]
        push edx
        lea ecx, [ebx + 0d7h]
        push ecx
        lea edx, [ebp + 70h]
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 0d0h]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F0 7F ED FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885b294
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 0a44h]
        mov dword ptr [esi + 0a64h], eax
        mov ecx, dword ptr [edi + 40h]
        mov eax, 834h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b2bb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 95 7C 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b2c8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 18 7C 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a48h]
        mov ecx, 834h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b2e4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6C 7C 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b2f1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EF 7B 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a4ch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b30d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 43 7C 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b31a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C6 7B 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a60h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 834h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b336
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1A 7C 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b343
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9D 7B 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a64h]
        mov ecx, 834h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b35f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F1 7B 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b36c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 74 7B 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a64h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b388
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C8 7B 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885b395
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4B 7B 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a64h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5885b3d3
        __asm _emit 0x74
        __asm _emit 0x31
        mov edi, 5899bcdch
        mov edx, 80h
        sub edi, eax
        mov edi, edi
        lea ecx, [edx + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5885b3cb
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edi + eax]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x5885b3cb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x5885b3b0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5885b3cf
        __asm _emit 0xeb
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 01: jne 0x5885b3d0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 0ach
        ; Exact mapped bytes E8 71 18 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x5885b43e
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 17: jle 0x5885b413
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b413
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 540h
        ; Exact mapped bytes EB 02: jmp 0x5885b415
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 834h
        lea ecx, [ebp + 65h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, 130h
        push ebx
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
        ; Exact mapped bytes E8 64 29 F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x29
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885b440
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a80h], eax
        ; Exact mapped bytes E8 F9 17 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        xor edi, edi
        mov byte ptr [esp + 20h], 10h
        mov ebx, 14h
        cmp eax, edi
        ; Exact mapped bytes 74 53: je 0x5885b4bf
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 16: jle 0x5885b490
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5885b490
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 500h
        ; Exact mapped bytes EB 02: jmp 0x5885b492
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 834h
        lea ecx, [ebp + 73h]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 130h
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
        ; Exact mapped bytes E8 E3 28 F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885b4c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a80h]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a84h], eax
        ; Exact mapped bytes E8 44 78 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a84h]
        push 101h
        ; Exact mapped bytes E8 34 78 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a80h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a84h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 3D 17 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 11h
        cmp eax, edi
        ; Exact mapped bytes 74 57: je 0x5885b578
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 17h
        ; Exact mapped bytes 7E 16: jle 0x5885b546
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5885b546
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x5885b548
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 834h
        lea edx, [ebp + 82h]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 0e4h
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2A 28 F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885b57a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, esi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a7ch], eax
        ; Exact mapped bytes E8 34 D2 FF FF: call 0x588587c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 164h]
        cmp eax, 226h
        ; Exact mapped bytes 7E 16: jle 0x5885b5b5
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0E: je 0x5885b5b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 898h]
        ; Exact mapped bytes EB 02: jmp 0x5885b5b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp eax, 226h
        mov edx, dword ptr [edx + 24h]
        ; Exact mapped bytes 7E 16: jle 0x5885b5d7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0E: je 0x5885b5d7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 18ch]
        mov eax, dword ptr [eax + 898h]
        ; Exact mapped bytes EB 02: jmp 0x5885b5d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 20h]
        push 198h
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], 32h
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 20h], edx
        mov dword ptr [esi + 96ch], edi
        ; Exact mapped bytes E8 52 16 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x16
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 12h
        cmp eax, edi
        ; Exact mapped bytes 74 0F: je 0x5885b61b
        __asm _emit 0x74
        __asm _emit 0x0f
        push edi
        push 5899ea4ch
        mov ecx, eax
        ; Exact mapped bytes E8 C7 B7 0A 00: call 0x58906de0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885b61d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a88h], eax
        ; Exact mapped bytes E8 1F 16 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x16
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 13h
        test edi, edi
        ; Exact mapped bytes 74 2C: je 0x5885b66d
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [esp + 2ch]
        push 834h
        push 0
        push 0
        lea ecx, [ebp + 3eh]
        push ecx
        add edx, 2bh
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 42 7B 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5885b66f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a9ch], edi
        ; Exact mapped bytes E8 CD 15 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], bl
        mov ebx, dword ptr [esp + 2ch]
        test edi, edi
        ; Exact mapped bytes 74 28: je 0x5885b6be
        __asm _emit 0x74
        __asm _emit 0x28
        push 834h
        push 0
        push 0
        lea eax, [ebp + 40h]
        push eax
        lea ecx, [ebx + 3ah]
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F1 7A 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5885b6c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a98h], edi
        ; Exact mapped bytes E8 7C 15 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 15h
        test edi, edi
        ; Exact mapped bytes 74 28: je 0x5885b70c
        __asm _emit 0x74
        __asm _emit 0x28
        push 834h
        push 0
        push 0
        lea edx, [ebp + 55h]
        push edx
        lea eax, [ebx + 2bh]
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A3 7A 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5885b70e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a8ch], edi
        ; Exact mapped bytes E8 2E 15 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 16h
        test edi, edi
        ; Exact mapped bytes 74 2B: je 0x5885b75d
        __asm _emit 0x74
        __asm _emit 0x2b
        push 7dah
        push 0
        push 0
        lea ecx, [ebp + 41h]
        push ecx
        lea edx, [ebx + 10eh]
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 52 7A 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5885b75f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0aa0h], edi
        ; Exact mapped bytes E8 DD 14 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 17h
        test edi, edi
        ; Exact mapped bytes 74 2B: je 0x5885b7ae
        __asm _emit 0x74
        __asm _emit 0x2b
        push 7d9h
        push 0
        push 0
        lea eax, [ebp + 41h]
        push eax
        lea ecx, [ebx + 10eh]
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 01 7A 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5885b7b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 0aa0h]
        mov dword ptr [esi + 0aa4h], edi
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0aa4h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0aa4h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 3A 75 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 5E 14 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x14
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 18h
        mov edi, 21h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x5885b841
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5885b82a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b82a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885b82c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 57h]
        push edx
        lea edx, [ebx + 58h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C1 B8 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885b843
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a90h], eax
        ; Exact mapped bytes E8 F6 13 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x5885b8a4
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5885b88d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b88d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885b88f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 57h]
        push ecx
        lea ecx, [ebx + 67h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5E B8 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885b8a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a94h], eax
        mov eax, dword ptr [esi + 0a90h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a94h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 78 13 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x5885b922
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5885b90b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b90b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885b90d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 69h]
        push edx
        lea edx, [ebx + 37h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E0 B7 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885b924
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0aa8h], eax
        ; Exact mapped bytes E8 15 13 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x5885b985
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5885b96e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885b96e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x5885b970
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 69h]
        push ecx
        lea ecx, [ebx + 5ah]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7D B7 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885b987
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0aach], eax
        ; Exact mapped bytes E8 B5 12 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5885b9ef
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 3d6h
        ; Exact mapped bytes 7E 17: jle 0x5885b9d2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5885b9d2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 0f58h]
        ; Exact mapped bytes EB 02: jmp 0x5885b9d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        add ebp, 4bh
        push ebp
        add ebx, 17h
        push ebx
        push ecx
        push esi
        push 1
        push 3ch
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 13 2E F2 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2e
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885b9f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 0aa8h]
        mov dword ptr [esi + 0ab0h], eax
        mov ecx, dword ptr [edi + 40h]
        mov eax, 834h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885ba18
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 75 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885ba25
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BB 74 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0aach]
        mov ecx, 834h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885ba41
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0F 75 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885ba4e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 92 74 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a90h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885ba6a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E6 74 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885ba77
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 69 74 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0a94h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 834h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885ba93
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BD 74 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885baa0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 40 74 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0ab0h]
        mov ecx, 834h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885babc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 94 74 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885bac9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 17 74 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
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
