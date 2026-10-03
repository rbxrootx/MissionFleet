// Complete Ghidra body ranges for the selected function.
// 14 discontiguous segments; total 3573 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FC9C0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_00() {
    __asm {
        sub esp, 3ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 40h]
        cmp byte ptr [eax + 8], 0dh
        push ebx
        mov ebx, ecx
        ; Exact mapped bytes 0F 85 07 0E 00 00: jne 0x587fd7e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 20d40h], 0
        push esi
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x587fcabc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        lea ecx, [ebx + 20d28h]
        mov edx, 2
        mov esi, 1
        ; Exact mapped bytes EB 06: jmp 0x587fca10
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FCA10 .. +0x1ED bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_01() {
    __asm {
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, esi
        ; Exact mapped bytes 75 F3: jne 0x587fca10
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [ebx + 21d24h]
        mov dword ptr [ebx + 20d40h], esi
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 21ce4h]
        sub eax, esi
        ; Exact mapped bytes 74 58: je 0x587fca8f
        __asm _emit 0x74
        __asm _emit 0x58
        sub eax, esi
        ; Exact mapped bytes 74 0F: je 0x587fca4a
        __asm _emit 0x74
        __asm _emit 0x0f
        sub eax, esi
        ; Exact mapped bytes 0F 85 A2 0D 00 00: jne 0x587fd7e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899c208h
        ; Exact mapped bytes EB 4A: jmp 0x587fca94
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebx + 21ce8h]
        cmp eax, esi
        ; Exact mapped bytes 75 07: jne 0x587fca5b
        __asm _emit 0x75
        __asm _emit 0x07
        push 5899a274h
        ; Exact mapped bytes EB 39: jmp 0x587fca94
        __asm _emit 0xeb
        __asm _emit 0x39
        cmp eax, 2
        ; Exact mapped bytes 75 07: jne 0x587fca67
        __asm _emit 0x75
        __asm _emit 0x07
        push 5899c8c0h
        ; Exact mapped bytes EB 2D: jmp 0x587fca94
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp eax, 3
        ; Exact mapped bytes 75 07: jne 0x587fca73
        __asm _emit 0x75
        __asm _emit 0x07
        push 5899c8a0h
        ; Exact mapped bytes EB 21: jmp 0x587fca94
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp eax, 4
        ; Exact mapped bytes 75 07: jne 0x587fca7f
        __asm _emit 0x75
        __asm _emit 0x07
        push 5899c87ch
        ; Exact mapped bytes EB 15: jmp 0x587fca94
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp eax, 5
        ; Exact mapped bytes 0F 85 5D 0D 00 00: jne 0x587fd7e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899c858h
        ; Exact mapped bytes EB 05: jmp 0x587fca94
        __asm _emit 0xeb
        __asm _emit 0x05
        push 5899c838h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 21d24h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 37 52 F3 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 38h]
        xor ecx, esp
        ; Exact mapped bytes E8 24 01 18 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 3ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 21d24h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 20d30h]
        mov edx, dword ptr [eax + 80h]
        cmp byte ptr [edx], 0
        ; Exact mapped bytes 0F 84 D4 0C 00 00: je 0x587fd7b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 68h]
        push eax
        ; Exact mapped bytes E8 A2 AE 10 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 68h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 30h
        lea ecx, [esp + 14h]
        push 0
        push ecx
        ; Exact mapped bytes E8 40 01 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        push 58a0b450h
        lea edx, [esp + 14h]
        push edx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov eax, dword ptr [edx + 80h]
        cmp byte ptr [eax], 2fh
        mov esi, 1
        mov dword ptr [esp + 8], esi
        ; Exact mapped bytes 75 44: jne 0x587fcb79
        __asm _emit 0x75
        __asm _emit 0x44
        cmp dword ptr [edx + 90h], esi
        mov ecx, esi
        ; Exact mapped bytes 7E 3A: jle 0x587fcb79
        __asm _emit 0x7e
        __asm _emit 0x3a
        nop
        mov dl, byte ptr [eax + ecx]
        cmp dl, 41h
        ; Exact mapped bytes 7C 09: jl 0x587fcb51
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dl, 5ah
        ; Exact mapped bytes 7F 04: jg 0x587fcb51
        __asm _emit 0x7f
        __asm _emit 0x04
        add byte ptr [eax + ecx], 20h
        mov eax, dword ptr [ebx + 20d30h]
        mov eax, dword ptr [eax + 80h]
        mov dl, byte ptr [eax + ecx]
        cmp dl, 20h
        ; Exact mapped bytes 74 14: je 0x587fcb79
        __asm _emit 0x74
        __asm _emit 0x14
        test dl, dl
        ; Exact mapped bytes 74 10: je 0x587fcb79
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebx + 20d30h]
        add ecx, esi
        cmp ecx, dword ptr [edx + 90h]
        ; Exact mapped bytes 7C C7: jl 0x587fcb40
        __asm _emit 0x7c
        __asm _emit 0xc7
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 8B 0D E8 C0 9C 58: mov ecx, dword ptr [0x589cc0e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0x58
        mov esi, dword ptr [eax + 80h]
        push ebp
        mov eax, ecx
        push edi
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcb94
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x587fcbc3
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, ebp
        lea edx, [eax + 1]
        nop
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcbb0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp byte ptr [eax + esi], 20h
        ; Exact mapped bytes 0F 84 F4 0A 00 00: je 0x587fd6b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D EC C0 9C 58: mov ecx, dword ptr [0x589cc0ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcbe0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x587fcc13
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, ebp
        lea edx, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587fcc00
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FCC00 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_02() {
    __asm {
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcc00
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp byte ptr [eax + esi], 20h
        ; Exact mapped bytes 0F 84 A4 0A 00 00: je 0x587fd6b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 C0 9C 58: mov ecx, dword ptr [0x589cc0f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [edx + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcc30
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x587fcc6c
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, ebp
        lea edx, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587fcc50
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FCC50 .. +0x45D bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_03() {
    __asm {
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcc50
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 4A 0A 00 00: je 0x587fd6ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 42 0A 00 00: je 0x587fd6ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 8B 0D F4 C0 9C 58: mov ecx, dword ptr [0x589cc0f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0x58
        mov esi, dword ptr [eax + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcc85
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fccbc
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcca0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 FA 09 00 00: je 0x587fd6ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 F2 09 00 00: je 0x587fd6ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D F8 C0 9C 58: mov ecx, dword ptr [0x589cc0f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fccd5
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fcd0c
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fccf0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 A1 09 00 00: je 0x587fd6a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 99 09 00 00: je 0x587fd6a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC C0 9C 58: mov ecx, dword ptr [0x589cc0fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [edx + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcd25
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fcd5c
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcd40
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 51 09 00 00: je 0x587fd6a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 49 09 00 00: je 0x587fd6a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 8B 0D 00 C1 9C 58: mov ecx, dword ptr [0x589cc100]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov esi, dword ptr [eax + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcd75
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fcdac
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcd90
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 F8 08 00 00: je 0x587fd69c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 F0 08 00 00: je 0x587fd69c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D 04 C1 9C 58: mov ecx, dword ptr [0x589cc104]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcdc5
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fcdfc
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcde0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 A8 08 00 00: je 0x587fd69c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 A0 08 00 00: je 0x587fd69c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 C1 9C 58: mov ecx, dword ptr [0x589cc108]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [edx + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fce15
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fce4c
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fce30
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 4F 08 00 00: je 0x587fd693
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 47 08 00 00: je 0x587fd693
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 8B 0D 0C C1 9C 58: mov ecx, dword ptr [0x589cc10c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov esi, dword ptr [eax + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fce65
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fce9c
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fce80
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 FF 07 00 00: je 0x587fd693
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 F7 07 00 00: je 0x587fd693
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D 10 C1 9C 58: mov ecx, dword ptr [0x589cc110]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fceb5
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fceec
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fced0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 A6 07 00 00: je 0x587fd68a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 9E 07 00 00: je 0x587fd68a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 C1 9C 58: mov ecx, dword ptr [0x589cc114]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [edx + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcf05
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fcf3c
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcf20
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 56 07 00 00: je 0x587fd68a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 4E 07 00 00: je 0x587fd68a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 8B 0D 18 C1 9C 58: mov ecx, dword ptr [0x589cc118]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov esi, dword ptr [eax + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcf55
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fcf8c
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcf70
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 FA 06 00 00: je 0x587fd67e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 F2 06 00 00: je 0x587fd67e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D 1C C1 9C 58: mov ecx, dword ptr [0x589cc11c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fcfa5
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fcfdc
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcfc0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 AA 06 00 00: je 0x587fd67e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 A2 06 00 00: je 0x587fd67e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 20 C1 9C 58: mov esi, dword ptr [0x589cc120]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov edx, dword ptr [edx + 80h]
        mov eax, esi
        lea edi, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fcff3
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push esi
        push edx
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x587fd02c
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebx + 20d30h]
        mov ecx, dword ptr [eax + 80h]
        mov al, byte ptr [ecx + 1]
        cmp al, 30h
        ; Exact mapped bytes 7C 10: jl 0x587fd02c
        __asm _emit 0x7c
        __asm _emit 0x10
        cmp al, 39h
        ; Exact mapped bytes 7F 0C: jg 0x587fd02c
        __asm _emit 0x7f
        __asm _emit 0x0c
        mov ecx, ebx
        ; Exact mapped bytes E8 19 9C FF FF: call 0x587f6c40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 92 06 00 00: jmp 0x587fd6be
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 C1 9C 58: mov ecx, dword ptr [0x589cc124]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [edx + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd045
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x587fd073
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd060
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp byte ptr [eax + esi], 20h
        ; Exact mapped bytes 0F 84 FF 05 00 00: je 0x587fd672
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 8B 0D 28 C1 9C 58: mov ecx, dword ptr [0x589cc128]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov esi, dword ptr [eax + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd090
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x587fd0c3
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, ebp
        lea edx, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587fd0b0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD0B0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_04() {
    __asm {
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd0b0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp byte ptr [eax + esi], 20h
        ; Exact mapped bytes 0F 84 AF 05 00 00: je 0x587fd672
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D 2C C1 9C 58: mov ecx, dword ptr [0x589cc12c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd0e0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x587fd113
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, ebp
        lea edx, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587fd100
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD100 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_05() {
    __asm {
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd100
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp byte ptr [eax + esi], 20h
        ; Exact mapped bytes 0F 84 53 05 00 00: je 0x587fd666
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 C1 9C 58: mov ecx, dword ptr [0x589cc130]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [edx + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd130
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x587fd163
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, ebp
        lea edx, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587fd150
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD150 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_06() {
    __asm {
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd150
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp byte ptr [eax + esi], 20h
        ; Exact mapped bytes 0F 84 03 05 00 00: je 0x587fd666
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 8B 0D 34 C1 9C 58: mov ecx, dword ptr [0x589cc134]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov esi, dword ptr [eax + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd180
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x587fd1bb
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, ebp
        lea edx, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587fd1a0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD1A0 .. +0x2AD bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_07() {
    __asm {
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd1a0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp byte ptr [eax + esi], 20h
        ; Exact mapped bytes 75 0C: jne 0x587fd1bb
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, ebx
        ; Exact mapped bytes E8 AA 0D FF FF: call 0x587edf60
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 03 05 00 00: jmp 0x587fd6be
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D 38 C1 9C 58: mov ecx, dword ptr [0x589cc138]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd1d4
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587fd20c
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, ebp
        lea edx, [eax + 1]
        nop
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd1f0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 2C 04 00 00: je 0x587fd630
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 24 04 00 00: je 0x587fd630
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 3C C1 9C 58: mov ecx, dword ptr [0x589cc13c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 20d30h]
        mov esi, dword ptr [edx + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd225
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x587fd25c
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd240
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 0F 84 DC 03 00 00: je 0x587fd630
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 D4 03 00 00: je 0x587fd630
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes 8B 0D 48 C1 9C 58: mov ecx, dword ptr [0x589cc148]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x58
        mov esi, dword ptr [eax + 80h]
        mov eax, ecx
        mov ebp, ecx
        lea edi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd275
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 BC C3 98 58: call dword ptr [0x5898c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 AD 01 00 00: jne 0x587fd43c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd294
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov al, byte ptr [eax + esi]
        cmp al, 20h
        ; Exact mapped bytes 74 08: je 0x587fd2ac
        __asm _emit 0x74
        __asm _emit 0x08
        test al, al
        ; Exact mapped bytes 0F 85 90 01 00 00: jne 0x587fd43c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 6464ffh
        push 5899d100h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 C3 EA 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899d0dch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A8 EA 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899d0b8h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 8D EA 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899d094h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 72 EA 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899d070h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 57 EA 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899d04ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 3C EA 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899d028h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 21 EA 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899d004h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 06 EA 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899cfe0h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 EB E9 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899cfbch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 D0 E9 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899cf98h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 B5 E9 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899cf74h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 9A E9 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899cf50h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 7F E9 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x00
        push 6464ffh
        push 5899cf2ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 64 E9 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes E8 09 25 F6 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x25
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 88 02 00 00: jmp 0x587fd6c4
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov eax, dword ptr [ecx + 80h]
        lea edx, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587fd450
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD450 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_08() {
    __asm {
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd450
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        lea esi, [eax + 31h]
        push esi
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes E8 C8 40 17 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x40
        __asm _emit 0x17
        __asm _emit 0x00
        push esi
        mov ebp, eax
        push 0
        push ebp
        ; Exact mapped bytes E8 D7 F7 17 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [ebx + 21ce4h], 1
        ; Exact mapped bytes 0F 85 42 00 00 00: jne 0x587fd4c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 154h]
        mov edx, dword ptr [eax + 80h]
        mov esi, 18h
        lea eax, [esp + 30h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea ecx, [esi + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587fd4bb
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x587fd4bb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x587fd4a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587fd4bf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x587fd4c0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        cmp dword ptr [ebx + 21ce8h], 5
        ; Exact mapped bytes 0F 85 38 00 00 00: jne 0x587fd508
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 30h]
        mov esi, eax
        mov ecx, ebx
        sub ecx, esi
        mov edx, 18h
        lea esi, [ecx + 21cech]
        lea ecx, [edx + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587fd500
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [eax + esi]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x587fd500
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x587fd4e5
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587fd504
        __asm _emit 0xeb
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 01: jne 0x587fd505
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov ecx, 0ch
        lea esi, [esp + 18h]
        mov edi, ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebx + 20d30h]
        mov ecx, dword ptr [edx + 80h]
        mov eax, ecx
        lea esi, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587fd526
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, esi
        push eax
        push ecx
        lea eax, [ebp + 30h]
        push eax
        ; Exact mapped bytes E8 12 F8 17 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        mov edx, dword ptr [ecx + 80h]
        add esp, 0ch
        cmp byte ptr [edx], 2fh
        mov eax, 1
        ; Exact mapped bytes 75 02: jne 0x587fd555
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 21ce8h]
        dec ecx
        cmp ecx, 4
        ; Exact mapped bytes 0F 87 BD 00 00 00: ja 0x587fd622
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D F8 D7 7F 58: jmp dword ptr [ecx*4 + 0x587fd7f8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xd7
        __asm _emit 0x7f
        __asm _emit 0x58
        movzx ecx, word ptr [ebx + 20d20h]
        movzx edx, word ptr [ebx + 21ce4h]
        push eax
        mov eax, dword ptr [esp + 18h]
        push eax
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 82 AB FB FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        push ebp
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 AA F6 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf6
        __asm _emit 0x17
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD5A0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_09() {
    __asm {
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [esp + 18h]
        push eax
        push ebp
        ; Exact mapped bytes E8 DE AC FB FF: call 0x587b8290
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        push ebp
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 86 F6 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0x17
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD5C4 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_10() {
    __asm {
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        ; Exact mapped bytes E8 9A AD FB FF: call 0x587b8370
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xad
        __asm _emit 0xfb
        __asm _emit 0xff
        push ebp
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 62 F6 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf6
        __asm _emit 0x17
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD5E8 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_11() {
    __asm {
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push edx
        push ebp
        ; Exact mapped bytes E8 06 AD FB FF: call 0x587b8300
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xad
        __asm _emit 0xfb
        __asm _emit 0xff
        push ebp
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 3E F6 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf6
        __asm _emit 0x17
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD60C .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_12() {
    __asm {
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [esp + 18h]
        push eax
        push ebp
        ; Exact mapped bytes E8 82 AB FB FF: call 0x587b81a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [esp + 10h], eax
        push ebp
        ; Exact mapped bytes E8 1A F6 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf6
        __asm _emit 0x17
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD630 .. +0x1C8 bytes.
extern "C" __declspec(naked) void FUN_587fc9c0_segment_13() {
    __asm {
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 F7 08 00: call 0x5888ce00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes E8 FA 22 F6 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 20d34h]
        ; Exact mapped bytes E8 9F B1 10 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb1
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20d34h]
        push 262h
        ; Exact mapped bytes E8 FF 5C 10 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 00 00 00: jmp 0x587fd6be
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 43 9D FF FF: call 0x587f73b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4C 00 00 00: jmp 0x587fd6be
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 87 99 FF FF: call 0x587f7000
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 40 00 00 00: jmp 0x587fd6be
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 2B 93 FF FF: call 0x587f69b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 34 00 00 00: jmp 0x587fd6be
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 AF 90 FF FF: call 0x587f6740
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2B: jmp 0x587fd6be
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, ebx
        ; Exact mapped bytes E8 36 8E FF FF: call 0x587f64d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x587fd6be
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, ebx
        ; Exact mapped bytes E8 FD 8B FF FF: call 0x587f62a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x587fd6be
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, ebx
        ; Exact mapped bytes E8 F4 89 FF FF: call 0x587f60a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x587fd6be
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, ebx
        ; Exact mapped bytes E8 2B 88 FF FF: call 0x587f5ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x587fd6be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 32 83 FF FF: call 0x587f59f0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 20d30h]
        push 41h
        ; Exact mapped bytes E8 6F B7 F4 FF: call 0x58748e40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 20d30h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov dword ptr [ebx + 20d40h], 0
        lea ecx, [ebx + 20d28h]
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x587fd6f5
        __asm _emit 0x75
        __asm _emit 0xed
        mov edx, dword ptr [ebx + 20d30h]
        mov eax, dword ptr [edx + 80h]
        pop edi
        lea edx, [eax + 1]
        pop ebp
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587fd720
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov ecx, eax
        xor eax, eax
        test ecx, ecx
        ; Exact mapped bytes 7E 24: jle 0x587fd755
        __asm _emit 0x7e
        __asm _emit 0x24
        mov edx, dword ptr [ebx + 20d30h]
        mov edx, dword ptr [edx + 80h]
        mov byte ptr [edx], 0
        mov edx, dword ptr [ebx + 20d30h]
        mov edx, dword ptr [edx + 80h]
        mov byte ptr [eax + edx], 0
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C DC: jl 0x587fd731
        __asm _emit 0x7c
        __asm _emit 0xdc
        mov ecx, dword ptr [ebx + 20d30h]
        ; Exact mapped bytes E8 E0 21 F6 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x21
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 0F 85 7A 00 00 00: jne 0x587fd7e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6464ffh
        push 5899c598h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 CA FA 08 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        push 6464ffh
        push 5899c598h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 20d34h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 EF E5 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe5
        __asm _emit 0x10
        __asm _emit 0x00
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 38h]
        xor ecx, esp
        ; Exact mapped bytes E8 2C F4 17 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf4
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 3ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov dword ptr [ebx + 20d40h], 0
        lea ecx, [ebx + 20d28h]
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov esi, 0fffeh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x587fd7d2
        __asm _emit 0x75
        __asm _emit 0xed
        pop esi
        mov ecx, dword ptr [esp + 3ch]
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 E8 F3 17 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 3ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
