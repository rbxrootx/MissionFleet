// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 3796 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58782CF0 .. +0x3E5 bytes.
extern "C" __declspec(naked) void FUN_58782cf0_segment_00() {
    __asm {
        push -1
        push 5897f85bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 28h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 96 0E 00 00: je 0x58783bbb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 D8 30 06 00: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58782d4b
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 19: jne 0x58782d5d
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 12: jmp 0x58782d5d
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 09: je 0x58782d5d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        cmp dword ptr [esi + 58h], 0
        ; Exact mapped bytes 74 22: je 0x58782d85
        __asm _emit 0x74
        __asm _emit 0x22
        add dword ptr [esi + 0e0h], -1
        ; Exact mapped bytes 0F 85 18 0E 00 00: jne 0x58783b88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push esi
        mov dword ptr [esi + 58h], 0
        ; Exact mapped bytes E8 70 A2 15 00: call 0x588dcff0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes E9 03 0E 00 00: jmp 0x58783b88
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 0F 84 F9 0D 00 00: je 0x58783b88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 4]
        mov eax, ebp
        sub eax, dword ptr [esi + 68h]
        lea ebx, [esi + 64h]
        mov edx, eax
        mov ecx, edi
        imul edx, eax
        sub ecx, dword ptr [ebx]
        mov dword ptr [esp + 24h], eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 CE 9E 1F 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9e
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 9E 1F 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esi + 0dch]
        test eax, eax
        ; Exact mapped bytes 0F 8F A8 0D 00 00: jg 0x58783b81
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 18h], 1eh
        ; Exact mapped bytes 0F 8D 76 02 00 00: jge 0x5878305a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        push ecx
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes E8 60 A1 15 00: call 0x588dcf50
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa1
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        mov edi, eax
        ; Exact mapped bytes E8 66 F8 FF FF: call 0x58782660
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        cmp edi, ebp
        ; Exact mapped bytes 0F 8E 1C 02 00 00: jle 0x58783020
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 0F: cmp word ptr [ecx + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 F1 01 00 00: jne 0x58783009
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edi, edi, 4b0h
        mov ecx, dword ptr [esi + 6ch]
        mov eax, 51eb851fh
        imul edi
        mov eax, dword ptr [ecx + 0b8h]
        sar edx, 5
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov edx, dword ptr [esi + 60h]
        movzx edx, byte ptr [edx + 354h]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 D6 01 00 00: je 0x58783020
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        push eax
        push edi
        ; Exact mapped bytes E8 DB D4 FF FF: call 0x58780330
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        push 11ch
        ; Exact mapped bytes E8 EF 9D 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x9d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 30h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 65: je 0x58782ed3
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [esi + 6ch]
        mov ecx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 4]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10524h]
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0e0h
        ; Exact mapped bytes 7E 14: jle 0x58782eac
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0C: je 0x58782eac
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ebp, dword ptr [eax + 190h]
        add ebp, 3800h
        push 40h
        push ecx
        ; Exact mapped bytes E8 82 9D 1F 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9d
        __asm _emit 0x1f
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov ecx, dword ptr [esp + 24h]
        sub ebx, edx
        mov edx, dword ptr [esp + 2ch]
        push ebx
        push edx
        push ebp
        push 0ah
        push edi
        ; Exact mapped bytes E8 DF 7E FD FF: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58782ed5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and cl, 1
        movzx edx, cl
        push edx
        mov ecx, eax
        mov dword ptr [esp + 34h], 0ffffffffh
        ; Exact mapped bytes E8 01 E7 FA FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0f8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        lea ebx, [esi + 0fch]
        mov ebp, 3
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 EF: jne 0x58782f07
        __asm _emit 0x75
        __asm _emit 0xef
        mov ecx, dword ptr [esi + 108h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 60h]
        movzx eax, byte ptr [ecx + 354h]
        mov edx, dword ptr [esi + 6ch]
        cmp dword ptr [edx + 0b8h], eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58782fc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 6C BC FF FF: call 0x5877ebb0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 60h]
        mov eax, edi
        imul eax, eax, 32h
        push eax
        push ebp
        ; Exact mapped bytes E8 7D 9E 15 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x9e
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push edi
        push 2
        ; Exact mapped bytes E8 72 9E 15 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9e
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        movzx eax, byte ptr [ecx + 354h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add dword ptr [ecx + eax*4 + 10a6ch], edi
        mov edx, dword ptr [esi + 60h]
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp edx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 0C: jne 0x58782f8e
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 72 BC FF FF: call 0x5877ec00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 60h]
        mov cl, byte ptr [eax + 354h]
        cmp cl, byte ptr [edx + 354h]
        ; Exact mapped bytes 75 1E: jne 0x58782fc6
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 7C BC FF FF: call 0x5877ec30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c4ch]
        push edi
        ; Exact mapped bytes E8 BA F6 FF FF: call 0x58782680
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov al, byte ptr [ecx + 354h]
        mov edx, dword ptr [esi + 60h]
        cmp byte ptr [edx + 354h], al
        ; Exact mapped bytes 74 15: je 0x58782ff4
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 6ch]
        movzx eax, al
        cmp dword ptr [ecx + 0b8h], eax
        ; Exact mapped bytes 75 07: jne 0x58782ff4
        __asm _emit 0x75
        __asm _emit 0x07
        mov byte ptr [ecx + 0ceh], 1
        mov ecx, dword ptr [esi + 60h]
        movzx edx, byte ptr [ecx + 354h]
        mov ecx, dword ptr [esi + 6ch]
        push edx
        ; Exact mapped bytes E8 39 D6 FF FF: call 0x58780640
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x58783020
        __asm _emit 0xeb
        __asm _emit 0x17
        push ebx
        push edi
        push 1
        ; Exact mapped bytes E8 9E 9A 06 00: call 0x587ecab0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esi + 6ch]
        push eax
        push edi
        ; Exact mapped bytes E8 10 D3 FF FF: call 0x58780330
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes E8 B8 36 15 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x36
        __asm _emit 0x15
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 42 0B 00 00: jne 0x58783b75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 56 F7 FF FF: call 0x58782790
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0e0h], 7dh
        mov dword ptr [esi + 58h], 1
        mov dword ptr [esi + 0dch], 2
        ; Exact mapped bytes E9 2E 0B 00 00: jmp 0x58783b88
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 54h], 0
        ; Exact mapped bytes 0F 84 1C 01 00 00: je 0x58783180
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 10524h]
        push ebp
        push edi
        ; Exact mapped bytes E8 E9 0C 04 00: call 0x587c3d60
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x58783180
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x58783180
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        mov eax, ecx
        shl eax, 5
        sub eax, ecx
        xor edi, edi
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [edx + 10490h]
        xor edx, edx
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, 0aaaaaaabh
        mul ecx
        shr edx, 1
        lea edx, [edx + edx*2]
        sub ecx, edx
        ; Exact mapped bytes 75 48: jne 0x5878310e
        __asm _emit 0x75
        __asm _emit 0x48
        mov dword ptr [esi + 0e8h], 1
        lea ebx, [esi + 70h]
        ; Exact mapped bytes EB 0B: jmp 0x587830e0
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587830E0 .. +0xAEF bytes.
extern "C" __declspec(naked) void FUN_58782cf0_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [edx + 4]
        lea eax, [edi + 0dch]
        push eax
        ; Exact mapped bytes E8 E5 E6 FA FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebx]
        push eax
        ; Exact mapped bytes E8 1D 18 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebx, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D4: jl 0x587830e0
        __asm _emit 0x7c
        __asm _emit 0xd4
        ; Exact mapped bytes EB 23: jmp 0x58783131
        __asm _emit 0xeb
        __asm _emit 0x23
        mov dword ptr [esi + 0e8h], edi
        lea edi, [esi + 70h]
        mov ebx, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 1
        ; Exact mapped bytes E8 17 74 FB FF: call 0x5873a540
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0xff
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EF: jne 0x58783120
        __asm _emit 0x75
        __asm _emit 0xef
        lea ecx, [esi + 0bch]
        mov edx, 3
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58783140
        __asm _emit 0x75
        __asm _emit 0xed
        lea ecx, [esi + 0c8h]
        mov edx, 2
        mov edi, edi
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58783160
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [esi + 0f8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x58783235
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        mov eax, dword ptr [esp + 20h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 9C D5 01 00: call 0x587a0740
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        mov ebx, eax
        add ecx, 0c8h
        imul ecx, dword ptr [ebx*4 + 58a0ed18h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, dword ptr [esi + 0d8h]
        add edx, 0c8h
        imul edx, dword ptr [ebx*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov eax, ebp
        imul eax, eax, 64h
        sub ecx, eax
        mov eax, 51eb851fh
        imul edi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esi + 0d4h], ecx
        mov ecx, eax
        imul ecx, ecx, 64h
        add esp, 8
        sub edi, ecx
        mov dword ptr [esi + 0d8h], edi
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes EB 57: jmp 0x5878328c
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ebp, dword ptr [esi + 0d4h]
        mov ecx, dword ptr [esi + 0d8h]
        mov eax, 51eb851fh
        imul ebp
        sar edx, 5
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov edx, edi
        imul edx, edx, 64h
        sub ebp, edx
        add ecx, 0c8h
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, edx, 64h
        sub ecx, edx
        mov ebx, 384h
        mov dword ptr [esi + 0d4h], ebp
        mov dword ptr [esi + 0d8h], ecx
        mov dword ptr [esp + 18h], edi
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 1ch]
        test edx, edx
        ; Exact mapped bytes 7E 15: jle 0x587832b1
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7D 08: jge 0x587832a8
        __asm _emit 0x7d
        __asm _emit 0x08
        lea ecx, [ebx + 0a8ch]
        ; Exact mapped bytes EB 1C: jmp 0x587832c4
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, 384h
        sub ecx, ebx
        ; Exact mapped bytes EB 13: jmp 0x587832c4
        __asm _emit 0xeb
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7D 09: jge 0x587832be
        __asm _emit 0x7d
        __asm _emit 0x09
        mov ecx, 0a8ch
        sub ecx, ebx
        ; Exact mapped bytes EB 06: jmp 0x587832c4
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebx + 384h]
        mov ebx, dword ptr [esp + 18h]
        test ebx, ebx
        ; Exact mapped bytes 75 0F: jne 0x587832db
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 75 09: jne 0x587832db
        __asm _emit 0x75
        __asm _emit 0x09
        mov ebx, 1
        mov ebp, ebx
        ; Exact mapped bytes EB 04: jmp 0x587832df
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 7E 02: jle 0x587832e5
        __asm _emit 0x7e
        __asm _emit 0x02
        neg ebx
        test edx, edx
        ; Exact mapped bytes 7E 02: jle 0x587832eb
        __asm _emit 0x7e
        __asm _emit 0x02
        neg ebp
        mov eax, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 4]
        add ebx, edi
        add ebp, eax
        cmp dword ptr [esi + 54h], 0
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 0F 84 5A 04 00 00: je 0x58783765
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [eax + 10524h]
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 1ch]
        sub eax, dword ptr [edx + 14h]
        mov ebp, dword ptr [ebx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 64h
        sub edi, eax
        mov eax, dword ptr [edx + 20h]
        sub eax, dword ptr [edx + 18h]
        sub edi, dword ptr [ebx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        mov dword ptr [esp + 1ch], edi
        add eax, dword ptr [ebx + 54h]
        xor ebx, ebx
        sub eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 20h], eax
        mov eax, 6e5d4c3bh
        imul ecx
        sub edx, ecx
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea eax, [ebx + ebx*4]
        lea eax, [ebp + eax*8 + 0ah]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x587833c4
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, edx
        ; Exact mapped bytes 7C 11: jl 0x587833c4
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edx
        ; Exact mapped bytes 74 07: je 0x587833c4
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x587833c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 70h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, edx
        ; Exact mapped bytes 74 28: je 0x587833f9
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + ebx*4 + 70h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        cmp ebx, edx
        ; Exact mapped bytes 75 65: jne 0x58783471
        __asm _emit 0x75
        __asm _emit 0x65
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 21c4ch]
        mov ecx, dword ptr [ecx + 4]
        lea eax, [ebp + 82h]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x5878343d
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, edx
        ; Exact mapped bytes 7C 11: jl 0x5878343d
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edx
        ; Exact mapped bytes 74 07: je 0x5878343d
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x5878343f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, edx
        ; Exact mapped bytes 74 28: je 0x58783471
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 16 FF FF FF: jl 0x58783391
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        push 0
        ; Exact mapped bytes E8 9B F8 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0x17
        __asm _emit 0x00
        xor edi, edi
        lea ebp, [esi + 0bch]
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 0F 85 9C 01 00 00: jne 0x58783639
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        mov eax, dword ptr [esi + 4]
        imul ecx, ecx, 0bh
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 13h
        add ecx, dword ptr [edx + 10490h]
        xor edx, edx
        add ecx, edi
        add eax, ecx
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, 88888889h
        mul ecx
        shr edx, 4
        mov eax, edx
        shl eax, 4
        sub eax, edx
        add eax, eax
        sub ecx, eax
        ; Exact mapped bytes 75 22: jne 0x58783505
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp]
        push edx
        push eax
        ; Exact mapped bytes E8 93 FD 17 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [ebp + 40h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 0F 85 4A 01 00 00: jne 0x58783661
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x58783661
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + esi + 10ch]
        test al, al
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x5878362e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes E8 15 41 18 00: call 0x58907650
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        mov edx, dword ptr [ecx + 21c4ch]
        add eax, dword ptr [esi + 0e4h]
        mov ebx, dword ptr [edx + 10h]
        add eax, dword ptr [esi + 8]
        xor edx, edx
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + edx*4]
        and eax, 0fh
        add eax, 4
        cmp dword ptr [ebx + 170h], eax
        ; Exact mapped bytes 7E 13: jle 0x58783590
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x58783590
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ebx, dword ptr [ebx + 194h]
        test ebx, ebx
        ; Exact mapped bytes 74 05: je 0x58783590
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58783592
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 40h]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        xor eax, eax
        mov edx, eax
        imul edx, eax
        ; Exact mapped bytes 39 15 F8 48 A2 58: cmp dword ptr [0x58a248f8], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 08: je 0x587835ba
        __asm _emit 0x74
        __asm _emit 0x08
        inc eax
        cmp eax, 6
        ; Exact mapped bytes 7C ED: jl 0x587835a5
        __asm _emit 0x7c
        __asm _emit 0xed
        ; Exact mapped bytes EB 06: jmp 0x587835c0
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [eax + 2]
        imul ecx, ecx
        mov eax, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes E8 2D 3E 03 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        mov eax, ecx
        shl eax, 4
        add eax, ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        mov ecx, dword ptr [esi + 4]
        lea edx, [ecx + ecx*2]
        add eax, edx
        xor edx, edx
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, 0d41d41d5h
        mul ecx
        mov eax, ecx
        sub eax, edx
        shr eax, 1
        add eax, edx
        shr eax, 6
        mov dl, 46h
        imul dl
        sub cl, al
        add cl, 5
        mov byte ptr [edi + esi + 10ch], cl
        ; Exact mapped bytes EB 33: jmp 0x58783661
        __asm _emit 0xeb
        __asm _emit 0x33
        dec al
        mov byte ptr [edi + esi + 10ch], al
        ; Exact mapped bytes EB 28: jmp 0x58783661
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [ecx + 54h]
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x58783661
        __asm _emit 0x74
        __asm _emit 0x1e
        movzx edx, word ptr [eax + 0ch]
        imul edx, dword ptr [eax + 8]
        dec edx
        xor eax, eax
        cmp dword ptr [ecx + 50h], edx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58783661
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        inc edi
        add ebp, 4
        cmp edi, 3
        ; Exact mapped bytes 0F 8C 1F FE FF FF: jl 0x5878348d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        lea ebx, [esi + 0c8h]
        lea edi, [ebp + 1]
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 75 55: jne 0x587836d9
        __asm _emit 0x75
        __asm _emit 0x55
        mov eax, dword ptr [esi + 0e4h]
        mov ecx, dword ptr [esi + 8]
        imul eax, eax, 15h
        mov edx, ecx
        shl edx, 5
        sub edx, ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, edx
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, ebp
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, 51eb851fh
        mul ecx
        shr edx, 4
        imul edx, edx, 32h
        sub ecx, edx
        ; Exact mapped bytes 75 39: jne 0x58783701
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebx]
        mov dword ptr [ecx + 50h], 0
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes EB 28: jmp 0x58783701
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [ecx + 54h]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x58783701
        __asm _emit 0x74
        __asm _emit 0x1f
        movzx edx, word ptr [eax + 0ch]
        imul edx, dword ptr [eax + 8]
        sub edx, edi
        xor eax, eax
        cmp dword ptr [ecx + 50h], edx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58783701
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        add ebp, edi
        add ebx, 4
        cmp ebp, 2
        ; Exact mapped bytes 0F 8C 6A FF FF FF: jl 0x58783679
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0f8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x58783745
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1C: je 0x58783745
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0f8h]
        ; Exact mapped bytes E8 BB 3C 03 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3A FB 17 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfb
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [esi + 0dch], 2
        ; Exact mapped bytes E9 23 04 00 00: jmp 0x58783b88
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0e8h], 0
        ; Exact mapped bytes 0F 84 4C 01 00 00: je 0x587838be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esi + 70h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [esi + 74h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x58783888
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0e4h]
        mov eax, edx
        shl eax, 5
        sub eax, edx
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [edx + 10490h]
        xor edx, edx
        add eax, dword ptr [esi + 4]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + edx*4]
        mov eax, 24924925h
        mul edi
        mov eax, edi
        sub eax, edx
        shr eax, 1
        add eax, edx
        shr eax, 2
        lea edx, [eax*8]
        sub edx, eax
        sub edi, edx
        ; Exact mapped bytes 0F 85 7A 01 00 00: jne 0x5878396b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        lea eax, [ecx + 708h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov ecx, dword ptr [esi + 0d0h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 19h
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 8B 1D 80 45 A2 58: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ebx + 1ch]
        sub eax, dword ptr [ebx + 14h]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 10524h]
        mov ebp, dword ptr [edi + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        mov ecx, dword ptr [esi + 4]
        sub ecx, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, dword ptr [ebx + 18h]
        sub ecx, dword ptr [edi + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        add eax, dword ptr [edi + 54h]
        sub eax, dword ptr [esi + 8]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 108h]
        ; Exact mapped bytes E8 7D 3B 03 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x5878396b
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d0h]
        mov ecx, dword ptr [edi + 50h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 19h
        sub ecx, eax
        cmp ecx, 18h
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x5878396b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x5878396b
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        sar edx, 8
        mov eax, edx
        shr eax, 1fh
        lea edx, [edx + eax + 5ah]
        mov edi, edx
        lea ebx, [esi + 70h]
        shl edi, 6
        mov dword ptr [esp + 24h], 2
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 12: jle 0x5878390c
        __asm _emit 0x7e
        __asm _emit 0x12
        test edx, edx
        ; Exact mapped bytes 7C 0E: jl 0x5878390c
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5878390c
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x5878390e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5878393f
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 78h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add edi, 280h
        add edx, 0ah
        add ebx, 4
        sub dword ptr [esp + 24h], 1
        ; Exact mapped bytes 75 85: jne 0x587838e3
        __asm _emit 0x75
        __asm _emit 0x85
        mov ecx, dword ptr [esi + 74h]
        push 101h
        ; Exact mapped bytes E8 B5 F3 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        lea edx, [esi + 0fch]
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [esp + 24h], 3
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x58783a9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x58783a9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 80 45 A2 58: mov edi, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi + 1ch]
        sub eax, dword ptr [edi + 14h]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 10524h]
        mov ebx, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebx
        mov ebp, dword ptr [esi + 4]
        sub ebp, eax
        mov eax, dword ptr [edi + 20h]
        sub eax, dword ptr [edi + 18h]
        sub ebp, dword ptr [ecx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebx
        mov edi, eax
        add edi, dword ptr [ecx + 54h]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [eax]
        sub edi, dword ptr [esi + 8]
        ; Exact mapped bytes E8 59 3C 18 00: call 0x58907650
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 9C 45 A2 58: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ebx + 10490h]
        add eax, dword ptr [ebx + 10488h]
        xor edx, edx
        add eax, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 8B 0D 1C 49 A2 58: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 38e38e39h
        mov ecx, dword ptr [ecx + edx*4]
        mov edx, dword ptr [ebx + 21c4ch]
        mov ebx, dword ptr [edx + 10h]
        mul ecx
        shr edx, 2
        lea eax, [edx + edx*8]
        add eax, eax
        sub ecx, eax
        add ecx, 14h
        cmp dword ptr [ebx + 170h], ecx
        ; Exact mapped bytes 7E 13: jle 0x58783a5b
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x58783a5b
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ebx, dword ptr [ebx + 194h]
        test ebx, ebx
        ; Exact mapped bytes 74 05: je 0x58783a5b
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebx + ecx*4]
        ; Exact mapped bytes EB 02: jmp 0x58783a5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebx, dword ptr [esp + 1ch]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, eax
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        xor eax, eax
        mov edx, eax
        imul edx, eax
        ; Exact mapped bytes 39 15 F8 48 A2 58: cmp dword ptr [0x58a248f8], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 08: je 0x58783a8a
        __asm _emit 0x74
        __asm _emit 0x08
        inc eax
        cmp eax, 6
        ; Exact mapped bytes 7C ED: jl 0x58783a75
        __asm _emit 0x7c
        __asm _emit 0xed
        ; Exact mapped bytes EB 06: jmp 0x58783a90
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [eax + 2]
        imul ecx, ecx
        push ecx
        mov ecx, dword ptr [ebx]
        push edi
        push ebp
        ; Exact mapped bytes E8 66 39 03 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        add dword ptr [esp + 1ch], 4
        sub dword ptr [esp + 24h], 1
        ; Exact mapped bytes 0F 85 D6 FE FF FF: jne 0x58783980
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [esi + 0f0h], 0
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x58783b47
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, edi
        imul eax, eax, 1dh
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        add eax, dword ptr [esi + 4]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, 0aaaaaaabh
        mul ecx
        shr edx, 1
        lea edx, [edx + edx*2]
        sub ecx, edx
        neg ecx
        sbb ecx, ecx
        mov eax, edi
        imul eax, eax, 33h
        inc ecx
        mov dword ptr [esi + 0f4h], ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, 0cccccccdh
        mul ecx
        mov eax, edx
        shr eax, 4
        mov dl, 14h
        imul dl
        sub cl, al
        add cl, 5
        mov byte ptr [esi + 0f0h], cl
        ; Exact mapped bytes EB 17: jmp 0x58783b5e
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp dword ptr [esi + 0f4h], 0
        ; Exact mapped bytes 74 0E: je 0x58783b5e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 21 F7 17 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf7
        __asm _emit 0x17
        __asm _emit 0x00
        dec byte ptr [esi + 0f0h]
        mov dword ptr [esi + 0dch], 2
        ; Exact mapped bytes EB 07: jmp 0x58783b88
        __asm _emit 0xeb
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 0dch], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x58783bbb
        __asm _emit 0x74
        __asm _emit 0x2c
        nop
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 1C: je 0x58783bb9
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58783b90
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ret
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ret
    }
}
