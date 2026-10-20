// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B01D0 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_587b01d0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        push edi
        push eax
        ; Exact mapped bytes E8 01 FE FF FF: call 0x587affe0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 50h]
        mov ebx, dword ptr [esi + 4ch]
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, 0aaaaaaaah
        xor ebx, 0aaaaaaaah
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 1C: jne 0x587b021b
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 DC 64 12 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587b021b
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [esi + 2ch]
        mov ecx, dword ptr [esi + 28h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 33 0A 00: call 0x58853610
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 14h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x587b02d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 64h
        cmp dword ptr [esi + 34h], ecx
        ; Exact mapped bytes 7E 72: jle 0x587b02a4
        __asm _emit 0x7e
        __asm _emit 0x72
        mov eax, dword ptr [esi + 28h]
        cmp eax, dword ptr [esi + 2ch]
        ; Exact mapped bytes 7C 29: jl 0x587b0263
        __asm _emit 0x7c
        __asm _emit 0x29
        mov dword ptr [esi + 34h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AC FC FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 64h], ebp
        ; Exact mapped bytes 75 66: jne 0x587b02af
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 73h
        push 72h
        push 18h
        ; Exact mapped bytes E8 46 BD 13 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbd
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [esi + 64h], 1
        ; Exact mapped bytes EB 4C: jmp 0x587b02af
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov edx, dword ptr [esi + 6ch]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 2E: jne 0x587b029f
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp eax, ebp
        ; Exact mapped bytes 75 0D: jne 0x587b0282
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [esi + 18h], ebp
        ; Exact mapped bytes 75 25: jne 0x587b029f
        __asm _emit 0x75
        __asm _emit 0x25
        push 71h
        push 70h
        push 17h
        ; Exact mapped bytes EB 0B: jmp 0x587b028d
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp dword ptr [esi + 18h], ebp
        ; Exact mapped bytes 75 18: jne 0x587b029f
        __asm _emit 0x75
        __asm _emit 0x18
        push 75h
        push 74h
        push 19h
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 BD 13 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xbd
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [esi + 18h], 40000000h
        inc dword ptr [esi + 28h]
        ; Exact mapped bytes EB 0E: jmp 0x587b02b2
        __asm _emit 0xeb
        __asm _emit 0x0e
        dec dword ptr [esi + 28h]
        cmp dword ptr [esi + 28h], ebp
        ; Exact mapped bytes 7F 06: jg 0x587b02b2
        __asm _emit 0x7f
        __asm _emit 0x06
        mov dword ptr [esi + 28h], ebp
        mov dword ptr [esi + 18h], ebp
        cmp edi, ebx
        ; Exact mapped bytes 74 5C: je 0x587b0312
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 7D 16: jge 0x587b02ce
        __asm _emit 0x7d
        __asm _emit 0x16
        cmp dword ptr [esi + 10h], ebp
        ; Exact mapped bytes 75 55: jne 0x587b0312
        __asm _emit 0x75
        __asm _emit 0x55
        mov eax, dword ptr [esi + 40h]
        add eax, edi
        cmp eax, ebx
        ; Exact mapped bytes 7C 04: jl 0x587b02ca
        __asm _emit 0x7c
        __asm _emit 0x04
        mov edi, ebx
        ; Exact mapped bytes EB 48: jmp 0x587b0312
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edi, eax
        ; Exact mapped bytes EB 44: jmp 0x587b0312
        __asm _emit 0xeb
        __asm _emit 0x44
        add edi, -10h
        cmp edi, ebx
        ; Exact mapped bytes 7F 3D: jg 0x587b0312
        __asm _emit 0x7f
        __asm _emit 0x3d
        mov edi, ebx
        ; Exact mapped bytes EB 39: jmp 0x587b0312
        __asm _emit 0xeb
        __asm _emit 0x39
        cmp eax, 40000000h
        ; Exact mapped bytes 75 32: jne 0x587b0312
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [esi + 24h]
        cmp eax, ebp
        ; Exact mapped bytes 7E 1E: jle 0x587b0305
        __asm _emit 0x7e
        __asm _emit 0x1e
        dec eax
        mov dword ptr [esi + 24h], eax
        cmp edi, ebx
        ; Exact mapped bytes 74 20: je 0x587b030f
        __asm _emit 0x74
        __asm _emit 0x20
        add edi, -10h
        cmp edi, ebx
        ; Exact mapped bytes 7F 02: jg 0x587b02f8
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, ebx
        mov eax, dword ptr [esi + 28h]
        cmp eax, ebp
        ; Exact mapped bytes 7E 10: jle 0x587b030f
        __asm _emit 0x7e
        __asm _emit 0x10
        dec eax
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b030f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, esi
        mov dword ptr [esi + 14h], ebp
        ; Exact mapped bytes E8 E1 FB FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 64h], ebp
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [esi + 6ch], eax
        ; Exact mapped bytes 75 6E: jne 0x587b038e
        __asm _emit 0x75
        __asm _emit 0x6e
        cmp dword ptr [eax + 63b0h], ebp
        ; Exact mapped bytes 75 66: jne 0x587b038e
        __asm _emit 0x75
        __asm _emit 0x66
        cmp edi, ebp
        ; Exact mapped bytes 75 0E: jne 0x587b033a
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [esi + 5ch], ebp
        ; Exact mapped bytes 75 0C: jne 0x587b033d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 5ch], 1
        ; Exact mapped bytes EB 03: jmp 0x587b033d
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 5ch], ebp
        mov ecx, dword ptr [esi + 44h]
        xor ecx, 0aaaaaaaah
        imul ecx, dword ptr [esi + 38h]
        mov eax, 51eb851fh
        mul ecx
        shr edx, 5
        cmp edi, edx
        ; Exact mapped bytes 7C 2E: jl 0x587b0386
        __asm _emit 0x7c
        __asm _emit 0x2e
        cmp dword ptr [esi + 60h], ebp
        ; Exact mapped bytes 75 25: jne 0x587b0382
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push 78h
        push 18h
        ; Exact mapped bytes E8 33 BC 13 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbc
        __asm _emit 0x13
        __asm _emit 0x00
        xor edi, 0aaaaaaaah
        mov dword ptr [esi + 50h], edi
        pop edi
        mov dword ptr [esi + 60h], 1
        pop esi
        pop ebp
        pop ebx
        ret
        cmp edi, edx
        ; Exact mapped bytes 7D 08: jge 0x587b038e
        __asm _emit 0x7d
        __asm _emit 0x08
        cmp dword ptr [esi + 60h], ebp
        ; Exact mapped bytes 74 03: je 0x587b038e
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [esi + 60h], ebp
        xor edi, 0aaaaaaaah
        mov dword ptr [esi + 50h], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
