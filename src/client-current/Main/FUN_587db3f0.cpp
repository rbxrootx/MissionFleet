// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 573 bytes in 1 exact ranges.
// Source symbol alias: FUN_587db3f0.

// Ghidra body range 0x587DB3F0..0x587DB62D; 573 mapped bytes.
extern "C" __declspec(naked) void FUN_587db3f0_segment_00() {
    __asm {
        // 0x587DB3F0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587DB3F3: push esi
        __asm _emit 0x56
        // 0x587DB3F4: push edi
        __asm _emit 0x57
        // 0x587DB3F5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587DB3F7: mov eax, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB3FD: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB403: movzx edx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587DB407: movzx ecx, word ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x02
        // 0x587DB40B: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0E
        // 0x587DB40F: mov esi, 0xff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB414: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x587DB417: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587DB41A: mov esi, 0x7d0
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB41F: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587DB423: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587DB426: jne 0x587db622
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB42C: add ecx, 0xfffffe23
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x23
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB432: cmp ecx, 0x12
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x12
        // 0x587DB435: ja 0x587db622
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xE7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB43B: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB441: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB447: push ebx
        __asm _emit 0x53
        // 0x587DB448: push ebp
        __asm _emit 0x55
        // 0x587DB449: movzx ebp, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x0E
        // 0x587DB44D: and ebp, 0xf
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x0F
        // 0x587DB450: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587DB452: add ebp, 5
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x05
        // 0x587DB455: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587DB457: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DB45B: jle 0x587db5df
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB461: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB467: mov eax, dword ptr [ecx + esi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB46E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB470: jne 0x587db4aa
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x587DB472: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587DB475: jne 0x587db489
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587DB477: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x587DB47A: je 0x587db5d2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB480: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x587DB483: je 0x587db5d2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB489: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB48B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB48D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB48F: push 0x4c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB494: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DB499: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DB49B: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DB4A0: pop ebp
        __asm _emit 0x5D
        // 0x587DB4A1: pop ebx
        __asm _emit 0x5B
        // 0x587DB4A2: pop edi
        __asm _emit 0x5F
        // 0x587DB4A3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB4A5: pop esi
        __asm _emit 0x5E
        // 0x587DB4A6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587DB4A9: ret
        __asm _emit 0xC3
        // 0x587DB4AA: movzx edx, word ptr [eax + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x5E
        // 0x587DB4AE: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x587DB4B1: xor edx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x587DB4B4: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB4BA: cmp edx, 0x78
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x78
        // 0x587DB4BD: jb 0x587db598
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB4C3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587DB4C5: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB4CB: mov eax, dword ptr [eax + esi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB4D2: mov bx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x5E
        // 0x587DB4D6: movzx dx, byte ptr [edx + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x92
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB4DE: mov eax, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB4E4: and bx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x0F
        // 0x587DB4E8: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587DB4EA: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587DB4ED: movzx ebx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDB
        // 0x587DB4F0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DB4F2: jne 0x587db535
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x587DB4F4: mov eax, dword ptr [ecx + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB4FA: movzx ecx, word ptr [eax + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x5E
        // 0x587DB4FE: shr ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x587DB501: xor ecx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF1
        __asm _emit 0xAA
        // 0x587DB504: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB50A: cmp ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x7D
        // 0x587DB50D: jb 0x587db598
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB513: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DB515: push esi
        __asm _emit 0x56
        // 0x587DB516: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587DB518: call 0x587da710
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB51D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB51F: jne 0x587db5d2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB525: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB527: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB529: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB52B: push 0x4be
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB530: jmp 0x587db494
        __asm _emit 0xE9
        __asm _emit 0x5F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB535: cmp dword ptr [esp + 0x10], 8
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        // 0x587DB53A: je 0x587db560
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587DB53C: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587DB53F: je 0x587db546
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587DB541: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587DB544: jne 0x587db560
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587DB546: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x587DB549: je 0x587db559
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DB54B: cmp eax, 0x12
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x12
        // 0x587DB54E: je 0x587db559
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587DB550: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x587DB553: jne 0x587db605
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB559: cmp bx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587DB55C: jne 0x587db525
        __asm _emit 0x75
        __asm _emit 0xC7
        // 0x587DB55E: jmp 0x587db5d2
        __asm _emit 0xEB
        __asm _emit 0x72
        // 0x587DB560: lea edx, [esi - 1]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0xFF
        // 0x587DB563: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DB565: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587DB567: push esi
        __asm _emit 0x56
        // 0x587DB568: cmp edx, 3
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587DB56B: ja 0x587db5a8
        __asm _emit 0x77
        __asm _emit 0x3B
        // 0x587DB56D: call 0x587da710
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB572: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB574: je 0x587db525
        __asm _emit 0x74
        __asm _emit 0xAF
        // 0x587DB576: mov eax, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB57C: mov ecx, dword ptr [eax + esi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB0
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB583: movzx edx, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x5E
        // 0x587DB587: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x587DB58A: xor edx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x587DB58D: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB593: cmp edx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x7D
        // 0x587DB596: jae 0x587db5d2
        __asm _emit 0x73
        __asm _emit 0x3A
        // 0x587DB598: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB59A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB59C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB59E: push 0x4bd
        __asm _emit 0x68
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB5A3: jmp 0x587db494
        __asm _emit 0xE9
        __asm _emit 0xEC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB5A8: call 0x587da710
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB5AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB5AF: je 0x587db4a0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB5B5: mov eax, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB5BB: mov ecx, dword ptr [eax + esi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB0
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB5C2: test dword ptr [ecx + 0xb4], 0x80203c00
        __asm _emit 0xF7
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x20
        __asm _emit 0x80
        // 0x587DB5CC: je 0x587db5d2
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587DB5CE: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DB5D2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DB5D6: inc esi
        __asm _emit 0x46
        // 0x587DB5D7: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587DB5D9: jl 0x587db461
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x82
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB5DF: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587DB5E2: jne 0x587db615
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x587DB5E4: cmp dword ptr [esp + 0x14], 5
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x05
        // 0x587DB5E9: jge 0x587db615
        __asm _emit 0x7D
        __asm _emit 0x2A
        // 0x587DB5EB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB5ED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB5EF: push 0x5898fa10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xFA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DB5F4: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DB5FA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587DB5FD: push eax
        __asm _emit 0x50
        // 0x587DB5FE: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x587DB600: jmp 0x587db494
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB605: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB607: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB609: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB60B: push 0x4a2
        __asm _emit 0x68
        __asm _emit 0xA2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB610: jmp 0x587db494
        __asm _emit 0xE9
        __asm _emit 0x7F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB615: pop ebp
        __asm _emit 0x5D
        // 0x587DB616: pop ebx
        __asm _emit 0x5B
        // 0x587DB617: pop edi
        __asm _emit 0x5F
        // 0x587DB618: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB61D: pop esi
        __asm _emit 0x5E
        // 0x587DB61E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587DB621: ret
        __asm _emit 0xC3
        // 0x587DB622: pop edi
        __asm _emit 0x5F
        // 0x587DB623: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB628: pop esi
        __asm _emit 0x5E
        // 0x587DB629: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587DB62C: ret
        __asm _emit 0xC3
    }
}
