// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 484 bytes in 1 exact ranges.
// Source symbol alias: FUN_587429b0.

// Ghidra body range 0x587429B0..0x58742B94; 484 mapped bytes.
extern "C" __declspec(naked) void FUN_587429b0_segment_00() {
    __asm {
        // 0x587429B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587429B2: push 0x5897e046
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xE0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587429B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587429BD: push eax
        __asm _emit 0x50
        // 0x587429BE: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x587429C1: push ebx
        __asm _emit 0x53
        // 0x587429C2: push ebp
        __asm _emit 0x55
        // 0x587429C3: push esi
        __asm _emit 0x56
        // 0x587429C4: push edi
        __asm _emit 0x57
        // 0x587429C5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587429CA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587429CC: push eax
        __asm _emit 0x50
        // 0x587429CD: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587429D1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587429D7: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587429D9: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587429DD: lea ebx, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x587429E0: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587429E2: mov dword ptr [ebp], 0x5898ce70
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x70
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587429E9: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xD3
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587429EE: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587429F2: mov dword ptr [ebp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587429F5: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587429FB: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587429FE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58742A00: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58742A04: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58742A08: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58742A0B: jbe 0x58742a12
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58742A0D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xA2
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742A12: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58742A14: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58742A18: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x58742A1B: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742A21: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x58742A24: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58742A28: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x58742A2B: jbe 0x58742a32
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58742A2D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xA2
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742A32: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58742A36: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58742A38: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58742A3A: je 0x58742a40
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58742A3C: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58742A3E: je 0x58742a45
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58742A40: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xA2
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742A45: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58742A49: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58742A4B: je 0x58742b3a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742A51: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58742A54: mov eax, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742A5A: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58742A5D: sub ecx, dword ptr [eax + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58742A60: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58742A63: cmp dword ptr [esp + 0x3c], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58742A67: jae 0x58742b3a
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742A6D: push 0x2a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742A72: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xA1
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742A77: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58742A79: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58742A7C: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58742A80: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58742A84: mov byte ptr [esp + 0x34], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x58742A89: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58742A8B: je 0x58742ab8
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58742A8D: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58742A8F: jne 0x58742ab3
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58742A91: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xA1
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742A96: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58742A98: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58742A9B: jb 0x58742aa2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58742A9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xA1
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742AA2: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58742AA6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58742AA8: push edx
        __asm _emit 0x52
        // 0x58742AA9: push eax
        __asm _emit 0x50
        // 0x58742AAA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58742AAC: call 0x587374b0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x49
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58742AB1: jmp 0x58742aba
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58742AB3: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58742AB6: jmp 0x58742a98
        __asm _emit 0xEB
        __asm _emit 0xE0
        // 0x58742AB8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58742ABA: mov edx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x58742ABD: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x58742AC2: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58742AC6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58742AC8: jne 0x58742ace
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58742ACA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58742ACC: jmp 0x58742ad6
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58742ACE: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x58742AD1: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58742AD3: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58742AD6: mov esi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x58742AD9: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x58742ADB: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x58742ADD: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58742AE0: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x58742AE2: jae 0x58742aee
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x58742AE4: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58742AE6: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58742AE9: mov dword ptr [ebx + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x58742AEC: jmp 0x58742b0c
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58742AEE: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58742AF0: jbe 0x58742af7
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58742AF2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xA1
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742AF7: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58742AF9: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58742AFD: push ecx
        __asm _emit 0x51
        // 0x58742AFE: push esi
        __asm _emit 0x56
        // 0x58742AFF: push eax
        __asm _emit 0x50
        // 0x58742B00: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58742B04: push edx
        __asm _emit 0x52
        // 0x58742B05: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58742B07: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58742B0C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58742B0E: jne 0x58742b35
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58742B10: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xA1
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742B15: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58742B17: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58742B1B: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58742B1E: jb 0x58742b25
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58742B20: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xA1
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742B25: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58742B29: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58742B2C: inc dword ptr [esp + 0x3c]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58742B30: jmp 0x58742a18
        __asm _emit 0xE9
        __asm _emit 0xE3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58742B35: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58742B38: jmp 0x58742b17
        __asm _emit 0xEB
        __asm _emit 0xDD
        // 0x58742B3A: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58742B3D: sub eax, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58742B40: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58742B43: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58742B45: jbe 0x58742b74
        __asm _emit 0x76
        __asm _emit 0x2D
        // 0x58742B47: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58742B4A: sub ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58742B4D: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58742B50: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58742B52: ja 0x58742b59
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58742B54: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xA1
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742B59: mov edx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x58742B5C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58742B5E: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58742B61: movzx edx, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742B68: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x58742B6B: mov dword ptr [esi + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742B72: jmp 0x58742b7c
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58742B74: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58742B76: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58742B79: mov dword ptr [esi + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58742B7C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58742B7E: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742B82: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742B89: pop ecx
        __asm _emit 0x59
        // 0x58742B8A: pop edi
        __asm _emit 0x5F
        // 0x58742B8B: pop esi
        __asm _emit 0x5E
        // 0x58742B8C: pop ebp
        __asm _emit 0x5D
        // 0x58742B8D: pop ebx
        __asm _emit 0x5B
        // 0x58742B8E: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x58742B91: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
