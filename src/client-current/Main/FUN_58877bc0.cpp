// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1418 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877bc0.

// Ghidra body range 0x58877BC0..0x5887814A; 1418 mapped bytes.
extern "C" __declspec(naked) void FUN_58877bc0_segment_00() {
    __asm {
        // 0x58877BC0: sub esp, 0xec
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877BC6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58877BCB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58877BCD: mov dword ptr [esp + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877BD4: push ebx
        __asm _emit 0x53
        // 0x58877BD5: push ebp
        __asm _emit 0x55
        // 0x58877BD6: push esi
        __asm _emit 0x56
        // 0x58877BD7: push edi
        __asm _emit 0x57
        // 0x58877BD8: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58877BDA: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58877BDE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58877BE0: push eax
        __asm _emit 0x50
        // 0x58877BE1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58877BE3: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58877BE8: movzx eax, word ptr [esi + 0x142]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877BEF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58877BF2: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58877BF5: ja 0x58877e7d
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877BFB: movzx ecx, byte ptr [eax + 0x58878160]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x81
        __asm _emit 0x87
        __asm _emit 0x58
        // 0x58877C02: jmp dword ptr [ecx*4 + 0x5887814c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x81
        __asm _emit 0x87
        __asm _emit 0x58
        // 0x58877C09: test byte ptr [esi + 0x148], 8
        __asm _emit 0xF6
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x58877C10: je 0x58877c8f
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x58877C12: push 0x38
        __asm _emit 0x6A
        __asm _emit 0x38
        // 0x58877C14: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58877C18: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58877C1A: push edx
        __asm _emit 0x52
        // 0x58877C1B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58877C20: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58877C23: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58877C25: push edx
        __asm _emit 0x52
        // 0x58877C26: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58877C28: call 0x58877ad0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877C2D: movzx ecx, byte ptr [esi + edx + 0x170]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x16
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877C35: add dword ptr [esp + eax*4 + 0x14], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x84
        __asm _emit 0x14
        // 0x58877C39: lea eax, [esp + eax*4 + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x14
        // 0x58877C3D: inc edx
        __asm _emit 0x42
        // 0x58877C3E: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x58877C41: jl 0x58877c25
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x58877C43: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58877C49: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58877C4B: lea ebx, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877C51: movzx eax, byte ptr [esi + edi + 0x15b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877C59: mov edx, dword ptr [esp + edi*4 + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xBC
        __asm _emit 0x14
        // 0x58877C5D: push eax
        __asm _emit 0x50
        // 0x58877C5E: push edx
        __asm _emit 0x52
        // 0x58877C5F: mov dword ptr [esp + edi*4 + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xBC
        __asm _emit 0x38
        // 0x58877C63: lea eax, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877C6A: push 0x5899f010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58877C6F: push eax
        __asm _emit 0x50
        // 0x58877C70: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58877C72: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58877C75: lea ecx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58877C79: push ecx
        __asm _emit 0x51
        // 0x58877C7A: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58877C7C: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x76
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877C81: inc edi
        __asm _emit 0x47
        // 0x58877C82: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58877C85: cmp edi, 7
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x07
        // 0x58877C88: jl 0x58877c51
        __asm _emit 0x7C
        __asm _emit 0xC7
        // 0x58877C8A: jmp 0x58877eda
        __asm _emit 0xE9
        __asm _emit 0x4B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877C8F: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58877C95: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58877C97: push edi
        __asm _emit 0x57
        // 0x58877C98: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58877C9A: call 0x58877ad0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877C9F: movzx ecx, byte ptr [esi + edi + 0x17a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x3E
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877CA7: movzx edx, byte ptr [esi + edi + 0x170]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x3E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877CAF: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58877CB1: add dword ptr [esp + ebx*8 + 0x18], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0xDC
        __asm _emit 0x18
        // 0x58877CB5: add dword ptr [esp + ebx*8 + 0x14], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0xDC
        __asm _emit 0x14
        // 0x58877CB9: mov ecx, dword ptr [esp + ebx*8 + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xDC
        __asm _emit 0x18
        // 0x58877CBD: mov eax, dword ptr [esp + ebx*8 + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xDC
        __asm _emit 0x14
        // 0x58877CC1: push ecx
        __asm _emit 0x51
        // 0x58877CC2: push eax
        __asm _emit 0x50
        // 0x58877CC3: lea edx, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877CCA: push 0x5899f010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58877CCF: push edx
        __asm _emit 0x52
        // 0x58877CD0: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58877CD2: mov ecx, dword ptr [esi + ebx*4 + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877CD9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58877CDC: lea eax, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58877CE0: push eax
        __asm _emit 0x50
        // 0x58877CE1: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x76
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877CE6: inc edi
        __asm _emit 0x47
        // 0x58877CE7: cmp edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0A
        // 0x58877CEA: jl 0x58877c97
        __asm _emit 0x7C
        __asm _emit 0xAB
        // 0x58877CEC: jmp 0x58877eda
        __asm _emit 0xE9
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877CF1: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58877CF7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58877CF9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877D00: push edi
        __asm _emit 0x57
        // 0x58877D01: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58877D03: call 0x58877ad0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877D08: movzx edx, byte ptr [esi + edi + 0x17a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x3E
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877D10: movzx ecx, byte ptr [esi + edi + 0x170]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x3E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877D18: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58877D1A: add dword ptr [esp + ebx*8 + 0x14], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0xDC
        __asm _emit 0x14
        // 0x58877D1E: mov eax, dword ptr [esp + ebx*8 + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xDC
        __asm _emit 0x14
        // 0x58877D22: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58877D24: add dword ptr [esp + ebx*8 + 0x18], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0xDC
        __asm _emit 0x18
        // 0x58877D28: mov ecx, dword ptr [esp + ebx*8 + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xDC
        __asm _emit 0x18
        // 0x58877D2C: push ecx
        __asm _emit 0x51
        // 0x58877D2D: push eax
        __asm _emit 0x50
        // 0x58877D2E: lea eax, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877D35: push 0x5899f010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58877D3A: push eax
        __asm _emit 0x50
        // 0x58877D3B: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58877D3D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58877D40: lea ecx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58877D44: push ecx
        __asm _emit 0x51
        // 0x58877D45: mov ecx, dword ptr [esi + ebx*4 + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877D4C: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x76
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877D51: inc edi
        __asm _emit 0x47
        // 0x58877D52: cmp edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0A
        // 0x58877D55: jl 0x58877d00
        __asm _emit 0x7C
        __asm _emit 0xA9
        // 0x58877D57: jmp 0x58877eda
        __asm _emit 0xE9
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877D5C: mov ebp, 0xfffffe7c
        __asm _emit 0xBD
        __asm _emit 0x7C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877D61: lea edi, [esi + 0x184]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877D67: sub ebp, esi
        __asm _emit 0x2B
        __asm _emit 0xEE
        // 0x58877D69: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877D70: lea edx, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x2F
        // 0x58877D73: push edx
        __asm _emit 0x52
        // 0x58877D74: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58877D76: call 0x58877ad0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877D7B: movzx edx, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x17
        // 0x58877D7E: movzx ecx, byte ptr [edi - 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0xEC
        // 0x58877D82: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58877D84: lea eax, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x5B
        // 0x58877D87: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58877D89: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58877D8B: add dword ptr [esp + eax + 0x18], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x18
        // 0x58877D8F: mov edx, dword ptr [esp + eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x18
        // 0x58877D93: add dword ptr [esp + eax + 0x14], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x14
        // 0x58877D97: mov ecx, dword ptr [esp + eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x14
        // 0x58877D9B: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58877D9F: movzx edx, byte ptr [edi - 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0xF6
        // 0x58877DA3: add dword ptr [esp + eax + 0x1c], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x1C
        // 0x58877DA7: lea eax, [esp + eax + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x1C
        // 0x58877DAB: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58877DAD: push eax
        __asm _emit 0x50
        // 0x58877DAE: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58877DB2: push eax
        __asm _emit 0x50
        // 0x58877DB3: push ecx
        __asm _emit 0x51
        // 0x58877DB4: lea ecx, [esp + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877DBB: push 0x5899f004
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58877DC0: push ecx
        __asm _emit 0x51
        // 0x58877DC1: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58877DC7: mov ecx, dword ptr [esi + ebx*4 + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877DCE: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58877DD1: lea edx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58877DD5: push edx
        __asm _emit 0x52
        // 0x58877DD6: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877DDB: inc edi
        __asm _emit 0x47
        // 0x58877DDC: lea eax, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2F
        // 0x58877DDF: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58877DE2: jl 0x58877d70
        __asm _emit 0x7C
        __asm _emit 0x8C
        // 0x58877DE4: jmp 0x58877eda
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877DE9: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58877DEF: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58877DF1: push ebx
        __asm _emit 0x53
        // 0x58877DF2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58877DF4: call 0x58877ad0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877DF9: movzx ecx, byte ptr [esi + ebx + 0x170]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x1E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877E01: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58877E03: add dword ptr [esp + edi*8 + 0x14], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0xFC
        __asm _emit 0x14
        // 0x58877E07: cmp word ptr [esi + 0x142], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58877E0F: jne 0x58877e44
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58877E11: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58877E13: jne 0x58877e22
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58877E15: movzx edx, byte ptr [esi + 0x162]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877E1C: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58877E20: jmp 0x58877e44
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x58877E22: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x58877E25: jne 0x58877e34
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58877E27: movzx eax, byte ptr [esi + 0x163]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877E2E: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58877E32: jmp 0x58877e44
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58877E34: cmp edi, 6
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x06
        // 0x58877E37: jne 0x58877e44
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58877E39: movzx ecx, byte ptr [esi + 0x164]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877E40: mov dword ptr [esp + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58877E44: mov edx, dword ptr [esp + edi*8 + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xFC
        __asm _emit 0x18
        // 0x58877E48: mov eax, dword ptr [esp + edi*8 + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xFC
        __asm _emit 0x14
        // 0x58877E4C: push edx
        __asm _emit 0x52
        // 0x58877E4D: push eax
        __asm _emit 0x50
        // 0x58877E4E: lea ecx, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877E55: push 0x5899f010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58877E5A: push ecx
        __asm _emit 0x51
        // 0x58877E5B: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58877E5D: mov ecx, dword ptr [esi + edi*4 + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877E64: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58877E67: lea edx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58877E6B: push edx
        __asm _emit 0x52
        // 0x58877E6C: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x74
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877E71: inc ebx
        __asm _emit 0x43
        // 0x58877E72: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x58877E75: jl 0x58877df1
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877E7B: jmp 0x58877eda
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x58877E7D: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58877E83: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58877E85: push edi
        __asm _emit 0x57
        // 0x58877E86: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58877E88: call 0x58877ad0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877E8D: movzx ecx, byte ptr [esi + edi + 0x17a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x3E
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877E95: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58877E97: movzx eax, byte ptr [esi + edi + 0x170]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877E9F: add dword ptr [esp + ebx*8 + 0x18], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0xDC
        __asm _emit 0x18
        // 0x58877EA3: mov ecx, dword ptr [esp + ebx*8 + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xDC
        __asm _emit 0x18
        // 0x58877EA7: add dword ptr [esp + ebx*8 + 0x14], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0xDC
        __asm _emit 0x14
        // 0x58877EAB: mov eax, dword ptr [esp + ebx*8 + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xDC
        __asm _emit 0x14
        // 0x58877EAF: push ecx
        __asm _emit 0x51
        // 0x58877EB0: push eax
        __asm _emit 0x50
        // 0x58877EB1: lea edx, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877EB8: push 0x5899f010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58877EBD: push edx
        __asm _emit 0x52
        // 0x58877EBE: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58877EC0: mov ecx, dword ptr [esi + ebx*4 + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877EC7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58877ECA: lea eax, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58877ECE: push eax
        __asm _emit 0x50
        // 0x58877ECF: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x74
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877ED4: inc edi
        __asm _emit 0x47
        // 0x58877ED5: cmp edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0A
        // 0x58877ED8: jl 0x58877e85
        __asm _emit 0x7C
        __asm _emit 0xAB
        // 0x58877EDA: cmp word ptr [esi + 0x142], 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0E
        // 0x58877EE2: ja 0x58877f43
        __asm _emit 0x77
        __asm _emit 0x5F
        // 0x58877EE4: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58877EE9: cmp dword ptr [eax + 0x164], 0x97
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877EF3: jle 0x58877f0c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58877EF5: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877EFC: je 0x58877f0c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58877EFE: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F04: mov eax, dword ptr [ecx + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F0A: jmp 0x58877f0e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58877F0C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58877F0E: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F14: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58877F17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58877F19: je 0x58877f43
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58877F1B: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58877F1E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58877F21: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58877F24: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58877F27: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58877F2A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58877F2C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58877F2F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58877F31: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58877F34: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58877F37: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58877F3A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58877F3D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58877F40: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58877F43: movzx eax, word ptr [esi + 0x142]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F4A: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x58877F4E: jne 0x58877f78
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x58877F50: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58877F55: cmp dword ptr [eax + 0x164], 0xba
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F5F: jle 0x58877fa0
        __asm _emit 0x7E
        __asm _emit 0x3F
        // 0x58877F61: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F68: je 0x58877fa0
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58877F6A: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F70: mov eax, dword ptr [ecx + 0x2e8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F76: jmp 0x58877fa2
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x58877F78: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58877F7C: jne 0x58877fd8
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x58877F7E: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58877F83: cmp dword ptr [eax + 0x164], 0xa
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x58877F8A: jle 0x58877fa0
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58877F8C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F93: je 0x58877fa0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58877F95: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877F9B: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58877F9E: jmp 0x58877fa2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58877FA0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58877FA2: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877FA8: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58877FAB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58877FAD: je 0x58877fd8
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58877FAF: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58877FB2: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58877FB5: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58877FB8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58877FBB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58877FBE: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58877FC1: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58877FC4: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58877FC6: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58877FC9: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58877FCC: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58877FCF: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58877FD2: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58877FD5: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58877FD8: lea edi, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877FDE: mov ebx, 7
        __asm _emit 0xBB
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877FE3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58877FE5: call 0x5875f310
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x73
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877FEA: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58877FED: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58877FF0: jne 0x58877fe3
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58877FF2: movzx ecx, byte ptr [esi + 0x152]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877FF9: push ecx
        __asm _emit 0x51
        // 0x58877FFA: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878000: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xF3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878005: movzx edx, byte ptr [esi + 0x153]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887800C: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878012: push edx
        __asm _emit 0x52
        // 0x58878013: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xF3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878018: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887801E: lea edi, [esi + 0xec]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878024: push edi
        __asm _emit 0x57
        // 0x58878025: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x73
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5887802A: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878030: mov ebp, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x58878033: mov ebx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x58878036: lea ecx, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x5887803A: push ecx
        __asm _emit 0x51
        // 0x5887803B: push edi
        __asm _emit 0x57
        // 0x5887803C: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5887803F: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878045: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58878047: push eax
        __asm _emit 0x50
        // 0x58878048: push edi
        __asm _emit 0x57
        // 0x58878049: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5887804B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5887804D: mov eax, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58878051: cmp eax, 0x47
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x47
        // 0x58878054: jle 0x58878083
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x58878056: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58878059: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5887805C: add ecx, 0xbe
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878062: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58878064: push ecx
        __asm _emit 0x51
        // 0x58878065: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887806B: add edx, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7C
        // 0x5887806E: push edx
        __asm _emit 0x52
        // 0x5887806F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xB2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878074: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887807A: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5887807D: add ecx, dword ptr [esp + 0x70]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58878081: jmp 0x588780ab
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x58878083: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58878086: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58878089: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887808F: add edx, 0xbe
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878095: push edx
        __asm _emit 0x52
        // 0x58878096: add eax, 0x33
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x33
        // 0x58878099: push eax
        __asm _emit 0x50
        // 0x5887809A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xB1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887809F: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588780A5: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588780A8: add ecx, 0x49
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x49
        // 0x588780AB: mov dword ptr [eax + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588780AE: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588780B4: lea edi, [esi + 0x122]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588780BA: push edi
        __asm _emit 0x57
        // 0x588780BB: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x72
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588780C0: mov edx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588780C6: mov ebp, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588780C9: mov ebx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x588780CC: lea eax, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x588780D0: push eax
        __asm _emit 0x50
        // 0x588780D1: push edi
        __asm _emit 0x57
        // 0x588780D2: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588780D5: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588780DB: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x588780DD: push eax
        __asm _emit 0x50
        // 0x588780DE: push edi
        __asm _emit 0x57
        // 0x588780DF: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588780E1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588780E3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588780E6: mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x588780EA: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588780ED: add ecx, 0xd2
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588780F3: cmp eax, 0x47
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x47
        // 0x588780F6: push ecx
        __asm _emit 0x51
        // 0x588780F7: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588780FD: jle 0x58878119
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x588780FF: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58878101: add edx, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7C
        // 0x58878104: push edx
        __asm _emit 0x52
        // 0x58878105: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xB1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887810A: mov esi, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878110: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58878113: add eax, dword ptr [esp + 0x68]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58878117: jmp 0x5887812e
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58878119: add edx, 0x33
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x33
        // 0x5887811C: push edx
        __asm _emit 0x52
        // 0x5887811D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xB1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878122: mov esi, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878128: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5887812B: add eax, 0x49
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x49
        // 0x5887812E: mov ecx, dword ptr [esp + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878135: pop edi
        __asm _emit 0x5F
        // 0x58878136: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58878139: pop esi
        __asm _emit 0x5E
        // 0x5887813A: pop ebp
        __asm _emit 0x5D
        // 0x5887813B: pop ebx
        __asm _emit 0x5B
        // 0x5887813C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5887813E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x4A
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58878143: add esp, 0xec
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878149: ret
        __asm _emit 0xC3
    }
}

// Preserve the two mapped bytes between the function body and its switch tables.
extern "C" __declspec(naked) void FUN_58877bc0_pre_switch_table_alignment() {
    __asm {
        // 0x5887814A: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
    }
}
