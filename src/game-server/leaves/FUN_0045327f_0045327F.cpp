// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045327F .. +0x355 bytes.
extern "C" __declspec(naked) void FUN_0045327f_0045327F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b4f2h
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
        sub esp, 30h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3ch]
        mov ecx, 0ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        push 0
        ; Exact mapped bytes E8 F9 69 05 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 DA 8E 05 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 10ch
        ; Exact mapped bytes E8 EA A0 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0D: je 0x4532f6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AF 95 00 00: call 0x45c8a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4532fd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 76ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 18h], edx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 66 54 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 2ch
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4C 54 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [edx + 80h], eax
        mov esi, esp
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 3ch
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 14 54 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 55h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FA 53 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 28h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x45341b
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 22: je 0x45341b
        __asm _emit 0x74
        __asm _emit 0x22
        mov esi, esp
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CA 53 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 21: jmp 0x45343c
        __asm _emit 0xeb
        __asm _emit 0x21
        mov esi, esp
        push 5b8104h
        mov edx, dword ptr [ebp - 10h]
        add edx, 84h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A7 53 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp + 30h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x453470
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp + 2ch], 0
        ; Exact mapped bytes 74 22: je 0x453470
        __asm _emit 0x74
        __asm _emit 0x22
        mov esi, esp
        mov ecx, dword ptr [ebp + 2ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 0a6h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 75 53 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 20: jmp 0x453490
        __asm _emit 0xeb
        __asm _emit 0x20
        mov esi, esp
        push 5b810ch
        mov eax, dword ptr [ebp - 10h]
        add eax, 0a6h
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 53 53 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 38h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x4534c4
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [ebp + 34h], 0
        ; Exact mapped bytes 74 21: je 0x4534c4
        __asm _emit 0x74
        __asm _emit 0x21
        mov esi, esp
        mov edx, dword ptr [ebp + 34h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 0c8h
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 21 53 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 21: jmp 0x4534e5
        __asm _emit 0xeb
        __asm _emit 0x21
        mov esi, esp
        push 5b8114h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c8h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FE 52 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp + 40h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x45351a
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp + 3ch], 0
        ; Exact mapped bytes 74 22: je 0x45351a
        __asm _emit 0x74
        __asm _emit 0x22
        mov esi, esp
        mov eax, dword ptr [ebp + 3ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0eah
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CB 52 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 21: jmp 0x45353b
        __asm _emit 0xeb
        __asm _emit 0x21
        mov esi, esp
        push 5b811ch
        mov edx, dword ptr [ebp - 10h]
        add edx, 0eah
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A8 52 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 4D 28: mov cx, word ptr [ebp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x28
        ; Exact mapped bytes 66 89 88 A4 00 00 00: mov word ptr [eax + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 45 30: mov ax, word ptr [ebp + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x30
        ; Exact mapped bytes 66 89 82 C6 00 00 00: mov word ptr [edx + 0xc6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 55 38: mov dx, word ptr [ebp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x38
        ; Exact mapped bytes 66 89 91 E8 00 00 00: mov word ptr [ecx + 0xe8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 4D 40: mov cx, word ptr [ebp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 88 0A 01 00 00: mov word ptr [eax + 0x10a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 59 52 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 8
        ; Exact mapped bytes E8 84 A2 00 00: call 0x45d820
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 30 52 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A8 91 00 00: call 0x45c760
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
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
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 12 52 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 3C 00: ret 0x3c
        __asm _emit 0xc2
        __asm _emit 0x3c
        __asm _emit 0x00
    }
}
