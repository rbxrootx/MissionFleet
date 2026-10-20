// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044275F .. +0x555 bytes.
extern "C" __declspec(naked) void FUN_0044275f_0044275F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aed9h
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
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3A E4 0A 00: call 0x4f0be2
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        push 21h
        ; Exact mapped bytes E8 91 8F 06 00: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4427b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x4427b2
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4427c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4427bf
        __asm _emit 0x75
        __asm _emit 0xf3
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 37 96 0F 00: call 0x53be0d
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x96
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 5A: je 0x442839
        __asm _emit 0x74
        __asm _emit 0x5a
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 20 E7 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 65h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 88 83 0B 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 8C E7 0E 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x44282a
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 800h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 32 89 0F 00: call 0x53b147
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x89
        __asm _emit 0x0f
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 8D E7 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1D 89 0F 00: call 0x53b147
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x89
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 13 B0 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 428h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9C AC 0F 00: call 0x53d4e9
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xac
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 428h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 88 AC 0F 00: call 0x53d4e9
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xac
        __asm _emit 0x0f
        __asm _emit 0x00
        push 5b63cch
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 304h
        ; Exact mapped bytes E8 97 D2 0F 00: call 0x53fb0b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd2
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 304h
        ; Exact mapped bytes E8 D6 CE 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xce
        __asm _emit 0x0f
        __asm _emit 0x00
        push 5b63d0h
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 160h
        ; Exact mapped bytes E8 F3 8B 09 00: call 0x4db48c
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8b
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b63d8h
        push 1
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 160h
        ; Exact mapped bytes E8 DE 8B 09 00: call 0x4db48c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8b
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 160h
        ; Exact mapped bytes E8 CA 8D 09 00: call 0x4db688
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        push 32h
        push 2
        push 5b63e0h
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 E5 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 0fah
        push 1
        push 5b63e4h
        push 1
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 C7 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 2
        push 15eh
        push 0
        push 5b63ech
        push 2
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 A9 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 3
        push 3ch
        push 2
        push 5b63fch
        push 3
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 8E 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 4
        push 3ch
        push 2
        push 5b6404h
        push 4
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 73 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 5
        push 10eh
        push 2
        push 5b6408h
        push 5
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 55 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 6
        push 3ch
        push 2
        push 5b6410h
        push 6
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 3A 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 7
        push 3ch
        push 2
        push 5b6418h
        push 7
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 1F 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 8
        push 3ch
        push 2
        push 5b6420h
        push 8
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 04 1C 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 9
        push 3ch
        push 2
        push 5b642ch
        push 9
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 E9 1B 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 0ah
        push 3ch
        push 2
        push 5b6438h
        push 0ah
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 CE 1B 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 179h
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 37ch
        ; Exact mapped bytes E8 5D B8 09 00: call 0x4de260
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        push 32h
        push 2
        push 5b6440h
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 A0 1B 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 96h
        push 2
        push 5b6444h
        push 1
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 82 1B 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 2
        push 96h
        push 2
        push 5b6448h
        push 2
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 64 1B 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 3
        push 64h
        push 2
        push 5b6454h
        push 3
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 49 1B 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 4
        push 96h
        push 2
        push 5b6460h
        push 4
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 2B 1B 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 5
        push 64h
        push 2
        push 5b646ch
        push 5
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 10 1B 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 6
        push 64h
        push 2
        push 5b6474h
        push 6
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 F5 1A 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        push 7
        push 0c8h
        push 2
        push 5b647ch
        push 7
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 D7 1A 09 00: call 0x4d45be
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        push 179h
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 66 B7 09 00: call 0x4de260
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 340h
        ; Exact mapped bytes E8 25 C8 0A 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FD 07 00 00: call 0x443313
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 4
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 3C 29 5E 00: call dword ptr [0x5e293c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B3 5C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 58: je 0x442b8e
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        push edx
        push 5b6488h
        mov eax, dword ptr [ebp - 30h]
        add eax, 148h
        push eax
        ; Exact mapped bytes E8 0D BE 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 2c8h
        ; Exact mapped bytes E8 4F D0 0F 00: call 0x53fbb7
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 28ch
        ; Exact mapped bytes E8 39 D0 0F 00: call 0x53fbb7
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 28ch
        ; Exact mapped bytes E8 CC CB 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcb
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        push 1388h
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2E 9E 0F 00: call 0x53c9cd
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9e
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 27 37 00 00: call 0x4462d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5D 37 00 00: call 0x446310
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 93 37 00 00: call 0x446350
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B9 5A FF FF: call 0x438680
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AF 96 FC FF: call 0x40c280
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, esp
        push 1
        ; Exact mapped bytes FF 15 E0 28 5E 00: call dword ptr [0x5e28e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FE 5B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push -14h
        ; Exact mapped bytes E8 15 2A 0F 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A 8F 0F 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E0 5B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        or edx, 8
        mov dword ptr [ebp - 10h], edx
        mov esi, esp
        mov eax, dword ptr [ebp - 10h]
        push eax
        push -14h
        ; Exact mapped bytes E8 E7 29 0F 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x29
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2C 8F 0F 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B2 5B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        push 1
        push 85h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9A 8F 0F 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x00
        push 5b648ch
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 82 C3 0A 00: call 0x4eefce
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc3
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b64a4h
        push 3fah
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 8B BF 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b64b8h
        push 445h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 79 BF 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b64c4h
        push 44ah
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 67 BF 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b64d0h
        push 407h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 55 BF 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
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
        pop ebx
        add esp, 30h
        cmp ebp, esp
        ; Exact mapped bytes E8 30 5B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
