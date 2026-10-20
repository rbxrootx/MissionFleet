// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049DA9F .. +0x3B3 bytes.
extern "C" __declspec(naked) void FUN_0049da9f_0049DA9F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ee65h
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
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 AE EC 0A 00: call 0x54c77a
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 5cbe98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 70 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push ecx
        push 5cbeb0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 70 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9B 71 09 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x49db1a
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x49db37
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 7B EA 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 08 03 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov dword ptr [ebp - 6ch], edx
        cmp dword ptr [ebp - 6ch], 11h
        ; Exact mapped bytes 0F 87 B8 02 00 00: ja 0x49de04
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 24 85 52 DE 49 00: jmp dword ptr [eax*4 + 0x49de52]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0xde
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 08: movsx edx, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x08
        push edx
        push 5cbebch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 6F 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F5 71 09 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 26 EA 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 B3 02 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax + 8]
        push ecx
        push 5cbecch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 6F 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B2 70 09 00: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 F1 E9 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E9 7E 02 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        push 5cbed8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 6F 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8A 71 09 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 BB E9 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes E9 48 02 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5cbee4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 6F 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 ED 70 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 86 E9 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 68 F2 FF FF: call 0x49cea0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 0
        push 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 2F F6 FF FF: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 5cbef0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 6E 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 35 73 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 3B E9 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 2C E9 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 5cbefch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 6E 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EF 77 09 00: call 0x535490
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 F7 E8 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E9 84 01 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ecx + 8]
        push eax
        push 5cbf0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 6E 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EB 77 09 00: call 0x5354c5
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 BE E8 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A0 F1 FF FF: call 0x49cea0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        push 0
        push 8
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 67 F5 FF FF: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 5cbf1ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA 6D 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6D 72 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 73 E8 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 64 E8 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 5cbf28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 6D 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2C 72 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 2F E8 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 5cbf38h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 6D 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 61 6F 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 FA E7 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x49de3f
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5cbf44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F 6D 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 21 70 09 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 C5 E7 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes EB 55: jmp 0x49de3f
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 AB E7 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes EB 3B: jmp 0x49de3f
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x49de21
        __asm _emit 0x74
        __asm _emit 0x14
        push 2a1h
        push 5cbe8ch
        ; Exact mapped bytes E8 E4 6B 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49de21
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x49de04
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 6E E7 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
