// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C586 .. +0x3D0 bytes.
extern "C" __declspec(naked) void FUN_0043c586_0043C586() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a5a9h
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
        sub esp, 198h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1a4h]
        mov ecx, 66h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 1a4h], ecx
        mov dword ptr [ebp - 194h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 35 49 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x49
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 190h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB B9 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 69 10 00 00: call 0x43d660
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 17ch
        push 0
        lea edx, [ebp - 18ch]
        push edx
        ; Exact mapped bytes E8 66 CD 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 19ch]
        push eax
        ; Exact mapped bytes E8 7E 2D 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 89 50 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        push edx
        lea eax, [ebp - 170h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9B C1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5D 49 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x49
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 158h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7C C1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ch
        mov esi, esp
        push edx
        lea eax, [ebp - 0d8h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 C1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 328h
        mov esi, esp
        push ecx
        lea edx, [ebp - 0c0h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 35 C1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 20h]
        sub eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 2A: mov ax, word ptr [edx + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x2a
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 13 74 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push eax
        lea ecx, [ebp - 98h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F1 C0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 32: mov ax, word ptr [edx + 0x32]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 45 88: mov word ptr [ebp - 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x88
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 51 2C: mov dx, word ptr [ecx + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x2c
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D8 73 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push eax
        lea eax, [ebp - 76h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B9 C0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 51 34: mov dx, word ptr [ecx + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x34
        ; Exact mapped bytes 66 89 55 AA: mov word ptr [ebp - 0x56], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xaa
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 48 30: mov cx, word ptr [eax + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x30
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A0 73 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 81 C0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 48 38: mov cx, word ptr [eax + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x38
        ; Exact mapped bytes 66 89 4D CC: mov word ptr [ebp - 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 2E: mov ax, word ptr [edx + 0x2e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x2e
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 69 73 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push eax
        lea ecx, [ebp - 32h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4A C0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 36: mov ax, word ptr [edx + 0x36]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x36
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 0e4h], edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 4B FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x43c84b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
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
        ; Exact mapped bytes E8 4A 4B FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1ach]
        add ecx, 1
        mov dword ptr [ebp - 198h], ecx
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 0e0h], edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 1E 4B FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 198h]
        mov dword ptr [eax + 1ach], ecx
        push 0
        push 17ch
        lea edx, [ebp - 18ch]
        push edx
        push 0
        push 2
        push 80018004h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 EA 4A FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 F1 A9 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 194h], 1
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 48 36: mov cx, word ptr [eax + 0x36]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x36
        push ecx
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 2E: mov ax, word ptr [edx + 0x2e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x2e
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 80 72 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 51 38: mov dx, word ptr [ecx + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x38
        push edx
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 48 30: mov cx, word ptr [eax + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x30
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5E 72 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 34: mov ax, word ptr [edx + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x34
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 51 2C: mov dx, word ptr [ecx + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x2c
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3C 72 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 48 32: mov cx, word ptr [eax + 0x32]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x32
        push ecx
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 42 2A: mov ax, word ptr [edx + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x2a
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1B 72 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 328h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ch
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        sub ecx, dword ptr [ebp + 1ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B3 46 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        push eax
        mov ecx, 5d3b48h
        ; Exact mapped bytes E8 73 69 01 00: call 0x45327f
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 194h], 1
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 1a0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1B 0F 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1a0h]
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
        add esp, 1a4h
        cmp ebp, esp
        ; Exact mapped bytes E8 90 BE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
