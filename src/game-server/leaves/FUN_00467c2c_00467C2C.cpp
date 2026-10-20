// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467C2C .. +0x2AC bytes.
extern "C" __declspec(naked) void FUN_00467c2c_00467C2C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bbf2h
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
        sub esp, 0ech
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0f8h]
        mov ecx, 3bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0f8h], ecx
        mov dword ptr [ebp - 0e8h], 0
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 8C 92 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0e4h]
        push eax
        lea ecx, [ebp - 0e0h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 03 02 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 2D 59 FD FF: call 0x43d5d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0d0h
        push 0
        lea edx, [ebp - 0dch]
        push edx
        ; Exact mapped bytes E8 BA 16 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 0f0h]
        push eax
        ; Exact mapped bytes E8 D2 76 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 DD 99 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
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
        ; Exact mapped bytes E8 EF 0A 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 AE 92 0C 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea eax, [ebp - 0a8h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CD 0A 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ach
        mov esi, esp
        push ecx
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A9 0A 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov al, byte ptr [ebp + 10h]
        mov byte ptr [ebp - 14h], al
        mov cl, byte ptr [ebp + 14h]
        mov byte ptr [ebp - 13h], cl
        mov dl, byte ptr [ebp + 18h]
        mov byte ptr [ebp - 12h], dl
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        mov byte ptr [ebp - 11h], cl
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        shr eax, 4
        and eax, 0ffh
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        mov byte ptr [ebp - 0fh], dl
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 89 95 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x467e2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 6E 95 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1a8h]
        add eax, 1
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 42 95 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [eax + 1a8h], ecx
        push 0
        push 0d0h
        lea edx, [ebp - 0dch]
        push edx
        push 0
        push 3
        push 80018003h
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 0B 95 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 12 F4 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], 1
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
        mov cl, byte ptr [ebp + 18h]
        push ecx
        mov dl, byte ptr [ebp + 14h]
        push edx
        mov al, byte ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ach
        push ecx
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 34 91 0C 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov ecx, 5d73b0h
        ; Exact mapped bytes E8 0D 46 FF FF: call 0x45c498
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], 1
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 0f4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 99 59 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0f4h]
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
        add esp, 0f8h
        cmp ebp, esp
        ; Exact mapped bytes E8 0E 09 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
