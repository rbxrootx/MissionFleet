// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C956 .. +0x2B7 bytes.
extern "C" __declspec(naked) void FUN_0043c956_0043C956() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a5c5h
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
        sub esp, 0ach
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0b8h]
        mov ecx, 2bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0b8h], ecx
        mov dword ptr [ebp - 1ch], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 68 45 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 59 45 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 B6 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 05 B6 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 B3 0C 00 00: call 0x43d690
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 8ch
        push 0
        lea ecx, [ebp - 0a8h]
        push ecx
        ; Exact mapped bytes E8 80 C9 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 0b0h]
        push edx
        ; Exact mapped bytes E8 98 29 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 A3 4C 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, 150h
        mov esi, esp
        push eax
        lea ecx, [ebp - 8ch]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B6 BD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 78 45 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea edx, [ebp - 5ch]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A BD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        lea ecx, [ebp - 74h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7E BD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 40 45 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea edx, [ebp - 4ch]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 62 BD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 66 8B 4D 20: mov cx, word ptr [ebp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x20
        ; Exact mapped bytes 66 89 4D D4: mov word ptr [ebp - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 66 8B 55 24: mov dx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x24
        ; Exact mapped bytes 66 89 55 D6: mov word ptr [ebp - 0x2a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 66 8B 4D 14: mov cx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 4D E0: mov word ptr [ebp - 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 66 8B 55 18: mov dx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 55 E2: mov word ptr [ebp - 0x1e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe2
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 45 48 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7A: je 0x43cb5e
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 31 48 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1a4h]
        add eax, 1
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 08 48 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [edx + 1a4h], eax
        push 0
        push 8ch
        lea ecx, [ebp - 0a8h]
        push ecx
        push 0
        push 1
        push 80018005h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 47 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 DB A6 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 66 8B 55 24: mov dx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x24
        push edx
        ; Exact mapped bytes 66 8B 45 18: mov ax, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        push eax
        ; Exact mapped bytes 66 8B 4D 20: mov cx, word ptr [ebp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x20
        push ecx
        ; Exact mapped bytes 66 8B 55 14: mov dx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        push edx
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 24h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 14 44 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 0ch]
        add edx, 150h
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 01 44 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, 5d3278h
        ; Exact mapped bytes E8 CA 36 01 00: call 0x450287
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0b4h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 73 0C 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 64 0C 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b4h]
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
        add esp, 0b8h
        cmp ebp, esp
        ; Exact mapped bytes E8 D9 BB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
