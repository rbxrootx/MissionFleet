// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00457485 .. +0x221 bytes.
extern "C" __declspec(naked) void FUN_00457485_00457485() {
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
        ; Exact mapped bytes E8 C8 A7 FE FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4574c6
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 D0 01 00 00: jmp 0x457696
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        ; Exact mapped bytes E8 1F 63 00 00: call 0x45d7f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x63
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
        ; Exact mapped bytes E8 79 62 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x62
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
        ; Exact mapped bytes E8 DB 12 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x45768e
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
        ; Exact mapped bytes E8 BF 12 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x4575a0
        __asm _emit 0x75
        __asm _emit 0x7b
        mov esi, esp
        push 0ah
        push 0dh
        push 5b8974h
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
        ; Exact mapped bytes E8 9B 12 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 82 12 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 66 12 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 4F 12 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x45759b
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 05: jne 0x4575a0
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x457696
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
        push 5b89b0h
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
        ; Exact mapped bytes E8 F0 11 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x11
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
        ; Exact mapped bytes E8 D7 11 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x11
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
        ; Exact mapped bytes E8 BB 11 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x11
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
        ; Exact mapped bytes E8 A4 11 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x457646
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 02: jne 0x457648
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x457696
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
        ; Exact mapped bytes E8 85 11 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        ; Exact mapped bytes E8 EA 61 00 00: call 0x45d850
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0F: je 0x457687
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FE 5A 00 00: call 0x45d180
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x45768e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AE 7F FF FF: call 0x44f644
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 3E 11 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
