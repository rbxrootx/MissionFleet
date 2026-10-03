// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 7492 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AF40 .. +0x1176 bytes.
extern "C" __declspec(naked) void FUN_5878af40_segment_00() {
    __asm {
        push -1
        push 589800a6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 98h
        ; Exact mapped bytes E8 DE 1C 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x1c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        xor edi, edi
        mov dword ptr [esp + 20h], edi
        cmp eax, edi
        ; Exact mapped bytes 74 16: je 0x5878af97
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        push edi
        push edi
        push edi
        push edi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 DB 66 01 00: call 0x587a1670
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878af99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or esi, 0ffffffffh
        push 34h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 FC 45 A2 58: mov dword ptr [0x58a245fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 1C 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 20h], 1
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x5878afc8
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 0A 47 02 00: call 0x587af6d0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878afca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 4
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 28 48 A2 58: mov dword ptr [0x58a24828], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 1C 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 20h], 2
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x5878aff6
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 EC 6D 01 00: call 0x587a1de0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878aff8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push edi
        push 80h
        push 4
        push edi
        push edi
        push 40000000h
        push 589971ach
        mov dword ptr [esp + 3ch], esi
        ; Exact mapped bytes A3 78 45 A2 58: mov dword ptr [0x58a24578], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 80 C1 98 58: call dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 2
        push edi
        push edi
        push eax
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes FF 15 64 C1 98 58: call dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 8
        ; Exact mapped bytes E8 1D 1C 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x5878b04d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 B5 38 FF FF: call 0x5877e900
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878b04f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 24 45 A2 58: mov dword ptr [0x58a24524], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 1B 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 4
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b086
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 5899718ch
        mov ecx, eax
        ; Exact mapped bytes E8 EC 8C 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b088
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 48 46 A2 58: mov dword ptr [0x58a24648], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 1B 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 5
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b0bf
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997170h
        mov ecx, eax
        ; Exact mapped bytes E8 B3 8C 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b0c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 4C 46 A2 58: mov dword ptr [0x58a2464c], eax
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 1B 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 6
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b0f8
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997150h
        mov ecx, eax
        ; Exact mapped bytes E8 7A 8C 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b0fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 50 46 A2 58: mov dword ptr [0x58a24650], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 1B 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 7
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b131
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997138h
        mov ecx, eax
        ; Exact mapped bytes E8 41 8C 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b133
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 54 46 A2 58: mov dword ptr [0x58a24654], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 1B 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 8
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b16a
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997120h
        mov ecx, eax
        ; Exact mapped bytes E8 08 8C 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b16c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 58 46 A2 58: mov dword ptr [0x58a24658], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 1A 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 9
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b1a3
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997110h
        mov ecx, eax
        ; Exact mapped bytes E8 CF 8B 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b1a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 D8 46 A2 58: mov dword ptr [0x58a246d8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 1A 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 0ah
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b1dc
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 589970fch
        mov ecx, eax
        ; Exact mapped bytes E8 96 8B 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b1de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 F0 46 A2 58: mov dword ptr [0x58a246f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 1A 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 0bh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b215
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 589970e8h
        mov ecx, eax
        ; Exact mapped bytes E8 5D 8B 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b217
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 04 46 A2 58: mov dword ptr [0x58a24604], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 1A 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 0ch
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b24e
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 589970d4h
        mov ecx, eax
        ; Exact mapped bytes E8 24 8B 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b250
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 08 46 A2 58: mov dword ptr [0x58a24608], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 19 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x19
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 0dh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b287
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 589970c4h
        mov ecx, eax
        ; Exact mapped bytes E8 EB 8A 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b289
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 AC 46 A2 58: mov dword ptr [0x58a246ac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 19 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x19
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 0eh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b2c0
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 589970b0h
        mov ecx, eax
        ; Exact mapped bytes E8 B2 8A 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b2c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 138h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 0C 46 A2 58: mov dword ptr [0x58a2460c], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 19 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x19
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 0fh
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x5878b2f1
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 E1 0A 16 00: call 0x588ebdd0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b2f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 EC 46 A2 58: mov dword ptr [0x58a246ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 19 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x19
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 10h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b32a
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 5899709ch
        mov ecx, eax
        ; Exact mapped bytes E8 48 8A 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b32c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 94 46 A2 58: mov dword ptr [0x58a24694], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 19 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x19
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 11h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b363
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 5899708ch
        mov ecx, eax
        ; Exact mapped bytes E8 0F 8A 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b365
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 1C 47 A2 58: mov dword ptr [0x58a2471c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 18 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x18
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 12h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b39c
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997078h
        mov ecx, eax
        ; Exact mapped bytes E8 D6 89 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b39e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 B8 46 A2 58: mov dword ptr [0x58a246b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 18 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x18
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 13h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b3d5
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997064h
        mov ecx, eax
        ; Exact mapped bytes E8 9D 89 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b3d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 BC 46 A2 58: mov dword ptr [0x58a246bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 18 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 14h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b40e
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997050h
        mov ecx, eax
        ; Exact mapped bytes E8 64 89 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b410
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 98 46 A2 58: mov dword ptr [0x58a24698], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 18 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x18
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 15h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b447
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 5899703ch
        mov ecx, eax
        ; Exact mapped bytes E8 2B 89 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b449
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 9C 46 A2 58: mov dword ptr [0x58a2469c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 17 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x17
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 16h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b480
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997024h
        mov ecx, eax
        ; Exact mapped bytes E8 F2 88 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b482
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 D4 46 A2 58: mov dword ptr [0x58a246d4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 17 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x17
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 17h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b4b9
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58997010h
        mov ecx, eax
        ; Exact mapped bytes E8 B9 88 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b4bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 90 46 A2 58: mov dword ptr [0x58a24690], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 17 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 18h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b4f2
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996ffch
        mov ecx, eax
        ; Exact mapped bytes E8 80 88 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b4f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 F4 46 A2 58: mov dword ptr [0x58a246f4], eax
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 17 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x17
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 19h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b52b
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996fech
        mov ecx, eax
        ; Exact mapped bytes E8 47 88 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b52d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 F8 46 A2 58: mov dword ptr [0x58a246f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 17 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x17
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 1ah
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b564
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996fd8h
        mov ecx, eax
        ; Exact mapped bytes E8 0E 88 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b566
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 14 47 A2 58: mov dword ptr [0x58a24714], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 16 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x16
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 1bh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b59d
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996fc0h
        mov ecx, eax
        ; Exact mapped bytes E8 D5 87 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b59f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 18 47 A2 58: mov dword ptr [0x58a24718], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 16 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 1ch
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b5d6
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996fach
        mov ecx, eax
        ; Exact mapped bytes E8 9C 87 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b5d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 6C 46 A2 58: mov dword ptr [0x58a2466c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 16 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 1dh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b60f
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f98h
        mov ecx, eax
        ; Exact mapped bytes E8 63 87 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b611
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 70 46 A2 58: mov dword ptr [0x58a24670], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 16 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x16
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 1eh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b648
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f84h
        mov ecx, eax
        ; Exact mapped bytes E8 2A 87 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b64a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 68 46 A2 58: mov dword ptr [0x58a24668], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 15 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x15
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 1fh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b681
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f74h
        mov ecx, eax
        ; Exact mapped bytes E8 F1 86 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b683
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 74 46 A2 58: mov dword ptr [0x58a24674], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 15 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x15
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 20h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b6ba
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f64h
        mov ecx, eax
        ; Exact mapped bytes E8 B8 86 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b6bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 78 46 A2 58: mov dword ptr [0x58a24678], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 15 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x15
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 21h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b6f3
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f50h
        mov ecx, eax
        ; Exact mapped bytes E8 7F 86 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b6f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 7C 46 A2 58: mov dword ptr [0x58a2467c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 15 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x15
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 22h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b72c
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f3ch
        mov ecx, eax
        ; Exact mapped bytes E8 46 86 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b72e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 80 46 A2 58: mov dword ptr [0x58a24680], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 15 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x15
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 23h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b765
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f28h
        mov ecx, eax
        ; Exact mapped bytes E8 0D 86 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b767
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 84 46 A2 58: mov dword ptr [0x58a24684], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 14 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x14
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 24h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b79e
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f14h
        mov ecx, eax
        ; Exact mapped bytes E8 D4 85 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b7a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 DC 46 A2 58: mov dword ptr [0x58a246dc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 14 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x14
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 25h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b7d7
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996f04h
        mov ecx, eax
        ; Exact mapped bytes E8 9B 85 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b7d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 E0 46 A2 58: mov dword ptr [0x58a246e0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 14 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 26h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b810
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996ef0h
        mov ecx, eax
        ; Exact mapped bytes E8 62 85 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b812
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 E4 46 A2 58: mov dword ptr [0x58a246e4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 14 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x14
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 27h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b849
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996edch
        mov ecx, eax
        ; Exact mapped bytes E8 29 85 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b84b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 E8 46 A2 58: mov dword ptr [0x58a246e8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 13 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x13
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 28h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b882
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996ecch
        mov ecx, eax
        ; Exact mapped bytes E8 F0 84 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b884
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 24 47 A2 58: mov dword ptr [0x58a24724], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 13 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x13
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 29h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b8bb
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996eb8h
        mov ecx, eax
        ; Exact mapped bytes E8 B7 84 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b8bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ch
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 28 47 A2 58: mov dword ptr [0x58a24728], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 13 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x13
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 2ah
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x5878b8e9
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 99 5D 17 00: call 0x58901680
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x5d
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b8eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 2C 47 A2 58: mov dword ptr [0x58a2472c], eax
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 13 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x13
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 2bh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b922
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996ea4h
        mov ecx, eax
        ; Exact mapped bytes E8 50 84 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b924
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 30 47 A2 58: mov dword ptr [0x58a24730], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 13 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x13
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 2ch
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b95b
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996e94h
        mov ecx, eax
        ; Exact mapped bytes E8 17 84 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b95d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 34 47 A2 58: mov dword ptr [0x58a24734], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 12 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x12
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 2dh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b994
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996e84h
        mov ecx, eax
        ; Exact mapped bytes E8 DE 83 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b996
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 14 46 A2 58: mov dword ptr [0x58a24614], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 12 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x12
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 2eh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878b9cd
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996e6ch
        mov ecx, eax
        ; Exact mapped bytes E8 A5 83 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878b9cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 18 46 A2 58: mov dword ptr [0x58a24618], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 3D 20 46 A2 58: mov dword ptr [0x58a24620], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 12 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x12
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 2fh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878ba0c
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996e58h
        mov ecx, eax
        ; Exact mapped bytes E8 66 83 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878ba0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 38 46 A2 58: mov dword ptr [0x58a24638], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 12 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x12
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 30h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878ba45
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996e44h
        mov ecx, eax
        ; Exact mapped bytes E8 2D 83 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878ba47
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 40 46 A2 58: mov dword ptr [0x58a24640], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 11 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 31h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878ba7e
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996e30h
        mov ecx, eax
        ; Exact mapped bytes E8 F4 82 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878ba80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 A0 46 A2 58: mov dword ptr [0x58a246a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 11 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 32h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bab7
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996e1ch
        mov ecx, eax
        ; Exact mapped bytes E8 BB 82 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bab9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 00 46 A2 58: mov dword ptr [0x58a24600], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 11 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 33h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878baf0
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996e0ch
        mov ecx, eax
        ; Exact mapped bytes E8 82 82 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878baf2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 B0 46 A2 58: mov dword ptr [0x58a246b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 11 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x11
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 34h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bb29
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996df8h
        mov ecx, eax
        ; Exact mapped bytes E8 49 82 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bb2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 44 46 A2 58: mov dword ptr [0x58a24644], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 11 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x11
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 35h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bb62
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996de4h
        mov ecx, eax
        ; Exact mapped bytes E8 10 82 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bb64
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 5C 46 A2 58: mov dword ptr [0x58a2465c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 10 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 36h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bb9b
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996dd0h
        mov ecx, eax
        ; Exact mapped bytes E8 D7 81 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bb9d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 FC 46 A2 58: mov dword ptr [0x58a246fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 10 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 37h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bbd4
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996dc0h
        mov ecx, eax
        ; Exact mapped bytes E8 9E 81 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bbd6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 E0 4A A2 58: mov dword ptr [0x58a24ae0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 10 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 38h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bc0d
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996db0h
        mov ecx, eax
        ; Exact mapped bytes E8 65 81 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bc0f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 20 47 A2 58: mov dword ptr [0x58a24720], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 10 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 39h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bc46
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996da0h
        mov ecx, eax
        ; Exact mapped bytes E8 2C 81 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bc48
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 A8 46 A2 58: mov dword ptr [0x58a246a8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 0F 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3ah
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bc7f
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996d88h
        mov ecx, eax
        ; Exact mapped bytes E8 F3 80 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bc81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 CC 46 A2 58: mov dword ptr [0x58a246cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 0F 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3bh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bcb8
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996d74h
        mov ecx, eax
        ; Exact mapped bytes E8 BA 80 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bcba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 D0 46 A2 58: mov dword ptr [0x58a246d0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 0F 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3ch
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bcf1
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996d64h
        mov ecx, eax
        ; Exact mapped bytes E8 81 80 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bcf3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 44 47 A2 58: mov dword ptr [0x58a24744], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 0F 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3dh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bd2a
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996d54h
        mov ecx, eax
        ; Exact mapped bytes E8 48 80 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bd2c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 48 47 A2 58: mov dword ptr [0x58a24748], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 0F 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3eh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bd63
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996d44h
        mov ecx, eax
        ; Exact mapped bytes E8 0F 80 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bd65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 4C 47 A2 58: mov dword ptr [0x58a2474c], eax
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 0E 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3fh
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bd9c
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996d34h
        mov ecx, eax
        ; Exact mapped bytes E8 D6 7F 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bd9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 50 47 A2 58: mov dword ptr [0x58a24750], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 0E 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 40h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bdd5
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996d24h
        mov ecx, eax
        ; Exact mapped bytes E8 9D 7F 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bdd7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 54 47 A2 58: mov dword ptr [0x58a24754], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 0E 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 41h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878be0e
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996d0ch
        mov ecx, eax
        ; Exact mapped bytes E8 64 7F 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878be10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 58 47 A2 58: mov dword ptr [0x58a24758], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 0E 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 42h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878be47
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996cf0h
        mov ecx, eax
        ; Exact mapped bytes E8 2B 7F 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878be49
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 64 47 A2 58: mov dword ptr [0x58a24764], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 0D 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 43h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878be80
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996cdch
        mov ecx, eax
        ; Exact mapped bytes E8 F2 7E 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878be82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 60 47 A2 58: mov dword ptr [0x58a24760], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 0D 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x0d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 44h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878beb9
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996ccch
        mov ecx, eax
        ; Exact mapped bytes E8 B9 7E 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bebb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 D0 48 A2 58: mov dword ptr [0x58a248d0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 0D 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 45h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bef2
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996cbch
        mov ecx, eax
        ; Exact mapped bytes E8 80 7E 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bef4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 3C 47 A2 58: mov dword ptr [0x58a2473c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 0D 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 46h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bf2b
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996ca8h
        mov ecx, eax
        ; Exact mapped bytes E8 47 7E 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bf2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 68 47 A2 58: mov dword ptr [0x58a24768], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 0D 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 47h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bf64
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996c94h
        mov ecx, eax
        ; Exact mapped bytes E8 0E 7E 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bf66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 6C 47 A2 58: mov dword ptr [0x58a2476c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 0C 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 48h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bf9d
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996c80h
        mov ecx, eax
        ; Exact mapped bytes E8 D5 7D 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bf9f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 70 47 A2 58: mov dword ptr [0x58a24770], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 0C 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 49h
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878bfd6
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996c6ch
        mov ecx, eax
        ; Exact mapped bytes E8 9C 7D 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878bfd8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 74 47 A2 58: mov dword ptr [0x58a24774], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 0C 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 4ah
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5878c00f
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push edi
        push 58996c58h
        mov ecx, eax
        ; Exact mapped bytes E8 63 7D 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c011
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 24h
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes A3 78 47 A2 58: mov dword ptr [0x58a24778], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 55 1E 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x55
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D A8 C1 98 58: mov ebp, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        ; Exact mapped bytes A3 C4 48 A2 58: mov dword ptr [0x58a248c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 589baaf0h
        cmp dword ptr [esi - 5ch], 0
        ; Exact mapped bytes 74 55: je 0x5878c08f
        __asm _emit 0x74
        __asm _emit 0x55
        push esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x5878c081
        __asm _emit 0x74
        __asm _emit 0x40
        push 198h
        ; Exact mapped bytes E8 03 0C 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 4bh
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5878c06c
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 06 7D 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c06e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 15 C4 48 A2 58: mov edx, dword ptr [0x58a248c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 20h], 0ffffffffh
        mov dword ptr [edi + edx], eax
        ; Exact mapped bytes EB 1B: jmp 0x5878c09c
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes A1 C4 48 A2 58: mov eax, dword ptr [0x58a248c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edi + eax], 0
        ; Exact mapped bytes EB 0D: jmp 0x5878c09c
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D C4 48 A2 58: mov ecx, dword ptr [0x58a248c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edi + ecx], 0
        add esi, 0e84h
        add edi, 4
        cmp esi, 589c2d94h
        ; Exact mapped bytes 7C 87: jl 0x5878c034
        __asm _emit 0x7c
        __asm _emit 0x87
        mov eax, 58a230c8h
        xor ecx, ecx
        ; Exact mapped bytes EB 0A: jmp 0x5878c0c0
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C0C0 .. +0xBCE bytes.
extern "C" __declspec(naked) void FUN_5878af40_segment_01() {
    __asm {
        mov dword ptr [eax - 800h], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 800h], ecx
        add eax, 4
        cmp eax, 58a234c8h
        ; Exact mapped bytes 7C E8: jl 0x5878c0c0
        __asm _emit 0x7c
        __asm _emit 0xe8
        push 20h
        ; Exact mapped bytes E8 6F 0B 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 4ch
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x5878c12c
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 15 D8 46 A2 58: mov edx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 170h], 23h
        ; Exact mapped bytes 7E 1F: jle 0x5878c120
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [edx + 194h], 0
        ; Exact mapped bytes 74 16: je 0x5878c120
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [edx + 194h]
        mov edx, dword ptr [edx + 8ch]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 A2 B9 17 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb9
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5878c12e
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 96 B9 17 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb9
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c12e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or edi, 0ffffffffh
        push 20h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 84 47 A2 58: mov dword ptr [0x58a24784], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 0B 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 4dh
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x5878c18e
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 2eh
        ; Exact mapped bytes 7E 1F: jle 0x5878c182
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 16: je 0x5878c182
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 0b8h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 40 B9 17 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb9
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5878c190
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 34 B9 17 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb9
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c190
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 88 47 A2 58: mov dword ptr [0x58a24788], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 0A 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 4eh
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5878c1ea
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 2
        ; Exact mapped bytes 7E 1C: jle 0x5878c1de
        __asm _emit 0x7e
        __asm _emit 0x1c
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 13: je 0x5878c1de
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [edx + 8]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 74 B1 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5878c1ec
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 68 B1 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c1ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 8C 47 A2 58: mov dword ptr [0x58a2478c], eax
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 0A 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 4fh
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x5878c249
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 2ch
        ; Exact mapped bytes 7E 1F: jle 0x5878c23d
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 16: je 0x5878c23d
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 0b0h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 15 B1 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5878c24b
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 09 B1 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c24b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 90 47 A2 58: mov dword ptr [0x58a24790], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 09 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 50h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5878c2a5
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 16h
        ; Exact mapped bytes 7E 1C: jle 0x5878c299
        __asm _emit 0x7e
        __asm _emit 0x1c
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 13: je 0x5878c299
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [edx + 58h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B9 B0 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5878c2a7
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 AD B0 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c2a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 94 47 A2 58: mov dword ptr [0x58a24794], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 09 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 51h
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x5878c304
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 24h
        ; Exact mapped bytes 7E 1F: jle 0x5878c2f8
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 16: je 0x5878c2f8
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 90h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5A B0 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5878c306
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 4E B0 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c306
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 98 47 A2 58: mov dword ptr [0x58a24798], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 09 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 52h
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x5878c363
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 2dh
        ; Exact mapped bytes 7E 1F: jle 0x5878c357
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 16: je 0x5878c357
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [edx + 0b4h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 FB AF 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5878c365
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 EF AF 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c365
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0bch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 9C 47 A2 58: mov dword ptr [0x58a2479c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 08 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 53h
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5878c3a6
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 11ch
        push 11fh
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 8C 03 09 00: call 0x5881c730
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c3a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 D8 45 A2 58: mov dword ptr [0x58a245d8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 D8 45 A2 58: mov eax, dword ptr [0x58a245d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [eax + 24h]
        add eax, 24h
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes A1 D8 45 A2 58: mov eax, dword ptr [0x58a245d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [eax + 24h]
        add eax, 24h
        mov ecx, 7fffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 D8 45 A2 58: mov esi, dword ptr [0x58a245d8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 40h]
        mov edx, 3a98h
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5878c404
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 4C 6B 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5878c411
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 CF 6A 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x00
        push 0b8ch
        ; Exact mapped bytes E8 33 08 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 54h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c443
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 8F 04 11 00: call 0x5889c8d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c445
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 D0 45 A2 58: mov dword ptr [0x58a245d0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 D0 45 A2 58: mov eax, dword ptr [0x58a245d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        add eax, 24h
        mov ecx, 7fffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 D0 45 A2 58: mov esi, dword ptr [0x58a245d0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 40h]
        mov edx, 39d0h
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5878c48a
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C6 6A 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5878c497
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 49 6A 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 AD 07 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 55h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5878c4cb
        __asm _emit 0x74
        __asm _emit 0x17
        push 0e8h
        push 0fbh
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 49 55 01 00: call 0x587a1a10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x5878c4cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        ; Exact mapped bytes 89 35 CC 45 A2 58: mov dword ptr [0x58a245cc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 40h]
        mov eax, 7fbch
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5878c4ed
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 63 6A 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5878c4fa
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 E6 69 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x69
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes A1 CC 45 A2 58: mov eax, dword ptr [0x58a245cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 2ch
        ; Exact mapped bytes E8 3F 07 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 56h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5878c52b
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 27 8B FC FF: call 0x58755050
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878c52d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 6ch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 E0 45 A2 58: mov dword ptr [0x58a245e0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 07 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 57h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c565
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 FD 45 13 00: call 0x588c0b60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x45
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c567
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ae4h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 FC 47 A2 58: mov dword ptr [0x58a247fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 06 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 58h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c5a2
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 20 61 04 00: call 0x587d26c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c5a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 A0 45 A2 58: mov dword ptr [0x58a245a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 35 A0 45 A2 58: mov esi, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 40h]
        mov eax, 44ch
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5878c5d2
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 7E 69 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x69
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5878c5df
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 01 69 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x69
        __asm _emit 0x17
        __asm _emit 0x00
        push 30ch
        ; Exact mapped bytes E8 65 06 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 59h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c611
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 41 9B 07 00: call 0x58806150
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c613
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        ; Exact mapped bytes A3 A8 45 A2 58: mov dword ptr [0x58a245a8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 21f40h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes E8 1F 06 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 5ah
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c657
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 6B 4B 07 00: call 0x588011c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c659
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        ; Exact mapped bytes A3 9C 45 A2 58: mov dword ptr [0x58a2459c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 1054h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes E8 D9 05 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 5bh
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c69d
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 65 F3 04 00: call 0x587dba00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c69f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        ; Exact mapped bytes A3 98 45 A2 58: mov dword ptr [0x58a24598], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 12dch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes E8 93 05 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 5ch
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5878c6e6
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push 0
        push 0
        push 29ch
        push 1eh
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 EC 2C 09 00: call 0x5881f3d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c6e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        ; Exact mapped bytes A3 B4 45 A2 58: mov dword ptr [0x58a245b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 48h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes E8 4D 05 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 5dh
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5878c71d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 E5 A4 FF FF: call 0x58786c00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878c71f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90ch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 B8 45 A2 58: mov dword ptr [0x58a245b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 05 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 5eh
        mov esi, 64h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5878c761
        __asm _emit 0x74
        __asm _emit 0x17
        push 40h
        push 0
        push 0
        push 0fffffea2h
        push esi
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 21 16 08 00: call 0x5880dd80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c763
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        ; Exact mapped bytes A3 A4 45 A2 58: mov dword ptr [0x58a245a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 7ch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes E8 D2 04 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 5fh
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c7a4
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 DE 72 11 00: call 0x588a3a80
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x72
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c7a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 320h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 BC AD A0 58: mov dword ptr [0x58a0adbc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 04 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 60h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5878c7e4
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push 0
        push 0
        push 258h
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 1E 82 0C 00: call 0x58854a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c7e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        ; Exact mapped bytes A3 C4 45 A2 58: mov dword ptr [0x58a245c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 140h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes E8 4C 04 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 61h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c82a
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push -2dh
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 18 CE 0F 00: call 0x58889640
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xce
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c82c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        ; Exact mapped bytes A3 BC 45 A2 58: mov dword ptr [0x58a245bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 19ch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes E8 06 04 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 62h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5878c873
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push 0
        push 0
        push 23ah
        push 0ah
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 FF 58 08 00: call 0x58812170
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c875
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        ; Exact mapped bytes A3 C8 45 A2 58: mov dword ptr [0x58a245c8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0a4h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes E8 BD 03 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 63h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c8b9
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 29 60 FC FF: call 0x587528e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878c8bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 34h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 B0 45 A2 58: mov dword ptr [0x58a245b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 03 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], esi
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5878c8ea
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push 200h
        mov ecx, eax
        ; Exact mapped bytes E8 98 82 FC FF: call 0x58754b80
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878c8ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 7ch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 AC 45 A2 58: mov dword ptr [0x58a245ac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 03 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 65h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878c924
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 AE 23 FE FF: call 0x5876ecd0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878c926
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 18h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 CC 48 A2 58: mov dword ptr [0x58a248cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 03 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 66h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5878c952
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 E0 32 02 00: call 0x587afc30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c954
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 138h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 24 46 A2 58: mov dword ptr [0x58a24624], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 02 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 67h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5878c983
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 0F A1 00 00: call 0x58796a90
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c985
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 370h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 28 46 A2 58: mov dword ptr [0x58a24628], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 02 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 68h
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5878c9cc
        __asm _emit 0x74
        __asm _emit 0x21
        push 3a34h
        push 298h
        push 380h
        push 68h
        push 80h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 F6 49 11 00: call 0x588a13c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x49
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878c9ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes A3 2C 46 A2 58: mov dword ptr [0x58a2462c], eax
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 2F 11 00: call 0x5889f960
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x2f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 46 A2 58: mov ecx, dword ptr [0x58a2462c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 35 11 00: call 0x5889ffe0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x11
        __asm _emit 0x00
        push 29ch
        ; Exact mapped bytes E8 5B 02 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 69h
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5878ca27
        __asm _emit 0x74
        __asm _emit 0x21
        push 2710h
        push 20ch
        push 35ch
        push 0fffffdf4h
        push 52h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 5B 75 0F 00: call 0x58883f80
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x75
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878ca29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 138h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 E4 45 A2 58: mov dword ptr [0x58a245e4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 02 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 6ah
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5878ca73
        __asm _emit 0x74
        __asm _emit 0x24
        push 3a66h
        push 0fah
        push 1f4h
        push 96h
        push 106h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 EF 68 FA FF: call 0x58733360
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878ca75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1ch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 EC 45 A2 58: mov dword ptr [0x58a245ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 01 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 6bh
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5878caa1
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 F1 7D 03 00: call 0x587c4890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878caa3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 E8 45 A2 58: mov dword ptr [0x58a245e8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 01 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 6ch
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x5878cae7
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1388h
        push 0
        push 0
        push 0fah
        push 2eeh
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 4B EF 0F 00: call 0x5888ba30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878cae9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0b8h
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 F8 45 A2 58: mov dword ptr [0x58a245f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 01 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 6dh
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5878cb30
        __asm _emit 0x74
        __asm _emit 0x21
        push 2ee0h
        push 254h
        push 300h
        push 54h
        push 100h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 82 EE 16 00: call 0x588fb9b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xee
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878cb32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0efch
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes A3 F0 45 A2 58: mov dword ptr [0x58a245f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 01 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 6eh
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5878cb61
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 D1 B5 FE FF: call 0x58778130
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878cb63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes A3 1C 48 A2 58: mov dword ptr [0x58a2481c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D B8 FE FF: call 0x587783b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 C3 FE FF: call 0x58778e80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        push 20h
        ; Exact mapped bytes E8 C9 00 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 6fh
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5878cbce
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D DC 46 A2 58: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 0
        ; Exact mapped bytes 7E 1B: jle 0x5878cbc2
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 12: je 0x5878cbc2
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 90 A7 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5878cbd0
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 84 A7 02 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878cbd0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 83 3D 34 90 9C 58 00: cmp dword ptr [0x589c9034], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes A3 A0 47 A2 58: mov dword ptr [0x58a247a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 76: je 0x5878cc58
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes E8 4F 00 1F 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        cdq
        mov ecx, 3e8h
        idiv ecx
        push 30h
        test edx, edx
        ; Exact mapped bytes 74 2D: je 0x5878cc22
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes E8 54 00 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 70h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5878cc4f
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 15 F0 8F 9C 58: mov edx, dword ptr [0x589c8ff0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x58
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D5 D7 17 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd7
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes A3 B0 AD A0 58: mov dword ptr [0x58a0adb0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes EB 40: jmp 0x5878cc62
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes E8 27 00 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 71h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5878cc4f
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D F4 8F 9C 58: mov ecx, dword ptr [0x589c8ff4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x58
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A8 D7 17 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd7
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes A3 B0 AD A0 58: mov dword ptr [0x58a0adb0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes EB 13: jmp 0x5878cc62
        __asm _emit 0xeb
        __asm _emit 0x13
        xor eax, eax
        ; Exact mapped bytes A3 B0 AD A0 58: mov dword ptr [0x58a0adb0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes EB 0A: jmp 0x5878cc62
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 B0 AD A0 58 00 00 00 00: mov dword ptr [0x58a0adb0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 28h]
        push eax
        mov dword ptr [edx + 12150h], esi
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        xor eax, eax
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
