// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587781D0 .. +0x1D0 bytes.
// Source symbol alias: FUN_587781d0.
extern "C" __declspec(naked) void FUN_587781d0() {
    __asm {
        // 0x587781D0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587781D3: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587781D9: push ebp
        __asm _emit 0x55
        // 0x587781DA: push esi
        __asm _emit 0x56
        // 0x587781DB: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587781DF: push edi
        __asm _emit 0x57
        // 0x587781E0: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587781E2: push ebp
        __asm _emit 0x55
        // 0x587781E3: push ebp
        __asm _emit 0x55
        // 0x587781E4: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587781E8: push eax
        __asm _emit 0x50
        // 0x587781E9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587781EB: push esi
        __asm _emit 0x56
        // 0x587781EC: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587781F0: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587781F4: call 0x5875b770
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x35
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587781F9: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587781FD: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587781FF: je 0x5877837a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778205: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58778209: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877820B: push ebx
        __asm _emit 0x53
        // 0x5877820C: mov ecx, 0x30
        __asm _emit 0xB9
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778211: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58778213: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58778215: lea ebx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x01
        // 0x58778218: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877821A: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877821F: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778224: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58778226: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58778228: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877822C: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58778230: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58778234: lea eax, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x01
        // 0x58778237: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x58778239: mov dword ptr [esp + 0x1c], 0x30
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778241: movzx edx, byte ptr [eax - 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x58778245: movzx ebp, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x28
        // 0x58778248: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x5877824B: add dword ptr [esp + 0x14], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877824F: lea edx, [ecx + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58778252: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x58778255: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58778259: movzx ebp, byte ptr [eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x5877825D: lea edx, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x06
        // 0x58778260: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x58778263: add dword ptr [esp + 0x28], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58778267: movzx ebp, byte ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x68
        __asm _emit 0x02
        // 0x5877826B: lea edx, [edi + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x07
        // 0x5877826E: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x58778271: add dword ptr [esp + 0x34], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58778275: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58778278: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5877827B: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x58778280: jne 0x58778241
        __asm _emit 0x75
        __asm _emit 0xBF
        // 0x58778282: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58778286: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877828A: mov esi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5877828E: lea edx, [ecx + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58778291: add edx, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58778295: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58778299: mov eax, dword ptr [eax + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877829F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587782A3: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587782A5: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587782A7: movzx edx, byte ptr [esi + 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x03
        // 0x587782AB: lea edi, [ebx + 3]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x03
        // 0x587782AE: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587782B1: movzx edi, byte ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587782B5: lea ebp, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x02
        // 0x587782B8: imul edi, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFD
        // 0x587782BB: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587782BD: movzx edi, byte ptr [esi + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x7E
        __asm _emit 0x01
        // 0x587782C1: lea ebp, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x01
        // 0x587782C4: imul edi, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFD
        // 0x587782C7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587782C9: movzx edi, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xF8
        // 0x587782CC: imul edi, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFB
        // 0x587782CF: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x587782D1: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587782D4: lea ebp, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x17
        // 0x587782D7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587782D9: jle 0x5877836e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587782DF: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587782E3: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587782E5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587782E7: je 0x587782f2
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587782E9: push eax
        __asm _emit 0x50
        // 0x587782EA: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x49
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587782EF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587782F2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587782F4: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587782F8: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587782FB: push ecx
        __asm _emit 0x51
        // 0x587782FC: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x92
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58778301: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58778305: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x58778307: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58778309: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877830D: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x58778310: add edx, 0xffffff3c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58778316: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58778319: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5877831B: je 0x58778327
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5877831D: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877831F: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58778325: jmp 0x5877833c
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58778327: push ecx
        __asm _emit 0x51
        // 0x58778328: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877832C: add ecx, 0xc4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778332: push ecx
        __asm _emit 0x51
        // 0x58778333: push eax
        __asm _emit 0x50
        // 0x58778334: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x4A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58778339: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877833C: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58778340: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58778342: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58778344: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x58778347: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778349: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5877834B: jle 0x58778361
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5877834D: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5877834F: imul esi, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF7
        // 0x58778352: movzx edx, byte ptr [eax + ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x58778356: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x58778359: inc eax
        __asm _emit 0x40
        // 0x5877835A: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x5877835C: inc ebx
        __asm _emit 0x43
        // 0x5877835D: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5877835F: jl 0x58778352
        __asm _emit 0x7C
        __asm _emit 0xF1
        // 0x58778361: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58778365: push eax
        __asm _emit 0x50
        // 0x58778366: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877836B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877836E: pop ebx
        __asm _emit 0x5B
        // 0x5877836F: pop edi
        __asm _emit 0x5F
        // 0x58778370: pop esi
        __asm _emit 0x5E
        // 0x58778371: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58778373: pop ebp
        __asm _emit 0x5D
        // 0x58778374: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58778377: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5877837A: mov ecx, dword ptr [0x58a247f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58778380: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58778382: push esi
        __asm _emit 0x56
        // 0x58778383: call 0x587750b0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58778388: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877838E: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x87
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58778393: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58778395: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877839B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5877839D: pop edi
        __asm _emit 0x5F
        // 0x5877839E: pop esi
        __asm _emit 0x5E
        // 0x5877839F: pop ebp
        __asm _emit 0x5D
    }
}
