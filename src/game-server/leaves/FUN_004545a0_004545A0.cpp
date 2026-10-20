// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004545A0 .. +0x42E bytes.
extern "C" __declspec(naked) void FUN_004545a0_004545A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 AF FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 5C 24 5E 00: call dword ptr [0x5e245c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 42 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4545f0
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b81dch
        ; Exact mapped bytes E8 91 92 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 FB 94 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b81f8h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 43 99 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 89 C9 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 41 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 BC 94 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8208h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 04 99 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 4A C9 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 72 41 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 7D 94 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8224h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 C5 98 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 0B C9 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 33 41 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 3E 94 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8240h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 86 98 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 CC C8 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 40 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 FF 93 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8268h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 47 98 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 8D C8 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B5 40 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 C0 93 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8288h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 08 98 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 4E C8 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 76 40 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 81 93 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b82a4h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 C9 97 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 0F C8 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 37 40 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 42 93 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b82c8h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 8A 97 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 D0 C7 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F8 3F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 03 93 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b82e4h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 4B 97 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 91 C7 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B9 3F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 C4 92 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8300h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 0C 97 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 52 C7 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7A 3F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 85 92 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8320h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 CD 96 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 13 C7 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3B 3F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 46 92 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8348h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 8E 96 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 D4 C6 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FC 3E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 07 92 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b836ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 4F 96 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 95 C6 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BD 3E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 500h], 454bd4h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 504h], 454dedh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 508h], 455006h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50ch], 45521fh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 510h], 455438h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 514h], 455651h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 518h], 45586ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 51ch], 455a83h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 520h], 455c9ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 524h], 455eb5h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 528h], 4560ceh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 52ch], 4562e7h
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 16 3E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
