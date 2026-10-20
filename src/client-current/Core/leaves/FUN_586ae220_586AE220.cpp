// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AE220 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_586ae220_586AE220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x586ae2cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x586ae2cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 14h
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 21 51 E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, 8ch
        push eax
        ; Exact mapped bytes E8 B6 EB 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 E8 33 E2 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 FA 50 E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x50
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, 8ch
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 14h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 F3 5E 10 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        xor eax, 55555555h
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 3D 03 00: call 0x586e2090
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 51 F3 E4 FF: call 0x584fd600
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes E8 3C 8F E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 0a64h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A6 AA E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4E: jmp 0x586ae31b
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 08: je 0x586ae2e1
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 20: je 0x586ae2ff
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes EB 3A: jmp 0x586ae31b
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes E8 0A 8F E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 0a6ah
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 74 AA E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ae31b
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 EC 8E E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 0a6bh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 56 AA E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 7A DD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x7a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
