// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 292 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58821480 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_58821480_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 0C 04 00 00: sub esp, 0x40c
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 08 04 00 00: mov dword ptr [esp + 0x408], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 10 04 00 00: mov eax, dword ptr [esp + 0x410]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 1D 94 C1 98 58: mov ebx, dword ptr [0x5898c194]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B AC 24 1C 04 00 00: mov ebp, dword ptr [esp + 0x41c]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 97 D9 FF 00: push 0xffd997
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 07: jne 0x588214c6
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 05: jmp 0x588214cb
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA 73 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BA 00 FC FF FF: mov edx, 0xfffffc00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 4C 24 14: lea ecx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 64: jle 0x58821552
        __asm _emit 0x7e
        __asm _emit 0x64
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 2F: lea eax, [edi + ebp]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x2f
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 0F BE 94 24 14 04 00 00: movsx edx, byte ptr [esp + 0x414]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FA 80 00 00 00: cmp edx, 0x80
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 08: jge 0x58821512
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 81 C7 00 04 00 00: add edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x58821520
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes C6 84 24 14 04 00 00 00: mov byte ptr [esp + 0x414], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C7 FF 03 00 00: add edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 99 73 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2E 73 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 73 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x588214b4
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 EF: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xef
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5D 73 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 7C 0C 00 00: mov ecx, dword ptr [esi + 0xc7c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F2 72 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x72
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0C 00 00: mov ecx, dword ptr [esi + 0xc80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E7 72 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x72
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 18 04 00 00: mov ecx, dword ptr [esp + 0x418]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 3F B6 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 0C 04 00 00: add esp, 0x40c
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
