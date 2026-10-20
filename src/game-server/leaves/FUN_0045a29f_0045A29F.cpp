// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A29F .. +0x357 bytes.
extern "C" __declspec(naked) void FUN_0045a29f_0045A29F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b993h
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
        ; Exact mapped bytes E8 9F 79 FE FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x45a2ef
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 ED 02 00 00: jmp 0x45a5dc
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 F6 34 00 00: call 0x45d7f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 00 6C 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6c
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
        push 5b9784h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 2C 46 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b97a8h
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 440h
        ; Exact mapped bytes E8 CA 33 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5C 6C 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6c
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 440h
        ; Exact mapped bytes E8 E3 33 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x33
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
        ; Exact mapped bytes E8 EF 33 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x33
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
        ; Exact mapped bytes E8 51 E4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 29 02 00 00: je 0x45a5c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ah
        push 0dh
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 7A: mov ax, word ptr [edx + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x7a
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 78: mov dx, word ptr [ecx + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x78
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 76: mov cx, word ptr [eax + 0x76]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x76
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 74: mov ax, word ptr [edx + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x74
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 72: mov dx, word ptr [ecx + 0x72]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x72
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 70: mov cx, word ptr [eax + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x70
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 6E: mov ax, word ptr [edx + 0x6e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6e
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 6C: mov dx, word ptr [ecx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x6c
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 6A: mov cx, word ptr [eax + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x6a
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 68: mov ax, word ptr [edx + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x68
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 66: mov dx, word ptr [ecx + 0x66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x66
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 64: mov cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x64
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 63: movsx eax, byte ptr [edx + 0x63]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x63
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 62: movsx edx, byte ptr [ecx + 0x62]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x62
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 61: movsx ecx, byte ptr [eax + 0x61]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x61
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 60: movsx eax, byte ptr [edx + 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x60
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 5F: movsx edx, byte ptr [ecx + 0x5f]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x5f
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 5E: movsx ecx, byte ptr [eax + 0x5e]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x5e
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 5D: movsx eax, byte ptr [edx + 0x5d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x5d
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 5C: movsx edx, byte ptr [ecx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x5c
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 5B: movsx ecx, byte ptr [eax + 0x5b]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x5b
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 5A: movsx eax, byte ptr [edx + 0x5a]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x5a
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 59: movsx edx, byte ptr [ecx + 0x59]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x59
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 58: movsx ecx, byte ptr [eax + 0x58]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 54h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov dl, byte ptr [ecx + 52h]
        push edx
        ; Exact mapped bytes E8 A3 31 00 00: call 0x45d630
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x31
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
        ; Exact mapped bytes E8 5A 31 00 00: call 0x45d600
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov dl, byte ptr [ecx + 4eh]
        push edx
        ; Exact mapped bytes E8 7A 31 00 00: call 0x45d630
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x31
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
        ; Exact mapped bytes E8 31 31 00 00: call 0x45d600
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x31
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
        push 5b97c0h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0b0h
        cmp esi, esp
        ; Exact mapped bytes E8 B2 E2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe2
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
        ; Exact mapped bytes E8 99 E2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe2
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
        ; Exact mapped bytes E8 7D E2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe2
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
        ; Exact mapped bytes E8 66 E2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x45a584
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x45a595
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B9 32 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x45a5dc
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
        ; Exact mapped bytes E8 38 E2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 9D 32 00 00: call 0x45d850
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 47 2E 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 77 50 FF FF: call 0x44f644
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 70 32 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x32
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
        ; Exact mapped bytes E8 EE E1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
