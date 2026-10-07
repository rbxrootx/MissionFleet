// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 288 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885A340 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_5885a340_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D BD 5C 01 00 00: lea edi, [ebp + 0x15c]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B5 A8 00 00 00: lea esi, [ebp + 0xa8]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C7 86 90 00 00 00 01 00 00 00: mov dword ptr [esi + 0x90], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5E E8 FF FF: call 0x58858bd0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 1E: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1e
        ; Exact mapped bytes 88 9C 28 C8 00 00 00: mov byte ptr [eax + ebp + 0xc8], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x28
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 50: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D F4 00 00 00: mov ecx, dword ptr [ebp + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 8D F8 00 00 00: lea edx, [ebp + ecx*4 + 0xf8]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 44 72 F4 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes B8 0D 2B 9E 3A: mov eax, 0x3a9e2b0d
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x2b
        __asm _emit 0x9e
        __asm _emit 0x3a
        ; Exact mapped bytes 89 5F FC: mov dword ptr [edi - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0xfc
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 89 47 3C: mov dword ptr [edi + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x3c
        ; Exact mapped bytes 89 47 40: mov dword ptr [edi + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x40
        ; Exact mapped bytes 89 9F D0 07 00 00: mov dword ptr [edi + 0x7d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9F D4 07 00 00: mov dword ptr [edi + 0x7d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9f
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 38 09 00 00: mov eax, dword ptr [esi + 0x938]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 18 09 00 00: mov ecx, dword ptr [esi + 0x918]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 34 9A F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9a
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 D0 08 00 00: mov eax, dword ptr [esi + 0x8d0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 20 08 00 00: mov dword ptr [esi + 0x820], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x20
        __asm _emit 0x08
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
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 9E F8 08 00 00: mov dword ptr [esi + 0x8f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 C7 08: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x08
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 85 61 FF FF FF: jne 0x5885a360
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 7E 15: jle 0x5885a422
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x5885a422
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
        ; Exact mapped bytes EB 02: jmp 0x5885a424
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B AD 7C 0A 00 00: mov ebp, dword ptr [ebp + 0xa7c]
        __asm _emit 0x8b
        __asm _emit 0xad
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 54: mov dword ptr [ebp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x54
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 29: je 0x5885a45a
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 55 0C: mov dword ptr [ebp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 48 1C: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1c
        ; Exact mapped bytes 89 4D 10: mov dword ptr [ebp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 20: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x20
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 8D 4D 14: lea ecx, [ebp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
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
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
