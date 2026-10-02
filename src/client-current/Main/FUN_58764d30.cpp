// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 18901 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764D30 .. +0x285A bytes.
extern "C" __declspec(naked) void FUN_58764d30_segment_00() {
    __asm {
        push -1
        push 5897edf6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, 24c8h
        ; Exact mapped bytes E8 18 81 21 00: call 0x5897ce60
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x81
        __asm _emit 0x21
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 24c4h], eax
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
        lea eax, [esp + 24dch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 24f0h]
        xor ebx, ebx
        push 103h
        lea eax, [esp + 2e9h]
        push ebx
        push eax
        mov esi, ecx
        mov byte ptr [esp + 2f0h], bl
        ; Exact mapped bytes E8 B4 7E 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7e
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        add esp, 0ch
        push 5898d61ch
        ; Exact mapped bytes E8 BC A5 FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        push 5898d61ch
        ; Exact mapped bytes E8 AF A5 FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        push 5898d61ch
        ; Exact mapped bytes E8 A2 A5 FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        push 0e8h
        push 0fbh
        mov ecx, esi
        mov dword ptr [esi + 0a4h], ebx
        ; Exact mapped bytes E8 8B DC FF FF: call 0x58762a60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 82h
        push ecx
        mov ecx, dword ptr [esi + 8ch]
        add edx, 0deh
        push edx
        ; Exact mapped bytes E8 9C E4 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe4
        __asm _emit 0x19
        __asm _emit 0x00
        push ebx
        mov ebp, 2
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 5E DD FF FF: call 0x58762b60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 90h]
        push 1
        mov dword ptr [eax + 54h], ebx
        mov ecx, dword ptr [esi + 90h]
        push ebx
        ; Exact mapped bytes E8 07 8F FF FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 90h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 94h]
        push 1
        mov dword ptr [eax + 54h], ebx
        mov ecx, dword ptr [esi + 94h]
        push ebx
        ; Exact mapped bytes E8 E1 8E FF FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 94h]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esp + 24ech]
        cmp eax, 12ch
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 7ch], ebx
        ; Exact mapped bytes 0F 8F 80 0B 00 00: jg 0x587659e6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 70 0B 00 00: je 0x587659dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0cah
        ; Exact mapped bytes 0F 87 61 48 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x61
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 58769874h]
        ; Exact mapped bytes FF 24 85 0C 97 76 58: jmp dword ptr [eax*4 + 0x5876970c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x97
        __asm _emit 0x76
        __asm _emit 0x58
        push 58994d94h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 55 F7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 78h], ebp
        mov dword ptr [esi + 7ch], 28h
        ; Exact mapped bytes E9 2E 48 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994d64h
        ; Exact mapped bytes E9 13 48 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994d44h
        ; Exact mapped bytes E9 09 48 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994d24h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1A F7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994d04h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 38 DD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EB 47 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        push 0feh
        lea ecx, [esp + 19cdh]
        push ebx
        push ecx
        mov byte ptr [esp + 19d4h], bl
        ; Exact mapped bytes E8 41 7D 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7d
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push edi
        push 58994ce8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 19d0h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 19c8h]
        ; Exact mapped bytes E9 99 47 00 00: jmp 0x587696d0
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994cc0h
        ; Exact mapped bytes E9 86 47 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        push 106h
        push 0fbh
        mov ecx, esi
        ; Exact mapped bytes E8 0E DB FF FF: call 0x58762a60
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 82h
        push ecx
        mov ecx, dword ptr [esi + 8ch]
        add edx, 0deh
        push edx
        ; Exact mapped bytes E8 1F E3 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0x00
        push 5898d61ch
        mov ecx, esi
        ; Exact mapped bytes E8 73 F6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E9 48 47 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994c9ch
        ; Exact mapped bytes E9 2D 47 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994c74h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3E F6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994c4ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5C DC FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24f8h]
        mov dword ptr [esi + 7ch], 12h
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 0a4h], 1
        ; Exact mapped bytes 89 1D D8 48 A2 58: mov dword ptr [0x58a248d8], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xd8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 EB 46 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994c20h
        ; Exact mapped bytes E9 D0 46 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994bf4h
        ; Exact mapped bytes E9 C6 46 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994bc4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D9 F5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 1D D8 48 A2 58: mov dword ptr [0x58a248d8], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xd8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 B6 46 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994bc0h
        ; Exact mapped bytes E9 A5 46 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994b94h
        ; Exact mapped bytes E9 91 46 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994b70h
        ; Exact mapped bytes E9 87 46 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994b4ch
        ; Exact mapped bytes E9 7D 46 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994b24h
        ; Exact mapped bytes E9 73 46 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994af8h
        ; Exact mapped bytes E9 69 46 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        push 58994ad0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1188h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1180h]
        push edx
        ; Exact mapped bytes E9 44 46 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994af8h
        ; Exact mapped bytes E9 6F FF FF FF: jmp 0x58765006
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994aa8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 41 F5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994a80h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5F DB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0a00h]
        push 1
        ; Exact mapped bytes E8 4D C5 FC FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [esi + 78h], ebp
        mov dword ptr [esi + 7ch], 14h
        ; Exact mapped bytes E9 F6 45 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994a58h
        ; Exact mapped bytes E9 DB 45 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994a2ch
        ; Exact mapped bytes E9 D1 45 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994a00h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E2 F4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push 589949d4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 00 DB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B3 45 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push 589949b0h
        ; Exact mapped bytes E9 98 45 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994988h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A9 F4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994960h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C7 DA FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7A 45 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994938h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7A F4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899490ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 98 DA FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4B 45 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push 589948e4h
        ; Exact mapped bytes E9 30 45 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push 2dh
        push 589948c8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 2ech]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 2e4h]
        push edx
        ; Exact mapped bytes E9 0B 45 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push 589948a0h
        ; Exact mapped bytes E9 F7 44 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994878h
        ; Exact mapped bytes E9 ED 44 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994858h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FE F3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994834h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1C DA FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], ebx
        ; Exact mapped bytes E9 CC 44 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899480ch
        ; Exact mapped bytes E9 B1 44 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589947e8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C2 F3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 589947c4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E0 D9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 93 44 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899479ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 93 F3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994774h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B1 D9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 64 44 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994750h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 64 F3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899472ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 82 D9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 44 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994700h
        ; Exact mapped bytes E9 1A 44 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E9 1E 44 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589946cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 25 F3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994698h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 43 D9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F6 43 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994670h
        ; Exact mapped bytes E9 DB 43 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589946cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 EC F2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994698h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0A D9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 2bh
        ; Exact mapped bytes E9 B6 43 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994670h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B8 F2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 2ch
        ; Exact mapped bytes E9 94 43 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994644h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 94 F2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994618h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B2 D8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 65 43 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        push 589945dch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 F2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 2eh
        ; Exact mapped bytes E9 43 43 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        push 589945dch
        ; Exact mapped bytes E9 28 43 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589945a4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 39 F2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899456ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 57 D8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0A 43 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589945a4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0A F2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899456ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 28 D8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 2bh
        ; Exact mapped bytes E9 D4 42 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994540h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D4 F1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994514h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F2 D7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 32h
        ; Exact mapped bytes E9 9E 42 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589944e8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9E F1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        push 589944bch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BC D7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 32h
        ; Exact mapped bytes E9 68 42 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994484h
        ; Exact mapped bytes E9 4D 42 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        push 589948c8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 2ech]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 2e4h]
        push ecx
        ; Exact mapped bytes E9 28 42 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899445ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 61 D7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 14 42 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899443ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 14 F1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899441ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 32 D7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E5 41 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589943fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E5 F0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 589943dch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 03 D7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B6 41 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589943bch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B6 F0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899439ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D4 D6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 87 41 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899437ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 87 F0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899435ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A5 D6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 58 41 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899433ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 58 F0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899431ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 76 D6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 29 41 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589942fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 29 F0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 589942dch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 47 D6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FA 40 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589942bch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FA EF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899429ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 18 D6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CB 40 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899427ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CB EF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899425ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E9 D5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9C 40 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899423ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9C EF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899421ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BA D5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6D 40 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        push 589941ech
        ; Exact mapped bytes E9 52 40 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        push 589941b4h
        ; Exact mapped bytes E9 48 40 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899417ch
        ; Exact mapped bytes E9 3E 40 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899414ch
        ; Exact mapped bytes E9 34 40 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899411ch
        ; Exact mapped bytes E9 2A 40 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589940fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3B EF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        push 589940dch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 59 D5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C 40 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        push 589940b4h
        ; Exact mapped bytes E9 F1 3F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 106h
        push 0fbh
        mov ecx, esi
        ; Exact mapped bytes E8 79 D3 FF FF: call 0x58762a60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8ch]
        add edx, 82h
        push edx
        add eax, 0deh
        push eax
        ; Exact mapped bytes E8 8B DB 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [esi + 7ch], ebx
        ; Exact mapped bytes E9 CB 3F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994084h
        ; Exact mapped bytes E9 B0 3F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994054h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C3 EE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 EB D4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9E 3F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 58994024h
        ; Exact mapped bytes E9 83 3F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993ff4h
        ; Exact mapped bytes E9 79 3F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993fc4h
        ; Exact mapped bytes E9 6F 3F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993f98h
        ; Exact mapped bytes E9 65 3F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993f68h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 76 EE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993f38h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 94 D4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 47 3F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993f08h
        ; Exact mapped bytes E9 2C 3F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993ed8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3D EE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993ea8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5B D4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0E 3F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993ed8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0E EE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993e78h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2C D4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 3E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993ed8h
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DF ED FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993e48h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FD D3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B0 3E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993ed8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B0 ED FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993e18h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CE D3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 81 3E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993de4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 81 ED FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993db0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9F D3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0db4h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 3A 3E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993d80h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3A ED FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993d50h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 58 D3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993d20h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F6 D3 FF FF: call 0x58762cd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F9 3D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993cf4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F9 EC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993cc8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 17 D3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 3D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993c9ch
        ; Exact mapped bytes E9 AF 3D 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993c6ch
        ; Exact mapped bytes E9 A5 3D 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0eh
        push 58993c34h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 2ech]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 2e4h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 9B EC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993bfch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B9 D2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6C 3D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993bdch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6C EC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993bbch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8A D2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993b9ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 28 D3 FF FF: call 0x58762cd0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 3D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993b78h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2B EC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993b54h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 49 D2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FC 3C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993b24h
        ; Exact mapped bytes E9 E1 3C 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 190h
        ; Exact mapped bytes 0F 8F D8 00 00 00: jg 0x58765ac9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x58765aa7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffed3h
        cmp eax, 5
        ; Exact mapped bytes 0F 87 D3 3C 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd3
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 40 99 76 58: jmp dword ptr [eax*4 + 0x58769940]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x99
        __asm _emit 0x76
        __asm _emit 0x58
        push 58993af4h
        ; Exact mapped bytes E9 B1 3C 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993ac4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C4 EB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], ebp
        ; Exact mapped bytes E9 A4 3C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993a9ch
        ; Exact mapped bytes E9 89 3C 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993a78h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9C EB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        mov ecx, dword ptr [ecx + 0c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 67 3C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993a48h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 EB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993a18h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 85 D1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 131h
        ; Exact mapped bytes E9 31 3C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push 589939f4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 33 EB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 190h
        ; Exact mapped bytes E9 0F 3C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2bch
        ; Exact mapped bytes 0F 8F 91 0F 00 00: jg 0x58766a65
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 5C 0F 00 00: je 0x58766a36
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffe6fh
        cmp eax, 0f9h
        ; Exact mapped bytes 0F 87 EE 3B 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 58769b98h]
        ; Exact mapped bytes FF 24 8D 58 99 76 58: jmp dword ptr [ecx*4 + 0x58769958]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x99
        __asm _emit 0x76
        __asm _emit 0x58
        push 589939d4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E2 EA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 191h
        ; Exact mapped bytes E9 BE 3B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        push 589939b0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 EA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 192h
        ; Exact mapped bytes E9 9C 3B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993984h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9C EA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993958h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BA D0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6D 3B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993934h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6D EA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993910h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8B D0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3E 3B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        push 589938e8h
        ; Exact mapped bytes E9 23 3B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        push 589938c8h
        ; Exact mapped bytes E9 19 3B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993898h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2A EA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993868h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 48 D0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FB 3A 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993848h
        ; Exact mapped bytes E9 E0 3A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993828h
        ; Exact mapped bytes E9 D6 3A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993808h
        ; Exact mapped bytes E9 CC 3A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589937e0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DD E9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0db4h]
        mov eax, dword ptr [eax + 0c4h]
        mov ecx, dword ptr [eax + 2c8h]
        mov eax, dword ptr [eax + 2cch]
        push ecx
        push eax
        push 589937b8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 130ch]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        lea edx, [esp + 1300h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 C2 CF FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 19bh
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 57 3A 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993794h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 57 E9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        mov eax, dword ptr [ecx + 0c4h]
        mov ecx, dword ptr [eax + 2c8h]
        mov eax, dword ptr [eax + 2cch]
        push ecx
        push eax
        push 5899376ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 18d4h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        lea eax, [esp + 18c8h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3D CF FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 19bh
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0db4h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 D1 39 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993744h
        ; Exact mapped bytes E9 B6 39 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993720h
        ; Exact mapped bytes E9 AC 39 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        push 32h
        push 589936f4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1b50h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1b48h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 A4 E8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 14 FF FF FF: jmp 0x58765c65
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 589936d8h
        ; Exact mapped bytes E9 6C 39 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589936ach
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7D E8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993680h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9B CE FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4E 39 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993650h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4E E8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 64h
        push 58993620h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 1dd0h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1dc8h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 51 CE FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 04 39 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589935f4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 04 E8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 64h
        push 589935c8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 1ed0h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1ec8h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 07 CE FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BA 38 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993598h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BA E7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993568h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D8 CD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8B 38 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899353ch
        ; Exact mapped bytes E9 70 38 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899350ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 81 E7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push 589934dch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9F CD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 52 38 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589934b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 52 E7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993484h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 70 CD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 23 38 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58993458h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 23 E7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899342ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 41 CD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F4 37 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993408h
        ; Exact mapped bytes E9 D9 37 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 589933e8h
        ; Exact mapped bytes E9 CF 37 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 589933c8h
        ; Exact mapped bytes E9 C5 37 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 589933a0h
        ; Exact mapped bytes E9 BB 37 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993378h
        ; Exact mapped bytes E9 B1 37 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993350h
        ; Exact mapped bytes E9 A7 37 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 5899332ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1e50h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1e48h]
        push edx
        ; Exact mapped bytes E9 83 37 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993304h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8C E6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24f8h]
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 7ch], 12h
        mov dword ptr [esi + 0a4h], 1
        ; Exact mapped bytes E9 51 37 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 589932e0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1ad0h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1ac8h]
        push edx
        ; Exact mapped bytes EB AB: jmp 0x58765f5d
        __asm _emit 0xeb
        __asm _emit 0xab
        push 589932c0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 28 E6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 24f8h]
        mov dword ptr [esi + 98h], ecx
        ; Exact mapped bytes EB 9A: jmp 0x58765f71
        __asm _emit 0xeb
        __asm _emit 0x9a
        push 58993298h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 03 E6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 24f8h]
        mov dword ptr [esi + 98h], edx
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x58765f71
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993274h
        ; Exact mapped bytes E9 BE 36 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899324ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CF E5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        push 58993224h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 ED CB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 1cbh
        ; Exact mapped bytes E9 99 36 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993200h
        ; Exact mapped bytes E9 7E 36 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push 589931dch
        ; Exact mapped bytes E9 74 36 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 589931b8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 0b88h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 0b80h]
        push ecx
        ; Exact mapped bytes E9 50 36 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993190h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 59 E5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0d8h]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 24 36 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899316ch
        ; Exact mapped bytes EB CB: jmp 0x58766086
        __asm _emit 0xeb
        __asm _emit 0xcb
        push 5899314ch
        ; Exact mapped bytes EB C4: jmp 0x58766086
        __asm _emit 0xeb
        __asm _emit 0xc4
        push 58993124h
        ; Exact mapped bytes EB BD: jmp 0x58766086
        __asm _emit 0xeb
        __asm _emit 0xbd
        push 589930f8h
        ; Exact mapped bytes EB B6: jmp 0x58766086
        __asm _emit 0xeb
        __asm _emit 0xb6
        push 589930d4h
        ; Exact mapped bytes E9 ED 35 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        push 589930ach
        ; Exact mapped bytes E9 E3 35 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [ecx + 204h]
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 2F: jne 0x58766126
        __asm _emit 0x75
        __asm _emit 0x2f
        push 0eh
        push 58993080h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 1ech]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1e4h]
        push ecx
        ; Exact mapped bytes E9 AB 35 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 07: jne 0x58766133
        __asm _emit 0x75
        __asm _emit 0x07
        push 0ch
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x587661dd
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 75 2F: jne 0x58766168
        __asm _emit 0x75
        __asm _emit 0x2f
        push 10h
        push 58993080h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1ech]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1e4h]
        push ecx
        ; Exact mapped bytes E9 69 35 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 75 2F: jne 0x5876619d
        __asm _emit 0x75
        __asm _emit 0x2f
        push 0ah
        push 58993048h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 1ech]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1e4h]
        push ecx
        ; Exact mapped bytes E9 34 35 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 74 38: je 0x587661db
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 74 24: je 0x587661cd
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 84 44 FF FF FF: je 0x587660f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ecx + 1b8h]
        cmp eax, 0eh
        ; Exact mapped bytes 77 3E: ja 0x587661fd
        __asm _emit 0x77
        __asm _emit 0x3e
        movzx eax, byte ptr [eax + 58769cb0h]
        ; Exact mapped bytes FF 24 85 94 9C 76 58: jmp dword ptr [eax*4 + 0x58769c94]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x9c
        __asm _emit 0x76
        __asm _emit 0x58
        push 0eh
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x5876613b
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        ; Exact mapped bytes E9 1E FF FF FF: jmp 0x587660f9
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0eh
        push 58993080h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 1ech]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1e4h]
        push ecx
        ; Exact mapped bytes E9 C7 34 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58993018h
        ; Exact mapped bytes E9 B3 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992ff4h
        ; Exact mapped bytes E9 A9 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992fc4h
        ; Exact mapped bytes E9 9F 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992f98h
        ; Exact mapped bytes E9 95 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992f70h
        ; Exact mapped bytes E9 8B 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992f4ch
        ; Exact mapped bytes E9 81 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992f28h
        ; Exact mapped bytes E9 77 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992f04h
        ; Exact mapped bytes E9 6D 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992ee4h
        ; Exact mapped bytes E9 63 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992ec0h
        ; Exact mapped bytes E9 59 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992e9ch
        ; Exact mapped bytes E9 4F 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992e78h
        ; Exact mapped bytes E9 45 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992e4ch
        ; Exact mapped bytes E9 3B 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992e24h
        ; Exact mapped bytes E9 31 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992e04h
        ; Exact mapped bytes E9 27 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992ddch
        ; Exact mapped bytes E9 1D 34 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58992db4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2E E3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992d8ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4C C9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FF 33 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 58992d6ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 21e0h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 21d8h]
        ; Exact mapped bytes E9 CA 33 00 00: jmp 0x587696d0
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992d3ch
        ; Exact mapped bytes E9 B7 33 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992d14h
        ; Exact mapped bytes E9 AD 33 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992cf0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 E2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 91 33 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992ccch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 93 E2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 65 33 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992cach
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 E2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 38 33 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992c88h
        ; Exact mapped bytes E9 75 FF FF FF: jmp 0x5876631f
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992c60h
        ; Exact mapped bytes EB 9B: jmp 0x5876634c
        __asm _emit 0xeb
        __asm _emit 0x9b
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58992c30h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 27 E2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992c00h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 45 C8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB AC: jmp 0x58766389
        __asm _emit 0xeb
        __asm _emit 0xac
        push 58992bd4h
        ; Exact mapped bytes E9 38 FF FF FF: jmp 0x5876631f
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992ba8h
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x5876634c
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992b80h
        ; Exact mapped bytes E9 CC 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58992b50h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DD E1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992b1ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FB C7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AE 32 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992af8h
        ; Exact mapped bytes E9 93 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992ad4h
        ; Exact mapped bytes E9 89 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992ab0h
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9A E1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992a8ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B8 C7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6B 32 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992a68h
        ; Exact mapped bytes EB CF: jmp 0x58766443
        __asm _emit 0xeb
        __asm _emit 0xcf
        push 58992a48h
        ; Exact mapped bytes E9 49 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992a24h
        ; Exact mapped bytes E9 3F 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992a00h
        ; Exact mapped bytes E9 35 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 589929e0h
        ; Exact mapped bytes E9 2B 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 589929bch
        ; Exact mapped bytes E9 21 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899298ch
        ; Exact mapped bytes E9 2C FB FF FF: jmp 0x58765fdc
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992968h
        ; Exact mapped bytes E9 0D 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899294ch
        ; Exact mapped bytes E9 03 32 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992930h
        ; Exact mapped bytes E9 F9 31 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992910h
        ; Exact mapped bytes E9 EF 31 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589928f0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 00 E1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push 589928d0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1E C7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D1 31 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 589928ach
        ; Exact mapped bytes E9 B6 31 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899288ch
        ; Exact mapped bytes E9 AC 31 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992858h
        ; Exact mapped bytes E9 27 FE FF FF: jmp 0x5876634c
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 C3 E0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992830h
        ; Exact mapped bytes E9 90 31 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992808h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A3 E0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 CB C6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7E 31 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 589927e0h
        ; Exact mapped bytes EB DB: jmp 0x5876653c
        __asm _emit 0xeb
        __asm _emit 0xdb
        push 589927b4h
        ; Exact mapped bytes E9 5C 31 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 5899278ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 1d50h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1d48h]
        ; Exact mapped bytes E9 38 31 00 00: jmp 0x587696d0
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 58992760h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 0c88h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 0c80h]
        push edx
        ; Exact mapped bytes E9 0B 31 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899273ch
        ; Exact mapped bytes E9 F7 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992710h
        ; Exact mapped bytes E9 ED 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 589926e0h
        ; Exact mapped bytes E9 E3 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 589926b4h
        ; Exact mapped bytes E9 D9 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899268ch
        ; Exact mapped bytes E9 CF 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992664h
        ; Exact mapped bytes E9 C5 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 5899263ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 1750h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1748h]
        push ecx
        ; Exact mapped bytes E9 A1 30 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 58992614h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 0d88h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 0d80h]
        ; Exact mapped bytes E9 73 30 00 00: jmp 0x587696d0
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 589925e4h
        ; Exact mapped bytes E9 60 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 589925c0h
        ; Exact mapped bytes E9 AE FC FF FF: jmp 0x5876631f
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899259ch
        ; Exact mapped bytes E9 D1 FC FF FF: jmp 0x5876634c
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992574h
        ; Exact mapped bytes E9 42 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992544h
        ; Exact mapped bytes E9 E9 FC FF FF: jmp 0x58766378
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992514h
        ; Exact mapped bytes E9 86 FC FF FF: jmp 0x5876631f
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 589924e4h
        ; Exact mapped bytes E9 A9 FC FF FF: jmp 0x5876634c
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 589924c0h
        ; Exact mapped bytes E9 1A 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899249ch
        ; Exact mapped bytes E9 10 30 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899246ch
        ; Exact mapped bytes E9 B7 FC FF FF: jmp 0x58766378
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992444h
        ; Exact mapped bytes E9 FC 2F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899241ch
        ; Exact mapped bytes E9 F2 2F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589923f0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 03 DF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        push 589923c4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 21 C5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D4 2F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899239ch
        ; Exact mapped bytes E9 B9 2F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58992370h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CA DE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push 58992344h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E8 C4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 2F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899231ch
        ; Exact mapped bytes E9 80 2F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 589922f4h
        ; Exact mapped bytes E9 76 2F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 589922c8h
        ; Exact mapped bytes E9 6C 2F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 589922a0h
        ; Exact mapped bytes E9 62 2F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899227ch
        ; Exact mapped bytes E9 58 2F 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899314ch
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 69 DE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899225ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 87 C4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A 2F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ebx
        ; Exact mapped bytes 74 2D: je 0x587667cf
        __asm _emit 0x74
        __asm _emit 0x2d
        push edi
        push 58992238h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1408h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1400h]
        ; Exact mapped bytes E9 01 2F 00 00: jmp 0x587696d0
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992210h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea edx, [esp + 1408h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1400h]
        ; Exact mapped bytes E9 D8 2E 00 00: jmp 0x587696d0
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 589921e0h
        ; Exact mapped bytes E9 C5 2E 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 589921b0h
        ; Exact mapped bytes E9 BB 2E 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899217ch
        ; Exact mapped bytes E9 B1 2E 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992148h
        ; Exact mapped bytes E9 A7 2E 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 58992114h
        ; Exact mapped bytes E9 9D 2E 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 589920e0h
        ; Exact mapped bytes E9 93 2E 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 589920bch
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x58766774
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0c7h
        lea ecx, [esp + 7b5h]
        push ebx
        push ecx
        mov byte ptr [esp + 7bch], bl
        ; Exact mapped bytes E8 F0 63 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x63
        __asm _emit 0x21
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esp + 129h], eax
        mov dword ptr [esp + 12dh], eax
        mov dword ptr [esp + 131h], eax
        mov dword ptr [esp + 135h], eax
        mov dword ptr [esp + 139h], eax
        ; Exact mapped bytes 66 89 84 24 3D 01 00 00: mov word ptr [esp + 0x13d], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 13fh], al
        lea eax, [esp + 128h]
        mov ecx, eax
        add esp, 0ch
        mov byte ptr [esp + 11ch], bl
        mov edx, 18h
        sub edi, ecx
        lea ecx, [edx + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587668c1
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edi + eax]
        cmp cl, bl
        ; Exact mapped bytes 74 0A: je 0x587668c1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x587668a6
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587668c5
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edx, ebx
        ; Exact mapped bytes 75 01: jne 0x587668c6
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        lea edx, [esp + 11ch]
        push edx
        push 5899209ch
        mov byte ptr [eax], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 7b8h]
        push 0c8h
        push eax
        ; Exact mapped bytes E8 6D 51 FE FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [esp + 7b0h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 EB DC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899207ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 09 C3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BC 2D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 1cch]
        mov ecx, eax
        mov edx, 18h
        sub edi, ecx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea ecx, [edx + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5876694b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edi + eax]
        cmp cl, bl
        ; Exact mapped bytes 74 0A: je 0x5876694b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x58766930
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5876694f
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edx, ebx
        ; Exact mapped bytes 75 01: jne 0x58766950
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        lea edx, [esp + 1cch]
        push edx
        push 5899205ch
        mov byte ptr [eax], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 2050h]
        push 0c8h
        push eax
        ; Exact mapped bytes E8 E3 50 FE FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [esp + 2048h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 61 DC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899203ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7F C2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 32 2D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 1b4h]
        mov ecx, eax
        mov edx, 18h
        sub edi, ecx
        lea ecx, [edx + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587669d1
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edi + eax]
        cmp cl, bl
        ; Exact mapped bytes 74 0A: je 0x587669d1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x587669b6
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587669d5
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edx, ebx
        ; Exact mapped bytes 75 01: jne 0x587669d6
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        lea edx, [esp + 1b4h]
        push edx
        push 5899201ch
        mov byte ptr [eax], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 2118h]
        push 0c8h
        push eax
        ; Exact mapped bytes E8 5D 50 FE FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [esp + 2110h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 DB DB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991ffch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F9 C1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AC 2C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991fcch
        ; Exact mapped bytes E9 91 2C 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991fa0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A2 DB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991f74h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 C1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 2C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 384h
        ; Exact mapped bytes 0F 8F 15 03 00 00: jg 0x58766d85
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 ED 02 00 00: je 0x58766d63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffd43h
        cmp eax, 6ah
        ; Exact mapped bytes 0F 87 54 2C 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 58769cech]
        ; Exact mapped bytes FF 24 95 C0 9C 76 58: jmp dword ptr [edx*4 + 0x58769cc0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0x76
        __asm _emit 0x58
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 88 54 0D 00 00: mov cx, word ptr [eax + 0xd54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx eax, cx
        movzx edx, ax
        movzx eax, byte ptr [edx + 58a0b4cbh]
        add eax, 6
        push eax
        push 58991f48h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 2ech]
        push 104h
        push ecx
        ; Exact mapped bytes E8 8C 4F FE FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        lea edx, [esp + 2e4h]
        push edx
        ; Exact mapped bytes E9 ED 2B 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991f20h
        ; Exact mapped bytes E9 D9 2B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991ef4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 EA DA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991ec8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 08 C1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 320h
        ; Exact mapped bytes E9 B4 2B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991ea0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B6 DA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 321h
        ; Exact mapped bytes E9 92 2B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991e74h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 94 DA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 322h
        ; Exact mapped bytes E9 70 2B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991e48h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 72 DA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 323h
        ; Exact mapped bytes E9 4E 2B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991e1ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 50 DA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 324h
        ; Exact mapped bytes E9 2C 2B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991dech
        mov byte ptr [esp + 138h], bl
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 27 DA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 98 C1 98 58: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esp + 14h], 9
        mov eax, dword ptr [esp + 24f8h]
        test dword ptr [eax], ebp
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x58766cc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        cmp eax, 8
        ; Exact mapped bytes 0F 87 CA 00 00 00: ja 0x58766cc7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 58 9D 76 58: jmp dword ptr [eax*4 + 0x58769d58]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x9d
        __asm _emit 0x76
        __asm _emit 0x58
        push 58991de8h
        lea ecx, [esp + 138h]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea edx, [esp + eax + 138h]
        push edx
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x58766cc5
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991de4h
        lea eax, [esp + 138h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + eax + 138h]
        push ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x58766cc5
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991de0h
        ; Exact mapped bytes EB 70: jmp 0x58766cb3
        __asm _emit 0xeb
        __asm _emit 0x70
        push 58991ddch
        lea ecx, [esp + 138h]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea edx, [esp + eax + 138h]
        push edx
        ; Exact mapped bytes EB 69: jmp 0x58766cc5
        __asm _emit 0xeb
        __asm _emit 0x69
        push 58991dd8h
        lea eax, [esp + 138h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + eax + 138h]
        push ecx
        ; Exact mapped bytes EB 50: jmp 0x58766cc5
        __asm _emit 0xeb
        __asm _emit 0x50
        push 58991dd4h
        ; Exact mapped bytes EB 37: jmp 0x58766cb3
        __asm _emit 0xeb
        __asm _emit 0x37
        push 58991dd0h
        lea ecx, [esp + 138h]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea edx, [esp + eax + 138h]
        push edx
        ; Exact mapped bytes EB 30: jmp 0x58766cc5
        __asm _emit 0xeb
        __asm _emit 0x30
        push 58991dcch
        lea eax, [esp + 138h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + eax + 138h]
        push ecx
        ; Exact mapped bytes EB 17: jmp 0x58766cc5
        __asm _emit 0xeb
        __asm _emit 0x17
        push 58991dc8h
        lea edx, [esp + 138h]
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea eax, [esp + eax + 138h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, 1
        add dword ptr [esp + 18h], eax
        rol ebp, 1
        sub dword ptr [esp + 14h], eax
        mov dword ptr [esi + 7ch], 325h
        ; Exact mapped bytes 0F 85 FE FE FF FF: jne 0x58766be1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 134h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 2E BF FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E1 29 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991d9ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E1 D8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991d70h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FF BE FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 326h
        ; Exact mapped bytes E9 AB 29 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991d9ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AB D8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991d70h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C9 BE FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 32h
        ; Exact mapped bytes E9 75 29 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991d50h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 77 D8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 384h
        ; Exact mapped bytes E9 53 29 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 44ch
        ; Exact mapped bytes 0F 8F 86 08 00 00: jg 0x58767616
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 37 08 00 00: je 0x587675cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffc7bh
        cmp eax, 0b5h
        ; Exact mapped bytes 0F 87 32 29 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x32
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 58769e54h]
        ; Exact mapped bytes FF 24 95 7C 9D 76 58: jmp dword ptr [edx*4 + 0x58769d7c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0x9d
        __asm _emit 0x76
        __asm _emit 0x58
        push 58991d20h
        ; Exact mapped bytes E9 40 EA FF FF: jmp 0x587657fe
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991d00h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1C D8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 385h
        ; Exact mapped bytes E9 F8 28 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991cd8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FA D7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 386h
        ; Exact mapped bytes E9 D6 28 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991ca8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D6 D7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991c78h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F4 BD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 387h
        ; Exact mapped bytes E9 A0 28 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 4fh
        push 58991c58h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 1bd0h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1bc8h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 85 D7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991c38h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A3 BD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 388h
        ; Exact mapped bytes E9 4F 28 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991c10h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 51 D7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 389h
        ; Exact mapped bytes E9 2D 28 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991be0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2D D7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991bb0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4B BD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 38ah
        ; Exact mapped bytes E9 F7 27 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 4fh
        push 58991b8ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 0e88h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 0e80h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DC D6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991b68h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FA BC FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 38bh
        ; Exact mapped bytes E9 A6 27 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991b38h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A8 D6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3afh
        ; Exact mapped bytes E9 84 27 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991b08h
        ; Exact mapped bytes E9 69 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991ad8h
        ; Exact mapped bytes EB D2: jmp 0x58766f37
        __asm _emit 0xeb
        __asm _emit 0xd2
        push 58991aa8h
        ; Exact mapped bytes E9 58 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991a7ch
        ; Exact mapped bytes E9 4E 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991a4ch
        ; Exact mapped bytes E9 44 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991a20h
        ; Exact mapped bytes E9 3A 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 589919f4h
        ; Exact mapped bytes E9 30 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 589919c8h
        ; Exact mapped bytes E9 26 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899199ch
        ; Exact mapped bytes E9 1C 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991970h
        ; Exact mapped bytes E9 12 27 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A0 FD B1 A0 58: mov al, byte ptr [0x58a0b1fd]
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp al, 0ffh
        ; Exact mapped bytes 75 0A: jne 0x58766fc8
        __asm _emit 0x75
        __asm _emit 0x0a
        push 58991940h
        ; Exact mapped bytes E9 FF 26 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        mov edx, dword ptr [ecx*4 + 58a0b1e4h]
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 82 D0 18 00: call 0x588f4060
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0x00
        add eax, 54h
        push eax
        push 58991914h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 1850h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1848h]
        push ecx
        ; Exact mapped bytes E9 C2 26 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push 589918e8h
        ; Exact mapped bytes E9 AE 26 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push 589918bch
        ; Exact mapped bytes E9 A4 26 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899188ch
        ; Exact mapped bytes E9 9A 26 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899185ch
        ; Exact mapped bytes E9 90 26 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991830h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A3 D5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3a4h
        ; Exact mapped bytes E9 7F 26 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991808h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 81 D5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3a5h
        ; Exact mapped bytes E9 5D 26 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589917dch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5D D5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        push 589917b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7B BB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3a6h
        ; Exact mapped bytes E9 27 26 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991780h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 29 D5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3a7h
        ; Exact mapped bytes E9 05 26 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991754h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 05 D5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991728h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 23 BB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D6 25 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push 589916f4h
        ; Exact mapped bytes E9 BB 25 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push 589916c8h
        ; Exact mapped bytes E9 B1 25 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899169ch
        ; Exact mapped bytes E9 A7 25 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899166ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BA D4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3ach
        ; Exact mapped bytes E9 96 25 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push 58991640h
        ; Exact mapped bytes E9 7B 25 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991614h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8C D4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        push 589915e8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AA BA FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3aeh
        ; Exact mapped bytes E9 56 25 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 4fh
        push 589915c4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 738h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 730h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3B D4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991598h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 29 D4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 730h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 4A BA FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3afh
        ; Exact mapped bytes E9 F6 24 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 4fh
        push 589915c4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 6b8h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 6b0h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DB D3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899156ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C9 D3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 6b0h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 EA B9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D 24 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991544h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9D D3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899151ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BB B9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3b6h
        ; Exact mapped bytes E9 67 24 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589914f0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 D3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899151ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 85 B9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 38 24 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589914c8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 38 D3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        push 589914a0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 56 B9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3b8h
        ; Exact mapped bytes E9 02 24 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589914c8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 02 D3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        push 589914a0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 20 B9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D3 23 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push 53h
        push 58991468h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 0f88h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 0f80h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BA D2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3b6h
        ; Exact mapped bytes E9 96 23 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push 53h
        push 58991430h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1c50h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1c48h]
        push edx
        ; Exact mapped bytes E9 60 23 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899140ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 D2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push 589913e8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 85 B8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 38 23 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589913c4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 38 D2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push 589913a0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 56 B8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 09 23 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994c74h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 09 D2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994c4ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 27 B8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3e6h
        ; Exact mapped bytes E9 D3 22 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899137ch
        ; Exact mapped bytes E9 2D F1 FF FF: jmp 0x5876653c
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991354h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C9 D1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899132ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E7 B7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9A 22 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991304h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9A D1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push 589912dch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B8 B7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6B 22 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589912b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6B D1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991284h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 89 B7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3C 22 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991260h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3C D1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991238h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5A B7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0D 22 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push 103h
        lea eax, [esp + 87dh]
        push ebx
        push eax
        mov byte ptr [esp + 884h], bl
        ; Exact mapped bytes E8 63 57 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x57
        __asm _emit 0x21
        __asm _emit 0x00
        push 5899120ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        lea ecx, [esp + 888h]
        mov edx, eax
        mov eax, ecx
        add esp, 10h
        mov edi, 104h
        sub edx, eax
        lea eax, [edi + 7ffffefah]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x58767520
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        cmp al, bl
        ; Exact mapped bytes 74 0A: je 0x58767520
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58767505
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58767524
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edi, ebx
        ; Exact mapped bytes 75 01: jne 0x58767525
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        mov byte ptr [ecx], bl
        lea ecx, [esp + 878h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BA D0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898c922h
        mov ecx, esi
        ; Exact mapped bytes E8 DE B6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 3b6h
        ; Exact mapped bytes E9 8A 21 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push 103h
        lea edx, [esp + 981h]
        push ebx
        push edx
        mov byte ptr [esp + 988h], bl
        ; Exact mapped bytes E8 E0 56 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x56
        __asm _emit 0x21
        __asm _emit 0x00
        push 5899120ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        lea ecx, [esp + 98ch]
        mov edx, eax
        mov eax, ecx
        add esp, 10h
        mov edi, 104h
        sub edx, eax
        ; Exact mapped bytes EB 06: jmp 0x58767590
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58767590 .. +0x217B bytes.
extern "C" __declspec(naked) void FUN_58764d30_segment_01() {
    __asm {
        lea eax, [edi + 7ffffefah]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x587675b9
        __asm _emit 0x74
        __asm _emit 0x1f
        mov al, byte ptr [edx + ecx]
        cmp al, bl
        ; Exact mapped bytes 74 18: je 0x587675b9
        __asm _emit 0x74
        __asm _emit 0x18
        mov byte ptr [ecx], al
        inc ecx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58767590
        __asm _emit 0x75
        __asm _emit 0xe7
        dec ecx
        mov byte ptr [ecx], bl
        lea ecx, [esp + 97ch]
        push ecx
        ; Exact mapped bytes E9 18 21 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ebx
        ; Exact mapped bytes 75 01: jne 0x587675be
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        mov byte ptr [ecx], bl
        lea ecx, [esp + 97ch]
        push ecx
        ; Exact mapped bytes E9 04 21 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589911e0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 1088h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1080h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F1 CF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 589911b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0F B6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C2 20 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5dch
        ; Exact mapped bytes 0F 8F E3 0E 00 00: jg 0x58768504
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AE 0E 00 00: je 0x587684d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffbb3h
        cmp eax, 130h
        ; Exact mapped bytes 0F 87 A1 20 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 5876a0cch]
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 8D 0C 9F 76 58: jmp dword ptr [ecx*4 + 0x58769f0c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x9f
        __asm _emit 0x76
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991184h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 1950h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1948h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 73 CF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 589911b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 91 B5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 44 20 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991158h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 0a88h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 0a80h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 2A CF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 589911b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 48 B5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FB 1F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991128h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 1cd0h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1cc8h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E1 CE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push 589911b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FF B4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 1F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589910fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 1288h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1280h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 98 CE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push 589911b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B6 B4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 69 1F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589910d0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 1550h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1548h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 4F CE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push 589911b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6D B4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 20 1F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589910a4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 1388h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1380h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 06 CE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push 589911b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 24 B4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 1E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991078h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 15d0h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 15c8h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BD CD FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push 589911b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DB B3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8E 1E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991058h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8E CD FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58991038h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AC B3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5F 1E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58991014h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5F CD FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990ff0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7D B3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 30 1E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990fc8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 30 CD FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990fa0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4E B3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 01 1E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990f78h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 01 CD FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990f50h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1F B3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D2 1D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990f28h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D2 CC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990f00h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F0 B2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A3 1D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990ed8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A3 CC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990eb0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C1 B2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 74 1D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990e8ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 74 CC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990e68h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 92 B2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 1D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990e44h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 45 CC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990e20h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 63 B2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 16 1D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990e00h
        ; Exact mapped bytes E9 FB 1C 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990dd0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0C CC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990da0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2A B2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DD 1C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990d64h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DD CB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990d28h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FB B1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AE 1C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990cf8h
        ; Exact mapped bytes E9 93 1C 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990cd4h
        ; Exact mapped bytes E9 89 1C 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990ca4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9A CB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990c74h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B8 B1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6B 1C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990c4ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6B CB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990c24h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 89 B1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3C 1C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990bf4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3C CB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990bc4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5A B1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0D 1C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990b98h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0D CB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990b6ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2B B1 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DE 1B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990b44h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DE CA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990b1ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FC B0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AF 1B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990afch
        ; Exact mapped bytes E9 94 1B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990ac8h
        ; Exact mapped bytes E9 8A 1B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990a9ch
        ; Exact mapped bytes E9 80 1B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990a7ch
        ; Exact mapped bytes E9 76 1B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990a48h
        ; Exact mapped bytes E9 6C 1B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990a10h
        ; Exact mapped bytes E9 62 1B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 589909e0h
        ; Exact mapped bytes E9 58 1B 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589909bch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 69 CA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990998h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 87 B0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A 1B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990970h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3A CA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990948h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 58 B0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0B 1B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899091ch
        ; Exact mapped bytes E9 F0 1A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589908e4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 01 CA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push 589908ach
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1F B0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D2 1A 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990878h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D2 C9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990844h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F0 AF FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A3 1A 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990814h
        ; Exact mapped bytes E9 88 1A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589907f0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 99 C9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        push 589907cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B7 AF FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A 1A 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899079ch
        ; Exact mapped bytes E9 4F 1A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990770h
        ; Exact mapped bytes E9 45 1A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990744h
        ; Exact mapped bytes E9 3B 1A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990720h
        ; Exact mapped bytes E9 31 1A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 589906e8h
        ; Exact mapped bytes E9 27 1A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 589906bch
        ; Exact mapped bytes E9 1D 1A 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899068ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2E C9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899065ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4C AF FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FF 19 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899062ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FF C8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        push 589905fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1D AF FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D0 19 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 589905d0h
        ; Exact mapped bytes E9 B5 19 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899059ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C8 C8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0a00h]
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 99 19 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899056ch
        ; Exact mapped bytes E9 7E 19 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990544h
        ; Exact mapped bytes E9 74 19 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899051ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 85 C8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        push 100h
        lea eax, [esp + 1f4ch]
        push ebx
        push eax
        ; Exact mapped bytes E8 CA 4E 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 77359400h
        push 589904f4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 1f50h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1f48h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 6F AE FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 22 19 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 589904c4h
        ; Exact mapped bytes E9 07 19 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990490h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 18 C8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        push 5899045ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 36 AE FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E9 18 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990438h
        ; Exact mapped bytes E9 CE 18 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990404h
        ; Exact mapped bytes E9 C4 18 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589903cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D5 C7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990394h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F3 AD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A6 18 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990364h
        ; Exact mapped bytes E9 8B 18 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899033ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E9 26 D1 FF FF: jmp 0x58764f76
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990310h
        ; Exact mapped bytes E9 6D 18 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 589902e4h
        ; Exact mapped bytes E9 63 18 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 589902b4h
        ; Exact mapped bytes E9 59 18 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990284h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6A C7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990254h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 88 AD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3B 18 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990224h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3B C7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        push 589901f4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 59 AD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C 18 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 589901c4h
        ; Exact mapped bytes E9 F1 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 589901a8h
        ; Exact mapped bytes E9 E7 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990180h
        ; Exact mapped bytes E9 DD 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990154h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 EE C6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push 58990128h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0C AD FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 17 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 589900f4h
        ; Exact mapped bytes E9 A4 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 589900d0h
        ; Exact mapped bytes E9 9A 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 589900a0h
        ; Exact mapped bytes E9 90 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990068h
        ; Exact mapped bytes E9 86 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990038h
        ; Exact mapped bytes E9 7C 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 58990004h
        ; Exact mapped bytes E9 72 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898ffdch
        ; Exact mapped bytes E9 68 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898ffb8h
        ; Exact mapped bytes E9 5E 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898ff98h
        ; Exact mapped bytes E9 54 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898ff6ch
        ; Exact mapped bytes E9 4A 17 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58990224h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5B C6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ff3ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 79 AC FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2C 17 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898ff14h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2C C6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898feech
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4A AC FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FD 16 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fec8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FD C5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fea4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1B AC FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CE 16 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fe7ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CE C5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fe54h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 EC AB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9F 16 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fe28h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9F C5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fdfch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BD AB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 70 16 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fdd0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 70 C5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fda4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8E AB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 41 16 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fd7ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 41 C5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fd54h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5F AB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 12 16 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898fd30h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 14 C5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], ebx
        ; Exact mapped bytes E9 F4 15 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fd14h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F4 C4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fcf0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 12 AB FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 9C 45 A2 58: cmp ecx, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 B0 15 00 00: jne 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E9 A5 15 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898fccch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A7 C4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 9C 45 A2 58: cmp edx, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 75 15 00 00: jne 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E9 6A 15 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fd14h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6A C4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fca8h
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x58768101
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fc80h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 48 C4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fc58h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 66 AA FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 19 15 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fc2ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 19 C4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fc00h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 37 AA FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EA 14 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fbd0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 EA C3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fba0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 08 AA FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BB 14 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898fb74h
        ; Exact mapped bytes E9 A0 14 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898fb44h
        ; Exact mapped bytes E9 96 14 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fb1ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A7 C3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898faf4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C5 A9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 78 14 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898fac4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 78 C3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898fa94h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 96 A9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 49 14 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898fa68h
        ; Exact mapped bytes E9 2E 14 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898fa3ch
        ; Exact mapped bytes E9 24 14 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898fa10h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3B C3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f9f0h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 29 C3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f9cch
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 47 A9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FA 13 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f99ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FA C2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f96ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 18 A9 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CB 13 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f940h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CB C2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f914h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E9 A8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 320h
        ; Exact mapped bytes E9 95 13 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f8e8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 95 C2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f8b8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B3 A8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 66 13 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f894h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 66 C2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f86ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 84 A8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 37 13 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f844h
        ; Exact mapped bytes E9 1C 13 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        lea edx, [esp + 450h]
        push ebx
        push edx
        ; Exact mapped bytes E8 8D 48 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f820h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 454h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 44ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 00 C2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f7fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1E A8 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D1 12 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f7d4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D1 C1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f7ach
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 EF A7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A2 12 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f784h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A2 C1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f75ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 A7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 12 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f73ch
        ; Exact mapped bytes E9 58 12 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        lea edx, [esp + 3ech]
        push ebx
        push edx
        ; Exact mapped bytes E8 C9 47 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x47
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f71ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 3f0h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 3e8h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 3C C1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f6fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5A A7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0D 12 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f6cch
        ; Exact mapped bytes E9 F2 11 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f69ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 03 C1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f66ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 21 A7 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D4 11 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a64h
        ; Exact mapped bytes 0F 8F 8F 03 00 00: jg 0x5876889e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 67 03 00 00: je 0x5876887c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffff830h
        cmp eax, 17h
        ; Exact mapped bytes 0F 87 B5 11 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb5
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 00 A2 76 58: jmp dword ptr [eax*4 + 0x5876a200]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xa2
        __asm _emit 0x76
        __asm _emit 0x58
        push 5898f63ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B0 C0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7d0h
        ; Exact mapped bytes E9 8C 11 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f60ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8E C0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7d1h
        ; Exact mapped bytes E9 6A 11 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898d3ach
        ; Exact mapped bytes EB BA: jmp 0x5876852f
        __asm _emit 0xeb
        __asm _emit 0xba
        push 5898f5e8h
        ; Exact mapped bytes EB B3: jmp 0x5876852f
        __asm _emit 0xeb
        __asm _emit 0xb3
        push 5898f5c4h
        ; Exact mapped bytes EB AC: jmp 0x5876852f
        __asm _emit 0xeb
        __asm _emit 0xac
        push 5898f5a0h
        ; Exact mapped bytes EB A5: jmp 0x5876852f
        __asm _emit 0xeb
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 1eh
        push 5898f578h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 14d0h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 14c8h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 33 C0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f54ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 51 A6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7d0h
        ; Exact mapped bytes E9 FD 10 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 1eh
        push 5898f524h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 16d0h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 16c8h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 E2 BF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f4f8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 00 A6 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B3 10 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 55h
        push 5898f524h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea eax, [esp + 17d0h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 17c8h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 98 BF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f4cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B6 A5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 69 10 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f4a8h
        ; Exact mapped bytes E9 B6 FE FF FF: jmp 0x5876852f
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 55h
        push 5898f578h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 1650h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 1648h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 44 BF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f47ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 62 A5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7d0h
        ; Exact mapped bytes E9 0E 10 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f450h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0E BF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f424h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2C A5 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7d0h
        ; Exact mapped bytes E9 D8 0F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f3f8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D8 BE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f3d0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F6 A4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7d0h
        ; Exact mapped bytes E9 A2 0F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f3f8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A2 BE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f3a8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 A4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7d0h
        ; Exact mapped bytes E9 6C 0F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f380h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6C BE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f3a8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8A A4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3D 0F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f380h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3D BE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f3d0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5B A4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0E 0F 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f354h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0E BE FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f328h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2C A4 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 0E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f304h
        ; Exact mapped bytes E9 2C FD FF FF: jmp 0x5876852f
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f2d4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D5 BD FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f2a4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F3 A3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A6 0E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f274h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A6 BD FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f244h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C4 A3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 7d0h
        ; Exact mapped bytes E9 70 0E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f220h
        ; Exact mapped bytes E9 BD FC FF FF: jmp 0x5876852f
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f1fch
        ; Exact mapped bytes E9 4B 0E 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f1c8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5E BD FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 0a64h
        ; Exact mapped bytes E9 3A 0E 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10cch
        ; Exact mapped bytes 0F 8F 17 04 00 00: jg 0x58768cc0
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 07 04 00 00: je 0x58768cb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fa0h
        ; Exact mapped bytes 0F 8F 12 02 00 00: jg 0x58768acc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E5 01 00 00: je 0x58768aa5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 0bb8h
        cmp eax, edi
        ; Exact mapped bytes 0F 8F C7 00 00 00: jg 0x58768994
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x58768976
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0a6ah
        ; Exact mapped bytes 74 66: je 0x58768940
        __asm _emit 0x74
        __asm _emit 0x66
        sub eax, 1
        ; Exact mapped bytes 74 3F: je 0x5876891e
        __asm _emit 0x74
        __asm _emit 0x3f
        sub eax, 1
        ; Exact mapped bytes 0F 85 F0 0D 00 00: jne 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 58994c74h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F0 BC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58994c4ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0E A3 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 0a6ch
        ; Exact mapped bytes E9 BA 0D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f198h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BC BC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 0a6bh
        ; Exact mapped bytes E9 98 0D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f160h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 98 BC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f128h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B6 A2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 0a6ah
        ; Exact mapped bytes E9 62 0D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f0fch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 64 BC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E9 44 0D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffff447h
        cmp eax, 7
        ; Exact mapped bytes 0F 87 36 0D 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 60 A2 76 58: jmp dword ptr [eax*4 + 0x5876a260]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xa2
        __asm _emit 0x76
        __asm _emit 0x58
        push 5898f0c8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 31 BC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E9 11 0D 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898f098h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 13 BC FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 45 A2 58: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 EA 0C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898f060h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 EA BB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898f028h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 08 A2 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 EC 45 A2 58: mov edx, dword ptr [0x58a245ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 AF 0C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898eff8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B1 BB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 EC 45 A2 58: mov eax, dword ptr [0x58a245ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 89 0C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898efcch
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x587689cc
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ef98h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 81 BB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 EC 45 A2 58: mov edx, dword ptr [0x58a245ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 58 0C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898ef70h
        ; Exact mapped bytes EB A7: jmp 0x58768a2e
        __asm _emit 0xeb
        __asm _emit 0xa7
        push 5898ef34h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 53 BB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E9 33 0C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898ef00h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 35 BB FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 0C 0C 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffff05fh
        cmp eax, 0d1h
        ; Exact mapped bytes 0F 87 FC 0B 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 5876a2bch]
        ; Exact mapped bytes FF 24 95 80 A2 76 58: jmp dword ptr [edx*4 + 0x5876a280]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xa2
        __asm _emit 0x76
        __asm _emit 0x58
        push 5898eed0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F0 BA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 45 A2 58: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 C8 0B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898eea0h
        ; Exact mapped bytes EB 93: jmp 0x58768aaa
        __asm _emit 0xeb
        __asm _emit 0x93
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5
        push 5898ee6ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 0b08h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 0b00h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A6 BA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ee38h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C4 A0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 6B 0B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898ee08h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6B BA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898edd4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 89 A0 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 E4 45 A2 58: mov edx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 30 0B 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898eda4h
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x58768aef
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ed6ch
        ; Exact mapped bytes E9 EE FE FF FF: jmp 0x58768aaa
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898ed3ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1C BA FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ed0ch
        ; Exact mapped bytes EB AF: jmp 0x58768b8a
        __asm _emit 0xeb
        __asm _emit 0xaf
        push 589948c8h
        ; Exact mapped bytes E9 0A FF FF FF: jmp 0x58768aef
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ecdch
        ; Exact mapped bytes E9 BB FE FF FF: jmp 0x58768aaa
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898ecb0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E9 B9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ec84h
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x58768b8a
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898ec54h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C7 B9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ec24h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E5 9F FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 45 A2 58: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 8D 0A 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898ebech
        ; Exact mapped bytes E9 55 FE FF FF: jmp 0x58768aaa
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ebb4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 85 B9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 E4 45 A2 58: mov edx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 5C 0A 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898ee08h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5C B9 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898edd4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7A 9F FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 45 A2 58: mov eax, dword ptr [0x58a245f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 22 0A 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898eb84h
        ; Exact mapped bytes E9 EA FD FF FF: jmp 0x58768aaa
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 11f8h
        ; Exact mapped bytes 0F 8F F5 03 00 00: jg 0x587690c0
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E5 03 00 00: je 0x587690b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ffffef33h
        cmp eax, 0cdh
        ; Exact mapped bytes 0F 87 F7 09 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 5876a3f8h]
        ; Exact mapped bytes FF 24 95 90 A3 76 58: jmp dword ptr [edx*4 + 0x5876a390]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xa3
        __asm _emit 0x76
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898eb54h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E9 B8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898eb24h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 07 9F FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 45 A2 58: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 AF 09 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        push 58994ad0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 0c08h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 0c00h]
        push edx
        ; Exact mapped bytes E9 A1 FD FF FF: jmp 0x58768af9
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898eaf4h
        ; Exact mapped bytes E9 48 FD FF FF: jmp 0x58768aaa
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898eac0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 76 B8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ea8ch
        ; Exact mapped bytes E9 06 FE FF FF: jmp 0x58768b8a
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898ea5ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 54 B8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ea2ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 72 9E FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 45 A2 58: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 1A 09 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e9fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1A B8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e9cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 38 9E FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 DF 08 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898e99ch
        ; Exact mapped bytes E9 57 FE FF FF: jmp 0x58768c5a
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e968h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D5 B7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e934h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F3 9D FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 45 A2 58: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 9B 08 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e8fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9B B7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e8c4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B9 9D FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 60 08 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898e890h
        ; Exact mapped bytes E9 D8 FD FF FF: jmp 0x58768c5a
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e85ch
        ; Exact mapped bytes E9 63 FC FF FF: jmp 0x58768aef
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0ah
        push 5898e81ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 0d08h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e8fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 31 B7 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esp + 0d00h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 52 9D FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 45 A2 58: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 FA 07 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e8fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FA B6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e7dch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 18 9D FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 BF 07 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 32h
        push 5898e798h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 0e08h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 0e00h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A4 B6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e750h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C2 9C FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 69 07 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 64h
        push 5898e70ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea edx, [esp + 0f08h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e8fch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4E B6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 0f00h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6F 9C FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 16 07 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898e85ch
        ; Exact mapped bytes E9 8E FC FF FF: jmp 0x58768c5a
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e6c8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0C B6 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e680h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2A 9C FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 45 A2 58: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 D2 06 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898e648h
        ; Exact mapped bytes E9 9A FA FF FF: jmp 0x58768aaa
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e600h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C8 B5 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e5b8h
        ; Exact mapped bytes E9 58 FB FF FF: jmp 0x58768b8a
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e57ch
        ; Exact mapped bytes E9 B3 FA FF FF: jmp 0x58768aef
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e8fch
        ; Exact mapped bytes E9 64 FA FF FF: jmp 0x58768aaa
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e548h
        ; Exact mapped bytes E9 0A FC FF FF: jmp 0x58768c5a
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 5898e50ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 1008h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1000h]
        push ecx
        ; Exact mapped bytes E9 E6 FB FF FF: jmp 0x58768c64
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 5898e4d0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 1108h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 1100h]
        push ecx
        ; Exact mapped bytes E9 B8 FB FF FF: jmp 0x58768c64
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e498h
        ; Exact mapped bytes E9 11 06 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898e464h
        ; Exact mapped bytes E9 2F FA FF FF: jmp 0x58768aef
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1770h
        ; Exact mapped bytes 0F 8F 80 00 00 00: jg 0x5876914b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 58: je 0x58769125
        __asm _emit 0x74
        __asm _emit 0x58
        sub eax, 11f9h
        ; Exact mapped bytes 74 47: je 0x5876911b
        __asm _emit 0x74
        __asm _emit 0x47
        sub eax, 1
        ; Exact mapped bytes 74 38: je 0x58769111
        __asm _emit 0x74
        __asm _emit 0x38
        sub eax, 72h
        ; Exact mapped bytes 0F 85 F6 05 00 00: jne 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898e420h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F6 B4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e3d8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 14 9B FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C7 05 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898e398h
        ; Exact mapped bytes E9 8F F9 FF FF: jmp 0x58768aaa
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e35ch
        ; Exact mapped bytes E9 35 FB FF FF: jmp 0x58768c5a
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e33ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B5 B4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 45 A2 58: mov eax, dword ptr [0x58a245f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E9 8D 05 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1b59h
        ; Exact mapped bytes 0F 8F 6B 02 00 00: jg 0x587693c1
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 36 02 00 00: je 0x58769392
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ffffe88fh
        cmp eax, 1eh
        ; Exact mapped bytes 0F 87 6E 05 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 C8 A4 76 58: jmp dword ptr [eax*4 + 0x5876a4c8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xa4
        __asm _emit 0x76
        __asm _emit 0x58
        push 5898e31ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 69 B4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F0 45 A2 58: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E9 40 05 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898e2f8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 42 B4 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F0 45 A2 58: mov edx, dword ptr [0x58a245f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 19 05 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898e2d4h
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x5876912a
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e2a0h
        ; Exact mapped bytes E9 87 FA FF FF: jmp 0x58768c5a
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898ebb4h
        ; Exact mapped bytes E9 12 F9 FF FF: jmp 0x58768aef
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e27ch
        ; Exact mapped bytes EB 92: jmp 0x58769176
        __asm _emit 0xeb
        __asm _emit 0x92
        push 5898e24ch
        ; Exact mapped bytes EB B2: jmp 0x5876919d
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 5898e22ch
        ; Exact mapped bytes E9 35 FF FF FF: jmp 0x5876912a
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 5898e210h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1208h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1200h]
        push edx
        ; Exact mapped bytes E9 11 FF FF FF: jmp 0x58769134
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e1e4h
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x58769176
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e1b4h
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x5876919d
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e18ch
        ; Exact mapped bytes E9 E9 FE FF FF: jmp 0x5876912a
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e164h
        ; Exact mapped bytes E9 2B FF FF FF: jmp 0x58769176
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e138h
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x5876919d
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e108h
        ; Exact mapped bytes E9 CB FE FF FF: jmp 0x5876912a
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e0d8h
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x58769176
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e0ach
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x5876919d
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e07ch
        ; Exact mapped bytes E9 AD FE FF FF: jmp 0x5876912a
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e05ch
        ; Exact mapped bytes E9 EF FE FF FF: jmp 0x58769176
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e03ch
        ; Exact mapped bytes E9 0C FF FF FF: jmp 0x5876919d
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898e01ch
        ; Exact mapped bytes E9 8F FE FF FF: jmp 0x5876912a
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898dfe8h
        ; Exact mapped bytes E9 D1 FE FF FF: jmp 0x58769176
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898dfb4h
        ; Exact mapped bytes E9 18 04 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898df98h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 29 B3 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898df7ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 47 99 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F0 45 A2 58: mov edx, dword ptr [0x58a245f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes E9 EE 03 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898df4ch
        ; Exact mapped bytes E9 36 FE FF FF: jmp 0x5876912a
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898df20h
        ; Exact mapped bytes E9 78 FE FF FF: jmp 0x58769176
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898def4h
        ; Exact mapped bytes E9 95 FE FF FF: jmp 0x5876919d
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push ebp
        push 5898decch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 22e0h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea ecx, [esp + 22d8h]
        push ecx
        ; Exact mapped bytes E9 9B 03 00 00: jmp 0x587696d1
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898de9ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A2 B2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898de6ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 98 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 03 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 5898de40h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 23e0h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 23d8h]
        ; Exact mapped bytes E9 3E 03 00 00: jmp 0x587696d0
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898de14h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 46 B2 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898dde8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 64 98 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 17 03 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ffffd8f0h
        cmp eax, 0ah
        ; Exact mapped bytes 0F 87 09 03 00 00: ja 0x587696d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 44 A5 76 58: jmp dword ptr [eax*4 + 0x5876a544]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xa5
        __asm _emit 0x76
        __asm _emit 0x58
        push 5898dc08h
        push edi
        lea ecx, [esp + 24h]
        ; Exact mapped bytes E8 7B 97 19 00: call 0x58902b60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x97
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 34h]
        sub ecx, dword ptr [esp + 30h]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, 1
        mov dword ptr [esp + 24e4h], ebx
        ; Exact mapped bytes 74 5B: je 0x58769467
        __asm _emit 0x74
        __asm _emit 0x5b
        sub eax, 1
        ; Exact mapped bytes 74 3A: je 0x5876944b
        __asm _emit 0x74
        __asm _emit 0x3a
        sub eax, 1
        ; Exact mapped bytes 75 62: jne 0x58769478
        __asm _emit 0x75
        __asm _emit 0x62
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 11 8C 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8c
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C9 B1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 60 8C 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8c
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E8 97 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 4F 8C 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8c
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 87 98 FF FF: call 0x58762cd0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x58769478
        __asm _emit 0xeb
        __asm _emit 0x2d
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 DC 8B 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8b
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 94 B1 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 2B 8C 19 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8c
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x58769470
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 C0 8B 19 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8b
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A8 97 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 1ch]
        mov dword ptr [esp + 24e4h], 0ffffffffh
        ; Exact mapped bytes E8 24 8F 19 00: call 0x589023b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8f
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E9 47 02 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24f8h]
        mov dword ptr [esi + 0a8h], ecx
        push edi
        lea ecx, [esp + 40h]
        ; Exact mapped bytes E8 28 8B 19 00: call 0x58901fd0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x8b
        __asm _emit 0x19
        __asm _emit 0x00
        push 1ffh
        lea edx, [esp + 4b5h]
        push ebx
        push edx
        mov dword ptr [esp + 24f0h], 1
        mov byte ptr [esp + 4bch], bl
        ; Exact mapped bytes E8 7B 37 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x37
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push ebx
        lea ecx, [esp + 40h]
        ; Exact mapped bytes E8 76 82 19 00: call 0x58901750
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x82
        __asm _emit 0x19
        __asm _emit 0x00
        lea ecx, [esp + 4b0h]
        mov edx, eax
        mov eax, ecx
        mov edi, 200h
        sub edx, eax
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea eax, [edi + 7ffffdfeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5876950b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        cmp al, bl
        ; Exact mapped bytes 74 0A: je 0x5876950b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x587694f0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5876950f
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edi, ebx
        ; Exact mapped bytes 75 01: jne 0x58769510
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        mov byte ptr [ecx], bl
        lea ecx, [esp + 4b0h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 CF B0 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        push 200h
        lea edx, [esp + 4b4h]
        push ebx
        push edx
        ; Exact mapped bytes E8 14 37 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x37
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 1
        lea ecx, [esp + 40h]
        ; Exact mapped bytes E8 0E 82 19 00: call 0x58901750
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x82
        __asm _emit 0x19
        __asm _emit 0x00
        lea ecx, [esp + 4b0h]
        mov edx, eax
        mov eax, ecx
        mov edi, 200h
        sub edx, eax
        lea eax, [edi + 7ffffdfeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5876956f
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        cmp al, bl
        ; Exact mapped bytes 74 0A: je 0x5876956f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58769554
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58769573
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edi, ebx
        ; Exact mapped bytes 75 01: jne 0x58769574
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        lea eax, [esp + 4b0h]
        mov byte ptr [ecx], bl
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        cmp cl, bl
        ; Exact mapped bytes 75 F9: jne 0x58769580
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58769613
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 4b0h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 82 96 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esp + 4b0h]
        push edx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x58769613
        __asm _emit 0x74
        __asm _emit 0x63
        push 200h
        lea eax, [esp + 4b4h]
        push ebx
        push eax
        ; Exact mapped bytes E8 85 36 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push ebp
        lea ecx, [esp + 40h]
        ; Exact mapped bytes E8 80 81 19 00: call 0x58901750
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x81
        __asm _emit 0x19
        __asm _emit 0x00
        lea ecx, [esp + 4b0h]
        mov edx, eax
        mov eax, ecx
        mov edi, 200h
        sub edx, eax
        lea eax, [edi + 7ffffdfeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x587695fd
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        cmp al, bl
        ; Exact mapped bytes 74 0A: je 0x587695fd
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x587695e2
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58769601
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edi, ebx
        ; Exact mapped bytes 75 01: jne 0x58769602
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        mov byte ptr [ecx], bl
        lea ecx, [esp + 4b0h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BD 96 FF FF: call 0x58762cd0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 3ch]
        mov dword ptr [esp + 24e4h], 0ffffffffh
        ; Exact mapped bytes E8 99 80 19 00: call 0x589016c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x80
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x587696d8
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5898ddb8h
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x587696c7
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898dd88h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A2 AF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898dd58h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 95 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 2714h
        ; Exact mapped bytes EB 6F: jmp 0x587696d8
        __asm _emit 0xeb
        __asm _emit 0x6f
        push 5898dd20h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 71 AF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], 2715h
        ; Exact mapped bytes EB 50: jmp 0x587696d8
        __asm _emit 0xeb
        __asm _emit 0x50
        push 5898dcech
        ; Exact mapped bytes EB 38: jmp 0x587696c7
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898dcb4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 49 AF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        push 5898dc7ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 95 FF FF: call 0x58762c20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x587696d8
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 5898dc58h
        ; Exact mapped bytes EB 05: jmp 0x587696c7
        __asm _emit 0xeb
        __asm _emit 0x05
        push 5898dc2ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 18 AF FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 24dch]
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
        mov ecx, dword ptr [esp + 24c4h]
        xor ecx, esp
        ; Exact mapped bytes E8 D8 34 21 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x34
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 24d4h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
