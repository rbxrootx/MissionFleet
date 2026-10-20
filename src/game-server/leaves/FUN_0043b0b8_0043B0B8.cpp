// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043B0B8 .. +0x2C0 bytes.
extern "C" __declspec(naked) void FUN_0043b0b8_0043B0B8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a4f2h
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
        sub esp, 110h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 11ch]
        mov ecx, 44h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 11ch], ecx
        mov dword ptr [ebp - 10ch], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 03 5E 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 108h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 CE 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 47 24 00 00: call 0x43d570
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f4h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 34 E2 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 4C 42 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 57 65 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x65
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        lea edx, [ebp - 0e8h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 69 D6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2B 5E 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea eax, [ebp - 0d0h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4A D6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ach
        mov esi, esp
        push ecx
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 26 D6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        mov al, byte ptr [ebp + 10h]
        mov byte ptr [ebp - 3ch], al
        mov cl, byte ptr [ebp + 14h]
        mov byte ptr [ebp - 3ah], cl
        mov dl, byte ptr [ebp + 18h]
        mov byte ptr [ebp - 3bh], dl
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        mov byte ptr [ebp - 39h], cl
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        mov byte ptr [ebp - 37h], al
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov byte ptr [ebp - 38h], dl
        push 18h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14h
        push eax
        lea ecx, [ebp - 2ah]
        push ecx
        ; Exact mapped bytes E8 14 DE 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xde
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        push 0ch
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2ch
        push edx
        lea eax, [ebp - 36h]
        push eax
        ; Exact mapped bytes E8 FF DD 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdd
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 E2 60 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7D: je 0x43b2c4
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE 60 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1a8h]
        add ecx, 1
        mov dword ptr [ebp - 110h], ecx
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 60 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [eax + 1a8h], ecx
        push 0
        push 0f4h
        lea edx, [ebp - 104h]
        push edx
        push 0
        push 2
        push 80018003h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 60 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 78 BF 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 1
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2ch
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        push ecx
        mov dl, byte ptr [ebp + 14h]
        push edx
        mov al, byte ptr [ebp + 18h]
        push eax
        mov cl, byte ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0ach
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 90 5C 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x5c
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, 5d6f60h
        ; Exact mapped bytes E8 C8 F2 01 00: call 0x45a5f6
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 1
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 118h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F9 24 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 118h]
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
        add esp, 11ch
        cmp ebp, esp
        ; Exact mapped bytes E8 6E D4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
