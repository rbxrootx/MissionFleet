// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485AE0 .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_58485ae0_58485AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 12ah]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 0F 87 2E 01 00 00: ja 0x58485c2e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 34 5C 48 58: jmp dword ptr [edx*4 + 0x58485c34]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x5c
        __asm _emit 0x48
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B EE FF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 EE FF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E EE FF FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        push 0
        push -1
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 0
        push 0
        movzx eax, word ptr [ebp - 2]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 7E 0F 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x58485c2e
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ech]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0fh
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x58485c2e
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC ED FF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 EE FF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF ED FF FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        push 0
        push -1
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        push 0
        push 0
        movzx edx, word ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 7E 0F 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5A: jmp 0x58485c2e
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 0C 06 96 58: cmp eax, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x58485bf5
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 37: jmp 0x58485c2e
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x58485c19
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 58 06 96 58: mov edx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 13: jmp 0x58485c2e
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA ED FF FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 A7 29 00: call 0x587203d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa7
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
