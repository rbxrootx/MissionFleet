// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586894E0 .. +0x343 bytes.
extern "C" __declspec(naked) void FUN_586894e0_586894E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 28 03 00 00: jne 0x5868981b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 5B FF FF: call 0x5867f030
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes 75 6A: jne 0x58689577
        __asm _emit 0x75
        __asm _emit 0x6a
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 32: je 0x58689545
        __asm _emit 0x74
        __asm _emit 0x32
        push 40000000h
        push 80h
        push 0ah
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 DC F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 76 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0ah
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DE 7E EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58689572
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 0
        push 80h
        push 0ah
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 DC F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 76 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 29h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AF 7E EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A4 02 00 00: jmp 0x5868981b
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 100h]
        ; Exact mapped bytes 75 6A: jne 0x586895ef
        __asm _emit 0x75
        __asm _emit 0x6a
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 32: je 0x586895bd
        __asm _emit 0x74
        __asm _emit 0x32
        push 40000000h
        push 100h
        push 0bh
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE DB F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 76 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0bh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 66 7E EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586895ea
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 0
        push 100h
        push 0ah
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F DB F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 76 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 2ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 37 7E EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2C 02 00 00: jmp 0x5868981b
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 104h]
        ; Exact mapped bytes 75 6A: jne 0x58689667
        __asm _emit 0x75
        __asm _emit 0x6a
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 32: je 0x58689635
        __asm _emit 0x74
        __asm _emit 0x32
        push 40000000h
        push 800h
        push 6
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 DB F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 75 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x75
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 6
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EE 7D EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58689662
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 0
        push 800h
        push 6
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 DB F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 75 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x75
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 25h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BF 7D EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x5868981b
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes 75 6A: jne 0x586896df
        __asm _emit 0x75
        __asm _emit 0x6a
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 32: je 0x586896ad
        __asm _emit 0x74
        __asm _emit 0x32
        push 40000000h
        push 1000h
        push 7
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE DA F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 75 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x75
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 7
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 76 7D EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586896da
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 0
        push 1000h
        push 7
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF DA F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 75 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x75
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 26h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 47 7D EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3C 01 00 00: jmp 0x5868981b
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 10ch]
        ; Exact mapped bytes 75 6A: jne 0x58689757
        __asm _emit 0x75
        __asm _emit 0x6a
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 32: je 0x58689725
        __asm _emit 0x74
        __asm _emit 0x32
        push 40000000h
        push 200h
        push 4
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 DA F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 74 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 4
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FE 7C EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58689752
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 0
        push 200h
        push 4
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 DA F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 74 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 23h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CF 7C EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x5868981b
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 110h]
        ; Exact mapped bytes 75 67: jne 0x586897cc
        __asm _emit 0x75
        __asm _emit 0x67
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 32: je 0x5868979d
        __asm _emit 0x74
        __asm _emit 0x32
        push 40000000h
        push 400h
        push 5
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE D9 F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd9
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 74 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 5
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 86 7C EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586897ca
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 0
        push 400h
        push 5
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF D9 F5 FF: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd9
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 74 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 24h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 57 7C EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x5868981b
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes 75 0D: jne 0x586897e7
        __asm _emit 0x75
        __asm _emit 0x0d
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 0D 00 00: call 0x5868a560
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 34: jmp 0x5868981b
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 118h]
        ; Exact mapped bytes 75 0D: jne 0x58689802
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 0D 00 00: call 0x5868a560
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x5868981b
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 11ch]
        ; Exact mapped bytes 75 0B: jne 0x5868981b
        __asm _emit 0x75
        __asm _emit 0x0b
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 0D 00 00: call 0x5868a560
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
