// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439E01 .. +0x3A3 bytes.
extern "C" __declspec(naked) void FUN_00439e01_00439E01() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a453h
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
        mov eax, 1c94h
        ; Exact mapped bytes E8 9D F9 06 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1ca0h]
        mov ecx, 725h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 1ca0h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 3C 03 00 00: je 0x43a185
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 D8 00 00: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1c90h], eax
        lea ecx, [ebp - 1c88h]
        ; Exact mapped bytes E8 9B 70 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 1c8ch]
        push edx
        lea eax, [ebp - 1c88h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E E1 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 1c84h]
        ; Exact mapped bytes E8 2C 35 00 00: call 0x43d3c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        push 1c78h
        push 0
        lea ecx, [ebp - 1c84h]
        push ecx
        ; Exact mapped bytes E8 C9 F4 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 1c9ch]
        push edx
        ; Exact mapped bytes E8 E1 54 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 1c84h]
        ; Exact mapped bytes E8 EC 77 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x77
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        lea ecx, [ebp - 1c68h]
        push ecx
        ; Exact mapped bytes E8 69 FF 06 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 1c88h]
        ; Exact mapped bytes E8 C5 70 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 1c50h]
        push edx
        ; Exact mapped bytes E8 4E FF 06 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 1c90h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 66 89 8D 30 E4 FF FF: mov word ptr [ebp - 0x1bd0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        mov eax, dword ptr [eax + edx + 16be4h]
        mov dword ptr [ebp - 1bcch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 1bc8h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 1bc4h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 1bc0h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 1bbch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 1bb8h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 144h]
        mov dword ptr [ebp - 1bb4h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 1bb0h], edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 1bdch], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C 73 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 B2 01 00 00: je 0x43a173
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 A6 96 FC FF: call 0x403672
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1bd8h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 43 73 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1bch]
        add ecx, 1
        mov dword ptr [ebp - 1c94h], ecx
        mov edx, dword ptr [ebp - 1c94h]
        mov dword ptr [ebp - 1bd4h], edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 73 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 1c94h]
        mov dword ptr [eax + 1bch], ecx
        mov dword ptr [ebp - 1c98h], 0
        ; Exact mapped bytes EB 0F: jmp 0x43a036
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1c98h]
        add edx, 1
        mov dword ptr [ebp - 1c98h], edx
        cmp dword ptr [ebp - 1c98h], 20h
        ; Exact mapped bytes 7D 38: jge 0x43a077
        __asm _emit 0x7d
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 1c98h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 350h]
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x43a075
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 1c98h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 1bd4h]
        mov dword ptr [ecx + eax + 3e0h], edx
        ; Exact mapped bytes EB B0: jmp 0x43a027
        __asm _emit 0xeb
        __asm _emit 0xb0
        push 1a80h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 334h
        push eax
        lea ecx, [ebp - 1bach]
        push ecx
        ; Exact mapped bytes E8 8F EF 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        push 1a80h
        push 0
        mov edx, dword ptr [ebp + 0ch]
        add edx, 334h
        push edx
        ; Exact mapped bytes E8 C6 F2 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        push 0bch
        push 0
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1dc0h
        push eax
        ; Exact mapped bytes E8 AE F2 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 1f24h], 0
        ; Exact mapped bytes 74 6D: je 0x43a13e
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 1bd4h]
        mov dword ptr [edx + 1f28h], eax
        mov esi, esp
        lea ecx, [ebp - 1c68h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e98h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E0 E6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 1c50h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1eb0h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C0 E6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        push 120h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e7ch
        push edx
        lea eax, [ebp - 12ch]
        push eax
        ; Exact mapped bytes E8 E5 EE 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F0 DF 02 00: call 0x468136
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 1c78h
        lea ecx, [ebp - 1c84h]
        push ecx
        push 0
        push 3
        push 80018002h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 B8 71 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 BF D0 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1c88h]
        ; Exact mapped bytes E8 C7 36 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
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
        add esp, 1ca0h
        cmp ebp, esp
        ; Exact mapped bytes E8 42 E6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
