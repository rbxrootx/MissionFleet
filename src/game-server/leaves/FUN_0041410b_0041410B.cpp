// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041410B .. +0x2B2 bytes.
extern "C" __declspec(naked) void FUN_0041410b_0041410B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c0h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0c0h]
        mov ecx, 30h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0c0h], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 0c0000000h
        mov eax, dword ptr [ebp - 0c0h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 85 46 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], -1
        ; Exact mapped bytes 0F 84 37 02 00 00: je 0x4143a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4A 46 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 4]
        push eax
        push 5ch
        lea ecx, [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 25 46 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 64h], -1
        ; Exact mapped bytes 75 07: jne 0x4141c8
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F7 45 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 4]
        push edx
        push 4
        lea eax, [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D2 45 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BB 45 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0ffffffffh
        mov dword ptr [ebp - 10h], 0
        mov esi, esp
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 85 45 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        mov esi, esp
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 50h
        lea edx, [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D 45 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 24: je 0x4142ad
        __asm _emit 0x74
        __asm _emit 0x24
        mov esi, esp
        push 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 33 45 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 48: je 0x4142fb
        __asm _emit 0x74
        __asm _emit 0x48
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4ch
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0C 45 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 4
        lea edx, [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E7 44 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 46: jmp 0x414341
        __asm _emit 0xeb
        __asm _emit 0x46
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4ch
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C4 44 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 4]
        push eax
        push 4
        lea ecx, [ebp - 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9F 44 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7E 44 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 4]
        push edx
        push 4
        lea eax, [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 59 44 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 44 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes EB 03: jmp 0x4143a8
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        add esp, 0c0h
        cmp ebp, esp
        ; Exact mapped bytes E8 29 44 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
