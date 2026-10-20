// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044FF46 .. +0x2A7 bytes.
extern "C" __declspec(naked) void FUN_0044ff46_0044FF46() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b3c8h
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
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 82 0F 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5b72e8h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 AD E9 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b7304h
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 460h
        ; Exact mapped bytes E8 4B D7 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DD 0F 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 460h
        ; Exact mapped bytes E8 64 D7 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 40000000h
        push 0
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 460h
        ; Exact mapped bytes E8 70 D7 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D2 87 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 A0 01 00 00: je 0x4501bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 72h
        mov dword ptr [ebp - 20h], edx
        mov esi, esp
        push 0ah
        push 0dh
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 86 00 00 00: mov cx, word ptr [eax + 0x86]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 66h
        push edx
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 64: mov cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x64
        push ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 44h
        push edx
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 42: mov cx, word ptr [eax + 0x42]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x42
        mov eax, ecx
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        mov edx, dword ptr [ebp - 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 42: mov ax, word ptr [edx + 0x42]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x42
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 20h]
        add edx, 22h
        push edx
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 20: mov cx, word ptr [eax + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x20
        mov eax, ecx
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        mov edx, dword ptr [ebp - 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 20: mov ax, word ptr [edx + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x20
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 51h
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 38h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1ch
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 14h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 470h]
        push eax
        push 5b7320h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 64h
        cmp esi, esp
        ; Exact mapped bytes E8 D0 86 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B7 86 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 1ch]
        push edx
        mov edi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 9B 86 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 84 86 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x450166
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 18: jne 0x45017e
        __asm _emit 0x75
        __asm _emit 0x18
        mov byte ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D3 D6 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 24h]
        ; Exact mapped bytes EB 53: jmp 0x4501d1
        __asm _emit 0xeb
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 7C D2 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3D 86 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 2ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 96 D6 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 2ch]
        ; Exact mapped bytes EB 16: jmp 0x4501d1
        __asm _emit 0xeb
        __asm _emit 0x16
        mov byte ptr [ebp - 30h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7E D6 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 30h]
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
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 F9 85 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
