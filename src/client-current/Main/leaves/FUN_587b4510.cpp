// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4510 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_587b4510() {
    __asm {
        push -1
        push 58982c9bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ecx
        movzx eax, word ptr [ebp + 232h]
        mov ecx, 640h
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 76 22: jbe 0x587b4569
        __asm _emit 0x76
        __asm _emit 0x22
        mov edx, 0c80h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 76 11: jbe 0x587b4562
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, 12c0h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        sbb esi, esi
        neg esi
        add esi, 2
        ; Exact mapped bytes EB 09: jmp 0x587b456b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov esi, 1
        ; Exact mapped bytes EB 02: jmp 0x587b456b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        ; Exact mapped bytes 83 3D 54 90 9C 58 00: cmp dword ptr [0x589c9054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x587b4623
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 CF 86 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 1ch], 0
        test edi, edi
        ; Exact mapped bytes 74 77: je 0x587b460b
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes E8 9D 86 1C 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587b45a5
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [eax + esi*2 + 30h]
        cmp dword ptr [ecx + 170h], eax
        ; Exact mapped bytes 7E 34: jle 0x587b45eb
        __asm _emit 0x7e
        __asm _emit 0x34
        test eax, eax
        ; Exact mapped bytes 7C 30: jl 0x587b45eb
        __asm _emit 0x7c
        __asm _emit 0x30
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 27: je 0x587b45eb
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [edx + eax*4]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 7B 2D 00 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 60h], eax
        mov ecx, dword ptr [esp + 14h]
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
        add esp, 10h
        ret
        xor eax, eax
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 5B 2D 00 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 60h], eax
        mov ecx, dword ptr [esp + 14h]
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
        add esp, 10h
        ret
        xor eax, eax
        mov dword ptr [ebp + 60h], eax
        mov ecx, dword ptr [esp + 14h]
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
        add esp, 10h
        ret
        mov dword ptr [ebp + 60h], 0
        mov ecx, dword ptr [esp + 14h]
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
        add esp, 10h
        ret
    }
}
