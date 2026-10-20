// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10060AD0 .. +0x21E bytes.
extern "C" __declspec(naked) void FUN_10060ad0_10060AD0() {
    __asm {
        sub esp, 20h
        mov eax, ecx
        push ebx
        xor ecx, ecx
        push ebp
        mov edx, dword ptr [eax + 0d90h]
        push esi
        cmp edx, ecx
        push edi
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 74 42: je 0x10060b2b
        __asm _emit 0x74
        __asm _emit 0x42
        mov esi, dword ptr [eax + 0d0ch]
        mov dword ptr [esp + 10h], ecx
        cmp esi, ecx
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes 74 2C: je 0x10060b2b
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 8B 90 8C 0D 00 00: mov dx, word ptr [eax + 0xd8c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 7C 20: jl 0x10060b2b
        __asm _emit 0x7c
        __asm _emit 0x20
        mov edi, dword ptr [esi + 48h]
        shr edi, 0ah
        ; Exact mapped bytes 0F BF D2: movsx edx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd2
        and edi, 0ffffh
        cmp edx, edi
        ; Exact mapped bytes 75 0D: jne 0x10060b2b
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [esp + 34h], 1
        ; Exact mapped bytes 75 12: jne 0x10060b37
        __asm _emit 0x75
        __asm _emit 0x12
        mov dword ptr [eax + 0d90h], ecx
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esi + 0a50h]
        mov ebp, 70ah
        lea ebx, [eax + 0e98h]
        lea edi, [eax + 0d94h]
        add esi, 9cch
        mov dword ptr [esp + 18h], ebp
        mov dword ptr [esp + 34h], ebx
        mov dword ptr [esp + 24h], ecx
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 1ch], esi
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        cmp edx, eax
        ; Exact mapped bytes 75 BB: jne 0x10060b2b
        __asm _emit 0x75
        __asm _emit 0xbb
        test edx, edx
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x10060c8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx]
        and al, 0fh
        cmp al, 0dh
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x10060c12
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 5E 80: mov bx, word ptr [esi - 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x80
        ; Exact mapped bytes 66 8B 87 80 00 00 00: mov ax, word ptr [edi + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F3 AA 00: xor bx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 2B C3: sub ax, bx
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 22: je 0x10060bbe
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 7E 05: jle 0x10060ba3
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edx, dword ptr [edx + 70h]
        ; Exact mapped bytes EB 03: jmp 0x10060ba6
        __asm _emit 0xeb
        __asm _emit 0x03
        mov edx, dword ptr [edx + 74h]
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        imul eax, edx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 14h], 1
        add edx, eax
        mov dword ptr [esp + 10h], edx
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [edx]
        cmp edx, eax
        ; Exact mapped bytes 74 08: je 0x10060bd2
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 0F 85 59 FF FF FF: jne 0x10060b2b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 5E 82: mov bx, word ptr [esi - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x82
        ; Exact mapped bytes 66 8B 87 82 00 00 00: mov ax, word ptr [edi + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F3 AA 00: xor bx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 2B C3: sub ax, bx
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x10060c8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 05: jle 0x10060bf5
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edx, dword ptr [edx + 70h]
        ; Exact mapped bytes EB 03: jmp 0x10060bf8
        __asm _emit 0xeb
        __asm _emit 0x03
        mov edx, dword ptr [edx + 74h]
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        imul eax, edx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 14h], 1
        add edx, eax
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes EB 7C: jmp 0x10060c8e
        __asm _emit 0xeb
        __asm _emit 0x7c
        xor edx, edx
        add ebx, -4
        lea edi, [ecx - 4]
        mov eax, dword ptr [edi]
        mov esi, dword ptr [ebx]
        cmp esi, eax
        ; Exact mapped bytes 74 08: je 0x10060c2a
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 0F 85 01 FF FF FF: jne 0x10060b2b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 28h]
        lea ecx, [edx + ebp]
        add ebp, edx
        ; Exact mapped bytes 66 8B 8C 48 38 FB FF FF: mov cx, word ptr [eax + ecx*2 - 0x4c8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 81 F1 AA 00: xor cx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 04 68: mov ax, word ptr [eax + ebp*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x68
        ; Exact mapped bytes 66 2B C1: sub ax, cx
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 22: je 0x10060c72
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 7E 05: jle 0x10060c57
        __asm _emit 0x7e
        __asm _emit 0x05
        mov esi, dword ptr [esi + 70h]
        ; Exact mapped bytes EB 03: jmp 0x10060c5a
        __asm _emit 0xeb
        __asm _emit 0x03
        mov esi, dword ptr [esi + 74h]
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        imul ecx, esi
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esp + 14h], 1
        add eax, ecx
        mov dword ptr [esp + 10h], eax
        mov ebp, dword ptr [esp + 18h]
        inc edx
        add edi, 4
        add ebx, 4
        cmp edx, 2
        ; Exact mapped bytes 7C 98: jl 0x10060c1a
        __asm _emit 0x7c
        __asm _emit 0x98
        mov ecx, dword ptr [esp + 24h]
        mov edi, dword ptr [esp + 20h]
        mov esi, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 34h]
        add ebp, 2
        add esi, 4
        add edi, 4
        add ecx, 8
        add ebx, 8
        cmp ebp, 74ah
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 24h], ecx
        mov dword ptr [esp + 34h], ebx
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 0F 8C A7 FE FF FF: jl 0x10060b68
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 5E FE FF FF: je 0x10060b2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 00 D1 1A 10: mov edx, dword ptr [0x101ad100]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        xor edx, 0aaaaaaaah
        xor eax, eax
        pop edi
        cmp ecx, edx
        pop esi
        pop ebp
        setle al
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
