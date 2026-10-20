// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D7DC0 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_588d7dc0() {
    __asm {
        push -1
        push 5898924bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
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
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4D 4E 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        cdq
        idiv dword ptr [esp + 30h]
        add edx, dword ptr [esp + 2ch]
        test edx, edx
        ; Exact mapped bytes 0F 8E AC 00 00 00: jle 0x588d7ea6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        mov dword ptr [esp + 30h], edx
        push 84h
        ; Exact mapped bytes E8 42 4E 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebx
        xor edi, edi
        mov dword ptr [esp + 1ch], edi
        cmp ebx, edi
        ; Exact mapped bytes 74 74: je 0x588d7e93
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes E8 12 4E 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        cdq
        idiv dword ptr [esp + 38h]
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, dword ptr [esp + 34h]
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 17: jle 0x588d7e51
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp edx, edi
        ; Exact mapped bytes 7C 13: jl 0x588d7e51
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [eax + 190h], edi
        ; Exact mapped bytes 74 0B: je 0x588d7e51
        __asm _emit 0x74
        __asm _emit 0x0b
        shl edx, 6
        add edx, dword ptr [eax + 190h]
        mov edi, edx
        mov ecx, dword ptr [esp + 3ch]
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 10524h]
        push ecx
        ; Exact mapped bytes E8 D0 4D 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4d
        __asm _emit 0x0a
        __asm _emit 0x00
        cdq
        mov ecx, 0ch
        idiv ecx
        lea edx, [edx + ebp - 6]
        push edx
        ; Exact mapped bytes E8 BE 4D 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x0a
        __asm _emit 0x00
        cdq
        mov ecx, 14h
        idiv ecx
        mov eax, dword ptr [esp + 2ch]
        mov ecx, ebx
        sub eax, edx
        add eax, 0ah
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 7D 3F E9 FF: call 0x5876be10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xff
        sub dword ptr [esp + 30h], 1
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes 0F 85 5C FF FF FF: jne 0x588d7e02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
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
        add esp, 0ch
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
