// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFC15 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_004cfc15_004CFC15() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 7C E8 5D 00 00: cmp dword ptr [0x5de87c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4cfc2f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4cfcd0
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 204h], eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 200h
        lea eax, [ebp - 200h]
        push eax
        ; Exact mapped bytes E8 CC 05 FE FF: call 0x4b0220
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 208h], eax
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 7D 11: jge 0x4cfc77
        __asm _emit 0x7d
        __asm _emit 0x11
        push 34h
        push 5c5050h
        ; Exact mapped bytes E8 8E 4D 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cfc77
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4cfc5d
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 15 78 E8 5D 00: mov edx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 2B: je 0x4cfcb5
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes E8 71 58 06 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x4cfcb5
        __asm _emit 0x74
        __asm _emit 0x22
        push 5c505ch
        ; Exact mapped bytes E8 63 58 06 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8ch]
        push eax
        mov ecx, 5de880h
        ; Exact mapped bytes E8 6D 4E 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 66 4E 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 200h]
        push ecx
        mov ecx, 5de880h
        ; Exact mapped bytes E8 55 4E 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 204h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
