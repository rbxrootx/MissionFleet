// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873CCB0 .. +0x21E bytes.
// Source symbol alias: FUN_5873ccb0.
extern "C" __declspec(naked) void FUN_5873ccb0() {
    __asm {
        // 0x5873CCB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5873CCB2: push 0x5897dd7b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0xDD
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5873CCB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CCBD: push eax
        __asm _emit 0x50
        // 0x5873CCBE: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x5873CCC1: push ebx
        __asm _emit 0x53
        // 0x5873CCC2: push ebp
        __asm _emit 0x55
        // 0x5873CCC3: push esi
        __asm _emit 0x56
        // 0x5873CCC4: push edi
        __asm _emit 0x57
        // 0x5873CCC5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873CCCA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873CCCC: push eax
        __asm _emit 0x50
        // 0x5873CCCD: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873CCD1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CCD7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873CCD9: cmp dword ptr [esi + 0x46c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CCE0: je 0x5873ceba
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CCE6: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CCEB: add word ptr [esi + 0x2d6], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CCF2: movzx eax, word ptr [esi + 0x2d6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CCF9: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5873CCFC: push ecx
        __asm _emit 0x51
        // 0x5873CCFD: mov ecx, dword ptr [esi + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD03: mov dword ptr [esi + 0x46c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD0D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xA6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873CD12: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5873CD15: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD1B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873CD1D: je 0x5873cd41
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5873CD1F: movzx ax, byte ptr [eax + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD27: sub ax, word ptr [esi + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD2E: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5873CD31: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x5873CD33: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x5873CD35: and eax, 0xffffffb0
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xB0
        // 0x5873CD38: add eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x5873CD3B: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873CD3F: jmp 0x5873cd49
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5873CD41: mov dword ptr [esp + 0x14], 0x64
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD49: movzx ecx, word ptr [esi + 0x15c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD50: push 0x6e
        __asm _emit 0x6A
        __asm _emit 0x6E
        // 0x5873CD52: push ecx
        __asm _emit 0x51
        // 0x5873CD53: push 0x32c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD58: call 0x5876bf40
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xF1
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873CD5D: mov ecx, dword ptr [esi + 0x4ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD63: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873CD67: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873CD6C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873CD6E: mov ecx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD74: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873CD77: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5873CD79: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5873CD7C: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5873CD7E: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873CD83: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873CD85: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CD8B: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873CD8E: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5873CD90: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5873CD93: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x5873CD95: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873CD9A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873CD9C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873CD9F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873CDA1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873CDA4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873CDA6: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x5873CDA8: push 0x438
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CDAD: sub ebp, eax
        __asm _emit 0x2B
        __asm _emit 0xE8
        // 0x5873CDAF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xFE
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873CDB4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873CDB7: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873CDBB: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CDC3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873CDC5: je 0x5873ce19
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x5873CDC7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873CDCD: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873CDD3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5873CDD5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873CDD7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873CDD9: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873CDDD: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5873CDE0: movzx edx, word ptr [edx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CDE7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873CDE9: push ebx
        __asm _emit 0x53
        // 0x5873CDEA: push edi
        __asm _emit 0x57
        // 0x5873CDEB: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873CDEF: mov edx, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873CDF5: add edx, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873CDFB: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5873CDFF: push ecx
        __asm _emit 0x51
        // 0x5873CE00: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873CE04: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873CE06: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873CE08: push ecx
        __asm _emit 0x51
        // 0x5873CE09: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873CE0B: push ebp
        __asm _emit 0x55
        // 0x5873CE0C: push edi
        __asm _emit 0x57
        // 0x5873CE0D: push edx
        __asm _emit 0x52
        // 0x5873CE0E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873CE10: call 0x587a3b40
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x6D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5873CE15: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873CE17: jmp 0x5873ce1b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873CE19: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5873CE1B: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873CE23: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5873CE25: je 0x5873ceba
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CE2B: push ebp
        __asm _emit 0x55
        // 0x5873CE2C: push edi
        __asm _emit 0x57
        // 0x5873CE2D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5873CE2F: call 0x587a2e30
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x5F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5873CE34: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5873CE37: mov dword ptr [ebx + 0x3f0], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CE3D: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CE43: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873CE48: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873CE4A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873CE4E: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873CE51: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873CE53: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873CE56: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873CE58: push eax
        __asm _emit 0x50
        // 0x5873CE59: push ecx
        __asm _emit 0x51
        // 0x5873CE5A: add esi, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CE60: push esi
        __asm _emit 0x56
        // 0x5873CE61: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873CE63: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5873CE65: call 0x587a2f30
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5873CE6A: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873CE6E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873CE70: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873CE73: mov dword ptr [ebx + 0x16c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CE79: mov dword ptr [ebx + 0x40c], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CE7F: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873CE84: mov ecx, dword ptr [eax + 0x21c50]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873CE8A: push ebx
        __asm _emit 0x53
        // 0x5873CE8B: call 0x587a55a0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5873CE90: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873CE95: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CE9C: jne 0x5873ceba
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5873CE9E: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5873CEA6: jne 0x5873ceba
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5873CEA8: mov ecx, dword ptr [eax + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873CEAE: push ebx
        __asm _emit 0x53
        // 0x5873CEAF: add ecx, 0x84
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CEB5: call 0x5873bea0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873CEBA: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873CEBE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CEC5: pop ecx
        __asm _emit 0x59
        // 0x5873CEC6: pop edi
        __asm _emit 0x5F
        // 0x5873CEC7: pop esi
        __asm _emit 0x5E
        // 0x5873CEC8: pop ebp
        __asm _emit 0x5D
        // 0x5873CEC9: pop ebx
        __asm _emit 0x5B
        // 0x5873CECA: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x5873CECD: ret
        __asm _emit 0xC3
    }
}
