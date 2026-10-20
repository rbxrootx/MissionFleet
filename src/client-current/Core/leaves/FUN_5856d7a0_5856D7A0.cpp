// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856D7A0 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_5856d7a0_5856D7A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x5856d8aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 92 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x92
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 71 F1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 80 F2 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 91 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x91
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1E 82 F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 91 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x91
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 10 7F F2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 80 F2 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 91 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x91
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 81 F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 10h], esi
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 4C: je 0x5856d8aa
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], -1
        ; Exact mapped bytes 75 22: jne 0x5856d889
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3A 03 00 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x5856d8aa
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 17 03 00 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 101h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
