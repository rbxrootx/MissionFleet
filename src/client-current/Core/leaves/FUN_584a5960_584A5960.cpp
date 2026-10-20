// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A5960 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_584a5960_584A5960() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887df0dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 34h
        push esi
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
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 20h], 0ffffffffh
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 B3 2C 00 00: call 0x584a8660
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584a59c9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 6F 28 FE FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F 83 E0 00 00 00: jae 0x584a5aba
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 2A 20 FE FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5D BC 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 18: jne 0x584a5a12
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 AC 75 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A2 75 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 02: jne 0x584a5a14
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB AC: jmp 0x584a59c0
        __asm _emit 0xeb
        __asm _emit 0xac
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A4 0F FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 98 0F FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 2ch], esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7B 66 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 6F 66 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 30h], esi
        mov eax, dword ptr [ebp - 2ch]
        imul eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, dword ptr [ebp - 30h]
        add eax, ecx
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 73 20: jae 0x584a5a81
        __asm _emit 0x73
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 69 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A F6 FF FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 34: jmp 0x584a5ab5
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 2C: jne 0x584a5ab5
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AF 69 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 F6 FF FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7E 18: jle 0x584a5ab5
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9B 69 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 04 F6 FF FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes E9 06 FF FF FF: jmp 0x584a59c0
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 11 1D FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
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
        mov esp, ebp
        pop ebp
        ret
    }
}
