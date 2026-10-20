// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5130 .. +0x318 bytes.
extern "C" __declspec(naked) void FUN_587a5130_587A5130() {
    __asm {
        sub esp, 8ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 88h], eax
        cmp dword ptr [esp + 0a0h], 4
        mov ecx, dword ptr [esp + 0a8h]
        mov eax, dword ptr [esp + 94h]
        push ebx
        mov ebx, dword ptr [esp + 0a8h]
        push ebp
        mov ebp, dword ptr [esp + 0b4h]
        push esi
        mov esi, dword ptr [esp + 9ch]
        mov dword ptr [esp + 30h], esi
        mov dword ptr [esp + 0ch], ebx
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 0F 8D AE 02 00 00: jge 0x587a5432
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea ecx, [esp + 48h]
        push ecx
        push eax
        push esi
        ; Exact mapped bytes E8 AF B9 FF FF: call 0x587a0b40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 0F 84 9F 02 00 00: je 0x587a543d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        inc edi
        mov dword ptr [esp + 18h], 0
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esp + 38h], edi
        lea edx, [ecx + 1]
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a51c0
        __asm _emit 0x75
        __asm _emit 0xf9
        xor eax, eax
        sub ecx, edx
        test ebx, ebx
        setne al
        add edi, 0ah
        add eax, ecx
        mov dword ptr [esp + 28h], eax
        add eax, edi
        mov dword ptr [esp + 2ch], eax
        lea eax, [ebx*4]
        push eax
        push esi
        ; Exact mapped bytes E8 13 18 00 00: call 0x587a6a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, eax
        xor edi, edi
        mov dword ptr [esp + 20h], ecx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 8B 00 00 00: jl 0x587a528c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx - 1]
        mov dword ptr [esp + 24h], eax
        lea edx, [ecx + 4]
        mov ebx, dword ptr [esp + 24h]
        mov eax, ebp
        sub eax, ecx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 30h], eax
        xor esi, esi
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + edi*4]
        lea eax, [ecx + 1]
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a5230
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, dword ptr [esp + 24h]
        xor eax, eax
        cmp edi, ebx
        setne al
        add eax, ecx
        add dword ptr [esp + 18h], eax
        mov dword ptr [edx - 4], eax
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + edx]
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587a5255
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        lea ecx, [edi + 1]
        xor edx, edx
        cmp ecx, ebx
        setne dl
        add edi, 2
        add eax, edx
        mov edx, dword ptr [esp + 14h]
        add esi, eax
        mov dword ptr [edx], eax
        add edx, 8
        mov dword ptr [esp + 14h], edx
        cmp edi, ebx
        ; Exact mapped bytes 7C A0: jl 0x587a5220
        __asm _emit 0x7c
        __asm _emit 0xa0
        mov ebx, dword ptr [esp + 10h]
        mov dword ptr [esp + 14h], esi
        mov esi, dword ptr [esp + 34h]
        cmp edi, ebx
        ; Exact mapped bytes 7D 2C: jge 0x587a52bc
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + edi*4]
        lea ecx, [edx + 1]
        mov al, byte ptr [edx]
        inc edx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a5297
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edx, ecx
        lea eax, [ebx - 1]
        xor ecx, ecx
        cmp edi, eax
        setne cl
        lea eax, [ecx + edx]
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 2ch]
        add edx, eax
        mov dword ptr [ecx + edi*4], eax
        ; Exact mapped bytes EB 04: jmp 0x587a52c0
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 14h]
        add eax, dword ptr [esp + 18h]
        add eax, edx
        push eax
        push 7043414ch
        push esi
        ; Exact mapped bytes E8 8A EA FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 23: je 0x587a5300
        __asm _emit 0x74
        __asm _emit 0x23
        mov edi, dword ptr [esp + 38h]
        test edi, edi
        ; Exact mapped bytes 74 1B: je 0x587a5300
        __asm _emit 0x74
        __asm _emit 0x1b
        push edi
        lea eax, [esp + 4ch]
        push eax
        push esi
        ; Exact mapped bytes E8 CF 15 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea eax, [esp + 58h]
        push eax
        push esi
        ; Exact mapped bytes E8 B3 A2 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push dword ptr [esp + 0a8h]
        lea eax, [esp + 40h]
        push eax
        ; Exact mapped bytes E8 FF B6 FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esp + 0b4h]
        lea eax, [esp + 4ch]
        push eax
        ; Exact mapped bytes E8 EE B6 FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 0c0h]
        add esp, 10h
        mov byte ptr [esp + 44h], al
        mov byte ptr [esp + 45h], bl
        test esi, esi
        ; Exact mapped bytes 74 43: je 0x587a537b
        __asm _emit 0x74
        __asm _emit 0x43
        push 0ah
        lea eax, [esp + 40h]
        push eax
        push esi
        ; Exact mapped bytes E8 7B 15 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        lea eax, [esp + 4ch]
        push eax
        push esi
        ; Exact mapped bytes E8 5E A2 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 34h]
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x587a537b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edi, dword ptr [esp + 28h]
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x587a537b
        __asm _emit 0x74
        __asm _emit 0x16
        push edi
        push eax
        push esi
        ; Exact mapped bytes E8 53 15 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push dword ptr [esp + 2ch]
        push esi
        ; Exact mapped bytes E8 38 A2 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test ebx, ebx
        ; Exact mapped bytes 7E 4A: jle 0x587a53c9
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 10h]
        sub eax, ebp
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, dword ptr [eax + ebp]
        mov ebx, dword ptr [ebp]
        test esi, esi
        ; Exact mapped bytes 74 23: je 0x587a53bd
        __asm _emit 0x74
        __asm _emit 0x23
        test ebx, ebx
        ; Exact mapped bytes 74 1F: je 0x587a53bd
        __asm _emit 0x74
        __asm _emit 0x1f
        test edi, edi
        ; Exact mapped bytes 74 1B: je 0x587a53bd
        __asm _emit 0x74
        __asm _emit 0x1b
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 16 15 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 FE A1 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 40h]
        add esp, 18h
        mov ecx, dword ptr [esp + 10h]
        add ebp, 4
        sub ecx, 1
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 75 C7: jne 0x587a5390
        __asm _emit 0x75
        __asm _emit 0xc7
        push dword ptr [esp + 20h]
        push esi
        ; Exact mapped bytes E8 FD 15 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test esi, esi
        ; Exact mapped bytes 74 3F: je 0x587a5419
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 10h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 11h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 12h], al
        lea eax, [esp + 10h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 1fh], cl
        ; Exact mapped bytes E8 AA 14 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [esp + 98h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 25 BC 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8ch
        ret
        push 588b8fb4h
        push esi
        ; Exact mapped bytes E8 43 9A FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8fe0h
        push esi
        ; Exact mapped bytes E8 38 9A FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
