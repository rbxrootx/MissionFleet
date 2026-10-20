// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507FE0 .. +0x204 bytes.
extern "C" __declspec(naked) void FUN_58507fe0_58507FE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588806e0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 128h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        lea esi, [ebp - 20h]
        xor eax, eax
        xor ecx, ecx
        cpuid
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ecx
        mov dword ptr [esi + 0ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + ecx - 20h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes 7D 1E: jge 0x58508077
        __asm _emit 0x7d
        __asm _emit 0x1e
        push 588a3b50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 1A FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        or eax, 1
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 52 01 00 00: jmp 0x585081c9
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp - 20h]
        mov eax, 1
        xor ecx, ecx
        cpuid
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ecx
        mov dword ptr [esi + 0ch], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp + edx - 20h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp + edx - 20h]
        mov dword ptr [ebp - 60h], eax
        push 1
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 B7 E3 FF FF: call 0x58506470
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 124h]
        mov dword ptr [ebp - 30h], ecx
        push 5850b400h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7A F5 FF FF: call 0x58507650
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 5850c740h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6A F5 FF FF: call 0x58507650
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 8
        lea edx, [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 35 8B 32 00: call 0x58830c2b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x8b
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 B7 C4 FF FF: call 0x585045c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 44h], eax
        push 30h
        lea edx, [ebp - 25h]
        push edx
        ; Exact mapped bytes E8 86 D9 FF FF: call 0x58505aa0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 63 C4 FF FF: call 0x58504590
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 21 F3 FF FF: call 0x58507460
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        push 8
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 D9 8A 32 00: call 0x58830c2b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8a
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 5B C4 FF FF: call 0x585045c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 5ch], eax
        push 30h
        lea eax, [ebp - 26h]
        push eax
        ; Exact mapped bytes E8 2A D9 FF FF: call 0x58505aa0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        ; Exact mapped bytes E8 07 C4 FF FF: call 0x58504590
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 C5 F2 FF FF: call 0x58507460
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 25 43 00 00: call 0x5850c4d0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        or edx, 1
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 EA F7 FF FF: call 0x585079b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 70 8E 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x8e
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
