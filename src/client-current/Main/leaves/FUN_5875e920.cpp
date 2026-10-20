// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E920 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_5875e920() {
    __asm {
        push -1
        push 5897ecc3h
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
        mov dword ptr [esp + 8], esi
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C8 60 FD FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esi], 5898da00h
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5875e983
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 0e10h
        mov dword ptr [esi + 58h], eax
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [esi + 58h], edx
        ; Exact mapped bytes E8 A0 E2 21 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe2
        __asm _emit 0x21
        __asm _emit 0x00
        cdq
        mov ecx, 190h
        idiv ecx
        add edx, 0c8h
        mov dword ptr [esi + 5ch], edx
        ; Exact mapped bytes E8 8A E2 21 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe2
        __asm _emit 0x21
        __asm _emit 0x00
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x5875e9b8
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        add eax, 8
        push 101h
        mov ecx, esi
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 56 43 1A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x43
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        push 20h
        ; Exact mapped bytes E8 74 E2 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe2
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 14h], 1
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5875ea21
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D DC 46 A2 58: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 0dh
        ; Exact mapped bytes 7E 1C: jle 0x5875ea15
        __asm _emit 0x7e
        __asm _emit 0x1c
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 13: je 0x5875ea15
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 194h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 3D 89 05 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5875ea23
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 31 89 05 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5875ea23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 64h], eax
        mov eax, esi
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
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
