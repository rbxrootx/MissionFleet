// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883616C .. +0x280 bytes.
extern "C" __declspec(naked) void FUN_5883616c_5883616C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 24h], 0
        ; Exact mapped bytes 74 07: je 0x5883618f
        __asm _emit 0x74
        __asm _emit 0x07
        mov al, 1
        ; Exact mapped bytes E9 4E 02 00 00: jmp 0x588363dd
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push 588f0f8ch
        lea ebx, [edi + 28h]
        ; Exact mapped bytes E8 B5 61 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes E8 E5 3E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 108h]
        push 104h
        push eax
        ; Exact mapped bytes E8 A8 F7 FF FF: call 0x5883595e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 108h]
        push 588f03c8h
        push eax
        ; Exact mapped bytes E8 E9 38 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        push 588f0fa0h
        ; Exact mapped bytes E8 82 61 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 D2 38 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 28h
        lea eax, [ebp - 108h]
        push eax
        push 588f0fb0h
        ; Exact mapped bytes E8 61 61 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 90 3E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 108h]
        lea ecx, [edi + 5b38h]
        push 1
        push eax
        ; Exact mapped bytes E8 BD 78 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 2C: jne 0x58836241
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 35 FC 41 89 58: mov esi, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, dword ptr [edi + 5b84h]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        push edi
        push 588f0fbch
        ; Exact mapped bytes E8 22 61 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 51 3E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x588363d9
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 D4 42 89 58: call dword ptr [0x588942d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi + 5b90h], eax
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x58836269
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f0fdch
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x588363c9
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        push eax
        ; Exact mapped bytes E8 25 09 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push dword ptr [edi + 5b90h]
        mov dword ptr [edi + 5bb0h], eax
        ; Exact mapped bytes E8 12 09 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        push dword ptr [edi + 5b90h]
        mov dword ptr [edi + 5bb4h], eax
        ; Exact mapped bytes E8 FF 08 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push dword ptr [edi + 5b90h]
        mov dword ptr [edi + 5bb8h], eax
        ; Exact mapped bytes E8 EC 08 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 5bbch], eax
        xor eax, eax
        cmp dword ptr [edi + 5bb0h], eax
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x588363bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 5bb4h], eax
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x588363bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 FC 41 89 58: mov esi, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [edi + 5bb8h], eax
        ; Exact mapped bytes 75 1A: jne 0x588362f2
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        push 588f1010h
        ; Exact mapped bytes E8 6E 60 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 9D 3D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        cmp dword ptr [edi + 5bbch], eax
        ; Exact mapped bytes 75 1A: jne 0x58836314
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        push 588f1010h
        ; Exact mapped bytes E8 4C 60 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 7B 3D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes FF 15 58 42 89 58: call dword ptr [0x58894258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi + 18h], eax
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x58836332
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        push 588f1028h
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x588363c9
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10ch]
        mov byte ptr [edi + 24h], 1
        push eax
        xor eax, eax
        push eax
        push edi
        push 58839f74h
        push eax
        push eax
        ; Exact mapped bytes FF 15 F8 43 89 58: call dword ptr [0x588943f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi + 5b94h], eax
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x58836362
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        push 588f1050h
        ; Exact mapped bytes EB 67: jmp 0x588363c9
        __asm _emit 0xeb
        __asm _emit 0x67
        push dword ptr [ebp - 10ch]
        push 588f1074h
        ; Exact mapped bytes E8 E1 5F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 10 3D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + 18h]
        push dword ptr [edi + 5b9ch]
        push dword ptr [edi + 5ba0h]
        push dword ptr [edi + 1470h]
        ; Exact mapped bytes FF 97 B0 5B 00 00: call dword ptr [edi + 0x5bb0]
        __asm _emit 0xff
        __asm _emit 0x97
        __asm _emit 0xb0
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 6bh
        ; Exact mapped bytes 74 08: je 0x588363a5
        __asm _emit 0x74
        __asm _emit 0x08
        push eax
        push 588f1098h
        ; Exact mapped bytes EB 24: jmp 0x588363c9
        __asm _emit 0xeb
        __asm _emit 0x24
        push 588f10b4h
        ; Exact mapped bytes E8 A4 5F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes E8 D4 3C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov al, 1
        ; Exact mapped bytes EB 1E: jmp 0x588363db
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f0ff8h
        ; Exact mapped bytes E8 85 5F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 B4 3C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor al, al
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop edi
        ; Exact mapped bytes E8 68 AC FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
