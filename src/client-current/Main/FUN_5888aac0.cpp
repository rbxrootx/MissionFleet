// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888AAC0 .. +0x4F4 bytes.
// Source symbol alias: FUN_5888aac0.
extern "C" __declspec(naked) void FUN_5888aac0() {
    __asm {
        // 0x5888AAC0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5888AAC3: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888AAC8: push ebx
        __asm _emit 0x53
        // 0x5888AAC9: mov ebx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x30
        // 0x5888AACC: push ebp
        __asm _emit 0x55
        // 0x5888AACD: push esi
        __asm _emit 0x56
        // 0x5888AACE: push edi
        __asm _emit 0x57
        // 0x5888AACF: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5888AAD1: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888AAD5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5888AAD7: je 0x5888af14
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AADD: mov ecx, dword ptr [ebx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AAE3: mov ebp, dword ptr [ecx + 0x270]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AAE9: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5888AAEB: mov eax, 0x1c
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AAF0: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AAF5: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5888AAF7: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x5888AAF9: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x5888AAFB: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5888AAFE: je 0x5888ab01
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5888AB00: inc esi
        __asm _emit 0x46
        // 0x5888AB01: inc eax
        __asm _emit 0x40
        // 0x5888AB02: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x5888AB05: jle 0x5888aaf0
        __asm _emit 0x7E
        __asm _emit 0xE9
        // 0x5888AB07: mov ecx, dword ptr [edi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB0D: mov dword ptr [edi + 0x228], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB13: mov eax, dword ptr [ebx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB19: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5888AB1D: mov esi, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x6C
        // 0x5888AB20: lea edx, [ebx + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x54
        // 0x5888AB23: push edx
        __asm _emit 0x52
        // 0x5888AB24: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5888AB27: push eax
        __asm _emit 0x50
        // 0x5888AB28: call dword ptr [0x5898c040]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AB2E: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AB34: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888AB37: push eax
        __asm _emit 0x50
        // 0x5888AB38: push 0x5899fc1c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888AB3D: push esi
        __asm _emit 0x56
        // 0x5888AB3E: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5888AB40: mov ecx, dword ptr [ebx + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x4C
        // 0x5888AB43: mov esi, dword ptr [ebx + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB49: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5888AB4F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5888AB51: imul eax, eax, 0xff
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB57: cdq
        __asm _emit 0x99
        // 0x5888AB58: xor esi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5888AB5E: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5888AB60: push ecx
        __asm _emit 0x51
        // 0x5888AB61: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AB66: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5888AB69: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5888AB6B: shl edx, 8
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x08
        // 0x5888AB6E: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5888AB70: mov eax, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB76: shl edx, 8
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x08
        // 0x5888AB79: or edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB7F: mov dword ptr [eax + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x5888AB82: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB88: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5888AB8B: push edx
        __asm _emit 0x52
        // 0x5888AB8C: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5888AB8E: mov eax, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AB94: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5888AB97: push esi
        __asm _emit 0x56
        // 0x5888AB98: push 0x5899fc14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888AB9D: push ecx
        __asm _emit 0x51
        // 0x5888AB9E: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5888ABA0: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5888ABA3: lea eax, [edi + 0x124]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ABA9: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ABAE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5888ABB0: mov ecx, dword ptr [eax - 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888ABB6: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ABBB: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x5888ABBF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5888ABC1: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x5888ABC5: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ABCB: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x5888ABCF: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5888ABD2: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5888ABD5: jne 0x5888abb0
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x5888ABD7: mov edx, dword ptr [ebx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ABDD: movzx eax, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5888ABE1: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x5888ABE4: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5888ABE7: mov ecx, 0x10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ABEC: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5888ABEE: sub ecx, dword ptr [edi + 0x228]
        __asm _emit 0x2B
        __asm _emit 0x8F
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ABF4: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888ABF8: jns 0x5888ac06
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x5888ABFA: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC02: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888AC06: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888AC08: jle 0x5888ac9f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC0E: lea esi, [edi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC14: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888AC18: jmp 0x5888ac20
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5888AC1A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC20: push 0x5899fbf4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888AC25: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AC2B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5888AC2D: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x5888AC30: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888AC33: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888AC35: je 0x5888ac67
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5888AC37: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888AC39: je 0x5888ac67
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5888AC3B: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5888AC3D: mov ebp, 0x80
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC42: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5888AC44: lea ecx, [ebp + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5888AC4A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888AC4C: je 0x5888ac5f
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5888AC4E: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5888AC50: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5888AC52: je 0x5888ac5f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5888AC54: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5888AC56: inc eax
        __asm _emit 0x40
        // 0x5888AC57: inc edx
        __asm _emit 0x42
        // 0x5888AC58: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5888AC5B: jne 0x5888ac44
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5888AC5D: jmp 0x5888ac63
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5888AC5F: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5888AC61: jne 0x5888ac64
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5888AC63: dec eax
        __asm _emit 0x48
        // 0x5888AC64: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC67: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5888AC69: mov dword ptr [edx + 0x60], 0x646464
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5888AC70: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5888AC72: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC77: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888AC7B: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC81: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5888AC83: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888AC87: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AC8D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888AC91: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5888AC94: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x5888AC99: jne 0x5888ac20
        __asm _emit 0x75
        __asm _emit 0x85
        // 0x5888AC9B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888AC9F: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x5888ACA2: jge 0x5888ae3b
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ACA8: mov edx, 0x10
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ACAD: lea eax, [ebx + 0xbc0]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ACB3: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5888ACB5: lea esi, [edi + ecx*4 + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ACBC: mov ebp, 0xb40
        __asm _emit 0xBD
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ACC1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888ACC5: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888ACC9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ACD0: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5888ACD2: mov dword ptr [edx + 0x60], 0xfafafa
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0x00
        // 0x5888ACD9: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888ACDF: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x5888ACE2: mov ecx, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x29
        // 0x5888ACE5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888ACE7: je 0x5888adab
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ACED: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x5888ACF0: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x5888ACF4: jne 0x5888adab
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ACFA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5888ACFD: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5888ACFF: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888AD03: mov ecx, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x28
        // 0x5888AD06: add ecx, 0x78
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x78
        // 0x5888AD09: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5888AD0D: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5888AD0F: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5888AD12: push ecx
        __asm _emit 0x51
        // 0x5888AD13: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AD18: push eax
        __asm _emit 0x50
        // 0x5888AD19: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AD1F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5888AD21: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD26: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888AD2A: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD30: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888AD34: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD3A: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888AD3E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888AD41: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5888AD43: je 0x5888ad65
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5888AD45: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888AD49: movzx eax, word ptr [ecx + ebp - 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x29
        __asm _emit 0x80
        // 0x5888AD4E: movzx edx, word ptr [ebx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD55: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD5A: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD60: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5888AD63: jmp 0x5888ad67
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888AD65: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888AD67: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD6D: push eax
        __asm _emit 0x50
        // 0x5888AD6E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xC5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888AD73: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5888AD77: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888AD79: je 0x5888ada1
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5888AD7B: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888AD7F: movzx eax, word ptr [eax + ebp - 0x7e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x82
        // 0x5888AD84: movzx ecx, word ptr [ecx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD8B: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD91: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD96: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5888AD99: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AD9F: jmp 0x5888ae15
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x5888ADA1: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ADA7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888ADA9: jmp 0x5888ae15
        __asm _emit 0xEB
        __asm _emit 0x6A
        // 0x5888ADAB: mov ecx, dword ptr [ebx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x2B
        // 0x5888ADAE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888ADB0: je 0x5888ae23
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x5888ADB2: movzx edx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x11
        // 0x5888ADB5: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5888ADB9: jne 0x5888ae23
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x5888ADBB: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5888ADBD: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5888ADBF: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5888ADC2: add ecx, 0x78
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x78
        // 0x5888ADC5: push ecx
        __asm _emit 0x51
        // 0x5888ADC6: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888ADCB: push eax
        __asm _emit 0x50
        // 0x5888ADCC: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888ADD2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5888ADD4: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ADD9: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888ADDD: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ADE3: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888ADE7: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ADED: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888ADF2: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888ADF6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888ADF9: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5888ADFB: je 0x5888ae0d
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5888ADFD: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888AE01: movzx eax, word ptr [edx + ebp - 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x2A
        __asm _emit 0x80
        // 0x5888AE06: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE0B: jmp 0x5888ae0f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888AE0D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888AE0F: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE15: push eax
        __asm _emit 0x50
        // 0x5888AE16: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xC5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888AE1B: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888AE1F: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888AE23: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x5888AE26: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5888AE29: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5888AE2C: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x5888AE31: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888AE35: jne 0x5888acd0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888AE3B: mov eax, dword ptr [edi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE41: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888AE43: je 0x5888afb2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE49: mov ebp, 0xc
        __asm _emit 0xBD
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE4E: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5888AE50: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5888AE52: jle 0x5888afb2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x5A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE58: add ebx, 0xb70
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x70
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE5E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5888AE60: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5888AE62: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888AE64: je 0x5888aef7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE6A: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x5888AE6D: cmp cx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0D
        // 0x5888AE71: jne 0x5888aef7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE77: cmp dword ptr [edi + 0x228], 4
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5888AE7E: mov esi, 0x1f
        __asm _emit 0xBE
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE83: jne 0x5888ae87
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5888AE85: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x5888AE87: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x5888AE8A: push eax
        __asm _emit 0x50
        // 0x5888AE8B: mov eax, dword ptr [edi + esi*4 + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AE92: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5888AE95: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AE9A: push ecx
        __asm _emit 0x51
        // 0x5888AE9B: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AEA1: movzx ecx, word ptr [ebx - 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x80
        // 0x5888AEA5: mov eax, dword ptr [edi + esi*4 + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AEAC: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AEB1: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888AEB5: mov eax, dword ptr [edi + esi*4 + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AEBC: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888AEC0: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x5888AEC3: mov ecx, dword ptr [edi + esi*4 + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AECA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888AECD: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AED3: push edx
        __asm _emit 0x52
        // 0x5888AED4: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xC4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888AED9: mov eax, dword ptr [edi + esi*4 + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AEE0: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AEE5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888AEE9: mov edx, dword ptr [edi + esi*4 + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB7
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AEF0: mov dword ptr [edx + 0x60], 0xfafafa
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0x00
        // 0x5888AEF7: mov eax, dword ptr [edi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AEFD: inc ebp
        __asm _emit 0x45
        // 0x5888AEFE: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x5888AF01: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5888AF04: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5888AF06: jl 0x5888ae60
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888AF0C: pop edi
        __asm _emit 0x5F
        // 0x5888AF0D: pop esi
        __asm _emit 0x5E
        // 0x5888AF0E: pop ebp
        __asm _emit 0x5D
        // 0x5888AF0F: pop ebx
        __asm _emit 0x5B
        // 0x5888AF10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888AF13: ret
        __asm _emit 0xC3
        // 0x5888AF14: mov ecx, dword ptr [edi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF1A: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AF1F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x6D
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888AF24: mov ecx, dword ptr [edi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF2A: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AF2F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x6D
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888AF34: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF3A: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AF3F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x6D
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888AF44: add edi, 0x9c
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF4A: mov ebx, 0x20
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF4F: nop
        __asm _emit 0x90
        // 0x5888AF50: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5888AF52: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5888AF55: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888AF57: je 0x5888af86
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5888AF59: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888AF5E: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF63: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5888AF69: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888AF6B: je 0x5888af7e
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5888AF6D: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5888AF6F: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5888AF71: je 0x5888af7e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5888AF73: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5888AF75: inc eax
        __asm _emit 0x40
        // 0x5888AF76: inc edx
        __asm _emit 0x42
        // 0x5888AF77: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5888AF7A: jne 0x5888af63
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5888AF7C: jmp 0x5888af82
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5888AF7E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5888AF80: jne 0x5888af83
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5888AF82: dec eax
        __asm _emit 0x48
        // 0x5888AF83: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF86: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5888AF88: mov dword ptr [edx + 0x60], 0x646464
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5888AF8F: mov eax, dword ptr [edi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF95: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AF9A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888AF9E: mov eax, dword ptr [edi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AFA4: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5888AFA6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888AFAA: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888AFAD: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5888AFB0: jne 0x5888af50
        __asm _emit 0x75
        __asm _emit 0x9E
        // 0x5888AFB2: pop edi
        __asm _emit 0x5F
        // 0x5888AFB3: pop esi
        __asm _emit 0x5E
    }
}
