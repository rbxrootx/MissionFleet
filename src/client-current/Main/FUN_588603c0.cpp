// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 370 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588603C0 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_588603c0_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 84 86 48 01 00 00 18: test byte ptr [esi + eax*4 + 0x148], 0x18
        __asm _emit 0xf6
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 8D 84 86 48 01 00 00: lea eax, [esi + eax*4 + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x58860530
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 CE 5C 01 00 00: mov edx, dword ptr [esi + ecx*8 + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0xce
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 94 CE 60 01 00 00: cmp edx, dword ptr [esi + ecx*8 + 0x160]
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0xce
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 38 01 00 00: je 0x58860530
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 00 02 00 00 00: mov dword ptr [eax], 2
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 68 FC FF FF: call 0x58860070
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 86 7C 06 00 00: mov eax, dword ptr [esi + eax*4 + 0x67c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 96 AC 06 00 00: mov ecx, dword ptr [esi + edx*4 + 0x6ac]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E 39 F3 FF: call 0x58793da0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 86 98 06 00 00 01 00 00 00: mov dword ptr [esi + eax*4 + 0x698], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 CE 60 01 00 00: mov eax, dword ptr [esi + ecx*8 + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 84 CE 5C 01 00 00: sub eax, dword ptr [esi + ecx*8 + 0x15c]
        __asm _emit 0x2b
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 33 FA: xor edi, edx
        __asm _emit 0x33
        __asm _emit 0xfa
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 89 BC 8E 20 01 00 00: mov dword ptr [esi + ecx*4 + 0x120], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 84 96 20 01 00 00: lea eax, [esi + edx*4 + 0x120]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 61 11 F4 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B BC 8E 20 01 00 00: cmp edi, dword ptr [esi + ecx*4 + 0x120]
        __asm _emit 0x3b
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x588604a1
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 06 11 00: call 0x58970ae0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 C8 C3 98 58: call dword ptr [0x5898c3c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 96 20 01 00 00 00: cmp dword ptr [esi + edx*4 + 0x120], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 7E: jle 0x5886052f
        __asm _emit 0x7e
        __asm _emit 0x7e
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 69 C9 D4 00 00 00: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 94 31 5C 02 00 00: movzx edx, word ptr [ecx + esi + 0x25c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 94 86 34 01 00 00: cmp dword ptr [esi + eax*4 + 0x134], edx
        __asm _emit 0x39
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 63: jne 0x5886052f
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes C7 84 C6 58 06 00 00 00 00 00 00: mov dword ptr [esi + eax*8 + 0x658], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 8E C0 06 00 00: mov eax, dword ptr [esi + ecx*4 + 0x6c0]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 54: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 06: je 0x588604f1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 0F B7 40 0C: movzx eax, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x588604f3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 69 D2 D4 00 00 00: imul edx, edx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 BC 32 5C 02 00 00: movzx edi, word ptr [edx + esi + 0x25c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xbc
        __asm _emit 0x32
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF BC 8E 20 01 00 00: imul edi, dword ptr [esi + ecx*4 + 0x120]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 89 84 CE 54 06 00 00: mov dword ptr [esi + ecx*8 + 0x654], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 86 C0 06 00 00: mov ecx, dword ptr [esi + eax*4 + 0x6c0]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 50 00 00 00 00: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
