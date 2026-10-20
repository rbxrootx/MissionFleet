// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CC0D .. +0x303 bytes.
extern "C" __declspec(naked) void FUN_0043cc0d_0043CC0D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a5e7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0bch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0c8h]
        mov ecx, 2fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0c8h], ecx
        mov dword ptr [ebp - 0b4h], 0
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 94 0A 00 00: call 0x43d6f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        push 0
        lea eax, [ebp - 0a0h]
        push eax
        ; Exact mapped bytes E8 01 C7 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 8A 42 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 0ach]
        ; Exact mapped bytes E8 78 42 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0b0h]
        push ecx
        lea edx, [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E B3 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 0a4h]
        push eax
        lea ecx, [ebp - 0ach]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 18 B3 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 0c0h]
        push edx
        ; Exact mapped bytes E8 CC 26 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 D7 49 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x49
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EA BA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 A9 42 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CB BA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, 150h
        mov esi, esp
        push eax
        lea ecx, [ebp - 6ch]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AF BA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 0ach]
        ; Exact mapped bytes E8 6E 42 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 BA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ach
        mov esi, esp
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6D BA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        mov byte ptr [ebp - 0eh], dl
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        shr ecx, 4
        and ecx, 0ffh
        mov byte ptr [ebp - 0fh], cl
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 64 45 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x43ce6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 4C 45 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1a4h]
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 45 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1a8h]
        add edx, 1
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD 44 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ecx + 1a8h], edx
        push 0
        push 94h
        lea eax, [ebp - 0a0h]
        push eax
        push 0
        push 2
        push 80018005h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 C9 44 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 D0 A3 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], 1
        push 0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 10h]
        shr eax, 4
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ach
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov ecx, 5d3278h
        ; Exact mapped bytes E8 D4 35 01 00: call 0x450488
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], 1
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 0ach]
        ; Exact mapped bytes E8 73 09 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 61 09 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 0c8h
        cmp ebp, esp
        ; Exact mapped bytes E8 D6 B8 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
