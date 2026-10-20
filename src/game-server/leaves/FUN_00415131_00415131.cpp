// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415131 .. +0xC67 bytes.
extern "C" __declspec(naked) void FUN_00415131_00415131() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579bb6h
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
        sub esp, 5f4h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 600h]
        mov ecx, 17dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 5dch], ecx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x415181
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F3 0B 00 00: jmp 0x415d74
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 0F 85 C2 0B 00 00: jne 0x415d57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 5e0h], edx
        cmp dword ptr [ebp - 5e0h], 8001dd01h
        ; Exact mapped bytes 77 3B: ja 0x4151e8
        __asm _emit 0x77
        __asm _emit 0x3b
        cmp dword ptr [ebp - 5e0h], 8001dd01h
        ; Exact mapped bytes 0F 84 B0 01 00 00: je 0x41536d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5e0h]
        add eax, 7ffe4fffh
        mov dword ptr [ebp - 5e0h], eax
        cmp dword ptr [ebp - 5e0h], 6
        ; Exact mapped bytes 0F 87 7A 0B 00 00: ja 0x415d55
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5e0h]
        ; Exact mapped bytes FF 24 8D 98 5D 41 00: jmp dword ptr [ecx*4 + 0x415d98]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x5d
        __asm _emit 0x41
        __asm _emit 0x00
        cmp dword ptr [ebp - 5e0h], 8001dd02h
        ; Exact mapped bytes 0F 84 F8 01 00 00: je 0x4153f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 0B 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 02 BD 11 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 10h
        push 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 57 41 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 10h], 10h
        ; Exact mapped bytes 72 3B: jb 0x415260
        __asm _emit 0x72
        __asm _emit 0x3b
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002b001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 1F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 5bch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F7 85 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5bch]
        ; Exact mapped bytes E9 19 0B 00 00: jmp 0x415d79
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        add edx, 1
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5F 35 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 0dh], 0
        mov esi, esp
        push 5a0fech
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 35 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 5D: jne 0x4152fe
        __asm _emit 0x75
        __asm _emit 0x5d
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8C 46 03 00: call 0x449937
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        push 5a0ff8h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 45 88 0D 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 5c0h], esp
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 B0 81 0D 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 5e4h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 27 47 02 00: call 0x439a0c
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8002b001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 1F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 5B: jmp 0x415359
        __asm _emit 0xeb
        __asm _emit 0x5b
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F 46 03 00: call 0x449937
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        push 5a1008h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E8 87 0D 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 5c4h], esp
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 53 81 0D 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 5e8h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 CA 46 02 00: call 0x439a0c
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002b001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 1E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1e
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E4 84 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 E8 09 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 5a1018h
        push 5d5a20h
        ; Exact mapped bytes E8 BD 1D 04 00: call 0x45714e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cc8h]
        mov edx, dword ptr [ecx + 0ca0h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov edx, dword ptr [ebp - 24h]
        shl edx, 2
        push edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cc8h]
        mov edx, dword ptr [ecx + 0ca0h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 0
        push 8002dd01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 1E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 65 09 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cc8h]
        mov edx, dword ptr [ecx + 0ca0h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], 4
        ; Exact mapped bytes 0F 85 0E 02 00 00: jne 0x415634
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        push 4
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 E4 3B 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 5c8h], ecx
        mov dword ptr [ebp - 5cch], 0
        lea edx, [ebp - 5c8h]
        push edx
        lea eax, [ebp - 5cch]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 27 0A 00 00: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 C0 01 00 00: je 0x415634
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 8B BA 11 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea edx, [ebp - 10ch]
        push edx
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 2B 07 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0x00
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 8F 09 00 00: call 0x415e30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0d4h
        push 0
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 BC 3E 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 EB BA 11 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea edx, [ebp - 0d4h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0A 33 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        lea eax, [ebp - 5d0h]
        push eax
        ; Exact mapped bytes E8 B5 9E 0B 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x9e
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 C0 C1 11 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x11
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40cc8h]
        mov eax, dword ptr [edx + 0ca0h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2ch]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        lea ecx, [eax + edx + 328h]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        ; Exact mapped bytes E8 FB 3A 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cc8h]
        mov edx, dword ptr [ecx + 0ca0h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40cc8h]
        mov eax, dword ptr [edx + 0ca0h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + eax*4]
        add ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40cc8h]
        mov eax, dword ptr [edx + 0ca0h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + eax*4]
        add ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40cc8h]
        mov edx, dword ptr [eax + 0ca0h]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [eax + 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + eax*4], ecx
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8002dd02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 1C 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40cd8h]
        cmp dword ptr [edx + 0fd0h], 0
        ; Exact mapped bytes 74 2E: je 0x415620
        __asm _emit 0x74
        __asm _emit 0x2e
        push 0
        push 0d4h
        lea eax, [ebp - 108h]
        push eax
        push 0
        push 1
        push 80018008h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40cd8h]
        mov ecx, dword ptr [edx + 0fd0h]
        ; Exact mapped bytes E8 12 1C 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 1D 82 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 07 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002dd02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 1B 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 07 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 42 03 00: call 0x449957
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 F8 01 00 00: jne 0x415859
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], 0
        mov dword ptr [ebp - 110h], 1
        ; Exact mapped bytes EB 0F: jmp 0x415686
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 19h
        ; Exact mapped bytes 0F 8F C6 01 00 00: jg 0x415859
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], 1
        ; Exact mapped bytes EB 0F: jmp 0x4156ae
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1
        mov dword ptr [ebp - 118h], ecx
        cmp dword ptr [ebp - 118h], 19h
        ; Exact mapped bytes 0F 8F 99 01 00 00: jg 0x415854
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 110h]
        sub edx, 1
        shl edx, 8
        or edx, dword ptr [ebp - 118h]
        ; Exact mapped bytes 66 89 95 E4 FE FF FF: mov word ptr [ebp - 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes 66 8B 8D E4 FE FF FF: mov cx, word ptr [ebp - 0x11c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov edx, dword ptr [ebp - 5dch]
        mov eax, dword ptr [edx + 0c7ch]
        mov ecx, dword ptr [eax + 40cach]
        add ecx, 4bcch
        ; Exact mapped bytes E8 92 37 0D 00: call 0x4e8e92
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x41584f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 0cb0h
        ; Exact mapped bytes E8 61 6B 06 00: call 0x47c286
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 2
        lea edx, [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 0cf0h
        ; Exact mapped bytes E8 42 6B 06 00: call 0x47c286
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea eax, [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 0d30h
        ; Exact mapped bytes E8 26 6B 06 00: call 0x47c286
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 128h]
        push ecx
        lea edx, [ebp - 124h]
        push edx
        lea eax, [ebp - 12ch]
        push eax
        lea ecx, [ebp - 5d4h]
        push ecx
        ; Exact mapped bytes E8 94 84 0D 00: call 0x4edc19
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 5ech], eax
        mov edx, dword ptr [ebp - 5ech]
        mov dword ptr [ebp - 5f0h], edx
        mov byte ptr [ebp - 4], 5
        mov eax, dword ptr [ebp - 5f0h]
        push eax
        lea ecx, [ebp - 120h]
        push ecx
        ; Exact mapped bytes E8 6B 84 0D 00: call 0x4edc19
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 5d4h]
        ; Exact mapped bytes E8 8F 80 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0d78h]
        add eax, 20h
        push eax
        ; Exact mapped bytes E8 FC 3B 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0d78h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        push 8002b005h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 1A 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], 0
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 2D 80 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 1E 80 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 0F 80 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 FD 7F 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7f
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 4B FE FF FF: jmp 0x41569f
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1E FE FF FF: jmp 0x415677
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 04 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 40 03 00: call 0x449957
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x41591a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 134h]
        sub eax, 1
        shl eax, 8
        or eax, dword ptr [ebp - 130h]
        ; Exact mapped bytes 66 89 85 C4 FE FF FF: mov word ptr [ebp - 0x13c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], 0
        lea ecx, [ebp - 138h]
        push ecx
        ; Exact mapped bytes 66 8B 95 C4 FE FF FF: mov dx, word ptr [ebp - 0x13c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edx
        mov eax, dword ptr [ebp - 5dch]
        mov ecx, dword ptr [eax + 0c7ch]
        mov ecx, dword ptr [ecx + 40cach]
        add ecx, 4bcch
        ; Exact mapped bytes E8 BC 35 0D 00: call 0x4e8e92
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x35
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 75 19: jne 0x4158f8
        __asm _emit 0x75
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002b008h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C 19 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x41591a
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 C7 45 07 00: call 0x489eca
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002b007h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 19 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 36 04 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 40 03 00: call 0x449957
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A7 01 00 00: jne 0x415ad7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 140h], edx
        mov eax, dword ptr [ebp - 144h]
        sub eax, 1
        shl eax, 8
        or eax, dword ptr [ebp - 140h]
        ; Exact mapped bytes 66 89 85 B4 FE FF FF: mov word ptr [ebp - 0x14c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], 0
        lea ecx, [ebp - 148h]
        push ecx
        ; Exact mapped bytes 66 8B 95 B4 FE FF FF: mov dx, word ptr [ebp - 0x14c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edx
        mov eax, dword ptr [ebp - 5dch]
        mov ecx, dword ptr [eax + 0c7ch]
        mov ecx, dword ptr [ecx + 40cach]
        add ecx, 4bcch
        ; Exact mapped bytes E8 FB 34 0D 00: call 0x4e8e92
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x415ad7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 15ch]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        add ecx, 0cb0h
        ; Exact mapped bytes E8 CA 68 06 00: call 0x47c286
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 8
        lea eax, [ebp - 154h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        add ecx, 0cf0h
        ; Exact mapped bytes E8 AB 68 06 00: call 0x47c286
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 158h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        add ecx, 0d30h
        ; Exact mapped bytes E8 8F 68 06 00: call 0x47c286
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        lea edx, [ebp - 158h]
        push edx
        lea eax, [ebp - 154h]
        push eax
        lea ecx, [ebp - 15ch]
        push ecx
        lea edx, [ebp - 5d8h]
        push edx
        ; Exact mapped bytes E8 FD 81 0D 00: call 0x4edc19
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 5f4h], eax
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [ebp - 5f8h], eax
        mov byte ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 5f8h]
        push ecx
        lea edx, [ebp - 150h]
        push edx
        ; Exact mapped bytes E8 D4 81 0D 00: call 0x4edc19
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0dh
        lea ecx, [ebp - 5d8h]
        ; Exact mapped bytes E8 F8 7D 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7d
        __asm _emit 0x0d
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 150h]
        ; Exact mapped bytes E8 FF B4 11 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 150h]
        ; Exact mapped bytes E8 F0 B4 11 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 150h]
        ; Exact mapped bytes E8 7C 85 0D 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 8002b006h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 17 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x17
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], 0
        mov byte ptr [ebp - 4], 0ah
        lea ecx, [ebp - 150h]
        ; Exact mapped bytes E8 A5 7D 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 96 7D 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 154h]
        ; Exact mapped bytes E8 87 7D 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x7d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 75 7D 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 79 02 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 3E 03 00: call 0x449957
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 49 01 00 00: jne 0x415c36
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 59ch]
        ; Exact mapped bytes E8 0F B4 11 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0eh
        mov dword ptr [ebp - 594h], 20000h
        mov dword ptr [ebp - 598h], 10000h
        mov esi, esp
        push 5a1058h
        lea eax, [ebp - 590h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 AF 2C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 5d2f28h
        lea ecx, [ebp - 578h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 91 2C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, 0ch
        lea esi, [ebp - 590h]
        lea edi, [ebp - 560h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5a105ch
        lea eax, [ebp - 59ch]
        push eax
        ; Exact mapped bytes E8 E5 8D 0B 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 59ch]
        ; Exact mapped bytes E8 DB B3 11 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x00
        add eax, 1
        push eax
        push 0
        lea ecx, [ebp - 59ch]
        ; Exact mapped bytes E8 62 84 0D 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 530h]
        push ecx
        ; Exact mapped bytes E8 7D 34 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 5dch]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 69 B7 FE FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 47: je 0x415c0d
        __asm _emit 0x74
        __asm _emit 0x47
        lea ecx, [ebp - 59ch]
        ; Exact mapped bytes E8 8F B3 11 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x00
        add eax, 31h
        push eax
        lea eax, [ebp - 560h]
        push eax
        mov ecx, dword ptr [ebp - 598h]
        push ecx
        mov edx, dword ptr [ebp - 594h]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 FC 3E 07 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 AB E3 FE FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB B0: jmp 0x415bbd
        __asm _emit 0xeb
        __asm _emit 0xb0
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8002b003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 16 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 59ch]
        ; Exact mapped bytes E8 16 7C 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x415d55
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 3D 03 00: call 0x449957
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x415cee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea eax, [ebp - 5b4h]
        push eax
        ; Exact mapped bytes E8 14 37 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        add edx, 1
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 5b4h]
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D 2B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 59dh], 0
        lea edx, [ebp - 5b4h]
        push edx
        mov eax, dword ptr [ebp - 5dch]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 0A 94 02 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 5b8h], eax
        cmp dword ptr [ebp - 5b8h], 0
        ; Exact mapped bytes 74 24: je 0x415cd5
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 5b8h]
        ; Exact mapped bytes E8 C2 19 03 00: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8002b004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 15 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x15
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x415cec
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002b004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 15 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x15
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x415d05
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002b004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 15 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x15
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 4E: jmp 0x415d55
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 3C 03 00: call 0x449957
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x415d55
        __asm _emit 0x75
        __asm _emit 0x41
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 DF F7 11 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 5fch], eax
        mov ecx, dword ptr [ebp - 5fch]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 5fch]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 9F 2A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [eax + 400h]
        push eax
        push 8002b002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD 14 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x415d74
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8002h
        ; Exact mapped bytes 75 0C: jne 0x415d74
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 600h], ecx
        mov eax, 1
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
        add esp, 600h
        cmp ebp, esp
        ; Exact mapped bytes E8 4E 2A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
