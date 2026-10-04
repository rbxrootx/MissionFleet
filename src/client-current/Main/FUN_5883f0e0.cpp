// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5883F0E0 .. +0x24B bytes.
// Source symbol alias: FUN_5883f0e0.
extern "C" __declspec(naked) void FUN_5883f0e0() {
    __asm {
        // 0x5883F0E0: sub esp, 0x5c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x5C
        // 0x5883F0E3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5883F0E8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883F0EA: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5883F0EE: push ebx
        __asm _emit 0x53
        // 0x5883F0EF: push ebp
        __asm _emit 0x55
        // 0x5883F0F0: mov ebp, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5883F0F4: push esi
        __asm _emit 0x56
        // 0x5883F0F5: push edi
        __asm _emit 0x57
        // 0x5883F0F6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5883F0F8: push ebp
        __asm _emit 0x55
        // 0x5883F0F9: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883F0FD: call 0x5883eb90
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883F102: push ebp
        __asm _emit 0x55
        // 0x5883F103: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883F109: cmp eax, 0x1f4
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F10E: jle 0x5883f1ca
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F114: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x5883F116: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883F11A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F11C: push eax
        __asm _emit 0x50
        // 0x5883F11D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xDB
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883F122: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5883F126: mov esi, 0x5899e3c8
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0xE3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883F12B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883F12D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5883F130: mov edx, 0x50
        __asm _emit 0xBA
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F135: sub esi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF1
        // 0x5883F137: jmp 0x5883f140
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5883F139: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F140: lea ecx, [edx + 0x7fffffae]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5883F146: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883F148: je 0x5883f15b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5883F14A: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x5883F14D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883F14F: je 0x5883f15b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883F151: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5883F153: inc eax
        __asm _emit 0x40
        // 0x5883F154: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5883F157: jne 0x5883f140
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5883F159: jmp 0x5883f15f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5883F15B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5883F15D: jne 0x5883f160
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5883F15F: dec eax
        __asm _emit 0x48
        // 0x5883F160: mov ecx, dword ptr [ebx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F166: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F16B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F16D: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5883F171: push edx
        __asm _emit 0x52
        // 0x5883F172: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F175: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x97
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F17A: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883F17E: mov edx, 0x5899e394
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0xE3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883F183: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883F185: mov esi, 0x50
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F18A: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5883F18C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5883F190: lea ecx, [esi + 0x7fffffae]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5883F196: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883F198: je 0x5883f1ab
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5883F19A: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x5883F19D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883F19F: je 0x5883f1ab
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883F1A1: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5883F1A3: inc eax
        __asm _emit 0x40
        // 0x5883F1A4: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5883F1A7: jne 0x5883f190
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5883F1A9: jmp 0x5883f1af
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5883F1AB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5883F1AD: jne 0x5883f1b0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5883F1AF: dec eax
        __asm _emit 0x48
        // 0x5883F1B0: mov ecx, dword ptr [ebx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F1B6: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F1BB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F1BD: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5883F1C1: push edx
        __asm _emit 0x52
        // 0x5883F1C2: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F1C5: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x97
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F1CA: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5883F1CD: mov ecx, dword ptr [ebx + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F1D3: add eax, 0xa2
        __asm _emit 0x05
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F1D8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883F1DA: push eax
        __asm _emit 0x50
        // 0x5883F1DB: mov dword ptr [ebx + 0xe0], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F1E1: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x41
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F1E6: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5883F1E8: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5883F1EA: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5883F1ED: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5883F1F0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5883F1F2: inc eax
        __asm _emit 0x40
        // 0x5883F1F3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883F1F5: jne 0x5883f1f0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5883F1F7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5883F1F9: je 0x5883f2b5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F1FF: nop
        __asm _emit 0x90
        // 0x5883F200: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x5883F202: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x5883F204: cmp ebx, 0x46
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x46
        // 0x5883F207: jle 0x5883f243
        __asm _emit 0x7E
        __asm _emit 0x3A
        // 0x5883F209: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x5883F20B: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883F20F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F211: push ecx
        __asm _emit 0x51
        // 0x5883F212: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xDA
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883F217: push ebx
        __asm _emit 0x53
        // 0x5883F218: lea edx, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x2F
        // 0x5883F21B: push edx
        __asm _emit 0x52
        // 0x5883F21C: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883F220: push eax
        __asm _emit 0x50
        // 0x5883F221: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xDB
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883F226: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5883F22A: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5883F22D: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x5883F232: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883F236: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F238: push ecx
        __asm _emit 0x51
        // 0x5883F239: mov ecx, dword ptr [edx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F23F: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x5883F241: jmp 0x5883f282
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x5883F243: cmp byte ptr [esi + ebp], 0xd
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x2E
        __asm _emit 0x0D
        // 0x5883F247: jne 0x5883f287
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x5883F249: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x5883F24B: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883F24F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F251: push eax
        __asm _emit 0x50
        // 0x5883F252: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xD9
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883F257: push ebx
        __asm _emit 0x53
        // 0x5883F258: lea ecx, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x2F
        // 0x5883F25B: push ecx
        __asm _emit 0x51
        // 0x5883F25C: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883F260: push edx
        __asm _emit 0x52
        // 0x5883F261: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xDA
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883F266: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5883F26A: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F270: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5883F273: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x5883F278: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F27A: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5883F27E: lea edi, [esi + 2]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5883F281: push eax
        __asm _emit 0x50
        // 0x5883F282: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F287: movzx edx, byte ptr [esi + ebp]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x14
        __asm _emit 0x2E
        // 0x5883F28B: push edx
        __asm _emit 0x52
        // 0x5883F28C: call dword ptr [0x5898c0bc]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xBC
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883F292: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883F294: je 0x5883f297
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5883F296: inc esi
        __asm _emit 0x46
        // 0x5883F297: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5883F299: inc esi
        __asm _emit 0x46
        // 0x5883F29A: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5883F29D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5883F2A0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5883F2A2: inc eax
        __asm _emit 0x40
        // 0x5883F2A3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883F2A5: jne 0x5883f2a0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5883F2A7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5883F2A9: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5883F2AB: jb 0x5883f200
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883F2B1: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883F2B5: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5883F2B7: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5883F2BA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F2C0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5883F2C2: inc eax
        __asm _emit 0x40
        // 0x5883F2C3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883F2C5: jne 0x5883f2c0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5883F2C7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5883F2C9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883F2CB: jbe 0x5883f316
        __asm _emit 0x76
        __asm _emit 0x49
        // 0x5883F2CD: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5883F2CF: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883F2D3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F2D5: push eax
        __asm _emit 0x50
        // 0x5883F2D6: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xD9
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883F2DB: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5883F2DD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5883F2E0: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5883F2E3: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5883F2E5: inc eax
        __asm _emit 0x40
        // 0x5883F2E6: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883F2E8: jne 0x5883f2e3
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5883F2EA: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5883F2EC: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5883F2EE: push eax
        __asm _emit 0x50
        // 0x5883F2EF: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xEF
        // 0x5883F2F1: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883F2F5: push ebp
        __asm _emit 0x55
        // 0x5883F2F6: push ecx
        __asm _emit 0x51
        // 0x5883F2F7: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xDA
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883F2FC: mov ecx, dword ptr [ebx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F302: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5883F305: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x5883F30A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883F30C: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5883F310: push edx
        __asm _emit 0x52
        // 0x5883F311: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x95
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F316: mov ecx, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5883F31A: pop edi
        __asm _emit 0x5F
        // 0x5883F31B: pop esi
        __asm _emit 0x5E
        // 0x5883F31C: pop ebp
        __asm _emit 0x5D
        // 0x5883F31D: pop ebx
        __asm _emit 0x5B
        // 0x5883F31E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5883F320: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xD8
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5883F325: add esp, 0x5c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x5C
        // 0x5883F328: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
