// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A229A .. +0x272 bytes.
extern "C" __declspec(naked) void FUN_004a229a_004A229A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        push 5cc08ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 28 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push ecx
        push 5cc0a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 28 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C9 29 09 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        push 5cc0ach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 28 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B2 AF 0A 00: call 0x54d290
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xaf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        shl eax, 2
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 CF 74 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], esp
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        shl eax, 2
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B6 74 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], esp
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        shl eax, 2
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 9D 74 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], esp
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x4a233e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 7E: jge 0x4a23c4
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3B 06 00 00: call 0x4a299a
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4A 06 00 00: call 0x4a29c2
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 5cc0c0h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        push 5cc0bch
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        push 5cc0b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 27 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 55 29 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6A 27 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 47 29 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5C 27 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x4a2335
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 FB 08 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 2B 01 00 00: jle 0x4a24ff
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x4a23e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 14: jge 0x4a2402
        __asm _emit 0x7d
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [esi + ecx*4]
        mov dword ptr [eax + edx*4], ecx
        ; Exact mapped bytes EB DB: jmp 0x4a23dd
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 8F ED 00 00 00: jg 0x4a24ff
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5cc0c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 26 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x4a2431
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 2C: jge 0x4a2465
        __asm _emit 0x7d
        __asm _emit 0x2c
        push 5cc0cch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + ecx*4]
        push eax
        push 5cc0c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 26 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A3 28 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B8 26 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB C3: jmp 0x4a2428
        __asm _emit 0xeb
        __asm _emit 0xc3
        push 5cc0d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 26 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5C FB FF FF: call 0x4a1fdf
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4]
        add ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + edx*4], ecx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4]
        cmp ecx, dword ptr [esi + eax*4]
        ; Exact mapped bytes 7E 28: jle 0x4a24ee
        __asm _emit 0x7e
        __asm _emit 0x28
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 22: jle 0x4a24ee
        __asm _emit 0x7e
        __asm _emit 0x22
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [esi + ecx*4]
        mov dword ptr [eax + edx*4], ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 06: je 0x4a24fa
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 9C: jge 0x4a2496
        __asm _emit 0x7d
        __asm _emit 0x9c
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x4a2402
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        lea esp, [ebp - 28h]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
