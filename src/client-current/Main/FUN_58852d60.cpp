// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 673 bytes in 1 exact ranges.
// Source symbol alias: FUN_58852d60.

// Ghidra body range 0x58852D60..0x58853001; 673 mapped bytes.
extern "C" __declspec(naked) void FUN_58852d60_segment_00() {
    __asm {
        // 0x58852D60: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58852D63: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58852D68: push ebx
        __asm _emit 0x53
        // 0x58852D69: mov ebx, dword ptr [eax + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852D6F: push ebp
        __asm _emit 0x55
        // 0x58852D70: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58852D72: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58852D78: cmp dword ptr [ecx + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58852D7C: push esi
        __asm _emit 0x56
        // 0x58852D7D: mov esi, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852D83: push edi
        __asm _emit 0x57
        // 0x58852D84: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58852D88: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58852D8C: jne 0x58852dd3
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x58852D8E: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x58852D92: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x58852D96: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x58852D98: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58852D9A: jne 0x58852fba
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852DA0: mov ecx, dword ptr [ebx + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852DA6: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58852DA9: cmp byte ptr [edx], 1
        __asm _emit 0x80
        __asm _emit 0x3A
        __asm _emit 0x01
        // 0x58852DAC: jne 0x58852fba
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852DB2: mov eax, dword ptr [ebx + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852DB8: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58852DBC: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58852DC0: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58852DC3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58852DC5: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58852DC8: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x58852DCB: inc edx
        __asm _emit 0x42
        // 0x58852DCC: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58852DCE: jmp 0x58852fbc
        __asm _emit 0xE9
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852DD3: cmp dword ptr [ecx + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58852DD7: jne 0x58852e02
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58852DD9: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852DDF: mov eax, dword ptr [eax + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852DE5: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58852DE9: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58852DED: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58852DF0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58852DF2: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58852DF5: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x58852DF8: add edx, 3
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x03
        // 0x58852DFB: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58852DFD: jmp 0x58852fbc
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E02: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58852E04: je 0x58852fba
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E0A: mov edi, dword ptr [esi + 0xa24]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E10: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58852E12: call 0x588e64f0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58852E17: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58852E19: jge 0x58852e49
        __asm _emit 0x7D
        __asm _emit 0x2E
        // 0x58852E1B: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58852E20: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E26: mov eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E2C: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58852E30: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58852E34: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58852E37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58852E39: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58852E3C: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x58852E3F: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58852E42: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58852E44: jmp 0x58852fbc
        __asm _emit 0xE9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E49: cmp dword ptr [esi + 0xccc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E50: jne 0x58852e84
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58852E52: mov cx, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x58852E56: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58852E5A: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58852E5D: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58852E60: jne 0x58852e7a
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58852E62: mov edx, dword ptr [ebx + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E68: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58852E6B: cmp byte ptr [eax], 3
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x03
        // 0x58852E6E: jne 0x58852e7a
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58852E70: mov esi, 7
        __asm _emit 0xBE
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E75: jmp 0x58852fbc
        __asm _emit 0xE9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E7A: mov esi, 6
        __asm _emit 0xBE
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E7F: jmp 0x58852fbc
        __asm _emit 0xE9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E84: cmp dword ptr [esi + 0xcc8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852E8B: jne 0x58852ebe
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58852E8D: mov cx, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x58852E91: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58852E95: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58852E98: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58852E9B: jne 0x58852eb4
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58852E9D: mov edx, dword ptr [ebx + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EA3: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58852EA6: cmp byte ptr [eax], cl
        __asm _emit 0x38
        __asm _emit 0x08
        // 0x58852EA8: jne 0x58852eb4
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58852EAA: mov esi, 9
        __asm _emit 0xBE
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EAF: jmp 0x58852fbc
        __asm _emit 0xE9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EB4: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EB9: jmp 0x58852fbc
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EBE: mov edx, dword ptr [esi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EC4: movzx eax, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58852EC8: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x58852ECB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58852ECD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58852ECF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58852ED1: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58852ED4: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EDC: jle 0x58852fb3
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EE2: mov ebp, dword ptr [edx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EE8: lea edx, [esi + 0xac0]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852EEE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58852EF0: mov esi, 0x80000000
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58852EF5: shr esi, cl
        __asm _emit 0xD3
        __asm _emit 0xEE
        // 0x58852EF7: test ebp, esi
        __asm _emit 0x85
        __asm _emit 0xF5
        // 0x58852EF9: jne 0x58852f23
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x58852EFB: inc ebx
        __asm _emit 0x43
        // 0x58852EFC: cmp dword ptr [edx + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852F03: je 0x58852f23
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58852F05: mov esi, 0xaa
        __asm _emit 0xBE
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852F0A: inc edi
        __asm _emit 0x47
        // 0x58852F0B: xor si, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x32
        // 0x58852F0E: jne 0x58852f23
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58852F10: mov esi, 0xaa
        __asm _emit 0xBE
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852F15: xor si, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x58852F19: jne 0x58852f23
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58852F1B: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852F23: inc ecx
        __asm _emit 0x41
        // 0x58852F24: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58852F27: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58852F29: jl 0x58852ef0
        __asm _emit 0x7C
        __asm _emit 0xC5
        // 0x58852F2B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58852F2D: je 0x58852f33
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58852F2F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58852F31: jmp 0x58852f37
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58852F33: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58852F37: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58852F39: jge 0x58852f73
        __asm _emit 0x7D
        __asm _emit 0x38
        // 0x58852F3B: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58852F3F: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58852F43: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58852F47: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58852F4A: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58852F4D: jne 0x58852f68
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58852F4F: mov edx, dword ptr [eax + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852F55: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58852F58: cmp byte ptr [eax], 5
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x05
        // 0x58852F5B: jne 0x58852f68
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58852F5D: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58852F61: mov esi, 0xb
        __asm _emit 0xBE
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852F66: jmp 0x58852fbc
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x58852F68: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58852F6C: mov esi, 0xa
        __asm _emit 0xBE
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852F71: jmp 0x58852fbc
        __asm _emit 0xEB
        __asm _emit 0x49
        // 0x58852F73: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58852F75: jne 0x58852faf
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58852F77: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58852F7B: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58852F7F: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58852F83: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58852F86: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58852F89: jne 0x58852fa4
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58852F8B: mov edx, dword ptr [eax + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852F91: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58852F94: cmp byte ptr [eax], 0xb
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x0B
        // 0x58852F97: jne 0x58852fa4
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58852F99: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58852F9D: mov esi, 0xd
        __asm _emit 0xBE
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852FA2: jmp 0x58852fbc
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x58852FA4: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58852FA8: mov esi, 0xc
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852FAD: jmp 0x58852fbc
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58852FAF: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58852FB3: mov esi, 0xe
        __asm _emit 0xBE
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852FB8: jmp 0x58852fbc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852FBA: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58852FBC: mov word ptr [ebp + 0x276], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852FC3: movzx eax, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC6
        // 0x58852FC6: cmp si, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58852FCA: je 0x58852fd5
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58852FCC: cmp dword ptr [ebp + 0x278], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852FD3: jne 0x58852fdc
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58852FD5: movzx esi, word ptr [ebp + 0x274]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852FDC: cmp si, word ptr [ebp + 0x274]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852FE3: je 0x58852fee
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58852FE5: push eax
        __asm _emit 0x50
        // 0x58852FE6: push esi
        __asm _emit 0x56
        // 0x58852FE7: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58852FE9: call 0x588504c0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852FEE: push esi
        __asm _emit 0x56
        // 0x58852FEF: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58852FF1: call 0x58850a70
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852FF6: pop edi
        __asm _emit 0x5F
        // 0x58852FF7: mov ax, si
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58852FFA: pop esi
        __asm _emit 0x5E
        // 0x58852FFB: pop ebp
        __asm _emit 0x5D
        // 0x58852FFC: pop ebx
        __asm _emit 0x5B
        // 0x58852FFD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58853000: ret
        __asm _emit 0xC3
    }
}
