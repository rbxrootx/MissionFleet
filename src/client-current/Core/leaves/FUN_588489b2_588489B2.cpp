// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588489B2 .. +0x1BA bytes.
extern "C" __declspec(naked) void FUN_588489b2_588489B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 11ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        push 588f43ach
        push 588f0148h
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x58848b5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, 100h
        lea eax, [ebp - 104h]
        push ebx
        push 0
        push eax
        ; Exact mapped bytes E8 13 44 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 104h]
        push ebx
        push eax
        ; Exact mapped bytes FF 15 30 43 89 58: call dword ptr [0x58894330]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x58848b5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 114h]
        push eax
        lea eax, [ebp - 11ch]
        push eax
        lea eax, [ebp - 10ch]
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 50 43 89 58: call dword ptr [0x58894350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 104h]
        push 5ch
        push eax
        ; Exact mapped bytes E8 13 EB 01 00: call 0x58867559
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x58848a4f
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [eax], 0
        test esi, esi
        ; Exact mapped bytes 74 54: je 0x58848aa7
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ebp - 108h]
        shrd ecx, eax, 14h
        shr eax, 14h
        push eax
        mov eax, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        shrd ecx, eax, 14h
        shr eax, 14h
        push eax
        mov eax, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        shrd ecx, eax, 14h
        shr eax, 14h
        push eax
        push ecx
        lea eax, [ebp - 104h]
        push eax
        push 588f43c0h
        push esi
        ; Exact mapped bytes E8 E6 15 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        mov bl, byte ptr [ebp - 104h]
        lea eax, [ebp - 104h]
        push eax
        push 100h
        ; Exact mapped bytes FF 15 A4 42 89 58: call dword ptr [0x588942a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp bl, byte ptr [ebp - 104h]
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x58848b5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 114h]
        push eax
        lea eax, [ebp - 11ch]
        push eax
        lea eax, [ebp - 10ch]
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 50 43 89 58: call dword ptr [0x58894350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 104h]
        push 5ch
        push eax
        ; Exact mapped bytes E8 5E EA 01 00: call 0x58867559
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x58848b04
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [eax], 0
        test esi, esi
        ; Exact mapped bytes 74 54: je 0x58848b5c
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ebp - 108h]
        shrd ecx, eax, 14h
        shr eax, 14h
        push eax
        mov eax, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        shrd ecx, eax, 14h
        shr eax, 14h
        push eax
        mov eax, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        shrd ecx, eax, 14h
        shr eax, 14h
        push eax
        push ecx
        lea eax, [ebp - 104h]
        push eax
        push 588f43c0h
        push esi
        ; Exact mapped bytes E8 31 15 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 E8 84 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
