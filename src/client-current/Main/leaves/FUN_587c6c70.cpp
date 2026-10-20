// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6C70 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_587c6c70() {
    __asm {
        push -1
        push 58981548h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
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
        lea eax, [esp + 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 4ch], ebx
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x587c6d6a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 99 B0 1A 00: call 0x58971d4d
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb0
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 0ch
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x587c6d6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        mov byte ptr [esi + 48h], 1
        mov byte ptr [esi + 41h], bl
        ; Exact mapped bytes E8 51 DD FF FF: call 0x587c4a20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [edi + 4]
        mov dword ptr [esi + 30h], ecx
        mov dword ptr [esi + 34h], ecx
        lea eax, [edi + 8]
        lea ecx, [esp + 28h]
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 4ch], edi
        ; Exact mapped bytes A1 88 4A A2 58: mov eax, dword ptr [0x58a24a88]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, esi
        mov dword ptr [esi + 44h], eax
        mov dword ptr [esi + 3ch], ebx
        ; Exact mapped bytes E8 DF DC FF FF: call 0x587c49e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes E8 75 FD FF FF: call 0x587c6a80
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 4]
        add esp, 4
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test al, al
        ; Exact mapped bytes 74 23: je 0x587c6d40
        __asm _emit 0x74
        __asm _emit 0x23
        lea ecx, [esp + 28h]
        mov dword ptr [esi + 3ch], ebx
        ; Exact mapped bytes E8 47 DA FF FF: call 0x587c4770
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        mov ecx, dword ptr [esp + 10h]
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
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esi + 3ch], edi
        ; Exact mapped bytes E8 D6 DC FF FF: call 0x587c4a20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 28h]
        ; Exact mapped bytes E8 1D DA FF FF: call 0x587c4770
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        mov ecx, dword ptr [esp + 10h]
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
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [esp + 10h]
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
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
