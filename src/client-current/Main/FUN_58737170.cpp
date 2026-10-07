// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 649 bytes in 1 exact ranges.
// Source symbol alias: FUN_58737170.

// Ghidra body range 0x58737170..0x587373F9; 649 mapped bytes.
extern "C" __declspec(naked) void FUN_58737170_segment_00() {
    __asm {
        // 0x58737170: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58737173: push esi
        __asm _emit 0x56
        // 0x58737174: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58737176: mov eax, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873717C: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873717F: je 0x5873718a
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58737181: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58737184: jne 0x58737392
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873718A: push ebx
        __asm _emit 0x53
        // 0x5873718B: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5873718E: push ebp
        __asm _emit 0x55
        // 0x5873718F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58737191: push edi
        __asm _emit 0x57
        // 0x58737192: mov edi, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737198: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873719A: mov dword ptr [esp + 0x18], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371A2: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587371A6: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587371AA: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587371AC: je 0x587371d9
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587371AE: lea ecx, [esi + 0x260]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371B4: mov edx, dword ptr [ebx + 0x6044]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x44
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371BA: cmp dword ptr [ecx - 4], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0xFC
        // 0x587371BD: jne 0x587371c9
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587371BF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587371C1: cmp edx, dword ptr [ebx + 0x6048]
        __asm _emit 0x3B
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371C7: je 0x587371d3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587371C9: inc eax
        __asm _emit 0x40
        // 0x587371CA: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x587371CD: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587371CF: jne 0x587371b4
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x587371D1: jmp 0x587371d9
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587371D3: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587371D7: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587371D9: mov eax, dword ptr [ebx + 0x6044]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371DF: cmp eax, dword ptr [esi + edi*8 + 0x254]
        __asm _emit 0x3B
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371E6: jne 0x587371ff
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587371E8: mov ecx, dword ptr [ebx + 0x6048]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371EE: cmp ecx, dword ptr [esi + edi*8 + 0x258]
        __asm _emit 0x3B
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371F5: jne 0x587371ff
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587371F7: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587371FF: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737205: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58737207: jne 0x5873721f
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58737209: mov edx, dword ptr [ebx + 0x6048]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873720F: cmp edx, dword ptr [esi + 0x260]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737215: jne 0x5873721f
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58737217: mov dword ptr [esp + 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873721F: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58737224: je 0x58737253
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58737226: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873722C: shl eax, 0xf
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5873722F: and ecx, 0x7fff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737235: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x58737237: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58737239: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873723D: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873723F: push ecx
        __asm _emit 0x51
        // 0x58737240: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58737242: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58737246: call 0x588d7ec0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x0C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5873724B: pop edi
        __asm _emit 0x5F
        // 0x5873724C: pop ebp
        __asm _emit 0x5D
        // 0x5873724D: pop ebx
        __asm _emit 0x5B
        // 0x5873724E: pop esi
        __asm _emit 0x5E
        // 0x5873724F: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58737252: ret
        __asm _emit 0xC3
        // 0x58737253: sub eax, dword ptr [ebx + 4]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58737256: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58737258: mov eax, dword ptr [ebx + 0x6048]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873725E: sub eax, dword ptr [ebx + 8]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58737261: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58737263: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58737266: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58737268: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5873726B: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873726D: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58737271: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58737275: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x5A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873727A: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873727F: cmp eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x58737282: jg 0x5873738f
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737288: mov eax, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873728E: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58737291: jne 0x587372ed
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x58737293: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58737295: cmp dword ptr [esp + 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58737299: je 0x587372da
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5873729B: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5873729E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587372A0: lea eax, [esi + 0x25c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372A6: mov dword ptr [ecx + 0x11c], 6
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372B0: push edi
        __asm _emit 0x57
        // 0x587372B1: push eax
        __asm _emit 0x50
        // 0x587372B2: mov dword ptr [esi + 0x254], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372B8: mov dword ptr [esi + 0x258], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372BE: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587372C3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587372C6: mov dword ptr [esi + 0x29c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372CC: mov dword ptr [esi + 0x2a0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372D2: pop edi
        __asm _emit 0x5F
        // 0x587372D3: pop ebp
        __asm _emit 0x5D
        // 0x587372D4: pop ebx
        __asm _emit 0x5B
        // 0x587372D5: pop esi
        __asm _emit 0x5E
        // 0x587372D6: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587372D9: ret
        __asm _emit 0xC3
        // 0x587372DA: mov edx, dword ptr [esi + ebp*8 + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xEE
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372E1: mov eax, dword ptr [esi + ebp*8 + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xEE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372E8: jmp 0x58737371
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372ED: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587372F0: jne 0x5873738f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372F6: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587372FC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587372FE: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58737301: jne 0x587373b0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737307: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873730D: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58737313: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58737319: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873731B: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58737321: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58737326: mov ebx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x90
        // 0x58737329: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873732B: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5873732D: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x5873732F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58737331: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58737333: jne 0x58737360
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x58737335: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58737337: jne 0x5873734b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58737339: test bl, 1
        __asm _emit 0xF6
        __asm _emit 0xC3
        __asm _emit 0x01
        // 0x5873733C: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5873733F: jne 0x58737346
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58737341: lea ecx, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x01
        // 0x58737344: jmp 0x58737363
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x58737346: lea ecx, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0xFF
        // 0x58737349: jmp 0x58737363
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x5873734B: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x5873734E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58737350: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58737354: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58737356: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58737358: jne 0x58737397
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x5873735A: div dword ptr [esp + 0x20]
        __asm _emit 0xF7
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873735E: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58737360: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58737363: mov edx, dword ptr [esi + ecx*8 + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xCE
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873736A: mov eax, dword ptr [esi + ecx*8 + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737371: shl edx, 0xf
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x58737374: and eax, 0x7fff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58737379: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873737B: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873737D: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58737381: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58737383: push ecx
        __asm _emit 0x51
        // 0x58737384: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58737386: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873738A: call 0x588d7ec0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x0B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5873738F: pop edi
        __asm _emit 0x5F
        // 0x58737390: pop ebp
        __asm _emit 0x5D
        // 0x58737391: pop ebx
        __asm _emit 0x5B
        // 0x58737392: pop esi
        __asm _emit 0x5E
        // 0x58737393: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58737396: ret
        __asm _emit 0xC3
        // 0x58737397: test bl, 1
        __asm _emit 0xF6
        __asm _emit 0xC3
        __asm _emit 0x01
        // 0x5873739A: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5873739D: jne 0x587373a5
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5873739F: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587373A1: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587373A3: jmp 0x58737363
        __asm _emit 0xEB
        __asm _emit 0xBE
        // 0x587373A5: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x587373A7: dec edi
        __asm _emit 0x4F
        // 0x587373A8: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x587373AA: lea ecx, [edx + ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x2A
        __asm _emit 0x01
        // 0x587373AE: jmp 0x58737363
        __asm _emit 0xEB
        __asm _emit 0xB3
        // 0x587373B0: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587373B3: jne 0x587373c0
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587373B5: cmp dword ptr [esp + 0x14], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587373B9: jne 0x58737363
        __asm _emit 0x75
        __asm _emit 0xA8
        // 0x587373BB: lea ecx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x01
        // 0x587373BE: jmp 0x58737363
        __asm _emit 0xEB
        __asm _emit 0xA3
        // 0x587373C0: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587373C3: jne 0x58737363
        __asm _emit 0x75
        __asm _emit 0x9E
        // 0x587373C5: cmp dword ptr [esp + 0x14], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587373C9: jne 0x587373e7
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587373CB: cmp dword ptr [esi + 0x2a0], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587373D1: je 0x587373df
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587373D3: cmp dword ptr [esp + 0x1c], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587373D7: je 0x587373f1
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587373D9: mov dword ptr [esi + 0x2a0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587373DF: lea ecx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x01
        // 0x587373E2: jmp 0x58737363
        __asm _emit 0xE9
        __asm _emit 0x7C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587373E7: mov dword ptr [esi + 0x2a0], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587373F1: lea ecx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x587373F4: jmp 0x58737363
        __asm _emit 0xE9
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
