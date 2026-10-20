// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F201 .. +0x2B1 bytes.
extern "C" __declspec(naked) void FUN_0047f201_0047F201() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x47f2e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 F4 00 00: mov word ptr [ebp - 0xc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 F6 00 00: mov word ptr [ebp - 0xa], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 F8 00 00: mov word ptr [ebp - 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x47f24d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 38h]
        ; Exact mapped bytes 7D 72: jge 0x47f2ca
        __asm _emit 0x7d
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 6
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 08: mov dx, word ptr [eax + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 1
        ; Exact mapped bytes 75 0E: jne 0x47f27d
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes EB 48: jmp 0x47f2c5
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 6
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 08: mov dx, word ptr [eax + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 2
        ; Exact mapped bytes 75 0E: jne 0x47f2a2
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 45 F6: mov ax, word ptr [ebp - 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf6
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F6: mov word ptr [ebp - 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf6
        ; Exact mapped bytes EB 23: jmp 0x47f2c5
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 6
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 08: mov dx, word ptr [eax + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 3
        ; Exact mapped bytes 75 0C: jne 0x47f2c5
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 45 F8: mov ax, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x47f244
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 6
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 E2 1C F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x47f2f3
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 83 FC FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 AE 01 00 00: jmp 0x47f4a1
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47f305
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 38h]
        ; Exact mapped bytes 0F 8D 8D 01 00 00: jge 0x47f4a1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 6
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 08: mov dx, word ptr [eax + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 1
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x47f3fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 6
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 02 02: mov cx, word ptr [edx + eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x02
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 1ch], 63h
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 56 44 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x47f3f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, -1
        ; Exact mapped bytes 74 5E: je 0x47f3f8
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 0
        ; Exact mapped bytes 75 42: jne 0x47f3f8
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2bch], -1
        ; Exact mapped bytes 75 26: jne 0x47f3f8
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BA 00 00 00: call 0x47f4b2
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x47f49c
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 6
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 02: mov cx, word ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x47f49c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 6
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 34h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 11 02: mov ax, word ptr [ecx + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x02
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 28h], 31h
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 6D 43 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x43
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x47f49c
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 370h
        cmp dword ptr [eax + ecx + 16bdch], 0
        ; Exact mapped bytes 75 26: jne 0x47f49c
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2C 02 00 00: call 0x47f6c8
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5B FE FF FF: jmp 0x47f2fc
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 34 93 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
