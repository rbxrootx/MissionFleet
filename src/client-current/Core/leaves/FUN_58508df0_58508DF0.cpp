// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508DF0 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_58508df0_58508DF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888088dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 50h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x58508ec4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x58508ec4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        ; Exact mapped bytes E8 CB 81 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x81
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 40: je 0x58508e8c
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6C FB FF FF: call 0x585089c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 C3 D8 FF FF: call 0x58506720
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        or edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C9 D6 FF FF: call 0x58506550
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58508e93
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 4], 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        and edx, 1
        ; Exact mapped bytes 74 0D: je 0x58508ec4
        __asm _emit 0x74
        __asm _emit 0x0d
        and dword ptr [ebp - 10h], 0fffffffeh
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 5D E2 FF FF: call 0x58507120
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, 2
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
        mov esp, ebp
        pop ebp
        ret
    }
}
