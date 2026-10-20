// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6A80 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_587c6a80() {
    __asm {
        push -1
        push 58981448h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
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
        lea eax, [esp + 28h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 4F AC 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 4A A2 58 00: cmp dword ptr [0x58a24a94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 90 4A A2 58: mov ebx, dword ptr [0x58a24a90]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x90
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 30h], 0
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 75 2D: jne 0x587c6af9
        __asm _emit 0x75
        __asm _emit 0x2d
        push 0
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 29 AC 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 4A A2 58 00: cmp dword ptr [0x58a24a94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x587c6af0
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes A1 B8 85 A2 58: mov eax, dword ptr [0x58a285b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        inc eax
        ; Exact mapped bytes A3 B8 85 A2 58: mov dword ptr [0x58a285b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A3 94 4A A2 58: mov dword ptr [0x58a24a94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [esp + 14h]
        ; Exact mapped bytes E8 2F AC 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, dword ptr [esp + 38h]
        ; Exact mapped bytes 8B 35 94 4A A2 58: mov esi, dword ptr [0x58a24a94]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi]
        cmp esi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 22: jae 0x587c6b2c
        __asm _emit 0x73
        __asm _emit 0x22
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + esi*4]
        test ecx, ecx
        ; Exact mapped bytes 75 1C: jne 0x587c6b30
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 74 16: je 0x587c6b30
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 BD AC 1A 00: call 0x589717dc
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 12: jae 0x587c6b36
        __asm _emit 0x73
        __asm _emit 0x12
        mov edx, dword ptr [eax + 8]
        mov esi, dword ptr [edx + esi*4]
        ; Exact mapped bytes EB 06: jmp 0x587c6b32
        __asm _emit 0xeb
        __asm _emit 0x06
        xor ecx, ecx
        ; Exact mapped bytes EB E4: jmp 0x587c6b14
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov esi, ecx
        test esi, esi
        ; Exact mapped bytes 75 6B: jne 0x587c6ba1
        __asm _emit 0x75
        __asm _emit 0x6b
        test ebx, ebx
        ; Exact mapped bytes 74 04: je 0x587c6b3e
        __asm _emit 0x74
        __asm _emit 0x04
        mov esi, ebx
        ; Exact mapped bytes EB 63: jmp 0x587c6ba1
        __asm _emit 0xeb
        __asm _emit 0x63
        lea eax, [esp + 10h]
        push edi
        push eax
        ; Exact mapped bytes E8 77 FB FF FF: call 0x587c66c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 75 1D: jne 0x587c6b6e
        __asm _emit 0x75
        __asm _emit 0x1d
        push 5899ae84h
        lea ecx, [esp + 20h]
        ; Exact mapped bytes E8 73 64 1B 00: call 0x5897cfd2
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x64
        __asm _emit 0x1b
        __asm _emit 0x00
        push 589af080h
        lea ecx, [esp + 20h]
        push ecx
        ; Exact mapped bytes E8 0A 61 1B 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x61
        __asm _emit 0x1b
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        push 0
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes 89 35 90 4A A2 58: mov dword ptr [0x58a24a90], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D AB 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xab
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c6b8f
        __asm _emit 0x73
        __asm _emit 0x04
        inc eax
        mov dword ptr [esi + 4], eax
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 90 AB 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xab
        __asm _emit 0x1a
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 03 AD 1A 00: call 0x589718a1
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xad
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 30h], 0ffffffffh
        ; Exact mapped bytes E8 76 AB 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xab
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [esp + 28h]
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
        add esp, 24h
        ret
    }
}
