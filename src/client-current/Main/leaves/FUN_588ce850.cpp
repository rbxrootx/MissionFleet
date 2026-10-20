// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CE850 .. +0x2D9 bytes.
extern "C" __declspec(naked) void FUN_588ce850() {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [ecx + 84h]
        lea ebp, [esi + 74h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 02 00 00: je 0x588ceb28
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 B3 02 00 00: je 0x588ceb28
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        ; Exact mapped bytes E8 44 99 03 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        mov edi, eax
        ; Exact mapped bytes E8 EA 98 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        sub edi, eax
        cmp edi, 7
        ; Exact mapped bytes 7E 61: jle 0x588ce8f1
        __asm _emit 0x7e
        __asm _emit 0x61
        ; Exact mapped bytes E8 DB 98 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 CD 98 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, -8
        cmp eax, edi
        ; Exact mapped bytes 7D 30: jge 0x588ce8da
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp]
        cmp dword ptr [ecx + 88h], 8
        ; Exact mapped bytes 7E 24: jle 0x588ce8da
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes E8 B5 98 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, eax
        inc edi
        mov ebx, ebp
        mov dword ptr [esp + 10h], 3
        mov ecx, dword ptr [ebx]
        push edi
        ; Exact mapped bytes E8 C0 98 03 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 10h], 1
        ; Exact mapped bytes 75 EE: jne 0x588ce8c8
        __asm _emit 0x75
        __asm _emit 0xee
        mov ebx, 1
        mov ebp, dword ptr [ebp]
        mov eax, dword ptr [ebp + 84h]
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x588ce913
        __asm _emit 0x74
        __asm _emit 0x27
        mov edi, dword ptr [eax + 8]
        ; Exact mapped bytes EB 25: jmp 0x588ce916
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes E8 CA 98 03 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        mov edi, eax
        ; Exact mapped bytes E8 70 98 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        sub edi, eax
        ; Exact mapped bytes 79 D6: jns 0x588ce8da
        __asm _emit 0x79
        __asm _emit 0xd6
        mov ebx, 1
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 6F FA FF FF: call 0x588ce380
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB CC: jmp 0x588ce8df
        __asm _emit 0xeb
        __asm _emit 0xcc
        or edi, 0ffffffffh
        cmp dword ptr [edi + 17ch], 0
        ; Exact mapped bytes 0F 84 03 02 00 00: je 0x588ceb26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 1ch]
        push 0
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [edi + 0d4h]
        mov ecx, dword ptr [edi + 17ch]
        cmp dword ptr [ecx + 164h], eax
        mov edx, dword ptr [edi + 0d0h]
        ; Exact mapped bytes 7E 13: jle 0x588ce95b
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x588ce95b
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588ce95b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588ce95d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        lea ebp, [esi + 88h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x588ce99f
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax + 18h]
        add eax, 18h
        mov dword ptr [ecx + 14h], ebx
        mov ebx, dword ptr [eax + 4]
        add ecx, 14h
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebx, 1
        mov eax, dword ptr [edi + 17ch]
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x588ce9c0
        __asm _emit 0x7e
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x588ce9c0
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588ce9c0
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x588ce9c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588ce9f7
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp]
        push 0fffffeffh
        ; Exact mapped bytes E8 1C 43 03 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, ebp
        mov edx, 2
        ; Exact mapped bytes EB 03: jmp 0x588cea10
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, ebx
        ; Exact mapped bytes 75 F3: jne 0x588cea10
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 34h], ebx
        mov edx, dword ptr [esi + 54h]
        mov eax, dword ptr [edi + 5ch]
        mov dword ptr [edx + 30h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 3ch], ebx
        mov edx, dword ptr [edi + 60h]
        imul edx, dword ptr [edi + 5ch]
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 38h], edx
        mov ecx, dword ptr [esi + 54h]
        mov edx, 7dh
        mov dword ptr [ecx + 40h], edx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], edx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov eax, dword ptr [esi + 50h]
        mov cl, byte ptr [edi + 5ch]
        xor cl, byte ptr [eax + 32h]
        and cl, 0fh
        xor byte ptr [eax + 32h], cl
        mov al, byte ptr [edi + 60h]
        imul byte ptr [edi + 5ch]
        mov ecx, dword ptr [esi + 50h]
        xor al, byte ptr [ecx + 31h]
        and al, 7fh
        xor byte ptr [ecx + 31h], al
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 46h], 1
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 47h], dl
        cmp dword ptr [esi + 98h], 0
        ; Exact mapped bytes 74 0F: je 0x588ceaa1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [esi + 50h]
        mov dword ptr [edx + 80h], 0
        ; Exact mapped bytes EB 59: jmp 0x588ceafa
        __asm _emit 0xeb
        __asm _emit 0x59
        push 589a0738h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 98 C1 98 58: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov eax, dword ptr [esi + 50h]
        add eax, 0a6h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 50h]
        push ecx
        ; Exact mapped bytes 8B 0D 28 46 A2 58: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 82 EC FF: call 0x58796d90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [esi + 50h]
        push eax
        add edx, 88h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 8B 0D 28 46 A2 58: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 88h
        push eax
        ; Exact mapped bytes E8 8F 81 EC FF: call 0x58796c80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [ecx + 0bch], eax
        mov ecx, ebp
        mov edx, 2
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, ebx
        ; Exact mapped bytes 75 F3: jne 0x588ceb01
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B 15 A0 45 A2 58: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a00h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop ebx
        pop esi
    }
}
