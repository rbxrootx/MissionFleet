// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004445A3 .. +0x38C bytes.
extern "C" __declspec(naked) void FUN_004445a3_004445A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 130h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 130h]
        mov ecx, 4ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 130h], ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 07 75 0F 00: call 0x53bae0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x75
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4445e4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 36 03 00 00: jmp 0x44491a
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 4C 32 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 83 17 03 00 00: jae 0x444915
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 27 04 09 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 75 07: jne 0x444629
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F1 02 00 00: jmp 0x44491a
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 10h], 3ch
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 81 F9 FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x444791
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 1
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + 0d78h]
        add eax, 80h
        mov esi, esp
        push eax
        push 5b6690h
        lea ecx, [ebp - 128h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 4F 41 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        lea edx, [ebp - 128h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 3A 32 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 2
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 0fch]
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x44470e
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 16 F9 FB FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 104h]
        push eax
        push 5b6694h
        lea ecx, [ebp - 128h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 D4 40 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 3D: jmp 0x44474b
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 D7 F8 FB FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, esp
        push eax
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [eax + 104h]
        push ecx
        push 5b66c4h
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 95 40 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 80 31 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0ah
        mov dword ptr [ebp - 14h], 5b66f4h
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 5D 31 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x444877
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 34 F8 FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 502h
        ; Exact mapped bytes 75 72: jne 0x444815
        __asm _emit 0x75
        __asm _emit 0x72
        mov dword ptr [ebp - 20h], 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 3B F8 FB FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, esp
        push eax
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + 0ca4h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 0cach
        ; Exact mapped bytes E8 20 98 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x98
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 5b66f8h
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 14h
        cmp esi, esp
        ; Exact mapped bytes E8 EB 3F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 D6 30 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 62: jmp 0x444877
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 B0 F7 FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 52: jne 0x444877
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 C0 F7 FB FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x444877
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 20h], 1
        mov esi, esp
        push 5b6718h
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 87 3F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 72 30 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 3
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 E7 F0 FB FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, esp
        push eax
        push 5b6730h
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 38 3F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 23 30 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 4
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 58 C5 FC FF: call 0x410e30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, esp
        push eax
        push 5b6734h
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 E9 3E 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 37ch
        ; Exact mapped bytes E8 D4 2F 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 130h
        cmp ebp, esp
        ; Exact mapped bytes E8 B7 3E 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
