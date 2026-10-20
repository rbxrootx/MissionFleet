// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58497FA0 .. +0x1E9 bytes.
extern "C" __declspec(naked) void FUN_58497fa0_58497FA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887daa7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 40h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 468h], 0
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x58498170
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 468h], 0
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 82 D2 02 00 00: mov ax, word ptr [edx + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 89 81 D2 02 00 00: mov word ptr [ecx + 0x2d2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 24h]
        movzx edx, word ptr [ecx + 2d2h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 71 31 32 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x31
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0ffffffc4h
        push 26ch
        ; Exact mapped bytes E8 BF 8F 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 72: je 0x584980ca
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 24h]
        mov eax, dword ptr [eax + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 24h]
        add eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A E9 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 BC 40 FF FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 40h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        lea eax, [ebp - 20h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        push 1
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7B 10 2B 00: call 0x58749140
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x10
        __asm _emit 0x2b
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584980d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 28h], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8F DD FE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 0dh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F3 6B 2B 00: call 0x5874ed00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x6b
        __asm _emit 0x2b
        __asm _emit 0x00
        push 0
        push 0
        mov edx, dword ptr [ebp - 24h]
        add edx, 0bch
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BB 64 2B 00: call 0x5874e5f0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x64
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF D7 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x58498170
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 D7 FF FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 1B: jne 0x58498170
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 D6 FF FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 51 B2 FF FF: call 0x584933c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 CB 8E 39 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8e
        __asm _emit 0x39
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
