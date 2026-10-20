// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587627D0 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_587627d0() {
    __asm {
        push -1
        push 5898a363h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov edi, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        lea eax, [edi + 1eh]
        push eax
        lea ecx, [ebp + 64h]
        push ecx
        push edi
        push ebp
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 85 09 1A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor ebx, ebx
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        push 70h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi], 5898dbech
        mov dword ptr [esi + 60h], ebx
        mov dword ptr [esi + 68h], ebx
        ; Exact mapped bytes E8 F6 A3 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa3
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 2C: je 0x58762894
        __asm _emit 0x74
        __asm _emit 0x2c
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [edi + 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 54 45 A2 58: mov ecx, dword ptr [0x58a24554]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 4ach]
        push edx
        add edi, 3
        push edi
        add ebp, 6
        push ebp
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EE 09 FD FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58762896
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 64h], eax
        mov dword ptr [eax + 60h], 0ffffffh
        mov dword ptr [esi + 6ch], 1
        mov eax, esi
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
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
