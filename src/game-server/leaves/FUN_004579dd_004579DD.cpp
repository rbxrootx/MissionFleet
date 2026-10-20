// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004579DD .. +0x221 bytes.
extern "C" __declspec(naked) void FUN_004579dd_004579DD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        ; Exact mapped bytes E8 70 A2 FE FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x457a1e
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 D0 01 00 00: jmp 0x457bee
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        ; Exact mapped bytes E8 C7 5D 00 00: call 0x45d7f0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        mov esi, esp
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 40000000h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 21 5D 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5d
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
        ; Exact mapped bytes E8 83 0D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x457be6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 0D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x457af8
        __asm _emit 0x75
        __asm _emit 0x7b
        mov esi, esp
        push 0ah
        push 0dh
        push 5b8a38h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 43 0D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2A 0D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 10h]
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
        ; Exact mapped bytes E8 0E 0D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F7 0C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x457af3
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 05: jne 0x457af8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x457bee
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ah
        push 0dh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        push 5b8ab8h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 2ch
        cmp esi, esp
        ; Exact mapped bytes E8 98 0C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7F 0C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
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
        ; Exact mapped bytes E8 63 0C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4C 0C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x457b9e
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 02: jne 0x457ba0
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x457bee
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov esi, esp
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2D 0C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        ; Exact mapped bytes E8 92 5C 00 00: call 0x45d850
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0F: je 0x457bdf
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C6 56 00 00: call 0x45d2a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x457be6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 56 7A FF FF: call 0x44f644
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 E6 0B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
