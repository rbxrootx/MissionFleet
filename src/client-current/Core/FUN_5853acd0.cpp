// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853ACD0 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_5853acd0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882cd6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
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
        push 8
        ; Exact mapped bytes E8 08 63 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x63
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0D: je 0x5853ad1c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 59 67 FB FF: call 0x584f1470
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853ad23
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 0D A4 20 96 58: mov dword ptr [0x589620a4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 C1 62 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x62
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x5853ad6c
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a7278h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 49 56 24 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x56
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5853ad73
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes A3 DC 06 96 58: mov dword ptr [0x589606dc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, 1
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
