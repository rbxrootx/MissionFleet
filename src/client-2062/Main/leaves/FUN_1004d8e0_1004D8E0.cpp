// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D8E0 .. +0x265 bytes.
extern "C" __declspec(naked) void FUN_1004d8e0_1004D8E0() {
    __asm {
        sub esp, 154h
        push ebx
        mov ebx, dword ptr [esp + 15ch]
        push ebp
        push esi
        mov dword ptr [esp + 1ch], ecx
        push edi
        mov ecx, 10h
        xor eax, eax
        lea edi, [esp + 24h]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, 730h
        mov ecx, 35dh
        lea edx, [esp + 24h]
        sub eax, ebx
        lea edi, [ebx + 29ch]
        sub ecx, edx
        lea ebp, [esp + 24h]
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes EB 04: jmp 0x1004d934
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 1ch]
        add eax, edi
        mov eax, dword ptr [eax + ebx + 328h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1004d948
        __asm _emit 0x74
        __asm _emit 0x07
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes EB 02: jmp 0x1004d94a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        and eax, 0ffffh
        sub eax, 5
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x1004d9ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 55: je 0x1004d9b0
        __asm _emit 0x74
        __asm _emit 0x55
        sub eax, 7
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x1004daa0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        add edi, 9d8h
        mov al, byte ptr [edi]
        mov edx, dword ptr [ebx + 370h]
        xor al, 0aah
        mov ecx, dword ptr [esp + 10h]
        mov byte ptr [esi + ebp], al
        xor al, 0aah
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        push 1
        push eax
        push esi
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 0ah
        push edx
        ; Exact mapped bytes E8 39 D3 0A 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 42 40 0A 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        inc esi
        add edi, 2
        cmp esi, 2
        ; Exact mapped bytes 7C C5: jl 0x1004d96c
        __asm _emit 0x7c
        __asm _emit 0xc5
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x1004daa0
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 69 92 FF FF: call 0x10046c20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        xor al, 0aah
        mov edx, dword ptr [ebx + 370h]
        mov ecx, dword ptr [esp + 10h]
        mov byte ptr [ebp], al
        xor al, 0aah
        push 1
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        push eax
        push 0
        shr edx, 0ah
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 EF D2 0A 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F8 3F 0A 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x1004daa0
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov eax, dword ptr [esp + 18h]
        lea edx, [eax + ebp]
        lea ecx, [edx + esi]
        cmp dword ptr [ebx + ecx*4], 0
        ; Exact mapped bytes 74 67: je 0x1004da66
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [edi - 80h]
        test esi, esi
        ; Exact mapped bytes 75 08: jne 0x1004da0e
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [eax + 30ch]
        ; Exact mapped bytes EB 06: jmp 0x1004da14
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [eax + 3c0h]
        add edx, esi
        xor eax, 0aaaaaaaah
        mov ecx, eax
        mov edx, dword ptr [ebx + edx*4]
        mov al, byte ptr [edx + 98h]
        xor edx, edx
        and eax, 0ffh
        mov edi, eax
        mov eax, ecx
        div edi
        lea edx, [esp + 64h]
        mov byte ptr [esi + ebp], al
        and eax, 0ffh
        push eax
        push edi
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        push esi
        push ecx
        push 101aaa40h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 1ch
        lea eax, [esp + 64h]
        push eax
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esp + 14h]
        mov cl, byte ptr [esi + ebp]
        mov eax, dword ptr [esp + 10h]
        xor cl, 0aah
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov dl, cl
        mov ecx, dword ptr [ebx + 370h]
        push 1
        push edx
        push esi
        push eax
        shr ecx, 0ah
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 41 D2 0A 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4A 3F 0A 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        inc esi
        cmp esi, 2
        ; Exact mapped bytes 0F 8C 4F FF FF FF: jl 0x1004d9ef
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        add edi, 4
        inc eax
        add ebp, 2
        cmp eax, 20h
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 8C 74 FE FF FF: jl 0x1004d930
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 2D AC 50 17 10: mov ebp, dword ptr [0x101750ac]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 101aa9e4h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 101aa9a8h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        xor edi, edi
        lea ebx, [esp + 24h]
        xor esi, esi
        xor edx, edx
        lea eax, [esp + 0e4h]
        mov dl, byte ptr [ebx + esi]
        push edx
        push esi
        push edi
        push 101aa988h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 14h
        lea ecx, [esp + 0e4h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        inc esi
        cmp esi, 2
        ; Exact mapped bytes 7C D2: jl 0x1004dad8
        __asm _emit 0x7c
        __asm _emit 0xd2
        push 101aa984h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        inc edi
        add ebx, 2
        cmp edi, 20h
        ; Exact mapped bytes 7C C0: jl 0x1004dad6
        __asm _emit 0x7c
        __asm _emit 0xc0
        push 101aa9e4h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esp + 20h]
        push 0
        lea edx, [esp + 28h]
        push 40h
        push edx
        push 0
        push 0
        push 8002f007h
        ; Exact mapped bytes E8 18 E4 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe4
        __asm _emit 0x11
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 154h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
