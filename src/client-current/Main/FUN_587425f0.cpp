// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 596 bytes in 1 exact ranges.
// Source symbol alias: FUN_587425f0.

// Ghidra body range 0x587425F0..0x58742844; 596 mapped bytes.
extern "C" __declspec(naked) void FUN_587425f0_segment_00() {
    __asm {
        // 0x587425F0: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x587425F3: push ebx
        __asm _emit 0x53
        // 0x587425F4: push edi
        __asm _emit 0x57
        // 0x587425F5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587425F7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587425F9: cmp dword ptr [edi + 0x24], 4
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587425FD: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58742601: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58742605: jbe 0x58742611
        __asm _emit 0x76
        __asm _emit 0x0A
        // 0x58742607: pop edi
        __asm _emit 0x5F
        // 0x58742608: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874260A: pop ebx
        __asm _emit 0x5B
        // 0x5874260B: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x5874260E: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58742611: push ebp
        __asm _emit 0x55
        // 0x58742612: push esi
        __asm _emit 0x56
        // 0x58742613: mov esi, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x58742616: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874261A: cmp esi, dword ptr [edi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x5874261D: jbe 0x58742624
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5874261F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742624: mov ebp, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x08
        // 0x58742627: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874262B: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874262F: mov dword ptr [esp + 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742633: mov edi, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x58742636: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874263A: cmp dword ptr [esi + 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5874263D: jbe 0x58742644
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5874263F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742644: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58742647: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58742649: je 0x5874264f
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5874264B: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5874264D: je 0x58742654
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5874264F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742654: cmp dword ptr [esp + 0x2c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742658: je 0x5874282f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874265E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58742660: jne 0x58742756
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742666: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874266B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874266D: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742671: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58742674: jb 0x5874267b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58742676: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xA5
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874267B: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874267F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58742681: cmp dword ptr [eax + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58742685: jne 0x587427d7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874268B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5874268D: jne 0x5874275e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742693: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xA5
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742698: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874269A: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874269E: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587426A1: jb 0x587426a8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587426A3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xA5
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587426A8: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587426AC: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587426AE: call 0x58735820
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x31
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587426B3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587426B5: je 0x587427d7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587426BB: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587426BD: jne 0x58742766
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587426C3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xA5
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587426C8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587426CA: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587426CE: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587426D1: jb 0x587426d8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587426D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xA5
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587426D8: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587426DA: call 0x58735930
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x32
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587426DF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587426E1: je 0x587427d7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587426E7: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587426EA: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587426EC: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587426F0: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587426F4: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587426F8: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587426FE: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58742704: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874270A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874270C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5874270E: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x58742711: add eax, 0x1d
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1D
        // 0x58742714: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874271A: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874271F: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742724: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x58742727: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58742729: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5874272B: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874272F: lea ecx, [edx + eax + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x64
        // 0x58742733: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58742738: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5874273A: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x5874273C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874273E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58742741: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58742743: lea edx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC0
        // 0x58742746: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58742748: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5874274A: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x5874274D: ja 0x5874278a
        __asm _emit 0x77
        __asm _emit 0x3B
        // 0x5874274F: jmp dword ptr [eax*4 + 0x58742844]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x58742756: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58742759: jmp 0x5874266d
        __asm _emit 0xE9
        __asm _emit 0x0F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874275E: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58742761: jmp 0x5874269a
        __asm _emit 0xE9
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58742766: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58742769: jmp 0x587426ca
        __asm _emit 0xE9
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874276E: add dword ptr [esp + 0x20], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58742772: add dword ptr [esp + 0x24], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58742776: jmp 0x5874278a
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58742778: sub dword ptr [esp + 0x20], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874277C: add dword ptr [esp + 0x24], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58742780: jmp 0x5874278a
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58742782: sub dword ptr [esp + 0x20], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58742786: sub dword ptr [esp + 0x24], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874278A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5874278C: jne 0x587427d2
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x5874278E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xA4
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742793: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58742795: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742799: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x5874279C: jb 0x587427a3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5874279E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xA4
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587427A3: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587427A7: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587427AB: push eax
        __asm _emit 0x50
        // 0x587427AC: push ecx
        __asm _emit 0x51
        // 0x587427AD: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587427AF: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587427B3: push edx
        __asm _emit 0x52
        // 0x587427B4: push ebx
        __asm _emit 0x53
        // 0x587427B5: call 0x58737b00
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x53
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587427BA: add dword ptr [esp + 0x18], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587427BE: jmp 0x587427db
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x587427C0: add dword ptr [esp + 0x20], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587427C4: jmp 0x58742786
        __asm _emit 0xEB
        __asm _emit 0xC0
        // 0x587427C6: add dword ptr [esp + 0x20], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587427CA: jmp 0x5874278a
        __asm _emit 0xEB
        __asm _emit 0xBE
        // 0x587427CC: sub dword ptr [esp + 0x20], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587427D0: jmp 0x5874278a
        __asm _emit 0xEB
        __asm _emit 0xB8
        // 0x587427D2: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587427D5: jmp 0x58742795
        __asm _emit 0xEB
        __asm _emit 0xBE
        // 0x587427D7: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587427DB: add edi, 1
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x01
        // 0x587427DE: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587427E2: je 0x58742803
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587427E4: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x587427E9: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587427EB: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x587427ED: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587427EF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587427F2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587427F4: lea eax, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC0
        // 0x587427F7: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587427F9: jne 0x58742803
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587427FB: add dword ptr [esp + 0x14], 0xc8
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742803: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58742805: jne 0x5874282a
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x58742807: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xA4
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874280C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874280E: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742812: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58742815: jb 0x5874281c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58742817: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xA4
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874281C: add dword ptr [esp + 0x2c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        // 0x58742821: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58742825: jmp 0x58742633
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874282A: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5874282D: jmp 0x5874280e
        __asm _emit 0xEB
        __asm _emit 0xDF
        // 0x5874282F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58742833: mov dword ptr [esi + 0x24], 4
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874283A: pop esi
        __asm _emit 0x5E
        // 0x5874283B: pop ebp
        __asm _emit 0x5D
        // 0x5874283C: pop edi
        __asm _emit 0x5F
        // 0x5874283D: pop ebx
        __asm _emit 0x5B
        // 0x5874283E: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58742841: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
