// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 850 bytes in 1 exact ranges.
// Source symbol alias: FUN_58811ad0.

// Ghidra body range 0x58811AD0..0x58811E22; 850 mapped bytes.
extern "C" __declspec(naked) void FUN_58811ad0_segment_00() {
    __asm {
        // 0x58811AD0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58811AD3: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811AD8: mov eax, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811ADE: push ebx
        __asm _emit 0x53
        // 0x58811ADF: mov ebx, dword ptr [eax + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811AE5: push ebp
        __asm _emit 0x55
        // 0x58811AE6: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x58811AE8: imul ebp, ebp, 0xd4
        __asm _emit 0x69
        __asm _emit 0xED
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811AEE: push esi
        __asm _emit 0x56
        // 0x58811AEF: push edi
        __asm _emit 0x57
        // 0x58811AF0: movzx edi, word ptr [eax + ebp + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBC
        __asm _emit 0x28
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811AF8: dec edi
        __asm _emit 0x4F
        // 0x58811AF9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58811AFB: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58811AFF: cmp dword ptr [0x589cc33c], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0x3C
        __asm _emit 0xC3
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58811B05: jne 0x58811b14
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58811B07: cmp byte ptr [esi + 0x114], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B0E: je 0x58811c4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B14: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B1A: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x58811B1C: imul edi, edi, 0x16
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x16
        // 0x58811B1F: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58811B21: push ecx
        __asm _emit 0x51
        // 0x58811B22: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B28: mov dword ptr [0x589cc33c], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0x3C
        __asm _emit 0xC3
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58811B2E: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x17
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811B33: mov edx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B39: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B3F: lea eax, [edi + edx + 0xdf]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B46: push eax
        __asm _emit 0x50
        // 0x58811B47: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x17
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811B4C: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811B52: mov edx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B58: movzx eax, word ptr [edx + ebp + 0x1da]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x2A
        __asm _emit 0xDA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B60: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811B66: add eax, 0x212
        __asm _emit 0x05
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B6B: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B71: jle 0x58811b8b
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58811B73: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58811B75: jl 0x58811b8b
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58811B77: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B7E: je 0x58811b8b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58811B80: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B86: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58811B89: jmp 0x58811b8d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58811B8B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58811B8D: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811B93: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58811B96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58811B98: je 0x58811bc2
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58811B9A: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58811B9D: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58811BA0: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58811BA3: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58811BA6: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58811BA9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58811BAB: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58811BAE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58811BB0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58811BB3: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58811BB6: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58811BB9: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58811BBC: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58811BBF: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58811BC2: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811BC8: lea edx, [edi + ecx + 0x143]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811BCF: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811BD5: push edx
        __asm _emit 0x52
        // 0x58811BD6: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x17
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811BDB: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811BE1: lea ecx, [edi + eax + 0x16a]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x07
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811BE8: push ecx
        __asm _emit 0x51
        // 0x58811BE9: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811BEF: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x16
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811BF4: mov edx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811BFA: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C00: lea eax, [edi + edx + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C07: push eax
        __asm _emit 0x50
        // 0x58811C08: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x16
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811C0D: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C13: lea edx, [edi + ecx + 0x119]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C1A: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C20: push edx
        __asm _emit 0x52
        // 0x58811C21: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x16
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811C26: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C2C: lea ecx, [edi + eax + 0x13a]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x07
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C33: push ecx
        __asm _emit 0x51
        // 0x58811C34: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C3A: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x16
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811C3F: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58811C43: mov byte ptr [esi + 0x114], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C4A: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811C50: mov eax, dword ptr [edx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C56: mov ecx, dword ptr [eax + 0xaac]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xAC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C5C: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58811C5F: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C65: push edx
        __asm _emit 0x52
        // 0x58811C66: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x56
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811C6B: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811C70: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C76: mov edx, dword ptr [ecx + 0xaa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C7C: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x58811C7F: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C85: push eax
        __asm _emit 0x50
        // 0x58811C86: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x56
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811C8B: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811C91: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58811C94: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811C99: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811C9F: mov eax, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CA5: add eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CAB: mov edx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CB1: add eax, dword ptr [ecx + 0x184]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CB7: add eax, dword ptr [ecx + 0x17c]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CBD: add eax, dword ptr [ecx + 0x174]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CC3: add eax, dword ptr [ecx + 0x16c]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CC9: add eax, dword ptr [ecx + 0x164]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CCF: add eax, dword ptr [ecx + 0x15c]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CD5: movzx ecx, word ptr [edx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x10
        // 0x58811CD9: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CDF: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58811CE1: push ecx
        __asm _emit 0x51
        // 0x58811CE2: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CE8: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x56
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811CED: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811CF3: mov eax, dword ptr [edx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811CF9: mov ecx, dword ptr [eax + edi*4 + 0xa50]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB8
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D00: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58811D03: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D09: push edx
        __asm _emit 0x52
        // 0x58811D0A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x56
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811D0F: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811D14: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D1A: mov edx, dword ptr [ecx + ebx*8 + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D21: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D27: push edx
        __asm _emit 0x52
        // 0x58811D28: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x56
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58811D2D: mov ecx, 0xffffffbc
        __asm _emit 0xB9
        __asm _emit 0xBC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58811D32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58811D34: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58811D36: mov ebx, 0xffffffdc
        __asm _emit 0xBB
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58811D3B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58811D3D: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x58811D3F: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58811D43: lea edi, [esi + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D49: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58811D4D: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58811D51: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x58811D54: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58811D58: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58811D5B: je 0x58811e00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D61: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811D67: mov ecx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D6D: lea edx, [edi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x1F
        // 0x58811D70: cmp dword ptr [ecx + edx], 2
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x11
        __asm _emit 0x02
        // 0x58811D74: jne 0x58811de2
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x58811D76: mov edx, dword ptr [ecx + ebp + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D7D: cmp edx, dword ptr [ecx + ebp + 0x15c]
        __asm _emit 0x3B
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D84: jge 0x58811dba
        __asm _emit 0x7D
        __asm _emit 0x34
        // 0x58811D86: movzx esi, word ptr [eax + ecx + 0x288]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D8E: mov edx, dword ptr [ecx + ebp + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811D95: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58811D99: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58811D9B: sub eax, dword ptr [ecx + ebp + 0x158]
        __asm _emit 0x2B
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811DA2: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58811DA4: dec eax
        __asm _emit 0x48
        // 0x58811DA5: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x58811DA8: imul esi, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF2
        // 0x58811DAB: add eax, dword ptr [ecx + ebx]
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x19
        // 0x58811DAE: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58811DB2: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58811DB5: cdq
        __asm _emit 0x99
        // 0x58811DB6: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x58811DB8: jmp 0x58811dbc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58811DBA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58811DBC: imul eax, eax, 0x1d
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x1D
        // 0x58811DBF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58811DC1: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58811DC6: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58811DC8: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58811DCB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58811DCD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58811DD0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58811DD2: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58811DD4: mov ecx, 0x1d
        __asm _emit 0xB9
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811DD9: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58811DDB: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58811DDF: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58811DE2: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58811DE8: mov edx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811DEE: lea ecx, [edi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1F
        // 0x58811DF1: cmp dword ptr [ecx + edx], 1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x11
        __asm _emit 0x01
        // 0x58811DF5: jne 0x58811e00
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58811DF7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58811DF9: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E00: add eax, 0xd4
        __asm _emit 0x05
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E05: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58811E08: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x58811E0B: cmp eax, 0x6a0
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58811E10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58811E14: jl 0x58811d51
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x37
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58811E1A: pop edi
        __asm _emit 0x5F
        // 0x58811E1B: pop esi
        __asm _emit 0x5E
        // 0x58811E1C: pop ebp
        __asm _emit 0x5D
        // 0x58811E1D: pop ebx
        __asm _emit 0x5B
        // 0x58811E1E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58811E21: ret
        __asm _emit 0xC3
    }
}
