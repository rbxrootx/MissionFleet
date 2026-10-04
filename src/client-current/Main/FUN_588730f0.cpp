// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588730F0 .. +0x207 bytes.
// Source symbol alias: FUN_588730f0.
extern "C" __declspec(naked) void FUN_588730f0() {
    __asm {
        // 0x588730F0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x588730F3: push ebx
        __asm _emit 0x53
        // 0x588730F4: push ebp
        __asm _emit 0x55
        // 0x588730F5: push esi
        __asm _emit 0x56
        // 0x588730F6: push edi
        __asm _emit 0x57
        // 0x588730F7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588730F9: mov eax, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730FF: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873104: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58873108: mov edx, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887310E: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873115: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887311A: mov esi, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873120: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58873124: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58873126: je 0x588731c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887312C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887312E: call 0x588e64f0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x33
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58873133: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58873135: je 0x5887314f
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58873137: mov eax, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887313D: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58873142: mov ecx, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873148: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887314F: lea edx, [edi + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873155: add esi, 0x9a4
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887315B: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887315F: mov dword ptr [esp + 0x14], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873167: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x58873169: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5887316B: je 0x588731ac
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5887316D: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58873171: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x58873173: cmp dword ptr [ebx + 0x30], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x30
        // 0x58873176: je 0x58873191
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58873178: push ebx
        __asm _emit 0x53
        // 0x58873179: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5887317B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873180: push ebx
        __asm _emit 0x53
        // 0x58873181: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58873183: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873188: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5887318A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887318C: call 0x5877a9b0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58873191: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58873195: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58873197: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5887319A: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5887319D: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x588731A0: sub ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x1E
        // 0x588731A3: push eax
        __asm _emit 0x50
        // 0x588731A4: push ecx
        __asm _emit 0x51
        // 0x588731A5: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588731A7: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588731AC: add dword ptr [esp + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x588731B1: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588731B4: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x588731B9: jne 0x58873167
        __asm _emit 0x75
        __asm _emit 0xAC
        // 0x588731BB: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588731C1: call 0x587df010
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xBE
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588731C6: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588731C9: add eax, 9
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x09
        // 0x588731CC: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588731D0: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588731D3: add eax, 0x3a
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x3A
        // 0x588731D6: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588731DA: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588731DF: mov esi, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588731E2: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588731E4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588731E6: je 0x588732aa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588731EC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588731F0: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x588731F3: cmp dword ptr [ebx + 0x30], edi
        __asm _emit 0x39
        __asm _emit 0x7B
        __asm _emit 0x30
        // 0x588731F6: je 0x5887321c
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588731F8: push ebx
        __asm _emit 0x53
        // 0x588731F9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588731FB: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873200: push ebx
        __asm _emit 0x53
        // 0x58873201: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58873203: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873208: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5887320B: call 0x5877aad0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58873210: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58873213: mov edx, 0x2000
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873218: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5887321C: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58873220: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58873222: sub ecx, dword ptr [edi + 0x190]
        __asm _emit 0x2B
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873228: push eax
        __asm _emit 0x50
        // 0x58873229: imul ecx, ecx, 0x43
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x43
        // 0x5887322C: add ecx, dword ptr [esp + 0x18]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58873230: push ecx
        __asm _emit 0x51
        // 0x58873231: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58873234: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58873239: mov eax, dword ptr [edi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887323F: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58873241: jl 0x58873254
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x58873243: add eax, 7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x07
        // 0x58873246: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58873248: jge 0x58873254
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x5887324A: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5887324D: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58873252: jmp 0x58873260
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58873254: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58873257: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887325C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58873260: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58873263: test dword ptr [eax + 0xb4], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5887326D: je 0x58873299
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5887326F: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58873273: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58873275: je 0x5887328c
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58873277: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58873279: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887327B: push eax
        __asm _emit 0x50
        // 0x5887327C: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58873281: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58873283: jne 0x5887328c
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58873285: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887328A: jmp 0x58873291
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5887328C: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873291: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58873294: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xFA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873299: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5887329C: inc ebp
        __asm _emit 0x45
        // 0x5887329D: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5887329F: jne 0x588731f0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588732A5: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588732AA: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588732AD: sub ecx, dword ptr [eax + 0x2c]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x2C
        // 0x588732B0: push ecx
        __asm _emit 0x51
        // 0x588732B1: mov ecx, dword ptr [edi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588732B7: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588732BC: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588732C2: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x2C
        // 0x588732C5: mov ecx, dword ptr [edi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588732CB: push eax
        __asm _emit 0x50
        // 0x588732CC: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588732D1: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588732D7: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x588732DA: mov ecx, dword ptr [edi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588732E0: push edx
        __asm _emit 0x52
        // 0x588732E1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588732E6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588732E8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588732EA: call 0x58873030
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588732EF: pop edi
        __asm _emit 0x5F
        // 0x588732F0: pop esi
        __asm _emit 0x5E
        // 0x588732F1: pop ebp
        __asm _emit 0x5D
        // 0x588732F2: pop ebx
        __asm _emit 0x5B
        // 0x588732F3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588732F6: ret
        __asm _emit 0xC3
    }
}
