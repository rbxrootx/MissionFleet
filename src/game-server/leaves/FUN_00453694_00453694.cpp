// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00453694 .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_00453694_00453694() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 8
        ; Exact mapped bytes E8 BC E5 FE FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4536d2
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x453814
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 8
        ; Exact mapped bytes E8 13 A1 00 00: call 0x45d7f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa1
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
        ; Exact mapped bytes E8 6D A0 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa0
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
        ; Exact mapped bytes E8 CF 50 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x45380c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
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
        push 5b8124h
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
        ; Exact mapped bytes E8 72 50 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x50
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
        ; Exact mapped bytes E8 59 50 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x50
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
        ; Exact mapped bytes E8 3D 50 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x50
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
        ; Exact mapped bytes E8 26 50 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4537c4
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 02: jne 0x4537c6
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x453814
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
        ; Exact mapped bytes E8 07 50 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 8
        ; Exact mapped bytes E8 6C A0 00 00: call 0x45d850
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x453805
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 91 00 00: call 0x45c900
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x45380c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 30 BE FF FF: call 0x44f644
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 C0 4F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
