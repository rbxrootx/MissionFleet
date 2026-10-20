// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6ED0 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_587c6ed0() {
    __asm {
        push -1
        push 589815cbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0a4h
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 0ach]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 88 45 A2 58: mov eax, dword ptr [0x58a24588]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor esi, esi
        cmp eax, esi
        ; Exact mapped bytes 74 09: je 0x587c6f0e
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [eax + 30h], esi
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x587c6faf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 40h
        push 24h
        push 5899aee8h
        lea ecx, [esp + 30h]
        ; Exact mapped bytes E8 6E FE FF FF: call 0x587c6d90
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 20h]
        mov eax, dword ptr [eax + 4]
        test byte ptr [esp + eax + 28h], 6
        mov dword ptr [esp + 0b4h], esi
        ; Exact mapped bytes 75 17: jne 0x587c6f4e
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esp + eax + 48h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 24h]
        push 1
        push 1
        push esi
        lea eax, [esp + 14h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 15: jmp 0x587c6f63
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes A1 28 2F 9A 58: mov eax, dword ptr [0x589a2f28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0x58
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esp + 18h], esi
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 8]
        lea eax, [ecx + edx]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, 124f80h
        ; Exact mapped bytes 76 4D: jbe 0x587c6fc8
        __asm _emit 0x76
        __asm _emit 0x4d
        cmp ecx, esi
        ; Exact mapped bytes 74 07: je 0x587c6f86
        __asm _emit 0x74
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 8A 25 FF FF: call 0x587b9510
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 78h]
        mov dword ptr [esp + 0b4h], 0ffffffffh
        ; Exact mapped bytes E8 76 FA FF FF: call 0x587c6a10
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 78h]
        push eax
        mov dword ptr [esp + 7ch], 5899ad8ch
        ; Exact mapped bytes E8 6A AB 1A 00: call 0x58971b16
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xab
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov ecx, dword ptr [esp + 0ach]
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
        add esp, 0b0h
        ret
        cmp ecx, esi
        ; Exact mapped bytes 74 06: je 0x587c6fd2
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 3E 25 FF FF: call 0x587b9510
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 78h]
        mov dword ptr [esp + 0b4h], 0ffffffffh
        ; Exact mapped bytes E8 2A FA FF FF: call 0x587c6a10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 78h]
        push ecx
        mov dword ptr [esp + 7ch], 5899ad8ch
        ; Exact mapped bytes E8 1E AB 1A 00: call 0x58971b16
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xab
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov eax, 1
        mov ecx, dword ptr [esp + 0ach]
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
        add esp, 0b0h
        ret
    }
}
