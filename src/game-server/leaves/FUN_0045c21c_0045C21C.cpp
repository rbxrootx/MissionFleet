// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C21C .. +0x27C bytes.
extern "C" __declspec(naked) void FUN_0045c21c_0045C21C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b9dbh
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
        sub esp, 18h
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 22 5A FE FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x45c26c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x45c47e
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 79 15 00 00: call 0x45d7f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 83 4C 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        push eax
        push 5ba3a4h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 AF 26 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x26
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5ba3c4h
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 440h
        ; Exact mapped bytes E8 4D 14 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DF 4C 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 440h
        ; Exact mapped bytes E8 66 14 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 40000000h
        push 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 440h
        ; Exact mapped bytes E8 72 14 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D4 C4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x45c467
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ah
        push 0dh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 54h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov dl, byte ptr [ecx + 52h]
        push edx
        ; Exact mapped bytes E8 FE 12 00 00: call 0x45d630
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 51h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov al, byte ptr [edx + 50h]
        push eax
        ; Exact mapped bytes E8 B5 12 00 00: call 0x45d600
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov dl, byte ptr [ecx + 4eh]
        push edx
        ; Exact mapped bytes E8 D5 12 00 00: call 0x45d630
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 4dh]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov al, byte ptr [edx + 4ch]
        push eax
        ; Exact mapped bytes E8 8C 12 00 00: call 0x45d600
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 38h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 28h
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 14h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        push eax
        push 5ba3d8h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 50h
        cmp esi, esp
        ; Exact mapped bytes E8 10 C4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F7 C3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 1ch]
        push edx
        mov edi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 DB C3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C4 C3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x45c426
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x45c437
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 17 14 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x45c47e
        __asm _emit 0xeb
        __asm _emit 0x47
        mov esi, esp
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 96 C3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 FB 13 00 00: call 0x45d850
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 A5 0F 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D5 31 FF FF: call 0x44f644
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CE 13 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x13
        __asm _emit 0x09
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
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 4C C3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
