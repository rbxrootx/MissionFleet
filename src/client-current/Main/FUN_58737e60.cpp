// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 2748 bytes across five ranges.

// Ghidra range: 0x58737E60 .. +0x308 bytes.
extern "C" __declspec(naked) void FUN_58737e60_segment_00() {
    __asm {
        // 0x58737E60: push ebp
        __asm _emit 0x55
        // 0x58737E61: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58737E63: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58737E66: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x38
        // 0x58737E69: push ebx
        __asm _emit 0x53
        // 0x58737E6A: push ebp
        __asm _emit 0x55
        // 0x58737E6B: push esi
        __asm _emit 0x56
        // 0x58737E6C: push edi
        __asm _emit 0x57
        // 0x58737E6D: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58737E6F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58737E71: cmp byte ptr [ebp + 0x100], 0
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737E78: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58737E7C: jbe 0x58738930
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xAE
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737E82: lea eax, [edi + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xBF
        // 0x58737E85: lea esi, [ebp + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x85
        __asm _emit 0x00
        // 0x58737E89: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x58737E8C: cmp byte ptr [esi + 0x109], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737E93: jbe 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x83
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737E99: cmp dword ptr [esi + 0x10c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737EA0: jne 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737EA6: movzx eax, byte ptr [esi + 0x108]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737EAD: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x58737EB0: je 0x5873829b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737EB6: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58737EB9: jne 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5D
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737EBF: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737EC5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58737EC7: jne 0x58737f19
        __asm _emit 0x75
        __asm _emit 0x50
        // 0x58737EC9: lea ebx, [ebp + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x9D
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737ECF: mov dword ptr [esp + 0x20], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737ED7: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58737ED9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58737EDB: je 0x58737f0d
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58737EDD: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xE7
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58737EE2: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58737EE7: jne 0x58737f0d
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58737EE9: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58737EEB: mov dword ptr [esi + 0x110], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737EF1: mov byte ptr [esi + 0x114], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58737EF8: mov byte ptr [esi + 0x115], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737EFF: mov byte ptr [esi + 0x116], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F06: mov byte ptr [esi + 0x117], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F0D: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58737F10: sub dword ptr [esp + 0x20], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58737F15: jne 0x58737ed7
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x58737F17: jmp 0x58737f70
        __asm _emit 0xEB
        __asm _emit 0x57
        // 0x58737F19: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xE7
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58737F1E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58737F20: jne 0x58737f70
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x58737F22: lea ebx, [ebp + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x9D
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F28: mov dword ptr [esp + 0x20], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F30: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58737F32: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58737F34: je 0x58737f66
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58737F36: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xE7
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58737F3B: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58737F40: jne 0x58737f66
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58737F42: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58737F44: mov dword ptr [esi + 0x110], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F4A: mov byte ptr [esi + 0x114], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58737F51: mov byte ptr [esi + 0x115], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F58: mov byte ptr [esi + 0x116], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F5F: mov byte ptr [esi + 0x117], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F66: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58737F69: sub dword ptr [esp + 0x20], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58737F6E: jne 0x58737f30
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x58737F70: mov al, byte ptr [esi + 0x114]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F76: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58737F78: jne 0x58737fce
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x58737F7A: cmp dword ptr [esi + 0x110], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F81: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F87: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x58737F8A: lea eax, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F90: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x58737F93: mov eax, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x58737F96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58737F98: je 0x587382f8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737F9E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58737FA0: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58737FA3: cmp dword ptr [ecx + 0x4c8], -1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x58737FAA: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FB0: mov edx, dword ptr [ecx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FB6: cmp edx, dword ptr [ecx + 0x324]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FBC: jl 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5A
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FC2: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58737FC5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58737FC7: jne 0x58737fa0
        __asm _emit 0x75
        __asm _emit 0xD7
        // 0x58737FC9: jmp 0x587382f8
        __asm _emit 0xE9
        __asm _emit 0x2A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FCE: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58737FD0: jne 0x587381b0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FD6: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FDC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58737FDE: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FE4: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xE6
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58737FE9: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58737FEE: jne 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737FF4: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x58737FF7: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58737FF9: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x58737FFC: lea ebx, [eax + ecx + 0x138c]
        __asm _emit 0x8D
        __asm _emit 0x9C
        __asm _emit 0x08
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738003: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58738006: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873800A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873800E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738010: je 0x58738093
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738016: mov eax, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873801C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873801F: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58738022: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58738026: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873802A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738030: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738034: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58738037: mov ebx, dword ptr [edx + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873803D: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58738040: sub eax, dword ptr [esp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58738044: cdq
        __asm _emit 0x99
        // 0x58738045: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58738047: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5873804A: sub eax, dword ptr [esp + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873804E: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x58738050: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58738052: cdq
        __asm _emit 0x99
        // 0x58738053: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58738055: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58738057: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58738059: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873805C: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873805E: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58738061: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58738063: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58738067: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873806B: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738070: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738075: cmp eax, 0x258
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873807A: jl 0x587381a4
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738080: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738084: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58738087: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873808B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873808D: jne 0x58738030
        __asm _emit 0x75
        __asm _emit 0xA1
        // 0x5873808F: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58738093: cmp byte ptr [esi + 0x117], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873809A: jne 0x587384f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587380A0: push edi
        __asm _emit 0x57
        // 0x587380A1: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587380A3: call 0x58736ff0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587380A8: mov eax, dword ptr [ebp + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587380AE: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x587380B1: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x587380B4: add eax, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587380B7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587380B9: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587380BF: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587380C4: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x587380C7: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587380CC: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587380CE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587380D0: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x587380D3: mov dl, 0x32
        __asm _emit 0xB2
        __asm _emit 0x32
        // 0x587380D5: imul dl
        __asm _emit 0xF6
        __asm _emit 0xEA
        // 0x587380D7: sub cl, al
        __asm _emit 0x2A
        __asm _emit 0xC8
        // 0x587380D9: sub cl, 0x51
        __asm _emit 0x80
        __asm _emit 0xE9
        __asm _emit 0x51
        // 0x587380DC: mov byte ptr [esi + 0x117], cl
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587380E2: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587380E5: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587380E8: add eax, dword ptr [ebp + 0x24c]
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587380EE: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587380F0: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587380F6: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587380FC: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58738101: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x58738104: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58738106: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58738108: lea edx, [edx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x52
        // 0x5873810B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873810D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873810F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58738111: seta al
        __asm _emit 0x0F
        __asm _emit 0x97
        __asm _emit 0xC0
        // 0x58738114: add al, 2
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x58738116: mov byte ptr [esi + 0x116], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873811C: mov eax, dword ptr [ebp + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738122: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58738124: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873812A: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738130: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58738135: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x58738138: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5873813A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873813C: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5873813F: mov dl, 0x32
        __asm _emit 0xB2
        __asm _emit 0x32
        // 0x58738141: imul dl
        __asm _emit 0xF6
        __asm _emit 0xEA
        // 0x58738143: sub cl, al
        __asm _emit 0x2A
        __asm _emit 0xC8
        // 0x58738145: add cl, 0x19
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x19
        // 0x58738148: cmp byte ptr [esi + 0x116], 3
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5873814F: mov byte ptr [esi + 0x115], cl
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738155: jne 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873815B: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x5873815E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58738160: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738166: jmp 0x58738170
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra range: 0x58738170 .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_58737e60_segment_01() {
    __asm {
        // 0x58738170: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58738173: mov edx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738179: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873817E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58738180: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58738183: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58738185: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58738188: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873818A: cmp eax, 0xfa
        __asm _emit 0x3D
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873818F: jge 0x58738198
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x58738191: mov byte ptr [esi + 0x115], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738198: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x5873819B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873819D: jne 0x58738170
        __asm _emit 0x75
        __asm _emit 0xD1
        // 0x5873819F: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587381A4: mov byte ptr [esi + 0x114], 3
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587381AB: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x6C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587381B0: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x587381B2: jne 0x58738230
        __asm _emit 0x75
        __asm _emit 0x7C
        // 0x587381B4: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587381B7: lea edx, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587381BD: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587381C0: mov ecx, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587381C3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587381C5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587381C7: je 0x5873821c
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x587381C9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587381D0: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587381D3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587381D5: je 0x58738202
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587381D7: mov edx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587381DD: cmp edx, dword ptr [eax + 0x324]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587381E3: jl 0x587381fd
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x587381E5: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587381EA: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587381EC: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587381EF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587381F1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587381F4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587381F6: cmp eax, 0x118
        __asm _emit 0x3D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587381FB: jge 0x58738202
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587381FD: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738202: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58738205: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58738207: jne 0x587381d0
        __asm _emit 0x75
        __asm _emit 0xC7
        // 0x58738209: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5873820B: je 0x5873821c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5873820D: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5873820F: push edi
        __asm _emit 0x57
        // 0x58738210: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58738212: call 0x58735f30
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738217: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873821C: push edi
        __asm _emit 0x57
        // 0x5873821D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873821F: call 0x58736f70
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738224: mov byte ptr [esi + 0x114], 4
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5873822B: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0xEC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738230: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x58738232: jne 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738238: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5873823B: lea ecx, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738241: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58738244: mov ebx, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x11
        // 0x58738247: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58738249: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873824F: nop
        __asm _emit 0x90
        // 0x58738250: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58738253: mov ecx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738259: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873825E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58738260: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58738263: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58738265: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58738268: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873826A: cmp ecx, 0x118
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738270: jge 0x5873828f
        __asm _emit 0x7D
        __asm _emit 0x1D
        // 0x58738272: mov edx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738278: movzx eax, word ptr [edx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873827F: push eax
        __asm _emit 0x50
        // 0x58738280: push edi
        __asm _emit 0x57
        // 0x58738281: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58738283: call 0x58735fa0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738288: mov byte ptr [esi + 0x114], 7
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5873828F: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x58738292: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58738294: jne 0x58738250
        __asm _emit 0x75
        __asm _emit 0xBA
        // 0x58738296: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873829B: mov al, byte ptr [esi + 0x114]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382A1: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587382A3: jne 0x58738319
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x587382A5: cmp dword ptr [esi + 0x110], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382AC: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6A
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382B2: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587382B5: lea ecx, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382BB: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587382BE: mov eax, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x587382C1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587382C3: je 0x587382f8
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x587382C5: jmp 0x587382d0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra range: 0x587382D0 .. +0x1E8 bytes.
extern "C" __declspec(naked) void FUN_58737e60_segment_02() {
    __asm {
        // 0x587382D0: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587382D3: cmp dword ptr [ecx + 0x4c8], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382D9: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3D
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382DF: mov ebx, dword ptr [ecx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382E5: cmp ebx, dword ptr [ecx + 0x324]
        __asm _emit 0x3B
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382EB: jl 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x2B
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587382F1: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587382F4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587382F6: jne 0x587382d0
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x587382F8: mov byte ptr [esi + 0x114], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587382FF: mov byte ptr [esi + 0x115], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738306: mov byte ptr [esi + 0x116], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873830D: mov byte ptr [esi + 0x117], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738314: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738319: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5873831B: jne 0x58738528
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738321: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738327: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58738329: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873832F: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xE3
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58738334: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58738339: jne 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873833F: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58738342: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58738344: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58738347: mov eax, dword ptr [ecx + edx + 0x1390]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873834E: lea ebx, [ecx + edx + 0x138c]
        __asm _emit 0x8D
        __asm _emit 0x9C
        __asm _emit 0x11
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738355: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58738359: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873835D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873835F: je 0x587383e3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738365: mov eax, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873836B: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5873836E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58738371: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58738375: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58738379: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738380: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738384: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58738387: mov ebx, dword ptr [ecx + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873838D: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58738390: sub eax, dword ptr [esp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58738394: cdq
        __asm _emit 0x99
        // 0x58738395: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58738397: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5873839A: sub eax, dword ptr [esp + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873839E: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x587383A0: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587383A2: cdq
        __asm _emit 0x99
        // 0x587383A3: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587383A5: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587383A7: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587383A9: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587383AC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587383AE: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587383B1: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587383B3: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587383B7: fild dword ptr [esp + 0x24]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587383BB: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587383C0: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587383C5: cmp eax, 0x6a4
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587383CA: jl 0x587381a4
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587383D0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587383D4: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587383D7: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587383DB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587383DD: jne 0x58738380
        __asm _emit 0x75
        __asm _emit 0xA1
        // 0x587383DF: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587383E3: cmp byte ptr [esi + 0x117], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587383EA: jne 0x587384f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587383F0: push edi
        __asm _emit 0x57
        // 0x587383F1: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587383F3: call 0x58736ff0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587383F8: mov eax, dword ptr [ebp + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587383FE: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58738401: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x58738404: add eax, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58738407: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58738409: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873840F: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738414: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x58738417: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873841C: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5873841E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58738420: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58738423: mov dl, 0x32
        __asm _emit 0xB2
        __asm _emit 0x32
        // 0x58738425: imul dl
        __asm _emit 0xF6
        __asm _emit 0xEA
        // 0x58738427: sub cl, al
        __asm _emit 0x2A
        __asm _emit 0xC8
        // 0x58738429: sub cl, 0x51
        __asm _emit 0x80
        __asm _emit 0xE9
        __asm _emit 0x51
        // 0x5873842C: mov byte ptr [esi + 0x117], cl
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738432: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58738435: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58738438: add eax, dword ptr [ebp + 0x24c]
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873843E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58738440: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738446: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873844C: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58738451: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x58738454: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58738456: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58738458: lea edx, [edx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x52
        // 0x5873845B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873845D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873845F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58738461: seta al
        __asm _emit 0x0F
        __asm _emit 0x97
        __asm _emit 0xC0
        // 0x58738464: add al, 2
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x58738466: mov byte ptr [esi + 0x116], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873846C: mov eax, dword ptr [ebp + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738472: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58738474: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873847A: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738480: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58738485: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x58738488: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5873848A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873848C: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5873848F: mov dl, 0x32
        __asm _emit 0xB2
        __asm _emit 0x32
        // 0x58738491: imul dl
        __asm _emit 0xF6
        __asm _emit 0xEA
        // 0x58738493: sub cl, al
        __asm _emit 0x2A
        __asm _emit 0xC8
        // 0x58738495: add cl, 0x19
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x19
        // 0x58738498: cmp byte ptr [esi + 0x116], 3
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5873849F: mov byte ptr [esi + 0x115], cl
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587384A5: jne 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587384AB: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587384AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587384B0: je 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587384B6: jmp 0x587384c0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra range: 0x587384C0 .. +0x2ED bytes.
extern "C" __declspec(naked) void FUN_58737e60_segment_03() {
    __asm {
        // 0x587384C0: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587384C3: mov edx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587384C9: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587384CE: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587384D0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587384D3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587384D5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587384D8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587384DA: cmp eax, 0xfa
        __asm _emit 0x3D
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587384DF: jge 0x587384e8
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x587384E1: mov byte ptr [esi + 0x115], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587384E8: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587384EB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587384ED: jne 0x587384c0
        __asm _emit 0x75
        __asm _emit 0xD1
        // 0x587384EF: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587384F4: cmp byte ptr [esi + 0x115], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587384FB: jbe 0x5873851d
        __asm _emit 0x76
        __asm _emit 0x20
        // 0x587384FD: movzx ecx, byte ptr [esi + 0x116]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738504: push ecx
        __asm _emit 0x51
        // 0x58738505: push edi
        __asm _emit 0x57
        // 0x58738506: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58738508: call 0x58735f30
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873850D: add byte ptr [esi + 0x115], 0xff
        __asm _emit 0x80
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x58738514: jne 0x5873851d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58738516: mov byte ptr [esi + 0x116], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873851D: dec byte ptr [esi + 0x117]
        __asm _emit 0xFE
        __asm _emit 0x8E
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738523: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738528: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5873852A: jne 0x587385ad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738530: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738536: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58738538: je 0x58738543
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5873853A: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xE1
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873853F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738541: jne 0x5873854a
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58738543: mov byte ptr [esi + 0x114], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5873854A: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5873854D: lea edx, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738553: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x58738556: mov ecx, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x58738559: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873855B: je 0x5873858a
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5873855D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58738560: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58738563: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738565: je 0x58738583
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58738567: mov edx, dword ptr [eax + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873856D: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58738572: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58738574: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58738577: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58738579: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873857C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873857E: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58738581: jg 0x5873859e
        __asm _emit 0x7F
        __asm _emit 0x1B
        // 0x58738583: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58738586: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58738588: jne 0x58738560
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x5873858A: push edi
        __asm _emit 0x57
        // 0x5873858B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873858D: call 0x58736f70
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738592: mov byte ptr [esi + 0x114], 5
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58738599: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x7E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873859E: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587385A0: push edi
        __asm _emit 0x57
        // 0x587385A1: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587385A3: call 0x58735f30
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587385A8: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x6F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587385AD: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x587385AF: jne 0x58738810
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587385B5: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587385BB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587385BD: je 0x587385c8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587385BF: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xE1
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587385C4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587385C6: jne 0x587385cf
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587385C8: mov byte ptr [esi + 0x114], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587385CF: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587385D2: add edi, 0x139
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587385D8: shl edi, 4
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x04
        // 0x587385DB: mov eax, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x587385DE: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587385E1: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587385E5: mov eax, dword ptr [edx + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587385EB: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587385EE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587385F1: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587385F5: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587385F9: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587385FF: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58738602: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58738605: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58738609: mov eax, dword ptr [ecx + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873860F: add eax, 0x384
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738614: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58738618: cdq
        __asm _emit 0x99
        // 0x58738619: mov edi, 0xe10
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873861E: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58738620: mov eax, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738626: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58738629: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5873862F: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x58738634: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x58738636: mov edx, dword ptr [ebx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x9D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873863D: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58738641: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58738644: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58738646: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x58738649: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5873864B: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5873864E: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58738650: lea eax, [ebx + 0x708]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738656: cdq
        __asm _emit 0x99
        // 0x58738657: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873865B: mov ebx, 0xe10
        __asm _emit 0xBB
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738660: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58738662: mov eax, 0x14f8b589
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x58738667: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873866B: mov edx, dword ptr [edx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58738672: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58738675: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58738677: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873867B: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x5873867E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58738680: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58738683: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58738685: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58738689: mov eax, dword ptr [ecx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x8D
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58738690: cdq
        __asm _emit 0x99
        // 0x58738691: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58738693: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58738697: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x58738699: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x5873869B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873869D: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587386A1: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587386A6: setge dl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC2
        // 0x587386A9: lea edx, [edx + edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0xFF
        // 0x587386AD: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x587386B0: imul ecx, ecx, 0x1db
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xDB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587386B6: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587386B8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587386BB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587386BD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587386C0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587386C2: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587386C6: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587386CA: cdq
        __asm _emit 0x99
        // 0x587386CB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587386CD: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x587386CF: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587386D1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587386D3: cmp ebx, dword ptr [esp + 0x20]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587386D7: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587386DC: setge dl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC2
        // 0x587386DF: lea edx, [edx + edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0xFF
        // 0x587386E3: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x587386E6: imul ecx, ecx, 0x1a9
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xA9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587386EC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587386EE: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587386F1: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587386F3: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587386F6: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587386F8: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587386FC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587386FE: je 0x58738723
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58738700: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58738702: cdq
        __asm _emit 0x99
        // 0x58738703: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58738705: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58738707: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58738709: add eax, 0x35
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x35
        // 0x5873870C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5873870E: setge dl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC2
        // 0x58738711: lea edx, [edx + edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0xFF
        // 0x58738715: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x58738718: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873871C: lea eax, [edx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x5873871F: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58738723: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58738727: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58738729: je 0x5873874a
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5873872B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5873872D: cdq
        __asm _emit 0x99
        // 0x5873872E: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58738730: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58738732: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58738734: add eax, 0x35
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x35
        // 0x58738737: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58738739: setge dl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC2
        // 0x5873873C: lea edx, [edx + edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0xFF
        // 0x58738740: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x58738743: lea ecx, [ecx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x81
        // 0x58738746: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5873874A: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873874E: sub eax, dword ptr [esp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58738752: add eax, dword ptr [esp + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58738756: cdq
        __asm _emit 0x99
        // 0x58738757: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58738759: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873875B: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x5873875E: jge 0x58738802
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738764: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58738766: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58738768: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873876C: cdq
        __asm _emit 0x99
        // 0x5873876D: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5873876F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58738771: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x58738774: jge 0x58738802
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873877A: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873877E: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58738781: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58738783: je 0x587387d7
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x58738785: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58738788: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873878B: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5873878E: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58738792: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58738796: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58738798: add eax, dword ptr [esp + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873879C: mov dword ptr [esp + 0x14], 0x32
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587387A4: cdq
        __asm _emit 0x99
        // 0x587387A5: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587387A7: xor ebx, edx
        __asm _emit 0x33
        __asm _emit 0xDA
        // 0x587387A9: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x587387AB: jmp 0x587387b0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra range: 0x587387B0 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_58737e60_segment_04() {
    __asm {
        // 0x587387B0: cmp ebx, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587387B4: jge 0x587387f4
        __asm _emit 0x7D
        __asm _emit 0x3E
        // 0x587387B6: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587387B8: sub eax, dword ptr [esp + 0x34]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587387BC: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587387C0: cdq
        __asm _emit 0x99
        // 0x587387C1: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587387C3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587387C5: cmp eax, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587387C9: jge 0x587387f4
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x587387CB: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587387CE: add dword ptr [esp + 0x14], 0xf
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x587387D3: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587387D5: jne 0x587387b0
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x587387D7: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587387DB: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587387DF: push ecx
        __asm _emit 0x51
        // 0x587387E0: push edi
        __asm _emit 0x57
        // 0x587387E1: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587387E3: call 0x58737400
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587387E8: mov byte ptr [esi + 0x114], 6
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x587387EF: jmp 0x5873891c
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587387F4: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587387F8: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587387FC: push edx
        __asm _emit 0x52
        // 0x587387FD: jmp 0x58738914
        __asm _emit 0xE9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738802: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58738806: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873880A: push eax
        __asm _emit 0x50
        // 0x5873880B: jmp 0x58738914
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738810: cmp al, 6
        __asm _emit 0x3C
        __asm _emit 0x06
        // 0x58738812: jne 0x5873891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738818: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873881E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58738820: je 0x5873882b
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58738822: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xDE
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58738827: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58738829: jne 0x58738832
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5873882B: mov byte ptr [esi + 0x114], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58738832: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58738835: mov ebx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873883B: lea ecx, [edi + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738841: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58738844: mov eax, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x58738847: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5873884A: mov ecx, dword ptr [eax + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738850: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58738853: sub eax, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58738856: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873885A: cdq
        __asm _emit 0x99
        // 0x5873885B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873885D: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58738860: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x58738862: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58738864: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58738868: sub eax, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5873886B: cdq
        __asm _emit 0x99
        // 0x5873886C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5873886E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58738870: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58738872: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58738875: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58738877: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5873887A: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873887C: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58738880: fild dword ptr [esp + 0x34]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58738884: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738889: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873888E: cmp eax, 0xe1
        __asm _emit 0x3D
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738893: jg 0x587388ae
        __asm _emit 0x7F
        __asm _emit 0x19
        // 0x58738895: movzx ecx, word ptr [ebx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873889C: push ecx
        __asm _emit 0x51
        // 0x5873889D: push edi
        __asm _emit 0x57
        // 0x5873889E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587388A0: call 0x58736010
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587388A5: mov byte ptr [esi + 0x114], 7
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587388AC: jmp 0x5873891c
        __asm _emit 0xEB
        __asm _emit 0x6E
        // 0x587388AE: mov eax, dword ptr [ebx + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587388B4: add eax, 0x384
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587388B9: cdq
        __asm _emit 0x99
        // 0x587388BA: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587388BF: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587388C1: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587388C6: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587388C8: mov ecx, dword ptr [esi*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587388CF: imul ecx, ecx, 0x70
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x70
        // 0x587388D2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587388D4: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587388D7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587388D9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587388DC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587388DE: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587388E2: lea eax, [esi + 0x708]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587388E8: cdq
        __asm _emit 0x99
        // 0x587388E9: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587388EE: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587388F0: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587388F5: mov ecx, dword ptr [edx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587388FC: imul ecx, ecx, 0x70
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x70
        // 0x587388FF: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58738901: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58738904: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58738906: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58738909: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873890B: lea ecx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5873890F: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58738913: push ecx
        __asm _emit 0x51
        // 0x58738914: push edi
        __asm _emit 0x57
        // 0x58738915: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58738917: call 0x58737400
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873891C: movzx edx, byte ptr [ebp + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738923: inc edi
        __asm _emit 0x47
        // 0x58738924: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x58738926: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873892A: jl 0x58737e82
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x52
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738930: pop edi
        __asm _emit 0x5F
        // 0x58738931: pop esi
        __asm _emit 0x5E
        // 0x58738932: pop ebp
        __asm _emit 0x5D
        // 0x58738933: pop ebx
        __asm _emit 0x5B
        // 0x58738934: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58738936: pop ebp
        __asm _emit 0x5D
        // 0x58738937: ret
        __asm _emit 0xC3
    }
}
