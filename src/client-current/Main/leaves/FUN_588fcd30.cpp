// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FCD30 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_588fcd30() {
    __asm {
        sub esp, 160h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 15ch], eax
        push esi
        push edi
        push 12ch
        lea eax, [esp + 3ch]
        push 0
        push eax
        mov esi, ecx
        ; Exact mapped bytes E8 EF FE 07 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 17ch]
        mov edx, dword ptr [esp + 180h]
        mov dword ptr [esp + 48h], edx
        mov edx, dword ptr [esp + 184h]
        lea eax, [esp + 50h]
        mov dword ptr [esp + 44h], ecx
        mov ecx, eax
        add esp, 0ch
        mov dword ptr [esp + 40h], 1
        mov edi, 12ch
        sub edx, ecx
        mov edi, edi
        lea ecx, [edi + 7ffffed2h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x588fcdab
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx + eax]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x588fcdab
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x588fcd90
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588fcdaf
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x588fcdb0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [esp + 16ch]
        sub eax, 0
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x588fcea7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x588fce8e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push ebx
        movzx ebx, byte ptr [ecx + 13a5h]
        test ebx, ebx
        ; Exact mapped bytes 0F 8E AB 00 00 00: jle 0x588fce8d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 38 E4 FB FF: call 0x588bb220
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0a4h]
        mov ecx, dword ptr [esi + 6ch]
        add eax, 50h
        movzx eax, word ptr [eax + 0eh]
        shr edx, 1
        push edx
        and eax, 0fh
        push eax
        ; Exact mapped bytes E8 4C 93 FF FF: call 0x588f6150
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        ; Exact mapped bytes 66 89 84 24 10 01 00 00: mov word ptr [esp + 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 7E 15: jle 0x588fce27
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 0a8h]
        push edi
        ; Exact mapped bytes E8 22 E6 FB FF: call 0x588bb440
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [esp + edi*4 + 0ch], eax
        inc edi
        cmp edi, ebx
        ; Exact mapped bytes 7C EB: jl 0x588fce12
        __asm _emit 0x7c
        __asm _emit 0xeb
        lea edi, [ebx*4]
        push edi
        lea ecx, [esp + 10h]
        push ecx
        lea edx, [esp + 11ah]
        push edx
        ; Exact mapped bytes E8 0B FF 07 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        xor ecx, ecx
        push 0
        ; Exact mapped bytes 66 89 8E 94 00 00 00: mov word ptr [esi + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 98h], 1
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        lea eax, [edi + 0d6h]
        push eax
        lea edx, [esp + 44h]
        push edx
        push ebx
        mov ecx, 7dh
        push 1
        ; Exact mapped bytes 66 89 8E 94 00 00 00: mov word ptr [esi + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 80017101h
        ; Exact mapped bytes E8 E3 3D 07 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        pop ebx
        mov ecx, dword ptr [esp + 164h]
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 3C FD 07 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 160h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        cmp byte ptr [ecx + 0adh], 0
        ; Exact mapped bytes 76 D8: jbe 0x588fce8e
        __asm _emit 0x76
        __asm _emit 0xd8
        push 0
        ; Exact mapped bytes E8 83 FB FB FF: call 0x588bca40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, esi
        mov dword ptr [esp + 110h], eax
        ; Exact mapped bytes E8 93 F6 FF FF: call 0x588fc560
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0d8h
        lea eax, [esp + 40h]
        push eax
        push 1
        push 0
        push 80017101h
        ; Exact mapped bytes E8 83 3D 07 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 9F: jmp 0x588fce8e
        __asm _emit 0xeb
        __asm _emit 0x9f
    }
}
