// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4743 .. +0x286 bytes.
extern "C" __declspec(naked) void FUN_004a4743_004A4743() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 D2 09 00: call 0x5419c5
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 58a1a8h
        ; Exact mapped bytes E8 9E 69 05 00: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x4a4776
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 4C 02 00 00: jmp 0x4a49c2
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x4a49c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E C7 0A 00: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 58a6d0h
        ; Exact mapped bytes E8 55 69 05 00: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 02: jne 0x4a47bc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB CB: jmp 0x4a4787
        __asm _emit 0xeb
        __asm _emit 0xcb
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1C: jne 0x4a47de
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 11: je 0x4a47dc
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 1ch]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 74 02: je 0x4a47de
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB A9: jmp 0x4a4787
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov dword ptr [ebp - 18h], 8000ffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B7 F9 FF FF: call 0x4a41a4
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 01 00 00: je 0x4a4995
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 6A 01 00 00: je 0x4a4993
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x4a4981
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 5F A3 0A 00: call 0x54ebb4
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x4a496f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        ; Exact mapped bytes FF 15 80 2A 5E 00: call dword ptr [0x5e2a80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x4a4965
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx], 18h
        mov eax, dword ptr [ebp - 28h]
        mov eax, dword ptr [eax]
        xor edx, edx
        mov ecx, 4
        div ecx
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4a48a6
        __asm _emit 0x74
        __asm _emit 0x14
        push 1d6h
        push 5d00cch
        ; Exact mapped bytes E8 5F 01 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a48a6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4a4880
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4], 1
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 8], 1
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0ch], 1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6A FE 08 00: call 0x53473c
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 75 FE 08 00: call 0x534755
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 14h], eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 34h], 8
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x4a4910
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 34h]
        or al, 40h
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 30h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 0
        push 0
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 11: jge 0x4a495b
        __asm _emit 0x7d
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 5d013ch
        ; Exact mapped bytes E8 BD B2 02 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x4a49bd
        __asm _emit 0xeb
        __asm _emit 0x28
        push 0
        push 2
        push 6
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 F7 FF FF: call 0x4a4133
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 11: jge 0x4a49bd
        __asm _emit 0x7d
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 5d015ch
        ; Exact mapped bytes E8 5B B2 02 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 C5 FD FF FF: jmp 0x4a4787
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
