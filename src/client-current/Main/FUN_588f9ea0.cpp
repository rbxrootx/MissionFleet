// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 291 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f9ea0.

// Ghidra body range 0x588F9EA0..0x588F9FC3; 291 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9ea0_segment_00() {
    __asm {
        // 0x588F9EA0: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9EA6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9EAB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F9EAD: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9EB4: push ebx
        __asm _emit 0x53
        // 0x588F9EB5: push ebp
        __asm _emit 0x55
        // 0x588F9EB6: push esi
        __asm _emit 0x56
        // 0x588F9EB7: mov esi, dword ptr [esp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9EBE: push edi
        __asm _emit 0x57
        // 0x588F9EBF: mov edi, dword ptr [esp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9EC6: movzx eax, byte ptr [edi + 0xb]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x0B
        // 0x588F9ECA: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588F9ECC: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F9ED0: push ecx
        __asm _emit 0x51
        // 0x588F9ED1: push eax
        __asm _emit 0x50
        // 0x588F9ED2: push eax
        __asm _emit 0x50
        // 0x588F9ED3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588F9ED5: call 0x588f9b20
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F9EDA: push eax
        __asm _emit 0x50
        // 0x588F9EDB: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588F9EDD: call 0x588f9cb0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F9EE2: mov ecx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9EE8: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F9EEC: push edx
        __asm _emit 0x52
        // 0x588F9EED: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x7D
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F9EF2: movzx eax, byte ptr [edi + 8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588F9EF6: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588F9EF9: je 0x588f9f4c
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588F9EFB: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588F9EFE: jne 0x588f9f9d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588F9F07: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588F9F09: sub eax, 0x2f
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x2F
        // 0x588F9F0C: add ecx, 0x4f
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x4F
        // 0x588F9F0F: push eax
        __asm _emit 0x50
        // 0x588F9F10: push ecx
        __asm _emit 0x51
        // 0x588F9F11: mov ecx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F17: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F1C: lea edi, [ebx + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F22: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F27: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588F9F2A: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F9F2C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F9F2E: sub edx, 0x37
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x37
        // 0x588F9F31: push edx
        __asm _emit 0x52
        // 0x588F9F32: add eax, 0x47
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x47
        // 0x588F9F35: push eax
        __asm _emit 0x50
        // 0x588F9F36: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F3B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F9F3D: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F9F42: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588F9F45: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588F9F48: jne 0x588f9f27
        __asm _emit 0x75
        __asm _emit 0xDD
        // 0x588F9F4A: jmp 0x588f9f9d
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F9F4C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588F9F4F: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588F9F51: sub ecx, 0x8f
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F57: push ecx
        __asm _emit 0x51
        // 0x588F9F58: mov ecx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F5E: add edx, 0xe0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F64: push edx
        __asm _emit 0x52
        // 0x588F9F65: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F6A: lea edi, [ebx + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F70: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F75: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588F9F78: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588F9F7A: sub eax, 0x99
        __asm _emit 0x2D
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F7F: add ecx, 0xd6
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F85: push eax
        __asm _emit 0x50
        // 0x588F9F86: push ecx
        __asm _emit 0x51
        // 0x588F9F87: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F9F89: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9F8E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F9F90: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F9F95: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588F9F98: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588F9F9B: jne 0x588f9f75
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x588F9F9D: mov ebx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9FA3: or word ptr [ebx + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4B
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F9FA8: mov ecx, dword ptr [esp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9FAF: pop edi
        __asm _emit 0x5F
        // 0x588F9FB0: pop esi
        __asm _emit 0x5E
        // 0x588F9FB1: pop ebp
        __asm _emit 0x5D
        // 0x588F9FB2: pop ebx
        __asm _emit 0x5B
        // 0x588F9FB3: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F9FB5: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F9FBA: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9FC0: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
