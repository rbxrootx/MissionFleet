// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004076C7 .. +0x412 bytes.
extern "C" __declspec(naked) void FUN_004076c7_004076C7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 430h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 430h]
        mov ecx, 10ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 42ch], ecx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 42ch]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 D1 1C 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        cmp eax, 9
        ; Exact mapped bytes 76 47: jbe 0x40774e
        __asm _emit 0x76
        __asm _emit 0x47
        mov dword ptr [ebp - 424h], 0
        ; Exact mapped bytes EB 0F: jmp 0x407722
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 424h]
        add ecx, 1
        mov dword ptr [ebp - 424h], ecx
        cmp dword ptr [ebp - 424h], 18h
        ; Exact mapped bytes 7D 21: jge 0x40774c
        __asm _emit 0x7d
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 42ch]
        add edx, dword ptr [ebp - 424h]
        ; Exact mapped bytes 0F BE 42 63: movsx eax, byte ptr [edx + 0x63]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x63
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x40774a
        __asm _emit 0x75
        __asm _emit 0x0b
        mov cl, byte ptr [ebp - 424h]
        mov byte ptr [ebp - 4], cl
        ; Exact mapped bytes EB 02: jmp 0x40774c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C7: jmp 0x407713
        __asm _emit 0xeb
        __asm _emit 0xc7
        ; Exact mapped bytes EB 04: jmp 0x407752
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        cmp edx, 4
        ; Exact mapped bytes 7C 0D: jl 0x40776d
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        cmp eax, 17h
        ; Exact mapped bytes 7E 05: jle 0x407772
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 52 03 00 00: jmp 0x407ac4
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp - 42ch]
        add edx, 63h
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 91 18 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        mov byte ptr [ebp + ecx - 1ch], 0
        mov byte ptr [ebp - 5], 0
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 42ch]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 F6 78 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 420h], eax
        cmp dword ptr [ebp - 420h], 0
        ; Exact mapped bytes 0F 84 54 02 00 00: je 0x407a1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 1C 2C 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 428h], eax
        cmp dword ptr [ebp - 428h], 0
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x407971
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 DE C7 FF FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        cmp dword ptr [ebp - 430h], 501h
        ; Exact mapped bytes 74 15: je 0x407819
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 430h], 502h
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x40791d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x407951
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 428h]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 0fch], 2
        ; Exact mapped bytes 75 39: jne 0x407867
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 428h]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 104h]
        add edx, 1
        mov esi, esp
        push edx
        push 5a0634h
        lea eax, [ebp - 41ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 7E 0F 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x40791b
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 428h]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 0fch], 4
        ; Exact mapped bytes 75 46: jne 0x4078c2
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 428h]
        mov ecx, dword ptr [eax + 0d78h]
        add ecx, 20h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 428h]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [eax + 104h]
        add ecx, 1
        push ecx
        push 5a0660h
        lea edx, [ebp - 41ch]
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
        ; Exact mapped bytes E8 20 0F 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 59: jmp 0x40791b
        __asm _emit 0xeb
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 428h]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 8
        ; Exact mapped bytes 75 44: jne 0x40791b
        __asm _emit 0x75
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 428h]
        mov eax, dword ptr [edx + 0d78h]
        add eax, 20h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 428h]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 104h]
        add eax, 1
        push eax
        push 5a0688h
        lea ecx, [ebp - 41ch]
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
        ; Exact mapped bytes E8 C5 0E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 52: jmp 0x40796f
        __asm _emit 0xeb
        __asm _emit 0x52
        push 0
        mov ecx, dword ptr [ebp - 428h]
        add ecx, 0cach
        ; Exact mapped bytes E8 C8 66 0E 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x66
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 5a06b0h
        lea edx, [ebp - 41ch]
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
        ; Exact mapped bytes E8 91 0E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x40796f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov esi, esp
        push 5a06c8h
        lea eax, [ebp - 41ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 71 0E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x40798f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov esi, esp
        push 5a06e4h
        lea ecx, [ebp - 41ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 51 0E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        push 30h
        mov edx, dword ptr [ebp - 42ch]
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 38h
        ; Exact mapped bytes E8 1D 96 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 41ch]
        push eax
        ; Exact mapped bytes E8 1B 1A 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea ecx, [ebp - 41ch]
        push ecx
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 38h
        ; Exact mapped bytes E8 F5 95 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 38h
        ; Exact mapped bytes E8 AF 2A 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 38h
        ; Exact mapped bytes E8 80 2A 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 42ch]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 42ch]
        mov edx, dword ptr [ecx + 45ch]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A F8 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x407ac4
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a06f8h
        lea eax, [ebp - 41ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 A5 0D 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 38h
        ; Exact mapped bytes E8 71 95 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 41ch]
        push edx
        ; Exact mapped bytes E8 6F 19 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 41ch]
        push eax
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 38h
        ; Exact mapped bytes E8 49 95 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 38h
        ; Exact mapped bytes E8 03 2A 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 38h
        ; Exact mapped bytes E8 D4 29 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 42ch]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 42ch]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E F7 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf7
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 430h
        cmp ebp, esp
        ; Exact mapped bytes E8 0D 0D 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
