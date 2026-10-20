// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004051F2 .. +0x2C0 bytes.
extern "C" __declspec(naked) void FUN_004051f2_004051F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d0h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0d0h]
        mov ecx, 34h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0d0h], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 0c0000000h
        mov eax, dword ptr [ebp - 0d0h]
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
        ; Exact mapped bytes E8 9E 35 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        cmp dword ptr [ebp - 0c4h], -1
        ; Exact mapped bytes 0F 84 45 02 00 00: je 0x40549a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 134h]
        add edx, 1
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [eax + 134h], edx
        mov esi, esp
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 3ch
        mov edx, dword ptr [ebp - 0d0h]
        add edx, 104h
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 45 35 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1D 35 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 4]
        push eax
        push 5ch
        lea ecx, [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F8 34 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E1 34 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 64h], ecx
        mov esi, esp
        push 2
        push 0
        push 0
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 34 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0c8h], eax
        mov esi, esp
        push 0
        lea eax, [ebp - 4]
        push eax
        push 60h
        lea ecx, [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 68 34 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 24: je 0x4053a2
        __asm _emit 0x74
        __asm _emit 0x24
        mov esi, esp
        push 0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3E 34 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 74 48: je 0x4053f0
        __asm _emit 0x74
        __asm _emit 0x48
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 50h
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 17 34 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 4]
        push eax
        push 4
        lea ecx, [ebp - 0c8h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F2 33 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 46: jmp 0x405436
        __asm _emit 0xeb
        __asm _emit 0x46
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 4ch
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CF 33 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 4]
        push edx
        push 4
        lea eax, [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AA 33 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 50h
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 89 33 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 4
        lea edx, [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 64 33 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4E 33 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes EB 03: jmp 0x40549d
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        add esp, 0d0h
        cmp ebp, esp
        ; Exact mapped bytes E8 34 33 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
