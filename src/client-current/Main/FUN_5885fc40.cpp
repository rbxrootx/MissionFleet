// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 365 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885FC40 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_5885fc40_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 91 0C 10 00 00: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 88 03 00 00: mov eax, dword ptr [edx + 0x388]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 85 B8 00 00 00: mov dword ptr [ebp + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 B4 00 00 00: lea eax, [ebp + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7D: push 0x7d
        __asm _emit 0x6a
        __asm _emit 0x7d
        ; Exact mapped bytes C7 00 7D 00 00 00: mov dword ptr [eax], 0x7d
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x7d
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 65 19 F4 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x19
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D EC 00 00 00: mov ecx, dword ptr [ebp + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 95 E4 00 00 00: mov edx, dword ptr [ebp + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 42 50 01 00 00 00: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 F4 00 00 00: mov eax, dword ptr [ebp + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D F0 00 00 00: mov ecx, dword ptr [ebp + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 41 F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x41
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9D B0 00 00 00: mov dword ptr [ebp + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D C8 00 00 00: mov word ptr [ebp + 0xc8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 AC 00 00 00: mov word ptr [ebp + 0xac], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D A8 00 00 00: mov dword ptr [ebp + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D BD 60 01 00 00: lea edi, [ebp + 0x160]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B5 FC 00 00 00: lea esi, [ebp + 0xfc]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5885fce0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885FCE0 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_5885fc40_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C7 46 4C 01 00 00 00: mov dword ptr [esi + 0x4c], 1
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 1E: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1e
        ; Exact mapped bytes 88 9C 28 10 01 00 00: mov byte ptr [eax + ebp + 0x110], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 24: mov dword ptr [esi + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes B8 D0 B2 E6 A0: mov eax, 0xa0e6b2d0
        __asm _emit 0xb8
        __asm _emit 0xd0
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xa0
        ; Exact mapped bytes 89 5F FC: mov dword ptr [edi - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0xfc
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 89 47 24: mov dword ptr [edi + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 89 47 28: mov dword ptr [edi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x28
        ; Exact mapped bytes 89 9F F4 04 00 00: mov dword ptr [edi + 0x4f4], ebx
        __asm _emit 0x89
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9F F8 04 00 00: mov dword ptr [edi + 0x4f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C4 05 00 00: mov ecx, dword ptr [esi + 0x5c4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E B0 05 00 00: mov ecx, dword ptr [esi + 0x5b0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 40 F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 80 05 00 00: mov eax, dword ptr [esi + 0x580]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 18 05 00 00: mov dword ptr [esi + 0x518], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA F0 FF 00 00: mov edx, 0xfff0
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 9E 9C 05 00 00: mov dword ptr [esi + 0x59c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x05
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
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 8A: jne 0x5885fce0
        __asm _emit 0x75
        __asm _emit 0x8a
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
        ; Exact mapped bytes 7E 15: jle 0x5885fd79
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x5885fd79
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
        ; Exact mapped bytes EB 02: jmp 0x5885fd7b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B AD 2C 07 00 00: mov ebp, dword ptr [ebp + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0xad
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 54: mov dword ptr [ebp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x54
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5885fdb0
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 48 18: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes 89 4D 0C: mov dword ptr [ebp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 55 10: mov dword ptr [ebp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
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
