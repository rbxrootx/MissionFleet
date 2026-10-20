// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520140 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_58520140_58520140() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588808ddh
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
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x58520214
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x58520214
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 7B 0E 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0e
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 40: je 0x585201dc
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1C 88 FE FF: call 0x585089c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 73 65 FE FF: call 0x58506720
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x65
        __asm _emit 0xfe
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
        ; Exact mapped bytes E8 39 F6 FF FF: call 0x5851f810
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x585201e3
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
        ; Exact mapped bytes 74 0D: je 0x58520214
        __asm _emit 0x74
        __asm _emit 0x0d
        and dword ptr [ebp - 10h], 0fffffffeh
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 0D 6F FE FF: call 0x58507120
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6f
        __asm _emit 0xfe
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
