// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58630DC0 .. +0x324 bytes.
extern "C" __declspec(naked) void FUN_58630dc0_58630DC0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 109ch
        ; Exact mapped bytes E8 23 0D 20 00: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1080h], ecx
        mov eax, dword ptr [ebp - 1080h]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 28 01 00 00: jne 0x58630f18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 52 08 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 10h
        ; Exact mapped bytes 7E 27: jle 0x58630e31
        __asm _emit 0x7e
        __asm _emit 0x27
        ; Exact mapped bytes E8 E1 63 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1084h], eax
        push 0
        push 0
        push 0
        push 498h
        mov ecx, dword ptr [ebp - 1084h]
        ; Exact mapped bytes E8 45 7F EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A5 02 00 00: jmp 0x586310d6
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 11 08 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 840h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 F5 07 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x07
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 828h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes E8 D6 07 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 81fh]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 B7 07 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 807h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 98 07 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1088h], eax
        mov eax, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 108ch], ecx
        push 800h
        mov edx, dword ptr [ebp - 1088h]
        push edx
        mov eax, dword ptr [ebp - 108ch]
        push eax
        ; Exact mapped bytes E8 A8 B9 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb9
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 0
        lea ecx, [ebp - 840h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 BF F4 FF: call 0x5857ceb0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1080h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1080h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 BE 01 00 00: jmp 0x586310d6
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1080h]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x5863107a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 839h
        push 0
        lea edx, [ebp - 107ch]
        push edx
        ; Exact mapped bytes E8 D2 BE 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xbe
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 FE 06 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 10h
        ; Exact mapped bytes 7E 27: jle 0x58630f85
        __asm _emit 0x7e
        __asm _emit 0x27
        ; Exact mapped bytes E8 8D 62 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1090h], eax
        push 0
        push 0
        push 0
        push 498h
        mov ecx, dword ptr [ebp - 1090h]
        ; Exact mapped bytes E8 F1 7D EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x586310d6
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 BA 06 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 107ch]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 9B 06 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 105bh]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1080h]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 7C 06 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 1043h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 3
        ; Exact mapped bytes 75 53: jne 0x58631042
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 4A: jne 0x58631042
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 82 E8 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 FD FF FF: call 0x58630d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        add edx, 1
        cmp edx, 0ah
        ; Exact mapped bytes 7C 2D: jl 0x58631042
        __asm _emit 0x7c
        __asm _emit 0x2d
        ; Exact mapped bytes A1 F8 04 96 58: mov eax, dword ptr [0x589604f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, 55555555h
        cmp eax, 0f4240h
        ; Exact mapped bytes 7C 1C: jl 0x58631042
        __asm _emit 0x7c
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 34 05 96 58: mov ecx, dword ptr [0x58960534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        lea edx, [ebp - 107ch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 BE F4 FF: call 0x5857ceb0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x58631064
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 A9 61 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x61
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1094h], eax
        push 0
        push 0
        push 0
        push 22bh
        mov ecx, dword ptr [ebp - 1094h]
        ; Exact mapped bytes E8 0D 7D EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 1080h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1080h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 5C: jmp 0x586310d6
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 1080h]
        movzx edx, byte ptr [ecx + 60h]
        cmp edx, 2
        ; Exact mapped bytes 74 0F: je 0x58631098
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 1080h]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 4
        ; Exact mapped bytes 75 3E: jne 0x586310d6
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 1080h]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 1098h], eax
        mov ecx, dword ptr [ebp - 1080h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 109ch], ecx
        push 0
        push 0f231h
        mov edx, dword ptr [ebp - 1080h]
        push edx
        mov ecx, dword ptr [ebp - 1098h]
        ; Exact mapped bytes FF 95 64 EF FF FF: call dword ptr [ebp - 0x109c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 70 FF 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
