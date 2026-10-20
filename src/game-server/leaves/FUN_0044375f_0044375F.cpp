// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044375F .. +0x429 bytes.
extern "C" __declspec(naked) void FUN_0044375f_0044375F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 13ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 13ch]
        mov ecx, 4fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 138h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 12ch], eax
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 75 07: jne 0x44379d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D6 03 00 00: jmp 0x443b73
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 10h], 3ch
        lea ecx, [ebp - 128h]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 75 40 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 14h], 5b6564h
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 A7 41 09 00: call 0x4d7999
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 FC 4E FF FF: call 0x438700
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 CD 40 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 2
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 D2 4E FF FF: call 0x438700
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 A3 40 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 3
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 18 01 FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, esp
        push eax
        push 5b6568h
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
        ; Exact mapped bytes E8 69 4F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x4f
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 54 40 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 4
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 89 D5 FC FF: call 0x410e30
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, esp
        push eax
        push 5b656ch
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
        ; Exact mapped bytes E8 1A 4F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4f
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 05 40 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 5
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 CA 2C 00 00: call 0x4465c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 DE 0E 00: call 0x531770
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 B5 2C 00 00: call 0x4465c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 46 DE 0E 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 A2 2C 00 00: call 0x4465c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1B DE 0E 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 5b6570h
        lea edx, [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 83 2C 00 00: call 0x4465c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 71 C0 08 00: call 0x4cf9b5
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        push ecx
        push 5b6580h
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 18h
        cmp esi, esp
        ; Exact mapped bytes E8 71 4E 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 D2 9E 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 51 3F 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 6
        mov dword ptr [ebp - 14h], 5b658ch
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 2E 3F 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 7
        mov dword ptr [ebp - 14h], 5b6590h
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 0B 3F 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 8
        mov dword ptr [ebp - 14h], 5b6594h
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 E8 3E 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 9
        mov dword ptr [ebp - 14h], 5b6598h
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 C5 3E 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0ah
        mov dword ptr [ebp - 14h], 5b659ch
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 A2 3E 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 DC 3E 09 00: call 0x4d793f
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 9E 05 FC FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 97 2A 00 00: call 0x446510
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 138h]
        mov edx, dword ptr [ecx + 410h]
        add edx, 1
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [eax + 410h], edx
        push 1
        mov ecx, dword ptr [ebp - 138h]
        mov edx, dword ptr [ecx + 410h]
        push edx
        push 3f0h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 B4 B0 0A 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], 0
        ; Exact mapped bytes EB 0F: jmp 0x443ace
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 130h]
        add eax, 1
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 138h]
        mov edx, dword ptr [ebp - 130h]
        cmp edx, dword ptr [ecx + 410h]
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x443b6e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 25 0F 09 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F4 04 FC FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 29 00 00: call 0x446510
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 130h]
        add eax, 1
        mov esi, esp
        push eax
        push 5b65a0h
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
        ; Exact mapped bytes E8 95 4C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x00
        lea edx, [ebp - 128h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 37ch
        ; Exact mapped bytes E8 80 3D 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x443abf
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        add esp, 13ch
        cmp ebp, esp
        ; Exact mapped bytes E8 5E 4C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4c
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
