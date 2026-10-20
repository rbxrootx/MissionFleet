// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460FEC .. +0x221 bytes.
extern "C" __declspec(naked) void FUN_00460fec_00460FEC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3ch]
        mov ecx, 0fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 03 B4 FE FF: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 BF 01 00 00: je 0x4611e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 40h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A1 77 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        sub eax, dword ptr [edx + 20h]
        mov dword ptr [ebp - 4], eax
        push 10h
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 1B 83 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes E8 08 83 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], 10h
        lea edx, [ebp - 24h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE E2 FE FF: call 0x44f380
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 26: je 0x4610b1
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 28h]
        mov dl, byte ptr [ebp - 10h]
        mov byte ptr [ecx + 30h], dl
        mov eax, dword ptr [ebp - 28h]
        mov cl, byte ptr [ebp - 0fh]
        mov byte ptr [eax + 31h], cl
        mov edx, dword ptr [ebp - 28h]
        mov al, byte ptr [ebp - 0eh]
        mov byte ptr [edx + 32h], al
        mov ecx, dword ptr [ebp - 28h]
        mov dl, byte ptr [ebp - 0dh]
        mov byte ptr [ecx + 33h], dl
        ; Exact mapped bytes EB 0D: jmp 0x4610be
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5baa50h
        ; Exact mapped bytes E8 5A EB 06 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 28h]
        add eax, 10h
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 72 26: jb 0x461103
        __asm _emit 0x72
        __asm _emit 0x26
        ; Exact mapped bytes 77 0A: ja 0x4610e9
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 72 1A: jb 0x461103
        __asm _emit 0x72
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov esi, dword ptr [ecx + 10h]
        sub esi, edx
        mov ecx, dword ptr [ecx + 14h]
        sbb ecx, eax
        mov dword ptr [ebp - 3ch], esi
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 0E: jmp 0x461111
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [edx + 3ch], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x461139
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 67: jne 0x4611a6
        __asm _emit 0x75
        __asm _emit 0x67
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cd8h]
        ; Exact mapped bytes E8 31 59 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 23: je 0x46117b
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        push 10h
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 30h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80011200h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B9 60 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x4611a4
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40cd8h]
        ; Exact mapped bytes E8 5B DF FE FF: call 0x44f0e7
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 5baa84h
        ; Exact mapped bytes E8 74 EA 06 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 8A: jmp 0x461130
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 38h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [edx + 3ch]
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebp - 28h]
        push 0
        push 927c0h
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        mov edx, dword ptr [eax + 38h]
        push edx
        ; Exact mapped bytes E8 91 B2 04 00: call 0x4ac460
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 0ea60h
        div ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 18h], eax
        mov eax, 1
        ; Exact mapped bytes EB 16: jmp 0x4611fb
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 5baac0h
        ; Exact mapped bytes E8 1F EA 06 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 D9 75 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
