// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849FC90 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_5849fc90_5849FC90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887dc72h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588950dch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 04 78 FE FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 82 83 FE FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5849fd18
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        lea ecx, [ebp - 40h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 71 7D FE FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5D 84 FE FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 94 7C FE FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5849fdcb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 E8 84 FE FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 73 6E: jae 0x5849fdcb
        __asm _emit 0x73
        __asm _emit 0x6e
        push 2a8h
        ; Exact mapped bytes E8 9D 12 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x12
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 22: je 0x5849fd99
        __asm _emit 0x74
        __asm _emit 0x22
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C1 7C FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0C 85 FE FF: call 0x584882a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5849fda0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 8
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5B 84 FE FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x5849fd01
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 6A 84 FE FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 29: jbe 0x5849fe03
        __asm _emit 0x76
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 10h]
        add edx, 8
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 23 7C FE FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 EC C0 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 D1 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849fe0d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
