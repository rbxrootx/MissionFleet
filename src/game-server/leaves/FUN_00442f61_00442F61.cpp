// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442F61 .. +0x3B2 bytes.
extern "C" __declspec(naked) void FUN_00442f61_00442F61() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 144h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 144h]
        mov ecx, 51h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 144h], ecx
        mov eax, dword ptr [ebp - 144h]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 75 05: jne 0x442f97
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 69 03 00 00: jmp 0x443300
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 30h], 1
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 18h], 3ch
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 07 8B 0F 00: call 0x53bae0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 12 02 00 00: je 0x4431f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x442ffc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 1
        mov dword ptr [ebp - 13ch], ecx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 34 48 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes 0F 8D DA 01 00 00: jge 0x4431f3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 09 1A 09 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], eax
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 0F 84 AA 01 00 00: je 0x4431ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 38 35 00 00: call 0x446590
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 28h], 6
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 1E 35 00 00: call 0x446590
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [eax]
        push edx
        push 5b64e8h
        lea eax, [ebp - 138h]
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
        ; Exact mapped bytes E8 4D 57 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 38 48 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 D4 34 00 00: call 0x446590
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 28h], 7
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 B9 34 00 00: call 0x446590
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [eax + 4]
        push edx
        push 5b64ech
        lea eax, [ebp - 138h]
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
        ; Exact mapped bytes E8 E7 56 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 D2 47 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 6E 34 00 00: call 0x446590
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 28h], 8
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 53 34 00 00: call 0x446590
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [eax + 8]
        push edx
        push 5b64f0h
        lea eax, [ebp - 138h]
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
        ; Exact mapped bytes E8 81 56 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 6C 47 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 08 34 00 00: call 0x446590
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 28h], 9
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 ED 33 00 00: call 0x446590
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [eax + 0ch]
        push edx
        push 5b64f4h
        lea eax, [ebp - 138h]
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
        ; Exact mapped bytes E8 1B 56 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 06 47 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 4D 6A 04 00: call 0x489c3b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA FD FF FF: jmp 0x442fed
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 EB 32 0B 00: call 0x4f64eb
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 FF 71 FC FF: call 0x40a410
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + 3f8h], eax
        mov edx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 12 72 FC FF: call 0x40a440
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x72
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + 3fch], eax
        mov edx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 95 33 00 00: call 0x4465e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + 418h], eax
        mov edx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 B8 E0 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [eax + 10dch]
        mov dword ptr [ecx + 420h], edx
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 95 E0 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 74 41: je 0x4432d5
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ecx + 400h]
        push edx
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 418h]
        push ecx
        push 80020efdh
        mov edx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 56 E0 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 5D 3F 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 40ch]
        push ecx
        mov edx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 FD 33 00 00: call 0x4466f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 EB 31 0B 00: call 0x4f64eb
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 144h
        cmp ebp, esp
        ; Exact mapped bytes E8 D1 54 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
