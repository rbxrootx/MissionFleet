// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EFDB0 .. +0x178 bytes.
// Source symbol alias: FUN_588efdb0.
extern "C" __declspec(naked) void FUN_588efdb0() {
    __asm {
        // 0x588EFDB0: push ebp
        __asm _emit 0x55
        // 0x588EFDB1: push esi
        __asm _emit 0x56
        // 0x588EFDB2: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EFDB6: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588EFDB8: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFDBE: push edi
        __asm _emit 0x57
        // 0x588EFDBF: mov edi, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFDC5: mov eax, dword ptr [edi + esi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFDCC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EFDCE: je 0x588eff22
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFDD4: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588EFDD7: sub eax, 5
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x588EFDDA: je 0x588efebb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFDE0: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588EFDE3: je 0x588efe84
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFDE9: sub eax, 7
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x07
        // 0x588EFDEC: jne 0x588eff22
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFDF2: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588EFDF4: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFDFA: movzx edx, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x588EFDFE: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588EFE01: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588EFE04: sub edx, dword ptr [ebp + 0x424]
        __asm _emit 0x2B
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE0A: cmp dword ptr [eax + esi*4 + 0xb40], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xB0
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE12: lea edx, [edx + esi - 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x32
        __asm _emit 0xE4
        // 0x588EFE16: push ebx
        __asm _emit 0x53
        // 0x588EFE17: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EFE1B: je 0x588efe3b
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588EFE1D: mov edx, dword ptr [eax + esi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB0
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE24: movzx ebx, word ptr [edx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x9A
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE2B: movzx edx, word ptr [eax + esi*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0xB0
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE33: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE39: jmp 0x588efe3f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588EFE3B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588EFE3D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588EFE3F: cmp dword ptr [edi + esi*8 + 0xbc4], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xF7
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE47: je 0x588efe68
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x588EFE49: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588EFE4B: mov eax, dword ptr [ecx + esi*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xF1
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE52: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588EFE55: movzx ecx, word ptr [ecx + esi*4 + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0xB1
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE5D: sub eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0B
        // 0x588EFE60: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE66: jmp 0x588efe6c
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588EFE68: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EFE6A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588EFE6C: push eax
        __asm _emit 0x50
        // 0x588EFE6D: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EFE71: push ebx
        __asm _emit 0x53
        // 0x588EFE72: push eax
        __asm _emit 0x50
        // 0x588EFE73: push esi
        __asm _emit 0x56
        // 0x588EFE74: push ecx
        __asm _emit 0x51
        // 0x588EFE75: push edx
        __asm _emit 0x52
        // 0x588EFE76: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588EFE78: call 0x588ef860
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EFE7D: pop ebx
        __asm _emit 0x5B
        // 0x588EFE7E: pop edi
        __asm _emit 0x5F
        // 0x588EFE7F: pop esi
        __asm _emit 0x5E
        // 0x588EFE80: pop ebp
        __asm _emit 0x5D
        // 0x588EFE81: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588EFE84: cmp dword ptr [edi + esi*8 + 0xbc0], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xF7
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFE8C: jne 0x588efe9f
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x588EFE8E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EFE90: push esi
        __asm _emit 0x56
        // 0x588EFE91: push eax
        __asm _emit 0x50
        // 0x588EFE92: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588EFE94: call 0x588ef790
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EFE99: pop edi
        __asm _emit 0x5F
        // 0x588EFE9A: pop esi
        __asm _emit 0x5E
        // 0x588EFE9B: pop ebp
        __asm _emit 0x5D
        // 0x588EFE9C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588EFE9F: movzx eax, word ptr [edi + esi*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFEA7: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFEAC: push esi
        __asm _emit 0x56
        // 0x588EFEAD: push eax
        __asm _emit 0x50
        // 0x588EFEAE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588EFEB0: call 0x588ef790
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EFEB5: pop edi
        __asm _emit 0x5F
        // 0x588EFEB6: pop esi
        __asm _emit 0x5E
        // 0x588EFEB7: pop ebp
        __asm _emit 0x5D
        // 0x588EFEB8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588EFEBB: cmp dword ptr [edi + esi*8 + 0xbc0], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xF7
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFEC3: jne 0x588efec9
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588EFEC5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EFEC7: jmp 0x588efed6
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588EFEC9: movzx eax, word ptr [edi + esi*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFED1: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFED6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EFED8: push esi
        __asm _emit 0x56
        // 0x588EFED9: push eax
        __asm _emit 0x50
        // 0x588EFEDA: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588EFEDC: call 0x588ef620
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EFEE1: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFEE7: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFEED: cmp dword ptr [eax + esi*8 + 0xbc4], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xF0
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFEF5: jne 0x588eff0a
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588EFEF7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EFEF9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EFEFB: push esi
        __asm _emit 0x56
        // 0x588EFEFC: push eax
        __asm _emit 0x50
        // 0x588EFEFD: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588EFEFF: call 0x588ef620
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EFF04: pop edi
        __asm _emit 0x5F
        // 0x588EFF05: pop esi
        __asm _emit 0x5E
        // 0x588EFF06: pop ebp
        __asm _emit 0x5D
        // 0x588EFF07: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588EFF0A: movzx eax, word ptr [eax + esi*4 + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF12: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EFF14: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFF19: push esi
        __asm _emit 0x56
        // 0x588EFF1A: push eax
        __asm _emit 0x50
        // 0x588EFF1B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588EFF1D: call 0x588ef620
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EFF22: pop edi
        __asm _emit 0x5F
        // 0x588EFF23: pop esi
        __asm _emit 0x5E
        // 0x588EFF24: pop ebp
        __asm _emit 0x5D
        // 0x588EFF25: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
