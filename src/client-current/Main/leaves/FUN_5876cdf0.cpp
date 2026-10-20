// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876CDF0 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_5876cdf0() {
    __asm {
        push -1
        push 5897eecch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 108h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 104h], eax
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
        lea eax, [esp + 11ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 130h]
        mov ebp, dword ptr [esp + 12ch]
        mov eax, 0cccccccdh
        mul edi
        mov esi, edx
        shr esi, 3
        lea eax, [esi + esi*4]
        add eax, eax
        sub edi, eax
        push edi
        push esi
        mov ebx, ecx
        ; Exact mapped bytes 8B 0D B4 A6 9B 58: mov ecx, dword ptr [0x589ba6b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xa6
        __asm _emit 0x9b
        __asm _emit 0x58
        push ebp
        push ecx
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 B8 A6 9B 58: mov eax, dword ptr [0x589ba6b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xa6
        __asm _emit 0x9b
        __asm _emit 0x58
        push edi
        push esi
        push ebp
        push eax
        lea ecx, [esp + 0bch]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 CA FD 20 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 2ch
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 124h], 0
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5876ceac
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        lea edx, [esp + 20h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 C6 6E 18 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6e
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5876ceae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 128h], 0ffffffffh
        mov dword ptr [ebx + 64h], eax
        ; Exact mapped bytes E8 88 FD 20 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 124h], 1
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5876cef1
        __asm _emit 0x74
        __asm _emit 0x15
        push 1
        push 0
        lea ecx, [esp + 0a0h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 81 6E 18 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x6e
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5876cef3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx + 68h], eax
        mov ecx, dword ptr [esp + 11ch]
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
        mov ecx, dword ptr [esp + 104h]
        xor ecx, esp
        ; Exact mapped bytes E8 C3 FC 20 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfc
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 114h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
