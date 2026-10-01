// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C75E0 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_587c75e0() {
    __asm {
        push -1
        push 589809ach
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
        xor ebx, ebx
        push 1bch
        mov dword ptr [esi], 5899aef8h
        mov byte ptr [esi + 4], bl
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes E8 2F 56 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x56
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 0A: je 0x587c7638
        __asm _emit 0x74
        __asm _emit 0x0a
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 9A B2 1A 00: call 0x589728d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb2
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587c763a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebp, 0ffffffffh
        push 104h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes E8 00 56 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x56
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 20h], 1
        cmp edi, ebx
        ; Exact mapped bytes 74 2B: je 0x587c768e
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1e0h
        push 384h
        push 0ah
        push ebx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 88 FA 13 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi], 5899af00h
        mov dword ptr [edi + 0fch], esi
        mov dword ptr [edi + 100h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x587c7690
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi + 0b4h], ecx
        ; Exact mapped bytes E8 7C B6 13 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xb6
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        push 10h
        mov byte ptr [esi + 4], bl
        ; Exact mapped bytes E8 95 55 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x55
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 20h], 2
        cmp edi, ebx
        ; Exact mapped bytes 74 29: je 0x587c76f7
        __asm _emit 0x74
        __asm _emit 0x29
        push 5899af9ch
        push 2
        push 2
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push 384h
        push ebx
        push ebx
        push ebx
        push 0fh
        ; Exact mapped bytes FF 15 8C C0 98 58: call dword ptr [0x5898c08c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 7B BD 13 00: call 0x58903470
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbd
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587c76f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 44 55 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x55
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 2D: je 0x587c774a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push ebx
        push 0ffffffh
        push 320h
        push 3e8h
        push 1f4h
        push 258h
        push ecx
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 38 BB F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbb
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c774c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 BE B5 13 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb5
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
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
        ret
    }
}
