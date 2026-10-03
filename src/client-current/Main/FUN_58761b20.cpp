// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58761B20 .. +0xAE4 bytes.
extern "C" __declspec(naked) void FUN_58761b20() {
    __asm {
        // 0x58761B20: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761B23: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58761B27: push ebx
        __asm _emit 0x53
        // 0x58761B28: push ebp
        __asm _emit 0x55
        // 0x58761B29: push esi
        __asm _emit 0x56
        // 0x58761B2A: push edi
        __asm _emit 0x57
        // 0x58761B2B: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58761B2F: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58761B31: je 0x587625fa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761B37: mov ebx, dword ptr [ecx + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x4C
        // 0x58761B3A: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58761B3E: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58761B42: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58761B46: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58761B4A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58761B4C: je 0x58761b6e
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58761B4E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58761B50: cmp word ptr [ebx + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x58761B55: jge 0x58761b6a
        __asm _emit 0x7D
        __asm _emit 0x13
        // 0x58761B57: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58761B59: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x58761B5C: push ebp
        __asm _emit 0x55
        // 0x58761B5D: push esi
        __asm _emit 0x56
        // 0x58761B5E: push edi
        __asm _emit 0x57
        // 0x58761B5F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58761B61: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58761B63: mov ebx, dword ptr [ebx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x48
        // 0x58761B66: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58761B68: jne 0x58761b50
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x58761B6A: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58761B6E: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58761B72: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58761B75: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58761B78: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761B7D: cmp dword ptr [eax + 0x164], 0x2d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        // 0x58761B84: jle 0x58761b9d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761B86: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761B8D: je 0x58761b9d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761B8F: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761B95: mov ecx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761B9B: jmp 0x58761b9f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761B9D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761B9F: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761BA1: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58761BA6: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761BAB: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761BAE: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761BB0: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761BB2: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761BB5: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761BB8: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761BBB: push ebp
        __asm _emit 0x55
        // 0x58761BBC: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761BBF: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761BC2: push ebx
        __asm _emit 0x53
        // 0x58761BC3: push edi
        __asm _emit 0x57
        // 0x58761BC4: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761BC7: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x21
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761BCC: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761BD1: cmp dword ptr [eax + 0x164], 0x1b
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1B
        // 0x58761BD8: jle 0x58761bee
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58761BDA: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761BE1: je 0x58761bee
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58761BE3: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761BE9: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58761BEC: jmp 0x58761bf0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761BEE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761BF0: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761BF2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58761BF4: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761BF9: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761BFC: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761BFE: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761C00: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761C03: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761C06: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761C09: push ebp
        __asm _emit 0x55
        // 0x58761C0A: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761C0D: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761C10: push ebx
        __asm _emit 0x53
        // 0x58761C11: push edi
        __asm _emit 0x57
        // 0x58761C12: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761C15: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x21
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761C1A: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761C1F: cmp dword ptr [eax + 0x164], 0x24
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        // 0x58761C26: jle 0x58761c3f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761C28: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761C2F: je 0x58761c3f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761C31: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761C37: mov ecx, dword ptr [eax + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761C3D: jmp 0x58761c41
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761C3F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761C41: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761C43: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761C48: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761C4D: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761C50: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761C52: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761C54: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761C57: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761C5A: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761C5D: push ebp
        __asm _emit 0x55
        // 0x58761C5E: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761C61: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761C64: push ebx
        __asm _emit 0x53
        // 0x58761C65: push edi
        __asm _emit 0x57
        // 0x58761C66: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761C69: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x20
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761C6E: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761C74: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761C7A: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1B
        // 0x58761C7D: jle 0x58761c93
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58761C7F: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761C86: je 0x58761c93
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58761C88: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761C8E: mov edx, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x6C
        // 0x58761C91: jmp 0x58761c95
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761C93: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58761C95: mov ebx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x58761C98: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58761C9C: add ebx, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x58761C9F: cmp eax, 0x1d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1D
        // 0x58761CA2: jle 0x58761cb8
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58761CA4: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761CAB: je 0x58761cb8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58761CAD: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761CB3: mov ecx, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x74
        // 0x58761CB6: jmp 0x58761cba
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761CB8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761CBA: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58761CBE: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x58761CC1: sub edx, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58761CC4: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58761CC8: add edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x58761CCB: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x58761CCD: jge 0x58761df4
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761CD3: cmp eax, 0x2e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x2E
        // 0x58761CD6: jle 0x58761cf4
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58761CD8: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761CDD: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761CE4: je 0x58761cf4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761CE6: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761CEC: mov ecx, dword ptr [edx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761CF2: jmp 0x58761cf6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761CF4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761CF6: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761CF8: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58761CFD: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761D02: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761D05: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761D07: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761D09: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761D0C: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761D0F: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761D12: push ebp
        __asm _emit 0x55
        // 0x58761D13: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761D16: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761D19: push ebx
        __asm _emit 0x53
        // 0x58761D1A: push edi
        __asm _emit 0x57
        // 0x58761D1B: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761D1E: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x20
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761D23: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761D28: cmp dword ptr [eax + 0x164], 0x1c
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        // 0x58761D2F: jle 0x58761d45
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58761D31: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761D38: je 0x58761d45
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58761D3A: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761D40: mov ecx, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x58761D43: jmp 0x58761d47
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761D45: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761D47: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761D49: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58761D4B: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761D50: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761D53: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761D55: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761D57: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761D5A: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761D5D: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761D60: push ebp
        __asm _emit 0x55
        // 0x58761D61: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761D64: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761D67: push ebx
        __asm _emit 0x53
        // 0x58761D68: push edi
        __asm _emit 0x57
        // 0x58761D69: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761D6C: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x1F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761D71: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761D76: cmp dword ptr [eax + 0x164], 0x25
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x58761D7D: jle 0x58761d96
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761D7F: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761D86: je 0x58761d96
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761D88: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761D8E: mov ecx, dword ptr [eax + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761D94: jmp 0x58761d98
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761D96: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761D98: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761D9A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761D9F: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761DA4: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761DA7: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761DA9: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761DAB: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761DAE: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761DB1: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761DB4: push ebp
        __asm _emit 0x55
        // 0x58761DB5: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761DB8: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761DBB: push ebx
        __asm _emit 0x53
        // 0x58761DBC: push edi
        __asm _emit 0x57
        // 0x58761DBD: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761DC0: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x1F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761DC5: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761DCB: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761DD1: cmp eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1C
        // 0x58761DD4: jle 0x58761ded
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761DD6: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761DDD: je 0x58761ded
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761DDF: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761DE5: mov edx, dword ptr [edx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x70
        // 0x58761DE8: jmp 0x58761c9c
        __asm _emit 0xE9
        __asm _emit 0xAF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58761DED: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58761DEF: jmp 0x58761c9c
        __asm _emit 0xE9
        __asm _emit 0xA8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58761DF4: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761DF9: cmp dword ptr [eax + 0x164], 0x2f
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2F
        // 0x58761E00: jle 0x58761e19
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761E02: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761E09: je 0x58761e19
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761E0B: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761E11: mov ecx, dword ptr [eax + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761E17: jmp 0x58761e1b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761E19: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761E1B: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761E1D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58761E22: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761E27: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761E2A: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761E2C: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761E2E: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761E31: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761E34: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761E37: push ebp
        __asm _emit 0x55
        // 0x58761E38: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761E3B: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761E3E: push ebx
        __asm _emit 0x53
        // 0x58761E3F: push edi
        __asm _emit 0x57
        // 0x58761E40: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761E43: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x1F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761E48: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761E4D: cmp dword ptr [eax + 0x164], 0x1d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1D
        // 0x58761E54: jle 0x58761e6a
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58761E56: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761E5D: je 0x58761e6a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58761E5F: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761E65: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x58761E68: jmp 0x58761e6c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761E6A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761E6C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761E6E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58761E70: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761E75: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761E78: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761E7A: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761E7C: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761E7F: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761E82: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761E85: push ebp
        __asm _emit 0x55
        // 0x58761E86: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761E89: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761E8C: push ebx
        __asm _emit 0x53
        // 0x58761E8D: push edi
        __asm _emit 0x57
        // 0x58761E8E: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761E91: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x1E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761E96: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761E9B: cmp dword ptr [eax + 0x164], 0x26
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        // 0x58761EA2: jle 0x58761ebb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761EA4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761EAB: je 0x58761ebb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761EAD: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761EB3: mov ecx, dword ptr [eax + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761EB9: jmp 0x58761ebd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761EBB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761EBD: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761EBF: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761EC4: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761EC9: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761ECC: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761ECE: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761ED0: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761ED3: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761ED6: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761ED9: push ebp
        __asm _emit 0x55
        // 0x58761EDA: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761EDD: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761EE0: push ebx
        __asm _emit 0x53
        // 0x58761EE1: push edi
        __asm _emit 0x57
        // 0x58761EE2: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761EE5: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x1E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761EEA: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761EF0: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761EF6: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1B
        // 0x58761EF9: jle 0x58761f0f
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58761EFB: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F02: je 0x58761f0f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58761F04: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F0A: mov edx, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x6C
        // 0x58761F0D: jmp 0x58761f11
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761F0F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58761F11: mov ebx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x58761F14: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58761F18: add ebx, dword ptr [edx + 8]
        __asm _emit 0x03
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x58761F1B: cmp eax, 0x21
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x21
        // 0x58761F1E: jle 0x58761f37
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761F20: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F27: je 0x58761f37
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761F29: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F2F: mov edx, dword ptr [edx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F35: jmp 0x58761f39
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761F37: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58761F39: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58761F3D: mov ebp, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x20
        // 0x58761F40: sub ebp, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58761F43: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58761F47: add ebp, dword ptr [edx + 8]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58761F4A: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58761F4C: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58761F4F: jge 0x58762259
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F55: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x30
        // 0x58761F58: jle 0x58761f71
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761F5A: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F61: je 0x58761f71
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58761F63: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F69: mov ecx, dword ptr [eax + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F6F: jmp 0x58761f73
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761F71: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761F73: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761F75: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58761F7A: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761F7F: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761F82: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761F84: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761F86: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761F89: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761F8C: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761F8F: push ebx
        __asm _emit 0x53
        // 0x58761F90: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761F93: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761F96: push ebp
        __asm _emit 0x55
        // 0x58761F97: push edi
        __asm _emit 0x57
        // 0x58761F98: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761F9B: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x1D
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761FA0: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761FA5: cmp dword ptr [eax + 0x164], 0x1e
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        // 0x58761FAC: jle 0x58761fc2
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58761FAE: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761FB5: je 0x58761fc2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58761FB7: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761FBD: mov ecx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x58761FC0: jmp 0x58761fc4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58761FC2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58761FC4: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58761FC6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58761FC8: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58761FCD: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58761FD0: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58761FD2: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58761FD4: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58761FD7: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58761FDA: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58761FDD: push ebx
        __asm _emit 0x53
        // 0x58761FDE: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58761FE1: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58761FE4: push ebp
        __asm _emit 0x55
        // 0x58761FE5: push edi
        __asm _emit 0x57
        // 0x58761FE6: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58761FE9: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x1D
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58761FEE: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58761FF3: cmp dword ptr [eax + 0x164], 0x27
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x27
        // 0x58761FFA: jle 0x58762013
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58761FFC: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762003: je 0x58762013
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58762005: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876200B: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762011: jmp 0x58762015
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762013: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58762015: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58762017: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876201C: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762021: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58762024: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58762026: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58762028: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5876202B: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5876202E: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762031: push ebx
        __asm _emit 0x53
        // 0x58762032: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58762035: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58762038: push ebp
        __asm _emit 0x55
        // 0x58762039: push edi
        __asm _emit 0x57
        // 0x5876203A: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5876203D: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762042: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762048: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876204E: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x58762051: jle 0x58762067
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58762053: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876205A: je 0x58762067
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876205C: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762062: mov edx, dword ptr [edx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x78
        // 0x58762065: jmp 0x58762069
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762067: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58762069: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x5876206C: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762070: add edx, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58762073: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58762077: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5876207A: jle 0x58762093
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5876207C: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762083: je 0x58762093
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58762085: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876208B: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762091: jmp 0x58762095
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762093: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58762095: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762099: mov ebp, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x04
        // 0x5876209C: sub ebp, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5876209F: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587620A3: add ebp, dword ptr [edx + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x1C
        // 0x587620A6: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587620A8: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587620AC: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x587620AE: jge 0x58762136
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587620B4: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x587620B7: jle 0x587620cd
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587620B9: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587620C0: je 0x587620cd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587620C2: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587620C8: mov ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x587620CB: jmp 0x587620cf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587620CD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587620CF: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587620D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587620D3: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587620D8: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587620DB: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x587620DD: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587620DF: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587620E2: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587620E5: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587620E8: push ebx
        __asm _emit 0x53
        // 0x587620E9: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587620EC: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587620EF: push ebp
        __asm _emit 0x55
        // 0x587620F0: push edi
        __asm _emit 0x57
        // 0x587620F1: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587620F4: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x1C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587620F9: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587620FF: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762105: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x58762108: jle 0x58762128
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x5876210A: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762111: je 0x58762128
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58762113: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762119: mov edx, dword ptr [edx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x7C
        // 0x5876211C: add ebp, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5876211F: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58762123: jmp 0x58762077
        __asm _emit 0xE9
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58762128: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5876212A: add ebp, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5876212D: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58762131: jmp 0x58762077
        __asm _emit 0xE9
        __asm _emit 0x41
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58762136: cmp dword ptr [ecx + 0x164], 0x32
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x5876213D: jle 0x58762156
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5876213F: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762146: je 0x58762156
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58762148: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876214E: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762154: jmp 0x58762158
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762156: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58762158: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876215A: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876215F: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762164: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58762167: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58762169: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5876216B: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5876216E: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58762171: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762174: push ebx
        __asm _emit 0x53
        // 0x58762175: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58762178: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5876217B: push ebp
        __asm _emit 0x55
        // 0x5876217C: push edi
        __asm _emit 0x57
        // 0x5876217D: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58762180: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x1B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762185: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876218A: cmp dword ptr [eax + 0x164], 0x20
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x58762191: jle 0x587621aa
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58762193: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876219A: je 0x587621aa
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5876219C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587621A2: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587621A8: jmp 0x587621ac
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587621AA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587621AC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587621AE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587621B0: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587621B5: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587621B8: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x587621BA: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587621BC: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587621BF: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587621C2: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587621C5: push ebx
        __asm _emit 0x53
        // 0x587621C6: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587621C9: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587621CC: push ebp
        __asm _emit 0x55
        // 0x587621CD: push edi
        __asm _emit 0x57
        // 0x587621CE: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587621D1: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x1B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587621D6: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587621DB: cmp dword ptr [eax + 0x164], 0x29
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        // 0x587621E2: jle 0x587621fb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587621E4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587621EB: je 0x587621fb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587621ED: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587621F3: mov ecx, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587621F9: jmp 0x587621fd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587621FB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587621FD: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587621FF: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762204: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762209: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5876220C: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x5876220E: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58762210: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58762213: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58762216: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762219: push ebx
        __asm _emit 0x53
        // 0x5876221A: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876221D: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58762220: push ebp
        __asm _emit 0x55
        // 0x58762221: push edi
        __asm _emit 0x57
        // 0x58762222: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58762225: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x1B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5876222A: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762230: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762236: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x58762239: jle 0x58762252
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5876223B: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762242: je 0x58762252
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58762244: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876224A: mov edx, dword ptr [edx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x78
        // 0x5876224D: jmp 0x58761f18
        __asm _emit 0xE9
        __asm _emit 0xC6
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58762252: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58762254: jmp 0x58761f18
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58762259: cmp dword ptr [ecx + 0x164], 0x33
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        // 0x58762260: jle 0x58762279
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58762262: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762269: je 0x58762279
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5876226B: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762271: mov ecx, dword ptr [eax + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762277: jmp 0x5876227b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762279: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876227B: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876227D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58762282: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762287: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5876228A: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x5876228C: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5876228E: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58762291: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58762294: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762297: push ebx
        __asm _emit 0x53
        // 0x58762298: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876229B: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5876229E: push ebp
        __asm _emit 0x55
        // 0x5876229F: push edi
        __asm _emit 0x57
        // 0x587622A0: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587622A3: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x1A
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587622A8: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587622AD: cmp dword ptr [eax + 0x164], 0x21
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x21
        // 0x587622B4: jle 0x587622cd
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587622B6: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587622BD: je 0x587622cd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587622BF: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587622C5: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587622CB: jmp 0x587622cf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587622CD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587622CF: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587622D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587622D3: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587622D8: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587622DB: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x587622DD: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587622DF: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587622E2: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587622E5: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587622E8: push ebx
        __asm _emit 0x53
        // 0x587622E9: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587622EC: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587622EF: push ebp
        __asm _emit 0x55
        // 0x587622F0: push edi
        __asm _emit 0x57
        // 0x587622F1: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587622F4: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x1A
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587622F9: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587622FE: cmp dword ptr [eax + 0x164], 0x2a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2A
        // 0x58762305: jle 0x5876231e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58762307: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876230E: je 0x5876231e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58762310: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762316: mov ecx, dword ptr [eax + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876231C: jmp 0x58762320
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5876231E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58762320: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58762322: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762327: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876232C: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5876232F: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58762331: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58762333: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58762336: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58762339: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5876233C: push ebx
        __asm _emit 0x53
        // 0x5876233D: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58762340: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58762343: push ebp
        __asm _emit 0x55
        // 0x58762344: push edi
        __asm _emit 0x57
        // 0x58762345: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58762348: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x1A
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5876234D: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762353: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762359: cmp eax, 0x21
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x21
        // 0x5876235C: jle 0x58762375
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5876235E: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762365: je 0x58762375
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58762367: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876236D: mov edx, dword ptr [edx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762373: jmp 0x58762377
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762375: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58762377: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5876237A: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876237E: add ebp, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58762381: cmp eax, 0x23
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x23
        // 0x58762384: jle 0x5876239d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58762386: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876238D: je 0x5876239d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5876238F: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762395: mov ecx, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876239B: jmp 0x5876239f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5876239D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876239F: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587623A3: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587623A6: sub edx, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587623A9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587623AD: add edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x587623B0: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x587623B2: jge 0x587624df
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587623B8: cmp eax, 0x34
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x34
        // 0x587623BB: jle 0x587623d9
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x587623BD: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587623C2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587623C9: je 0x587623d9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587623CB: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587623D1: mov ecx, dword ptr [edx + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587623D7: jmp 0x587623db
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587623D9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587623DB: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587623DD: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587623E2: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587623E7: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587623EA: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x587623EC: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587623EE: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587623F1: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587623F4: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587623F7: push ebx
        __asm _emit 0x53
        // 0x587623F8: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587623FB: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587623FE: push ebp
        __asm _emit 0x55
        // 0x587623FF: push edi
        __asm _emit 0x57
        // 0x58762400: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58762403: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762408: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876240D: cmp dword ptr [eax + 0x164], 0x22
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        // 0x58762414: jle 0x5876242d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58762416: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876241D: je 0x5876242d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5876241F: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762425: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876242B: jmp 0x5876242f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5876242D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876242F: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58762431: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58762433: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762438: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5876243B: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x5876243D: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5876243F: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58762442: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58762445: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762448: push ebx
        __asm _emit 0x53
        // 0x58762449: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876244C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5876244F: push ebp
        __asm _emit 0x55
        // 0x58762450: push edi
        __asm _emit 0x57
        // 0x58762451: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58762454: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x19
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762459: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876245E: cmp dword ptr [eax + 0x164], 0x2b
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2B
        // 0x58762465: jle 0x5876247e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58762467: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876246E: je 0x5876247e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58762470: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762476: mov ecx, dword ptr [eax + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876247C: jmp 0x58762480
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5876247E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58762480: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58762482: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762487: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876248C: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5876248F: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58762491: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58762493: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58762496: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58762499: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5876249C: push ebx
        __asm _emit 0x53
        // 0x5876249D: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587624A0: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587624A3: push ebp
        __asm _emit 0x55
        // 0x587624A4: push edi
        __asm _emit 0x57
        // 0x587624A5: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587624A8: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x18
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587624AD: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587624B3: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587624B9: cmp eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x22
        // 0x587624BC: jle 0x587624d8
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x587624BE: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587624C5: je 0x587624d8
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587624C7: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587624CD: mov edx, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587624D3: jmp 0x5876237e
        __asm _emit 0xE9
        __asm _emit 0xA6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587624D8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587624DA: jmp 0x5876237e
        __asm _emit 0xE9
        __asm _emit 0x9F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587624DF: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587624E4: cmp dword ptr [eax + 0x164], 0x35
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x35
        // 0x587624EB: jle 0x58762504
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587624ED: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587624F4: je 0x58762504
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587624F6: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587624FC: mov ecx, dword ptr [eax + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762502: jmp 0x58762506
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762504: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58762506: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58762508: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876250D: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762512: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58762515: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58762517: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58762519: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5876251C: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5876251F: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762522: push ebx
        __asm _emit 0x53
        // 0x58762523: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58762526: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58762529: push ebp
        __asm _emit 0x55
        // 0x5876252A: push edi
        __asm _emit 0x57
        // 0x5876252B: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5876252E: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x18
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762533: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762538: cmp dword ptr [eax + 0x164], 0x23
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5876253F: jle 0x58762558
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58762541: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762548: je 0x58762558
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5876254A: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762550: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762556: jmp 0x5876255a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58762558: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876255A: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876255C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876255E: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762563: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58762566: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58762568: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5876256A: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5876256D: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58762570: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762573: push ebx
        __asm _emit 0x53
        // 0x58762574: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58762577: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5876257A: push ebp
        __asm _emit 0x55
        // 0x5876257B: push edi
        __asm _emit 0x57
        // 0x5876257C: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5876257F: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x17
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762584: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762589: cmp dword ptr [eax + 0x164], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x58762590: jle 0x587625a9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58762592: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762599: je 0x587625a9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5876259B: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587625A1: mov ecx, dword ptr [eax + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587625A7: jmp 0x587625ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587625A9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587625AB: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587625AD: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587625B2: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587625B7: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587625BA: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x587625BC: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587625BE: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587625C1: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587625C4: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587625C7: push ebx
        __asm _emit 0x53
        // 0x587625C8: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587625CB: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587625CE: push ebp
        __asm _emit 0x55
        // 0x587625CF: push edi
        __asm _emit 0x57
        // 0x587625D0: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587625D3: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x17
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587625D8: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587625DD: je 0x587625fa
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587625DF: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587625E3: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587625E7: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587625E9: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587625EC: push ebp
        __asm _emit 0x55
        // 0x587625ED: push esi
        __asm _emit 0x56
        // 0x587625EE: push edi
        __asm _emit 0x57
        // 0x587625EF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587625F1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587625F3: mov ebx, dword ptr [ebx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x48
        // 0x587625F6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587625F8: jne 0x587625e7
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587625FA: pop edi
        __asm _emit 0x5F
        // 0x587625FB: pop esi
        __asm _emit 0x5E
        // 0x587625FC: pop ebp
        __asm _emit 0x5D
        // 0x587625FD: pop ebx
        __asm _emit 0x5B
        // 0x587625FE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58762601: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
