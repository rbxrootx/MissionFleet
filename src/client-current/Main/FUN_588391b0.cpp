// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588391B0 .. +0x2A5 bytes.
// Source symbol alias: FUN_588391b0.
extern "C" __declspec(naked) void FUN_588391b0() {
    __asm {
        // 0x588391B0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588391B3: push ebx
        __asm _emit 0x53
        // 0x588391B4: push ebp
        __asm _emit 0x55
        // 0x588391B5: push esi
        __asm _emit 0x56
        // 0x588391B6: push edi
        __asm _emit 0x57
        // 0x588391B7: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x588391B9: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588391BB: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588391C0: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588391C4: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588391C8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588391CB: inc ecx
        __asm _emit 0x41
        // 0x588391CC: push ecx
        __asm _emit 0x51
        // 0x588391CD: push edx
        __asm _emit 0x52
        // 0x588391CE: push eax
        __asm _emit 0x50
        // 0x588391CF: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588391D3: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588391D9: mov edi, dword ptr [ebx + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588391DF: cmp edi, dword ptr [ebx + 0x1a0]
        __asm _emit 0x3B
        __asm _emit 0xBB
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588391E5: jbe 0x588391ec
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588391E7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x3A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588391EC: mov esi, dword ptr [ebx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588391F2: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588391F6: jmp 0x58839200
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588391F8: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588391FF: nop
        __asm _emit 0x90
        // 0x58839200: mov ebp, dword ptr [ebx + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0xAB
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839206: cmp dword ptr [ebx + 0x19c], ebp
        __asm _emit 0x39
        __asm _emit 0xAB
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883920C: jbe 0x58839213
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883920E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x3A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839213: mov eax, dword ptr [ebx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839219: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5883921B: je 0x58839221
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5883921D: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5883921F: je 0x58839226
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58839221: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x3A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839226: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58839228: je 0x588392c9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883922E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58839230: jne 0x58839270
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58839232: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x3A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839237: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839239: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5883923C: jb 0x58839243
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883923E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x3A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839243: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839247: lea eax, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x2D
        // 0x5883924A: push eax
        __asm _emit 0x50
        // 0x5883924B: push ecx
        __asm _emit 0x51
        // 0x5883924C: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839252: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839254: je 0x58839278
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58839256: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58839258: jne 0x58839274
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5883925A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x3A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883925F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839261: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58839264: jb 0x5883926b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58839266: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x3A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883926B: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x5883926E: jmp 0x58839200
        __asm _emit 0xEB
        __asm _emit 0x90
        // 0x58839270: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58839272: jmp 0x58839239
        __asm _emit 0xEB
        __asm _emit 0xC5
        // 0x58839274: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58839276: jmp 0x58839261
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58839278: mov ebp, dword ptr [ebx + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0xAB
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883927E: lea eax, [edi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x58839281: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58839285: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58839287: je 0x588392a9
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58839289: lea edx, [eax - 0x54]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xAC
        // 0x5883928C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58839290: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58839292: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58839294: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x58839297: mov ecx, 0x15
        __asm _emit 0xB9
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883929C: add edx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x54
        // 0x5883929F: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588392A1: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588392A3: jne 0x58839290
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588392A5: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588392A9: add dword ptr [ebx + 0x1a0], -0x54
        __asm _emit 0x83
        __asm _emit 0x83
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAC
        // 0x588392B0: mov eax, dword ptr [ebx + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588392B6: cmp dword ptr [ebx + 0x19c], edi
        __asm _emit 0x39
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588392BC: ja 0x588392c2
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588392BE: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588392C0: jbe 0x588392cd
        __asm _emit 0x76
        __asm _emit 0x0B
        // 0x588392C2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588392C7: jmp 0x588392cd
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588392C9: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588392CD: mov edi, dword ptr [ebx + 0x264]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588392D3: cmp edi, dword ptr [ebx + 0x268]
        __asm _emit 0x3B
        __asm _emit 0xBB
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588392D9: lea esi, [ebx + 0x258]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588392DF: jbe 0x588392e6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588392E1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588392E6: mov ebp, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x2E
        // 0x588392E8: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588392EC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588392F0: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588392F3: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588392F6: jbe 0x588392fd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588392F8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588392FD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588392FF: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58839301: je 0x58839307
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58839303: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58839305: je 0x5883930c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58839307: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883930C: cmp dword ptr [esp + 0x18], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58839310: je 0x5883936f
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x58839312: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58839314: jne 0x58839365
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x58839316: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883931B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883931D: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58839321: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58839324: jb 0x5883932b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58839326: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883932B: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883932F: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58839331: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839335: push ecx
        __asm _emit 0x51
        // 0x58839336: push edx
        __asm _emit 0x52
        // 0x58839337: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883933D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883933F: je 0x5883944b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839345: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58839347: jne 0x5883936a
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58839349: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883934E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839350: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58839354: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58839357: jb 0x5883935e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58839359: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883935E: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x58839363: jmp 0x588392f0
        __asm _emit 0xEB
        __asm _emit 0x8B
        // 0x58839365: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58839368: jmp 0x5883931d
        __asm _emit 0xEB
        __asm _emit 0xB3
        // 0x5883936A: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5883936D: jmp 0x58839350
        __asm _emit 0xEB
        __asm _emit 0xE1
        // 0x5883936F: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58839372: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58839374: jne 0x5883937a
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58839376: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839378: jmp 0x58839382
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5883937A: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5883937D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5883937F: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58839382: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58839385: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58839387: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58839389: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5883938C: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5883938E: jae 0x5883939e
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x58839390: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839394: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58839396: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58839399: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5883939C: jmp 0x588393bc
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5883939E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588393A0: jbe 0x588393a7
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588393A2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588393A7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588393A9: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588393AD: push ecx
        __asm _emit 0x51
        // 0x588393AE: push edi
        __asm _emit 0x57
        // 0x588393AF: push eax
        __asm _emit 0x50
        // 0x588393B0: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588393B4: push edx
        __asm _emit 0x52
        // 0x588393B5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588393B7: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xD4
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588393BC: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x588393C0: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588393C5: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588393C8: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588393CD: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588393D0: jne 0x5883944b
        __asm _emit 0x75
        __asm _emit 0x79
        // 0x588393D2: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588393D6: mov ecx, dword ptr [ebx + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588393DC: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x588393E1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588393E3: push eax
        __asm _emit 0x50
        // 0x588393E4: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xF4
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588393E9: mov ecx, dword ptr [ebx + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588393EF: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588393F4: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588393F6: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588393FB: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xF4
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839400: mov ecx, dword ptr [ebx + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839406: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883940B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883940D: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839412: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839417: mov ecx, dword ptr [ebx + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883941D: sub ecx, dword ptr [ebx + 0x19c]
        __asm _emit 0x2B
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839423: mov eax, 0x30c30c31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x30
        // 0x58839428: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5883942A: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5883942D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5883942F: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58839432: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58839434: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x58839437: sub edx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5883943A: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5883943D: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5883943F: push ecx
        __asm _emit 0x51
        // 0x58839440: mov ecx, dword ptr [ebx + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839446: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883944B: pop edi
        __asm _emit 0x5F
        // 0x5883944C: pop esi
        __asm _emit 0x5E
        // 0x5883944D: pop ebp
        __asm _emit 0x5D
        // 0x5883944E: pop ebx
        __asm _emit 0x5B
        // 0x5883944F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58839452: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
