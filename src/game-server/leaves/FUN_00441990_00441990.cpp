// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441990 .. +0x2BF bytes.
extern "C" __declspec(naked) void FUN_00441990_00441990() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ac09h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 110h
        push esi
        push edi
        lea edi, [ebp - 11ch]
        mov ecx, 44h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [ebp - 10h], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 36 F5 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov esi, esp
        push 0ffh
        lea eax, [ebp - 118h]
        push eax
        ; Exact mapped bytes FF 15 40 29 5E 00: call dword ptr [0x5e2940]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 ED 6D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 12 02 00 00: jne 0x441c0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 118h]
        push ecx
        ; Exact mapped bytes FF 15 44 29 5E 00: call dword ptr [0x5e2944]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CF 6D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 E6 01 00 00: je 0x441c04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax]
        mov esi, esp
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 4C 29 5E 00: call dword ptr [0x5e294c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A8 6D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 BC C0 0A 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6348h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 95 F5 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441a5e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes E9 A4 01 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b6338h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 78 F5 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441a7b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 2
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b6328h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5B F5 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441a98
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 3
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b6318h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 3E F5 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441ab5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 4
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b6308h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 21 F5 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441ad2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 5
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b62f8h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 04 F5 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441aef
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b62e8h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E7 F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x441b05
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b62d8h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 D1 F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441b22
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 0bh
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b62c8h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B4 F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441b3f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b62b8h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 97 F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441b5c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 15h
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b62a8h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 7A F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x441b79
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 16h
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x441c02
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b6298h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5D F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x441b93
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 17h
        ; Exact mapped bytes EB 6F: jmp 0x441c02
        __asm _emit 0xeb
        __asm _emit 0x6f
        push 5b6288h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 43 F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x441bad
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 18h
        ; Exact mapped bytes EB 55: jmp 0x441c02
        __asm _emit 0xeb
        __asm _emit 0x55
        push 5b6278h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 29 F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x441bc7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 19h
        ; Exact mapped bytes EB 3B: jmp 0x441c02
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 5b6268h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0F F4 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x441be1
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1ah
        ; Exact mapped bytes EB 21: jmp 0x441c02
        __asm _emit 0xeb
        __asm _emit 0x21
        push 5b6258h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F5 F3 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x441bfb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 63h
        ; Exact mapped bytes EB 07: jmp 0x441c02
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 07: jmp 0x441c0b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x441c14
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 11ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 20 BC 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 11ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 11ch
        cmp ebp, esp
        ; Exact mapped bytes E8 95 6B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
