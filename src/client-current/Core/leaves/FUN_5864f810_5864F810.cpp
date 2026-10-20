// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864F810 .. +0x17B bytes.
extern "C" __declspec(naked) void FUN_5864f810_5864F810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        push 18h
        ; Exact mapped bytes E8 22 18 1E 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 26 88 E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x88
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5864f86c
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 3ch]
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 15 82 E3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x82
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0C 89 E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x89
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 43 81 E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5864f8c0
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 A4 81 E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5864f8be
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x5864f985
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9D: jmp 0x5864f85d
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov edx, dword ptr [ebp - 4]
        add edx, 21ch
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 48 89 E3 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x89
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x5864f985
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 28h], edx
        push 83add7h
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0D 0C 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 2ch], edx
        push 0ffffffh
        push -1
        push 588af47fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 ED 0B 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 218h]
        mov dword ptr [ebp - 30h], ecx
        push 0ffffffh
        push -1
        push 588af4c9h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 CD 0B 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1dch]
        mov dword ptr [ebp - 38h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        ; Exact mapped bytes E8 CB 88 E3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x88
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0C B8 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
