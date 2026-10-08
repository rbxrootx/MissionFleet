// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 527 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b60a0.

// Ghidra body range 0x587B60A0..0x587B62AF; 527 mapped bytes.
extern "C" __declspec(naked) void FUN_587b60a0_segment_00() {
    __asm {
        // 0x587B60A0: push esi
        __asm _emit 0x56
        // 0x587B60A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B60A3: cmp dword ptr [esi + 0x5c], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B60AA: jne 0x587b62ad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B60B0: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587B60B3: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587B60B6: push edi
        __asm _emit 0x57
        // 0x587B60B7: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B60B9: jne 0x587b60c7
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587B60BB: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587B60BE: cmp edx, dword ptr [esi + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x587B60C1: je 0x587b61c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B60C7: mov edi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x587B60CA: sub edi, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587B60CD: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587B60CF: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587B60D2: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587B60D5: jne 0x587b6170
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B60DB: lea ecx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x07
        // 0x587B60DE: cmp ecx, 0xe
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x587B60E1: ja 0x587b6106
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x587B60E3: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x587B60E6: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B60E9: ja 0x587b60fd
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x587B60EB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B60ED: jge 0x587b60f4
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587B60EF: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x587B60F2: jmp 0x587b6111
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x587B60F4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B60F6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B60F8: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x587B60FB: jmp 0x587b6111
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x587B60FD: cdq
        __asm _emit 0x99
        // 0x587B60FE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B6100: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B6102: sar ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xF9
        // 0x587B6104: jmp 0x587b6111
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587B6106: cdq
        __asm _emit 0x99
        // 0x587B6107: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587B610A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B610C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B610E: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587B6111: lea eax, [edi + 7]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x07
        // 0x587B6114: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x587B6117: ja 0x587b615a
        __asm _emit 0x77
        __asm _emit 0x41
        // 0x587B6119: lea edx, [edi + 3]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x03
        // 0x587B611C: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B611F: ja 0x587b6148
        __asm _emit 0x77
        __asm _emit 0x27
        // 0x587B6121: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B6123: jge 0x587b6136
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x587B6125: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587B6128: push eax
        __asm _emit 0x50
        // 0x587B6129: push ecx
        __asm _emit 0x51
        // 0x587B612A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B612C: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xCC
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B6131: jmp 0x587b61c6
        __asm _emit 0xE9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6136: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B6138: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B613A: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x587B613D: push eax
        __asm _emit 0x50
        // 0x587B613E: push ecx
        __asm _emit 0x51
        // 0x587B613F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6141: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xCC
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B6146: jmp 0x587b61c6
        __asm _emit 0xEB
        __asm _emit 0x7E
        // 0x587B6148: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587B614A: cdq
        __asm _emit 0x99
        // 0x587B614B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B614D: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B614F: push eax
        __asm _emit 0x50
        // 0x587B6150: push ecx
        __asm _emit 0x51
        // 0x587B6151: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6153: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xCC
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B6158: jmp 0x587b61c6
        __asm _emit 0xEB
        __asm _emit 0x6C
        // 0x587B615A: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587B615C: cdq
        __asm _emit 0x99
        // 0x587B615D: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587B6160: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B6162: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587B6165: push eax
        __asm _emit 0x50
        // 0x587B6166: push ecx
        __asm _emit 0x51
        // 0x587B6167: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6169: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xCC
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B616E: jmp 0x587b61c6
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x587B6170: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x587B6173: jne 0x587b61c6
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587B6175: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587B6178: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B617A: jle 0x587b6182
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x587B617C: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B617E: jl 0x587b618a
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x587B6180: jmp 0x587b6188
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587B6182: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587B6184: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B6186: jg 0x587b618a
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587B6188: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B618A: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587B618D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B618F: jle 0x587b6197
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x587B6191: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587B6193: jl 0x587b619f
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x587B6195: jmp 0x587b619d
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587B6197: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587B6199: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587B619B: jg 0x587b619f
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587B619D: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B619F: push eax
        __asm _emit 0x50
        // 0x587B61A0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B61A2: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xCC
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B61A7: add dword ptr [esi + 0x58], edi
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587B61AA: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x587B61AD: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B61B2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B61B4: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B61B7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B61B9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B61BC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B61BE: push eax
        __asm _emit 0x50
        // 0x587B61BF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B61C1: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xD1
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B61C6: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587B61C9: cmp ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587B61CC: jne 0x587b62ac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B61D2: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587B61D5: cmp edx, dword ptr [esi + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x587B61D8: jne 0x587b62ac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B61DE: cmp dword ptr [esi + 0x5c], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B61E5: jne 0x587b6228
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x587B61E7: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587B61EA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B61EC: je 0x587b6203
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587B61EE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587B61F0: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587B61F3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B61F5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B61F7: je 0x587b6203
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587B61F9: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587B61FC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587B61FE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587B6201: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B6203: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587B6206: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B6208: je 0x587b6228
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587B620A: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B6210: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587B6213: mov edx, 0x12c
        __asm _emit 0xBA
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6218: sub edx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587B621B: push edi
        __asm _emit 0x57
        // 0x587B621C: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6221: push edx
        __asm _emit 0x52
        // 0x587B6222: push eax
        __asm _emit 0x50
        // 0x587B6223: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6228: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B622C: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6231: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587B6234: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6239: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B623C: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B6240: jne 0x587b6265
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587B6242: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6247: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587B624A: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B624F: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587B6252: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B6256: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587B625B: pop edi
        __asm _emit 0x5F
        // 0x587B625C: mov dword ptr [esi + 0x5c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6263: pop esi
        __asm _emit 0x5E
        // 0x587B6264: ret
        __asm _emit 0xC3
        // 0x587B6265: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587B6268: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B626D: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B6270: jne 0x587b62a5
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x587B6272: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B6276: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B627B: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587B627E: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6283: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587B6286: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B628A: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B628F: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B6293: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6298: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587B629C: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B62A1: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587B62A5: mov dword ptr [esi + 0x5c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B62AC: pop edi
        __asm _emit 0x5F
        // 0x587B62AD: pop esi
        __asm _emit 0x5E
        // 0x587B62AE: ret
        __asm _emit 0xC3
    }
}
