// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A0BF .. +0x3B3 bytes.
extern "C" __declspec(naked) void FUN_0045a0bf_0045A0BF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e945h
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
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 FE 10 0F 00: call 0x54b1ea
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x10
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 678670h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F E7 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push ecx
        push 678688h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B E7 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AB E8 0C 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x45a13a
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x45a157
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 CB 0E 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 08 03 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov dword ptr [ebp - 6ch], edx
        cmp dword ptr [ebp - 6ch], 11h
        ; Exact mapped bytes 0F 87 B8 02 00 00: ja 0x45a424
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 24 85 72 A4 45 00: jmp dword ptr [eax*4 + 0x45a472]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 08: movsx edx, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x08
        push edx
        push 678694h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 E6 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 05 E9 0C 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 76 0E 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 B3 02 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax + 8]
        push ecx
        push 6786a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B E6 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C2 E7 0C 00: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 41 0E 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E9 7E 02 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        push 6786b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 E6 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9A E8 0C 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 0B 0E 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes E9 48 02 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 6786bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 E6 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FD E7 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 D6 0D 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 68 F2 FF FF: call 0x4594c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 0
        push 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 2F F6 FF FF: call 0x459897
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 6786c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 E5 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 45 EA 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8B 0D 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 7C 0D 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 6786d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 E5 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4F EF 0C 00: call 0x529210
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 47 0D 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E9 84 01 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ecx + 8]
        push eax
        push 6786e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 E5 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4B EF 0C 00: call 0x529245
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xef
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 0E 0D 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A0 F1 FF FF: call 0x4594c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        push 0
        push 8
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 67 F5 FF FF: call 0x459897
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 6786f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A E5 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7D E9 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 C3 0C 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 B4 0C 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 678700h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 E4 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3C E9 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 7F 0C 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 678710h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 E4 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 71 E6 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 4A 0C 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x45a45f
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 67871ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F E4 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 31 E7 0C 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 15 0C 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes EB 55: jmp 0x45a45f
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 FB 0B 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes EB 3B: jmp 0x45a45f
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x45a441
        __asm _emit 0x74
        __asm _emit 0x14
        push 2a1h
        push 678664h
        ; Exact mapped bytes E8 04 E9 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45a441
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x45a424
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 BE 0B 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
