// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6A30 .. +0x237 bytes.
// Source symbol alias: FUN_588a6a30.
extern "C" __declspec(naked) void FUN_588a6a30() {
    __asm {
        // 0x588A6A30: push esi
        __asm _emit 0x56
        // 0x588A6A31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A6A33: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A39: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A6A3D: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588A6A40: je 0x588a6a50
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A6A42: mov edx, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A48: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588A6A4C: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588A6A4E: je 0x588a6a76
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588A6A50: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A56: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588A6A5A: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588A6A5D: jne 0x588a6c65
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A63: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A69: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A6A6D: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588A6A70: je 0x588a6c65
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A76: mov edx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A7C: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588A6A80: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588A6A82: je 0x588a6c08
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A88: mov ecx, dword ptr [0x58a24810]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6A8E: call 0x588eb130
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A6A93: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A6A95: je 0x588a6c65
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A9B: cmp word ptr [esi + 0x9c], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588A6AA3: jne 0x588a6b09
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x588A6AA5: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6AAB: call 0x58807e80
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x13
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588A6AB0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A6AB2: je 0x588a6c65
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6AB8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6ABE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6AC0: call 0x587b95e0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x2B
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A6AC5: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6ACB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6ACD: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xAA
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A6AD2: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6AD8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6ADA: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588A6ADD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6ADF: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6AE5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6AE7: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6AEA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6AEC: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6AF2: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6AF7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A6AFB: mov esi, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6B01: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588A6B03: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588A6B07: pop esi
        __asm _emit 0x5E
        // 0x588A6B08: ret
        __asm _emit 0xC3
        // 0x588A6B09: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6B0E: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588A6B15: jle 0x588a6b2b
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A6B17: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6B1E: je 0x588a6b2b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A6B20: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6B26: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A6B29: jmp 0x588a6b2d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A6B2B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6B2D: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6B33: push edx
        __asm _emit 0x52
        // 0x588A6B34: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x0E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A6B39: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6B3E: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588A6B45: jle 0x588a6b5b
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A6B47: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6B4E: je 0x588a6b5b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A6B50: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6B56: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A6B59: jmp 0x588a6b5d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A6B5B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6B5D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6B5F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6B62: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6B64: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6B66: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6B6B: cmp dword ptr [eax + 0x170], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588A6B72: jle 0x588a6b88
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A6B74: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6B7B: je 0x588a6b88
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A6B7D: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6B83: mov ecx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x1C
        // 0x588A6B86: jmp 0x588a6b8a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A6B88: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6B8A: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6B90: push edx
        __asm _emit 0x52
        // 0x588A6B91: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x0D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A6B96: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6B9B: cmp dword ptr [eax + 0x170], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588A6BA2: jle 0x588a6bb8
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A6BA4: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6BAB: je 0x588a6bb8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A6BAD: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6BB3: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588A6BB6: jmp 0x588a6bba
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A6BB8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6BBA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6BBC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6BBF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6BC1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6BC3: movzx ecx, word ptr [esi + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6BCA: movzx edx, word ptr [esi + 0x96]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6BD1: push ecx
        __asm _emit 0x51
        // 0x588A6BD2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6BD8: push edx
        __asm _emit 0x52
        // 0x588A6BD9: call 0x587b9600
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x2A
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A6BDE: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6BE4: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6BE9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A6BED: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6BF3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6BF5: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588A6BF8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6BFA: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C00: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6C02: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6C05: pop esi
        __asm _emit 0x5E
        // 0x588A6C06: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x588A6C08: cmp word ptr [esi + 0x9c], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588A6C10: jne 0x588a6c21
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588A6C12: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6C18: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A6C1A: call 0x587b95e0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x29
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A6C1F: jmp 0x588a6c3c
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x588A6C21: movzx ecx, word ptr [esi + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C28: movzx edx, word ptr [esi + 0x96]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C2F: push ecx
        __asm _emit 0x51
        // 0x588A6C30: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6C36: push edx
        __asm _emit 0x52
        // 0x588A6C37: call 0x587b9620
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x29
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A6C3C: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C42: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6C44: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A6C47: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6C49: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C4F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6C51: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A6C54: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6C56: mov esi, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C5C: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C61: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A6C65: pop esi
        __asm _emit 0x5E
        // 0x588A6C66: ret
        __asm _emit 0xC3
    }
}
