// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F0470 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_584f0470_584F0470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 21ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 214h], ecx
        push 108h
        push 0
        lea eax, [ebp - 210h]
        push eax
        ; Exact mapped bytes E8 74 C9 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc9
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10ch], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x584f04cb
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 210h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 5D: jmp 0x584f0528
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov dword ptr [ebp - 218h], 0
        push 104h
        lea ecx, [ebp - 108h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 E4 42 89 58: call dword ptr [0x588942e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 5ch
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 D9 0C 00 00: call 0x584f11d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        add eax, 1
        mov dword ptr [ebp - 218h], eax
        mov eax, dword ptr [ebp - 218h]
        mov byte ptr [eax], 0
        lea ecx, [ebp - 108h]
        push ecx
        push 588a254ch
        lea edx, [ebp - 210h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 18h
        mov dword ptr [ebp - 21ch], eax
        lea ecx, [ebp - 210h]
        push ecx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 67 0E 00 00: call 0x584f13b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 1B F4 FF FF: call 0x584ef970
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 17: jne 0x584f0574
        __asm _emit 0x75
        __asm _emit 0x17
        push 64h
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 CE F9 FF FF: call 0x584eff40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 24: jmp 0x584f0598
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes 83 3D B8 BF 90 58 00: cmp dword ptr [0x5890bfb8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x584f0593
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 B8 BF 90 58: mov eax, dword ptr [0x5890bfb8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 B8 BF 90 58 00 00 00 00: mov dword ptr [0x5890bfb8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 7
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 AE 0A 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0a
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
