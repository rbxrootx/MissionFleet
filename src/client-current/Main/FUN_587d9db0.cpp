// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D9DB0 .. +0x28A bytes.
// Source symbol alias: FUN_587d9db0.
extern "C" __declspec(naked) void FUN_587d9db0() {
    __asm {
        // 0x587D9DB0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587D9DB3: push ebx
        __asm _emit 0x53
        // 0x587D9DB4: push ebp
        __asm _emit 0x55
        // 0x587D9DB5: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587D9DB7: mov eax, 0x5bc
        __asm _emit 0xB8
        __asm _emit 0xBC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DBC: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587D9DBE: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9DC2: mov eax, 0x63c
        __asm _emit 0xB8
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DC7: push esi
        __asm _emit 0x56
        // 0x587D9DC8: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587D9DCA: push edi
        __asm _emit 0x57
        // 0x587D9DCB: mov dword ptr [esp + 0x10], 0x1c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DD3: mov ebx, 0x46
        __asm _emit 0xBB
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DD8: lea esi, [ebp + 0x574]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DDE: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D9DE2: mov eax, dword ptr [ebp + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DE8: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DEE: mov eax, dword ptr [edx + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DF4: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9DF9: sub ecx, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9DFD: shr eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE8
        // 0x587D9DFF: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587D9E01: je 0x587da00a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9E07: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D9E09: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9E0E: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D9E12: mov eax, dword ptr [esi - 0x444]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9E18: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D9E1C: mov ecx, dword ptr [ebp + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9E22: mov eax, dword ptr [ecx + 0xcc4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9E28: movsx edx, word ptr [eax + ebx + 0x40]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x40
        // 0x587D9E2D: movsx eax, word ptr [eax + ebx]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x18
        // 0x587D9E31: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587D9E33: add edx, 0x1bc
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9E39: push edx
        __asm _emit 0x52
        // 0x587D9E3A: add eax, 0x200
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9E3F: push eax
        __asm _emit 0x50
        // 0x587D9E40: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D9E45: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D9E47: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D9E4A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D9E4D: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D9E50: push ecx
        __asm _emit 0x51
        // 0x587D9E51: mov ecx, dword ptr [esi - 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9E57: push edx
        __asm _emit 0x52
        // 0x587D9E58: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D9E5D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D9E5F: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D9E62: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D9E65: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D9E68: push ecx
        __asm _emit 0x51
        // 0x587D9E69: mov ecx, dword ptr [esi - 0x2c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9E6F: push edx
        __asm _emit 0x52
        // 0x587D9E70: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D9E75: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D9E77: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D9E7A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D9E7D: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D9E80: push ecx
        __asm _emit 0x51
        // 0x587D9E81: mov ecx, dword ptr [esi - 0x444]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9E87: push edx
        __asm _emit 0x52
        // 0x587D9E88: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D9E8D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D9E8F: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D9E92: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D9E95: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D9E98: push ecx
        __asm _emit 0x51
        // 0x587D9E99: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587D9E9C: push edx
        __asm _emit 0x52
        // 0x587D9E9D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x93
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D9EA2: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587D9EA5: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9EAA: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587D9EAE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D9EB0: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587D9EB3: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D9EB6: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D9EB9: push ecx
        __asm _emit 0x51
        // 0x587D9EBA: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587D9EBD: push edx
        __asm _emit 0x52
        // 0x587D9EBE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x93
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D9EC3: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587D9EC6: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587D9ECA: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587D9ECD: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x587D9ECF: push 0x1e
        __asm _emit 0x6A
        __asm _emit 0x1E
        // 0x587D9ED1: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x8F
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D9ED6: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D9EDA: mov eax, dword ptr [ebp + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9EE0: lea edi, [ecx + esi]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x31
        // 0x587D9EE3: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x587D9EE6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D9EE8: je 0x587d9ff4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9EEE: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x587D9EF1: cmp cx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0D
        // 0x587D9EF5: jne 0x587d9ff4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9EFB: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D9EFF: lea ecx, [eax + edx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x587D9F02: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9F07: cmp word ptr [ecx + esi], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x14
        __asm _emit 0x31
        // 0x587D9F0B: je 0x587d9ff4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9F11: mov eax, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x38
        // 0x587D9F14: push eax
        __asm _emit 0x50
        // 0x587D9F15: call 0x5876c8b0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x29
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D9F1A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D9F1D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9F1F: je 0x587da01f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9F25: mov eax, dword ptr [ebp + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9F2B: mov ecx, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x587D9F2E: movzx edx, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D9F32: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D9F38: lea eax, [edx + 3]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x03
        // 0x587D9F3B: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9F41: jle 0x587d9f5b
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587D9F43: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9F45: jl 0x587d9f5b
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587D9F47: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9F4E: je 0x587d9f5b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D9F50: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587D9F53: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9F59: jmp 0x587d9f5d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D9F5B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D9F5D: mov ecx, dword ptr [esi - 0x2c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9F63: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587D9F66: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9F68: je 0x587d9f92
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587D9F6A: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x587D9F6D: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x587D9F70: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x587D9F73: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587D9F76: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x587D9F79: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x587D9F7B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587D9F7E: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x587D9F80: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587D9F83: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x587D9F86: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587D9F89: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587D9F8C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587D9F8F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587D9F92: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D9F98: lea eax, [edx + 4]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587D9F9B: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9FA1: jle 0x587d9fbb
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587D9FA3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9FA5: jl 0x587d9fbb
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587D9FA7: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9FAE: je 0x587d9fbb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D9FB0: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587D9FB3: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9FB9: jmp 0x587d9fbd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D9FBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D9FBD: mov ecx, dword ptr [esi - 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9FC3: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587D9FC6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9FC8: je 0x587da01f
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x587D9FCA: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587D9FCD: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587D9FD0: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587D9FD3: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587D9FD6: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587D9FD9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D9FDB: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587D9FDE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587D9FE0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D9FE3: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D9FE6: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587D9FE9: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587D9FEC: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587D9FEF: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587D9FF2: jmp 0x587da01f
        __asm _emit 0xEB
        __asm _emit 0x2B
        // 0x587D9FF4: mov ecx, dword ptr [esi - 0x2c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9FFA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D9FFC: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587D9FFF: mov edx, dword ptr [esi - 0x244]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DA005: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x587DA008: jmp 0x587da01f
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587DA00A: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587DA00D: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA012: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DA016: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587DA019: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587DA01B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587DA01F: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DA023: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x02
        // 0x587DA026: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587DA029: cmp ebx, 0x4c
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x4C
        // 0x587DA02C: jle 0x587d9de2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DA032: pop edi
        __asm _emit 0x5F
        // 0x587DA033: pop esi
        __asm _emit 0x5E
        // 0x587DA034: pop ebp
        __asm _emit 0x5D
        // 0x587DA035: pop ebx
        __asm _emit 0x5B
        // 0x587DA036: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587DA039: ret
        __asm _emit 0xC3
    }
}
