// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 313 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875DDA0 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_5875dda0_segment_00() {
    __asm {
        push -1
        push 5897ec63h
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
        mov eax, dword ptr [esp + 40h]
        mov edi, dword ptr [esp + 3ch]
        mov ebp, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push eax
        push edi
        push ebp
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 25 B2 1A 00: call 0x58909010
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 28h]
        mov dword ptr [esi + 80h], edx
        mov edx, dword ptr [esp + 2ch]
        xor ebx, ebx
        mov eax, 2
        mov ecx, 1
        mov dword ptr [esi + 8ch], edx
        mov edx, dword ptr [esp + 28h]
        push 58h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi], 5898d974h
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], 3b9aca00h
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 84h], ebp
        mov dword ptr [esi + 88h], edi
        mov dword ptr [esi + 90h], edx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], eax
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 6ch], 10h
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 9ch], ecx
        mov dword ptr [esi + 98h], ebx
        ; Exact mapped bytes E8 EB ED 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xed
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 15: je 0x5875de88
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 98h]
        push -1
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AA 6B FD FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5875de8a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 80 4E 1A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x4e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [esi + 0a0h], ebx
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 0a8h], ebx
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
