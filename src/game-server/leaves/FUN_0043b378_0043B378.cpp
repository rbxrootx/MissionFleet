// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043B378 .. +0x2CF bytes.
extern "C" __declspec(naked) void FUN_0043b378_0043B378() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a508h
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
        sub esp, 10ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 118h]
        mov ecx, 43h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 118h], ecx
        mov dword ptr [ebp - 108h], 0
        lea ecx, [ebp - 100h]
        ; Exact mapped bytes E8 40 5B 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 104h]
        push eax
        lea ecx, [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 CB 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 B1 21 00 00: call 0x43d5a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f0h
        push 0
        lea edx, [ebp - 0fch]
        push edx
        ; Exact mapped bytes E8 6E DF 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 86 3F 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 91 62 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        push edx
        lea eax, [ebp - 0e0h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 D3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 100h]
        ; Exact mapped bytes E8 62 5B 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 81 D3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0ach
        mov esi, esp
        push edx
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D D3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        and edx, 0fh
        mov byte ptr [ebp - 34h], dl
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        mov byte ptr [ebp - 32h], cl
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        shr eax, 4
        and eax, 0ffh
        mov byte ptr [ebp - 33h], al
        push 18h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 14h
        push ecx
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 5D DB 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xdb
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        push 0ch
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2ch
        push eax
        lea ecx, [ebp - 31h]
        push ecx
        ; Exact mapped bytes E8 48 DB 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdb
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B 5E FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7D: je 0x43b57b
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 5E FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1a8h]
        add edx, 1
        mov dword ptr [ebp - 10ch], edx
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 EE 5D FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx + 1a8h], edx
        push 0
        push 0f0h
        lea eax, [ebp - 0fch]
        push eax
        push 0
        push 1
        push 80018003h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 BA 5D FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 C1 BC 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], 1
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2ch
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        shr ecx, 4
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        push eax
        lea ecx, [ebp - 100h]
        ; Exact mapped bytes E8 C5 59 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x59
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        push edx
        mov ecx, 5d36f8h
        ; Exact mapped bytes E8 22 71 01 00: call 0x45271c
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], 1
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 114h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 100h]
        ; Exact mapped bytes E8 2A 22 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
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
        add esp, 118h
        cmp ebp, esp
        ; Exact mapped bytes E8 9F D1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd1
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
