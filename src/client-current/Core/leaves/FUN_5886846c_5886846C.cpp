// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886846C .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_5886846c_5886846C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 93 8F 00 00: call 0x5887140f
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes E8 92 8F 00 00: call 0x58871415
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        xor esi, esi
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 4], esi
        push eax
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 0ch], esi
        ; Exact mapped bytes E8 DA 8F 00 00: call 0x58871473
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x588685bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 70 8F 00 00: call 0x5887141b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 07 01 00 00: jne 0x588685bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 8A 8F 00 00: call 0x58871447
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 F5 00 00 00: jne 0x588685bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 C0 98 96 58: push dword ptr [0x589698c0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 47 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 C0 98 96 58: mov dword ptr [0x589698c0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [esp], 589698d0h
        ; Exact mapped bytes FF 15 D0 41 89 58: call dword ptr [0x588941d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58868598
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B 15 D0 98 96 58 3C: imul edx, dword ptr [0x589698d0], 0x3c
        __asm _emit 0x6b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x3c
        xor ecx, ecx
        inc ecx
        ; Exact mapped bytes 66 39 35 16 99 96 58: cmp word ptr [0x58969916], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x16
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 24 99 96 58: mov esi, dword ptr [0x58969924]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D C8 98 96 58: mov dword ptr [0x589698c8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 08: je 0x58868517
        __asm _emit 0x74
        __asm _emit 0x08
        imul eax, esi, 3ch
        add eax, edx
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 66 83 3D 6A 99 96 58 00: cmp word ptr [0x5896996a], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6a
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x58868531
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes A1 78 99 96 58: mov eax, dword ptr [0x58969978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58868531
        __asm _emit 0x74
        __asm _emit 0x07
        sub eax, esi
        imul eax, eax, 3ch
        ; Exact mapped bytes EB 04: jmp 0x58868535
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        xor ecx, ecx
        mov esi, 80h
        mov dword ptr [ebp - 8], ecx
        push esi
        mov dword ptr [ebp - 0ch], eax
        push 0
        push dword ptr [ebx]
        ; Exact mapped bytes E8 C6 48 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        push esi
        xor esi, esi
        push esi
        push dword ptr [ebx + 4]
        ; Exact mapped bytes E8 BA 48 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        push 40h
        push esi
        push dword ptr [edi]
        ; Exact mapped bytes E8 B0 48 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        push 40h
        push esi
        push dword ptr [edi + 4]
        ; Exact mapped bytes E8 A5 48 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 84 BB FF FF: call 0x588640f4
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        push esi
        push dword ptr [edi]
        push dword ptr [ebx]
        push 589698d4h
        ; Exact mapped bytes E8 BA 00 00 00: call 0x5886863b
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 40h
        push esi
        push dword ptr [edi + 4]
        push dword ptr [ebx + 4]
        push 58969928h
        ; Exact mapped bytes E8 A6 00 00 00: call 0x5886863b
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov esi, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 8E 00 00: call 0x58871409
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov esi, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 53 8E 00 00: call 0x588713fd
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov esi, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4F 8E 00 00: call 0x58871403
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebx
        leave
        ret
        push esi
        push esi
        push esi
        push esi
        push esi
        ; Exact mapped bytes E8 14 8A FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
