// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5883DDF0 .. +0x180 bytes.
// Source symbol alias: FUN_5883ddf0.
extern "C" __declspec(naked) void FUN_5883ddf0() {
    __asm {
        // 0x5883DDF0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5883DDF3: push ebx
        __asm _emit 0x53
        // 0x5883DDF4: push ebp
        __asm _emit 0x55
        // 0x5883DDF5: push esi
        __asm _emit 0x56
        // 0x5883DDF6: push edi
        __asm _emit 0x57
        // 0x5883DDF7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883DDF9: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x5883DDFB: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883DDFF: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x37
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DE04: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883DE08: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5883DE0C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883DE0F: inc ecx
        __asm _emit 0x41
        // 0x5883DE10: push ecx
        __asm _emit 0x51
        // 0x5883DE11: push edx
        __asm _emit 0x52
        // 0x5883DE12: push eax
        __asm _emit 0x50
        // 0x5883DE13: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883DE17: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883DE1D: mov edi, dword ptr [esi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DE23: add esi, 0x21c
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DE29: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5883DE2C: jbe 0x5883de33
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883DE2E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xEE
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DE33: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x5883DE35: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x5883DE37: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5883DE3A: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5883DE3D: jbe 0x5883de44
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883DE3F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xEE
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DE44: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5883DE46: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5883DE48: je 0x5883de4e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5883DE4A: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5883DE4C: je 0x5883de53
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5883DE4E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xEE
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DE53: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x5883DE55: je 0x5883dea5
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5883DE57: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5883DE59: jne 0x5883de9d
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x5883DE5B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xEE
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DE60: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883DE62: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5883DE65: jb 0x5883de6c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883DE67: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xEE
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DE6C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5883DE6F: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883DE73: push eax
        __asm _emit 0x50
        // 0x5883DE74: push ecx
        __asm _emit 0x51
        // 0x5883DE75: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883DE7B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883DE7D: je 0x5883df66
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DE83: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5883DE85: jne 0x5883dea1
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5883DE87: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xED
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DE8C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883DE8E: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5883DE91: jb 0x5883de98
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883DE93: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xED
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DE98: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5883DE9B: jmp 0x5883de37
        __asm _emit 0xEB
        __asm _emit 0x9A
        // 0x5883DE9D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5883DE9F: jmp 0x5883de62
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5883DEA1: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5883DEA3: jmp 0x5883de8e
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5883DEA5: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5883DEA8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883DEAA: jne 0x5883deb0
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5883DEAC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883DEAE: jmp 0x5883deb8
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5883DEB0: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5883DEB3: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5883DEB5: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5883DEB8: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5883DEBB: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5883DEBD: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5883DEBF: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5883DEC2: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5883DEC4: jae 0x5883ded4
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x5883DEC6: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883DECA: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x5883DECC: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883DECF: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5883DED2: jmp 0x5883def2
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5883DED4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5883DED6: jbe 0x5883dedd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883DED8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xED
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883DEDD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5883DEDF: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883DEE3: push ecx
        __asm _emit 0x51
        // 0x5883DEE4: push edi
        __asm _emit 0x57
        // 0x5883DEE5: push eax
        __asm _emit 0x50
        // 0x5883DEE6: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5883DEEA: push edx
        __asm _emit 0x52
        // 0x5883DEEB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883DEED: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x89
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5883DEF2: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883DEF6: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5883DEFA: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DEFF: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5883DF02: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DF07: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5883DF0A: jne 0x5883df66
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x5883DF0C: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883DF10: mov ecx, dword ptr [edi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DF16: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x5883DF1B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883DF1D: push eax
        __asm _emit 0x50
        // 0x5883DF1E: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xA9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883DF23: mov ecx, dword ptr [edi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DF29: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883DF2E: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883DF30: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883DF35: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xA9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883DF3A: mov ecx, dword ptr [edi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DF40: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883DF45: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883DF47: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883DF4C: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xA9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883DF51: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5883DF54: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5883DF57: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5883DF5A: push ecx
        __asm _emit 0x51
        // 0x5883DF5B: mov ecx, dword ptr [edi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883DF61: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883DF66: pop edi
        __asm _emit 0x5F
        // 0x5883DF67: pop esi
        __asm _emit 0x5E
        // 0x5883DF68: pop ebp
        __asm _emit 0x5D
        // 0x5883DF69: pop ebx
        __asm _emit 0x5B
        // 0x5883DF6A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5883DF6D: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
