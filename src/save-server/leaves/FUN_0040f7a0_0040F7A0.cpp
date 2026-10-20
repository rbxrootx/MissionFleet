// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F7A0 .. +0x2A8 bytes.
extern "C" __declspec(naked) void FUN_0040f7a0_0040F7A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58abe9h
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
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 58h]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 38 F3 0B 00: call 0x4ceb12
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0x0b
        __asm _emit 0x00
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x40f7e1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x40f7da
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x40f7ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x40f7e7
        __asm _emit 0x75
        __asm _emit 0xf3
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6F C0 11 00: call 0x52b86d
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 5A: je 0x40f861
        __asm _emit 0x74
        __asm _emit 0x5a
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F8 54 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 65h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 60 A4 0C 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 64 55 11 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x55
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x40f852
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 800h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 17 7D 12 00: call 0x537554
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x7d
        __asm _emit 0x12
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 65 55 11 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x55
        __asm _emit 0x11
        __asm _emit 0x00
        push eax
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 02 7D 12 00: call 0x537554
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x7d
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 8B D0 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1dch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 D6 11 00: call 0x52cf49
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1dch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C0 D6 11 00: call 0x52cf49
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        push 190h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 1C 09 0A 00: call 0x4b01ba
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        push 2710h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 07 09 0A 00: call 0x4b01ba
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1388h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 F2 08 0A 00: call 0x4b01ba
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        push 633db0h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 150h
        ; Exact mapped bytes E8 45 15 0A 00: call 0x4b0e22
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 1eh
        push 2
        push 633dach
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 5C A6 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 96h
        push 2
        push 633da4h
        push 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 3E A6 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        push 2
        push 64h
        push 2
        push 633d94h
        push 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 23 A6 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        push 3
        push 32h
        push 2
        push 633d88h
        push 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 08 A6 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        push 4
        push 32h
        push 2
        push 633d80h
        push 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 ED A5 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x00
        push 5
        push 64h
        push 2
        push 633d74h
        push 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 D2 A5 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x00
        push 6
        push 0c8h
        push 2
        push 633d64h
        push 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 B4 A5 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x00
        push 7
        push 32h
        push 2
        push 633d5ch
        push 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 99 A5 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x00
        push 8
        push 32h
        push 2
        push 633d58h
        push 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 7E A5 09 00: call 0x4a9f54
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x00
        push 179h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 07 42 0A 00: call 0x4b3bf0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x00
        push 633d34h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 68 6A 0C 00: call 0x4d645e
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 1E FF FF: call 0x401852
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 1F FF FF: call 0x40193d
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 1388h
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 16 CA 11 00: call 0x52c42d
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xca
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, esp
        push 1
        ; Exact mapped bytes FF 15 D0 C0 68 00: call dword ptr [0x68c0d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C8 53 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
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
        pop ebx
        add esp, 58h
        cmp ebp, esp
        ; Exact mapped bytes E8 AC 53 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
