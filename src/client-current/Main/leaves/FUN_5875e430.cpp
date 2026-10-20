// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E430 .. +0x221 bytes.
extern "C" __declspec(naked) void FUN_5875e430() {
    __asm {
        push -1
        push 5897ec8bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 2ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [eax + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 D4 01 00 00: je 0x5875e63d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 69 82 17 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x82
        __asm _emit 0x17
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 B0 01 00 00: jne 0x5875e632
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 164h]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 9F 01 00 00: je 0x5875e632
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        test eax, eax
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x5875e632
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push eax
        push ecx
        push edx
        push ebx
        ; Exact mapped bytes E8 23 E4 00 00: call 0x5876c8d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [esp + 14h], eax
        cmp eax, -1
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x5875e632
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes E8 BC E7 21 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe7
        __asm _emit 0x21
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 E7 21 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [esi + 74h]
        push eax
        mov eax, dword ptr [esi + 6ch]
        xor eax, 0aah
        push edx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 8B DA 00 00: call 0x5876bf80
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        movzx edx, word ptr [ecx + 350h]
        mov ebp, eax
        movzx eax, word ptr [ebx + 350h]
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 10490h]
        add edi, dword ptr [eax + 10488h]
        add esp, 0ch
        push 64h
        lea eax, [esp + 28h]
        push eax
        mov dword ptr [esp + 20h], edx
        ; Exact mapped bytes E8 40 81 17 00: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push eax
        mov edx, dword ptr [esp + 1ch]
        push 0
        mov eax, dword ptr [esp + 24h]
        push 5ah
        push ecx
        mov ecx, dword ptr [esi + 60h]
        push 1
        push -1
        push 2
        push ebp
        push 0
        push 0bh
        push edx
        mov edx, dword ptr [esp + 58h]
        push eax
        mov eax, dword ptr [esp + 58h]
        push ebx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 F7 17 09 00: call 0x587efd60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        push 11ch
        ; Exact mapped bytes E8 DB E6 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe6
        __asm _emit 0x21
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 20h], edi
        xor edx, edx
        mov dword ptr [esp + 34h], edx
        cmp edi, edx
        ; Exact mapped bytes 74 74: je 0x5875e5fa
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebx + 4]
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 10524h]
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 31h
        ; Exact mapped bytes 7E 1A: jle 0x5875e5c9
        __asm _emit 0x7e
        __asm _emit 0x1a
        cmp dword ptr [ecx + 190h], edx
        ; Exact mapped bytes 74 12: je 0x5875e5c9
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c40h
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes EB 04: jmp 0x5875e5cd
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 14h], edx
        push 40h
        push eax
        ; Exact mapped bytes E8 61 E6 21 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe6
        __asm _emit 0x21
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [esp + 20h]
        mov ecx, edi
        sub eax, edx
        mov edx, dword ptr [esp + 24h]
        push eax
        mov eax, dword ptr [esp + 20h]
        push edx
        push eax
        push 0ah
        push ebp
        ; Exact mapped bytes E8 B8 C7 FF FF: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5875e5fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 33h
        mov dword ptr [esp + 34h], 0ffffffffh
        ; Exact mapped bytes 7E 17: jle 0x5875e62a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5875e62a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0cc0h
        ; Exact mapped bytes EB 02: jmp 0x5875e62c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [eax + 0f8h], ecx
        mov ebx, dword ptr [ebx + 78h]
        test ebx, ebx
        ; Exact mapped bytes 0F 85 33 FE FF FF: jne 0x5875e470
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ret
    }
}
