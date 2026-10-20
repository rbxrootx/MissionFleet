// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408B71 .. +0x2C5 bytes.
extern "C" __declspec(naked) void FUN_00408b71_00408B71() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 28h]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 33 08 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        cmp eax, 9
        ; Exact mapped bytes 76 32: jbe 0x408bd7
        __asm _emit 0x76
        __asm _emit 0x32
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x408bb7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 18h
        ; Exact mapped bytes 7D 18: jge 0x408bd5
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 42 63: movsx eax, byte ptr [edx + 0x63]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x63
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x408bd3
        __asm _emit 0x75
        __asm _emit 0x08
        mov cl, byte ptr [ebp - 24h]
        mov byte ptr [ebp - 4], cl
        ; Exact mapped bytes EB 02: jmp 0x408bd5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D9: jmp 0x408bae
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact mapped bytes EB 04: jmp 0x408bdb
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        cmp edx, 4
        ; Exact mapped bytes 7C 0D: jl 0x408bf6
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        cmp eax, 17h
        ; Exact mapped bytes 7E 1C: jle 0x408c12
        __asm _emit 0x7e
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 E6 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x408e24
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, 63h
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 F4 03 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        mov byte ptr [ebp + ecx - 1ch], 0
        mov byte ptr [ebp - 5], 0
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 82 FB 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x408c7e
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 E5 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A6 01 00 00: jmp 0x408e24
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 1F 64 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x408df2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4E 17 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 27 B3 FF FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x408dbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 34 17 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0D B3 FF FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x408dbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 17 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 10 17 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x408dbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 00 17 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x408dbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 8ech], 1
        ; Exact mapped bytes 75 5A: jne 0x408d6e
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8ech], 1
        ; Exact mapped bytes 75 4E: jne 0x408d6e
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 8ech], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 86 06 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 0
        push 0
        push 80020d00h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C6 E4 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 4E: jmp 0x408dbc
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 23 55 07 00: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes E8 36 06 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 0
        push 0
        push 80020d0eh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 E4 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x408df0
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 D3 54 07 00: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 E4 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x408e24
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 9F 54 07 00: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E E4 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 B0 F9 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
