// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CEC30 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_587cec30() {
    __asm {
        push -1
        push 589899ebh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        cmp dword ptr [esi + 0a00h], 0
        mov dword ptr [esi + 0ac4h], 0
        ; Exact mapped bytes 75 48: jne 0x587cecaf
        __asm _emit 0x75
        __asm _emit 0x48
        push 2ach
        ; Exact mapped bytes E8 DD DF 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdf
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 14h], 0
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x587ceca7
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F BF 4E 26: movsx ecx, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x26
        push 40h
        push 0
        add ecx, 1388h
        push ecx
        push 86h
        push 0a2h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DB A5 0F 00: call 0x588c9280
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa5
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587ceca9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a00h], eax
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        add esp, 10h
        ret
    }
}
