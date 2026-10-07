// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 261 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588627C0 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_588627c0_segment_00() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 08: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 69 C0 D4 00 00 00: imul eax, eax, 0xd4
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes FF 8C 9E 14 06 00 00: dec dword ptr [esi + ebx*4 + 0x614]
        __asm _emit 0xff
        __asm _emit 0x8c
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 AC 30 44 02 00 00: movzx ebp, word ptr [eax + esi + 0x244]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xac
        __asm _emit 0x30
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 4D: dec ebp
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 8C AE E4 05 00 00: mov ecx, dword ptr [esi + ebp*4 + 0x5e4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BC AE E4 05 00 00: lea edi, [esi + ebp*4 + 0x5e4]
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 43 EE F3 FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B 8C AE 0C 07 00 00: mov ecx, dword ptr [esi + ebp*4 + 0x70c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 42 4B 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B3 ED F3 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xed
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 83 BC 9E 14 06 00 00 00: cmp dword ptr [esi + ebx*4 + 0x614], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x588628be
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 9E 48 01 00 00 01 00 00 00: mov dword ptr [esi + ebx*4 + 0x148], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 2E 37 F8 FF: call 0x587e5f80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 15 D8 FF FF: call 0x58860070
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3B 9E 1C 01 00 00: cmp ebx, dword ptr [esi + 0x11c]
        __asm _emit 0x3b
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 5B: jne 0x588628be
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 17: cmp dword ptr [eax + 0x160], 0x17
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        ; Exact mapped bytes 7E 16: jle 0x58862887
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x58862887
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C0 05 00 00: add eax, 0x5c0
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58862889
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B B6 2C 07 00 00: mov esi, dword ptr [esi + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 54: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x588628be
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 48 18: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes 89 4E 0C: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 56 10: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8D 4E 14: lea ecx, [esi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
