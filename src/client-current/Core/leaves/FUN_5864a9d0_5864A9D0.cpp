// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864A9D0 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_5864a9d0_5864A9D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 64h], ecx
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push 588af3d4h
        ; Exact mapped bytes E8 01 89 16 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], -1
        ; Exact mapped bytes 75 2B: jne 0x5864aa33
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes E8 E3 C7 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0
        push 0
        push 0
        push 246h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 4D E3 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x5864ab63
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 F7 65 1E 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x65
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 44h], 7d0h
        ; Exact mapped bytes 76 2B: jbe 0x5864aa8b
        __asm _emit 0x76
        __asm _emit 0x2b
        ; Exact mapped bytes E8 8B C7 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        push 0
        push 249h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F5 E2 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x5864ab63
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0eh
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 D4 1D 20 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        mov eax, dword ptr [ebp - 48h]
        add eax, 0eh
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 BF 1D 20 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 0ch
        movzx edx, word ptr [ebp - 14h]
        cmp edx, 4d42h
        ; Exact mapped bytes 74 1E: je 0x5864aafe
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes E8 0B C7 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        push 0
        push 248h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 75 E2 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe2
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 65: jmp 0x5864ab63
        __asm _emit 0xeb
        __asm _emit 0x65
        cmp dword ptr [ebp - 34h], 14h
        ; Exact mapped bytes 75 06: jne 0x5864ab0a
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 38h], 14h
        ; Exact mapped bytes 74 1E: je 0x5864ab28
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes E8 E1 C6 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        push 0
        push 247h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4B E2 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe2
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3B: jmp 0x5864ab63
        __asm _emit 0xeb
        __asm _emit 0x3b
        movzx eax, word ptr [ebp - 2eh]
        cmp eax, 18h
        ; Exact mapped bytes 74 1E: je 0x5864ab4f
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes E8 BA C6 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        push 0
        push 0
        push 0
        push 248h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 24 E2 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe2
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x5864ab63
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 24 F3 FF: call 0x5857cfa0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E3 64 1E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x64
        __asm _emit 0x1e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
