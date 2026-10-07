// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 963 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ce3d0.

// Ghidra body range 0x587CE3D0..0x587CE793; 963 mapped bytes.
extern "C" __declspec(naked) void FUN_587ce3d0_segment_00() {
    __asm {
        // 0x587CE3D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CE3D2: push 0x58981a81
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x1A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CE3D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE3DD: push eax
        __asm _emit 0x50
        // 0x587CE3DE: push ecx
        __asm _emit 0x51
        // 0x587CE3DF: push esi
        __asm _emit 0x56
        // 0x587CE3E0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CE3E5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CE3E7: push eax
        __asm _emit 0x50
        // 0x587CE3E8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CE3EC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE3F2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CE3F4: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE3F8: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE3FC: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587CE3FF: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587CE402: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE408: add eax, 0xfffffe00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE40D: mov dword ptr [edx + 0x1052c], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE413: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE418: add ecx, 0xfffffe80
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE41E: mov dword ptr [eax + 0x10530], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE424: cmp dword ptr [0x589c903c], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x3C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587CE42B: je 0x587ce446
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587CE42D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE433: mov eax, dword ptr [ecx + 0x10544]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE439: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CE43B: je 0x587ce446
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CE43D: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE442: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CE446: push 0x2c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE44B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xE7
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CE450: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CE453: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CE457: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE45F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CE461: je 0x587ce489
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587CE463: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE467: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE46B: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE470: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE472: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE474: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE476: add ecx, 0x1ea
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE47C: push ecx
        __asm _emit 0x51
        // 0x587CE47D: push edx
        __asm _emit 0x52
        // 0x587CE47E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE480: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CE482: call 0x587ca820
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE487: jmp 0x587ce48b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CE489: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CE48B: push 0x2c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE490: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE498: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587CE49B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xE7
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CE4A0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CE4A3: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CE4A7: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE4AF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CE4B1: je 0x587ce4dc
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587CE4B3: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE4B7: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE4BB: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE4C0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE4C2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE4C4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE4C6: add ecx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE4CC: push ecx
        __asm _emit 0x51
        // 0x587CE4CD: add edx, -0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x9C
        // 0x587CE4D0: push edx
        __asm _emit 0x52
        // 0x587CE4D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE4D3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CE4D5: call 0x587caf30
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE4DA: jmp 0x587ce4de
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CE4DC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CE4DE: push 0x2c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE4E3: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE4EB: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587CE4EE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xE7
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CE4F3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CE4F6: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CE4FA: mov dword ptr [esp + 0x14], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE502: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CE504: je 0x587ce52f
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587CE506: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE50A: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE50E: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE513: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE515: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE517: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE519: add ecx, 0x244
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE51F: push ecx
        __asm _emit 0x51
        // 0x587CE520: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x587CE523: push edx
        __asm _emit 0x52
        // 0x587CE524: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE526: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CE528: call 0x587caf30
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE52D: jmp 0x587ce531
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CE52F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CE531: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587CE534: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587CE537: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE53D: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE543: push eax
        __asm _emit 0x50
        // 0x587CE544: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE54C: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x49
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CE551: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587CE554: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE559: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE55F: push edx
        __asm _emit 0x52
        // 0x587CE560: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x49
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CE565: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587CE568: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE56E: push ecx
        __asm _emit 0x51
        // 0x587CE56F: mov ecx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE575: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x49
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CE57A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587CE57D: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587CE580: push eax
        __asm _emit 0x50
        // 0x587CE581: call 0x587cad90
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE586: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE589: push ecx
        __asm _emit 0x51
        // 0x587CE58A: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587CE58D: call 0x587cad90
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xC7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE592: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE596: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE59A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE59D: push 0x13880
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE5A2: add edx, 0x13c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE5A8: push edx
        __asm _emit 0x52
        // 0x587CE5A9: push eax
        __asm _emit 0x50
        // 0x587CE5AA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE5AC: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE5B1: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE5B5: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE5B9: push 0x9c40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE5BE: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE5C4: push ecx
        __asm _emit 0x51
        // 0x587CE5C5: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE5C8: add edx, -0x50
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xB0
        // 0x587CE5CB: push edx
        __asm _emit 0x52
        // 0x587CE5CC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE5CE: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE5D3: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE5D7: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE5DB: push 0x9c40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE5E0: add eax, 0xe2
        __asm _emit 0x05
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE5E5: push eax
        __asm _emit 0x50
        // 0x587CE5E6: add ecx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x32
        // 0x587CE5E9: push ecx
        __asm _emit 0x51
        // 0x587CE5EA: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE5ED: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587CE5EF: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE5F4: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE5F8: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE5FC: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE5FF: push 0x9c40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE604: add edx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE60A: push edx
        __asm _emit 0x52
        // 0x587CE60B: add eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x50
        // 0x587CE60E: push eax
        __asm _emit 0x50
        // 0x587CE60F: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587CE611: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE616: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE61A: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE61E: push 0x9c40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE623: add ecx, 0xb4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE629: push ecx
        __asm _emit 0x51
        // 0x587CE62A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE62D: add edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x32
        // 0x587CE630: push edx
        __asm _emit 0x52
        // 0x587CE631: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587CE633: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE638: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE63C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE640: push 0x186a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE645: add eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587CE648: push eax
        __asm _emit 0x50
        // 0x587CE649: push ecx
        __asm _emit 0x51
        // 0x587CE64A: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587CE64C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE64F: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE654: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE658: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE65C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE65F: push 0x186a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE664: push edx
        __asm _emit 0x52
        // 0x587CE665: push eax
        __asm _emit 0x50
        // 0x587CE666: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x587CE668: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE66D: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE671: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE675: push 0x13880
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE67A: add ecx, 0x17c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE680: push ecx
        __asm _emit 0x51
        // 0x587CE681: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587CE684: add edx, -0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x9C
        // 0x587CE687: push edx
        __asm _emit 0x52
        // 0x587CE688: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE68A: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE68F: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE693: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE697: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE69C: add eax, 0x118
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE6A1: push eax
        __asm _emit 0x50
        // 0x587CE6A2: add ecx, -0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x9C
        // 0x587CE6A5: push ecx
        __asm _emit 0x51
        // 0x587CE6A6: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587CE6A9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE6AB: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE6B0: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE6B4: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE6B8: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587CE6BB: push 0x186a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE6C0: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x587CE6C3: push edx
        __asm _emit 0x52
        // 0x587CE6C4: add eax, -0x32
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xCE
        // 0x587CE6C7: push eax
        __asm _emit 0x50
        // 0x587CE6C8: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587CE6CA: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE6CF: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE6D3: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE6D7: push 0xc350
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE6DC: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x587CE6DF: push ecx
        __asm _emit 0x51
        // 0x587CE6E0: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587CE6E3: add edx, -0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xEC
        // 0x587CE6E6: push edx
        __asm _emit 0x52
        // 0x587CE6E7: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587CE6E9: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE6EE: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE6F2: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE6F6: push 0x13880
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE6FB: add eax, 0x190
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE700: push eax
        __asm _emit 0x50
        // 0x587CE701: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x587CE704: push ecx
        __asm _emit 0x51
        // 0x587CE705: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587CE708: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE70A: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE70F: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE713: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE717: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587CE71A: push 0x186a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE71F: add edx, 0x15e
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE725: push edx
        __asm _emit 0x52
        // 0x587CE726: add eax, -0x64
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x9C
        // 0x587CE729: push eax
        __asm _emit 0x50
        // 0x587CE72A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE72C: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE731: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE735: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CE739: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE73E: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE744: push ecx
        __asm _emit 0x51
        // 0x587CE745: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587CE748: add edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x32
        // 0x587CE74B: push edx
        __asm _emit 0x52
        // 0x587CE74C: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587CE74E: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE753: push 0x13880
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE758: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CE75C: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CE760: add eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x32
        // 0x587CE763: push eax
        __asm _emit 0x50
        // 0x587CE764: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x587CE767: push ecx
        __asm _emit 0x51
        // 0x587CE768: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587CE76B: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587CE76D: call 0x587cb340
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE772: mov dword ptr [esi + 0x20], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE779: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE780: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CE784: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE78B: pop ecx
        __asm _emit 0x59
        // 0x587CE78C: pop esi
        __asm _emit 0x5E
        // 0x587CE78D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CE790: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
