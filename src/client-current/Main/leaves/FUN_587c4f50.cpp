// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4F50 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_587c4f50() {
    __asm {
        push -1
        push 5898128bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        push ebx
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, ecx
        mov dword ptr [esp + 14h], ebx
        lea ecx, [ebx + 4]
        mov dword ptr [ebx], 5899adf8h
        ; Exact mapped bytes E8 DA CC 1A 00: call 0x58971c64
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xcc
        __asm _emit 0x1a
        __asm _emit 0x00
        push 4
        mov dword ptr [esp + 24h], 0
        ; Exact mapped bytes E8 B5 7C 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        test esi, esi
        ; Exact mapped bytes 74 30: je 0x587c4fd2
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 07 CA 1A 00: call 0x589719ae
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 2E C8 1A 00: call 0x589717dc
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc8
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0
        lea ecx, [esp + 14h]
        mov edi, eax
        ; Exact mapped bytes E8 45 C7 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc7
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c4fc7
        __asm _emit 0x73
        __asm _emit 0x04
        inc eax
        mov dword ptr [edi + 4], eax
        lea ecx, [esp + 10h]
        ; Exact mapped bytes E8 58 C7 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc7
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587c4fd4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, ebx
        mov dword ptr [ebx + 38h], esi
        ; Exact mapped bytes E8 42 FA FF FF: call 0x587c4a20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ebx
        mov ecx, dword ptr [esp + 18h]
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
        pop ebx
        add esp, 14h
        ret
    }
}
