// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F0EE0 .. +0x277 bytes.
// Source symbol alias: FUN_588f0ee0.
extern "C" __declspec(naked) void FUN_588f0ee0() {
    __asm {
        // 0x588F0EE0: sub esp, 0x124
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0EE6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F0EEB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F0EED: mov dword ptr [esp + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0EF4: push ebx
        __asm _emit 0x53
        // 0x588F0EF5: push ebp
        __asm _emit 0x55
        // 0x588F0EF6: mov ebp, dword ptr [esp + 0x134]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0EFD: push esi
        __asm _emit 0x56
        // 0x588F0EFE: mov esi, dword ptr [esp + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0F05: push edi
        __asm _emit 0x57
        // 0x588F0F06: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F0F08: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F0F0A: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0F10: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588F0F12: je 0x588f105e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0F18: push esi
        __asm _emit 0x56
        // 0x588F0F19: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0F1E: movzx eax, byte ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588F0F22: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0F28: push esi
        __asm _emit 0x56
        // 0x588F0F29: push eax
        __asm _emit 0x50
        // 0x588F0F2A: call 0x58908110
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0F2F: push 0x7f
        __asm _emit 0x6A
        __asm _emit 0x7F
        // 0x588F0F31: lea ecx, [esp + 0x35]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x35
        // 0x588F0F35: push ebx
        __asm _emit 0x53
        // 0x588F0F36: push ecx
        __asm _emit 0x51
        // 0x588F0F37: mov byte ptr [esp + 0x3c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F0F3B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F0F40: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F0F42: add ebp, 0x78
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x78
        // 0x588F0F45: push ebp
        __asm _emit 0x55
        // 0x588F0F46: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0F4C: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F0F50: push edx
        __asm _emit 0x52
        // 0x588F0F51: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F0F55: mov dword ptr [esp + 0x25], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x25
        // 0x588F0F59: mov dword ptr [esp + 0x29], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x29
        // 0x588F0F5D: mov dword ptr [esp + 0x2d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2D
        // 0x588F0F61: mov dword ptr [esp + 0x31], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x31
        // 0x588F0F65: mov dword ptr [esp + 0x35], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x35
        // 0x588F0F69: mov dword ptr [esp + 0x39], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x39
        // 0x588F0F6D: mov dword ptr [esp + 0x3d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3D
        // 0x588F0F71: mov word ptr [esp + 0x41], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x41
        // 0x588F0F76: mov byte ptr [esp + 0x43], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x43
        // 0x588F0F7A: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588F0F7C: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F0F80: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588F0F83: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588F0F86: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588F0F88: inc eax
        __asm _emit 0x40
        // 0x588F0F89: cmp cl, bl
        __asm _emit 0x3A
        __asm _emit 0xCB
        // 0x588F0F8B: jne 0x588f0f86
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588F0F8D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F0F8F: cmp eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x588F0F92: jbe 0x588f0fa9
        __asm _emit 0x76
        __asm _emit 0x15
        // 0x588F0F94: push 0x5898d0d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0F99: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x588F0F9B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F0F9F: push eax
        __asm _emit 0x50
        // 0x588F0FA0: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F0FA4: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x0C
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F0FA9: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F0FAD: push ecx
        __asm _emit 0x51
        // 0x588F0FAE: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F0FB2: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0FB7: push edx
        __asm _emit 0x52
        // 0x588F0FB8: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588F0FBA: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0FC0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F0FC3: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F0FC8: push esi
        __asm _emit 0x56
        // 0x588F0FC9: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F0FCD: push eax
        __asm _emit 0x50
        // 0x588F0FCE: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0FD3: mov ecx, dword ptr [esp + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0FDA: push ecx
        __asm _emit 0x51
        // 0x588F0FDB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F0FDD: call 0x588efdb0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F0FE2: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0FE8: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0FED: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F0FEF: jl 0x588f112c
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0FF5: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0FFB: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F1000: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588F1003: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F1005: jge 0x588f112c
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F100B: mov eax, dword ptr [edi + esi*4 + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1012: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1017: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F101B: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F1021: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1027: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F102D: movzx eax, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588F1031: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588F1034: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588F1037: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x588F1039: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588F103B: mov eax, dword ptr [edi + esi*4 + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1042: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588F1045: je 0x588f1050
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F1047: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F104B: jmp 0x588f112c
        __asm _emit 0xE9
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1050: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1055: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F1059: jmp 0x588f112c
        __asm _emit 0xE9
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F105E: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F1063: push esi
        __asm _emit 0x56
        // 0x588F1064: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F1069: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F106E: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1074: push esi
        __asm _emit 0x56
        // 0x588F1075: push ebx
        __asm _emit 0x53
        // 0x588F1076: call 0x58908110
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F107B: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1081: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F1086: push esi
        __asm _emit 0x56
        // 0x588F1087: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F108C: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F1091: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1096: lea edx, [esp + 0x35]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x35
        // 0x588F109A: push ebx
        __asm _emit 0x53
        // 0x588F109B: push edx
        __asm _emit 0x52
        // 0x588F109C: mov byte ptr [esp + 0x3c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F10A0: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F10A5: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F10AA: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F10B0: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F10B6: movzx eax, word ptr [edx + esi*2 + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F10BE: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F10C1: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F10C4: je 0x588f10df
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588F10C6: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588F10C9: push eax
        __asm _emit 0x50
        // 0x588F10CA: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F10CE: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F10D3: push ecx
        __asm _emit 0x51
        // 0x588F10D4: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F10DA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F10DD: jmp 0x588f10e3
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588F10DF: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F10E3: mov ecx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F10E9: push 0x808080
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        // 0x588F10EE: push esi
        __asm _emit 0x56
        // 0x588F10EF: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F10F3: push edx
        __asm _emit 0x52
        // 0x588F10F4: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F10F9: mov ecx, dword ptr [edi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F10FF: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F1104: push esi
        __asm _emit 0x56
        // 0x588F1105: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F110A: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F110F: mov eax, dword ptr [edi + esi*4 + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1116: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F111B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F111F: mov eax, dword ptr [edi + esi*4 + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1126: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588F1128: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F112C: mov esi, dword ptr [edi + esi*4 + 0x234]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1133: mov ecx, dword ptr [esp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F113A: pop edi
        __asm _emit 0x5F
        // 0x588F113B: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1140: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588F1144: pop esi
        __asm _emit 0x5E
        // 0x588F1145: pop ebp
        __asm _emit 0x5D
        // 0x588F1146: pop ebx
        __asm _emit 0x5B
        // 0x588F1147: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F1149: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F114E: add esp, 0x124
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1154: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
