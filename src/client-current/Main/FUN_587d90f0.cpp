// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D90F0 .. +0x242 bytes.
// Source symbol alias: FUN_587d90f0.
extern "C" __declspec(naked) void FUN_587d90f0() {
    __asm {
        // 0x587D90F0: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x587D90F3: cmp dword ptr [ecx + 0xe24], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D90FA: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D90FE: jne 0x587d9108
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587D9100: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D9102: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587D9105: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D9108: push esi
        __asm _emit 0x56
        // 0x587D9109: mov esi, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D910F: mov dword ptr [esp + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9117: mov dword ptr [esp + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D911F: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D9123: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D9125: je 0x587d9152
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587D9127: movzx eax, word ptr [ecx + 0xe22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D912E: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9131: jl 0x587d9152
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587D9133: mov edx, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x48
        // 0x587D9136: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587D9139: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587D913C: cwde
        __asm _emit 0x98
        // 0x587D913D: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587D913F: jne 0x587d9152
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587D9141: cmp dword ptr [esp + 0x28], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x587D9146: jne 0x587d915b
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587D9148: mov dword ptr [ecx + 0xe24], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9152: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D9154: pop esi
        __asm _emit 0x5E
        // 0x587D9155: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587D9158: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D915B: push ebx
        __asm _emit 0x53
        // 0x587D915C: push edi
        __asm _emit 0x57
        // 0x587D915D: lea ebx, [ecx + 0xf2c]
        __asm _emit 0x8D
        __asm _emit 0x99
        __asm _emit 0x2C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9163: lea edi, [esi + 0xbc4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9169: add ecx, 0xe28
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x28
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D916F: add esi, 0xb40
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9175: mov dword ptr [esp + 0x30], 0x754
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D917D: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D9181: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D9185: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D9189: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D918D: push ebp
        __asm _emit 0x55
        // 0x587D918E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587D9190: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D9192: cmp edx, dword ptr [esi]
        __asm _emit 0x3B
        __asm _emit 0x16
        // 0x587D9194: jne 0x587d9307
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D919A: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D919C: je 0x587d92ce
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D91A2: cmp byte ptr [edx], 0xd
        __asm _emit 0x80
        __asm _emit 0x3A
        __asm _emit 0x0D
        // 0x587D91A5: jne 0x587d9249
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D91AB: mov bp, word ptr [ecx + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D91B2: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D91B7: xor ax, word ptr [esi - 0x80]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x46
        __asm _emit 0x80
        // 0x587D91BB: sub bp, ax
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xE8
        // 0x587D91BE: movzx eax, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC5
        // 0x587D91C1: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D91C4: je 0x587d91e0
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587D91C6: jle 0x587d91cd
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x587D91C8: mov edx, dword ptr [edx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x70
        // 0x587D91CB: jmp 0x587d91d0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587D91CD: mov edx, dword ptr [edx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x74
        // 0x587D91D0: cwde
        __asm _emit 0x98
        // 0x587D91D1: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x587D91D4: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D91D8: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D91E0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587D91E2: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587D91E4: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587D91E6: je 0x587d91f0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587D91E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D91EA: jne 0x587d9307
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D91F0: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D91F2: je 0x587d92ce
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D91F8: mov bp, word ptr [ecx + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D91FF: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9204: xor ax, word ptr [esi - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x46
        __asm _emit 0x82
        // 0x587D9208: sub bp, ax
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xE8
        // 0x587D920B: movzx eax, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC5
        // 0x587D920E: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9211: je 0x587d92ce
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9217: jle 0x587d9231
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587D9219: mov edx, dword ptr [edx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x70
        // 0x587D921C: cwde
        __asm _emit 0x98
        // 0x587D921D: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x587D9220: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9224: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D922C: jmp 0x587d92ce
        __asm _emit 0xE9
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9231: mov edx, dword ptr [edx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x74
        // 0x587D9234: cwde
        __asm _emit 0x98
        // 0x587D9235: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x587D9238: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D923C: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9244: jmp 0x587d92ce
        __asm _emit 0xE9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9249: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D924B: add ebx, -4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0xFC
        // 0x587D924E: add edi, -4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xFC
        // 0x587D9251: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587D9253: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x587D9255: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x587D9257: je 0x587d9261
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587D9259: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D925B: jne 0x587d9307
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9261: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D9263: je 0x587d92b2
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x587D9265: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D9269: mov ebp, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D926D: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D926F: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9274: xor dx, word ptr [ebp + ecx*2 - 0x3e8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x94
        __asm _emit 0x4D
        __asm _emit 0x18
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D927C: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D9280: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587D9284: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D9286: mov cx, word ptr [ebp + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587D928B: sub cx, dx
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587D928E: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587D9291: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D9294: je 0x587d92b2
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587D9296: jle 0x587d929d
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x587D9298: mov esi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x70
        // 0x587D929B: jmp 0x587d92a0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587D929D: mov esi, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x74
        // 0x587D92A0: movsx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD2
        // 0x587D92A3: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x587D92A6: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D92AA: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D92B2: inc eax
        __asm _emit 0x40
        // 0x587D92B3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587D92B6: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D92B9: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587D92BC: jl 0x587d9251
        __asm _emit 0x7C
        __asm _emit 0x93
        // 0x587D92BE: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D92C2: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D92C6: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D92CA: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D92CE: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D92D2: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587D92D5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587D92D8: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D92DB: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587D92DE: add ebx, 8
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x08
        // 0x587D92E1: cmp eax, 0x794
        __asm _emit 0x3D
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D92E6: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D92EA: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D92EE: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D92F2: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D92F6: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D92FA: jl 0x587d9190
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x90
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9300: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587D9305: jne 0x587d9313
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587D9307: pop ebp
        __asm _emit 0x5D
        // 0x587D9308: pop edi
        __asm _emit 0x5F
        // 0x587D9309: pop ebx
        __asm _emit 0x5B
        // 0x587D930A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D930C: pop esi
        __asm _emit 0x5E
        // 0x587D930D: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587D9310: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D9313: mov eax, dword ptr [0x58a0b468]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587D9318: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587D931D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D931F: cmp dword ptr [esp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9323: pop ebp
        __asm _emit 0x5D
        // 0x587D9324: setle cl
        __asm _emit 0x0F
        __asm _emit 0x9E
        __asm _emit 0xC1
        // 0x587D9327: pop edi
        __asm _emit 0x5F
        // 0x587D9328: pop ebx
        __asm _emit 0x5B
        // 0x587D9329: pop esi
        __asm _emit 0x5E
        // 0x587D932A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D932C: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587D932F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
