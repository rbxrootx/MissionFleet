// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 345 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_5890dbf0.

// Ghidra body range 0x5890DBF0..0x5890DCF8; 264 mapped bytes.
extern "C" __declspec(naked) void FUN_5890dbf0_segment_00() {
    __asm {
        // 0x5890DBF0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5890DBF3: push esi
        __asm _emit 0x56
        // 0x5890DBF4: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890DBF8: cmp dword ptr [esi + 0x54], ecx
        __asm _emit 0x39
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5890DBFB: je 0x5890dc06
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5890DBFD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890DBFF: pop esi
        __asm _emit 0x5E
        // 0x5890DC00: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890DC03: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5890DC06: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5890DC09: cdq
        __asm _emit 0x99
        // 0x5890DC0A: idiv dword ptr [ecx + 0xf4]
        __asm _emit 0xF7
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC10: push ebx
        __asm _emit 0x53
        // 0x5890DC11: mov ebx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x5890DC14: push ebp
        __asm _emit 0x55
        // 0x5890DC15: push edi
        __asm _emit 0x57
        // 0x5890DC16: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5890DC18: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5890DC1A: cdq
        __asm _emit 0x99
        // 0x5890DC1B: idiv dword ptr [ecx + 0xf8]
        __asm _emit 0xF7
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC21: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5890DC23: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5890DC25: jl 0x5890dd3b
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC2B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5890DC2D: jl 0x5890dd3b
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC33: mov edx, dword ptr [ecx + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC39: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5890DC3B: jge 0x5890dd3b
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC41: cmp ebp, dword ptr [ecx + 0x100]
        __asm _emit 0x3B
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC47: jge 0x5890dd3b
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC4D: mov eax, dword ptr [ecx + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC53: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890DC55: jle 0x5890dc83
        __asm _emit 0x7E
        __asm _emit 0x2C
        // 0x5890DC57: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x5890DC5A: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x5890DC5C: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5890DC5E: jle 0x5890dc83
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5890DC60: mov eax, dword ptr [ecx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC66: cmp dword ptr [eax + edx*4], esi
        __asm _emit 0x39
        __asm _emit 0x34
        __asm _emit 0x90
        // 0x5890DC69: lea edx, [eax + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x90
        // 0x5890DC6C: jne 0x5890dc83
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5890DC6E: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5890DC71: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x5890DC73: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5890DC76: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890DC78: je 0x5890dc9d
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5890DC7A: mov dword ptr [eax + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DC81: jmp 0x5890dc9d
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x5890DC83: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5890DC86: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890DC88: je 0x5890dc9d
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5890DC8A: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x5890DC8D: mov dword ptr [eax + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x5C
        // 0x5890DC90: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5890DC93: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890DC95: je 0x5890dc9d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5890DC97: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x5890DC9A: mov dword ptr [eax + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x58
        // 0x5890DC9D: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5890DCA0: lea edx, [eax + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x5890DCA3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890DCA5: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5890DCA7: setl al
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC0
        // 0x5890DCAA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5890DCAC: dec eax
        __asm _emit 0x48
        // 0x5890DCAD: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x5890DCAF: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5890DCB2: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x5890DCB4: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5890DCB6: setl bl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC3
        // 0x5890DCB9: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890DCBD: dec ebx
        __asm _emit 0x4B
        // 0x5890DCBE: and ebx, edx
        __asm _emit 0x23
        __asm _emit 0xDA
        // 0x5890DCC0: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5890DCC3: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x5890DCC5: mov edi, dword ptr [ecx + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DCCB: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x5890DCCD: jge 0x5890dcd1
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x5890DCCF: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5890DCD1: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5890DCD4: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x5890DCD6: mov edx, dword ptr [ecx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DCDC: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x5890DCDE: jl 0x5890dce2
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x5890DCE0: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x5890DCE2: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5890DCE4: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890DCE8: jge 0x5890dd33
        __asm _emit 0x7D
        __asm _emit 0x49
        // 0x5890DCEA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DCF0: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5890DCF2: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5890DCF4: jge 0x5890dd2e
        __asm _emit 0x7D
        __asm _emit 0x38
        // 0x5890DCF6: jmp 0x5890dd00
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5890DD00..0x5890DD51; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_5890dbf0_segment_01() {
    __asm {
        // 0x5890DD00: mov eax, dword ptr [ecx + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DD06: mov ebp, dword ptr [ecx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DD0C: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x5890DD0F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5890DD11: cmp dword ptr [ebp + eax*4], esi
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x85
        __asm _emit 0x00
        // 0x5890DD15: lea eax, [ebp + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x85
        __asm _emit 0x00
        // 0x5890DD19: jne 0x5890dd21
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5890DD1B: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DD21: inc edx
        __asm _emit 0x42
        // 0x5890DD22: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x5890DD24: jl 0x5890dd00
        __asm _emit 0x7C
        __asm _emit 0xDA
        // 0x5890DD26: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890DD2A: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890DD2E: inc ebx
        __asm _emit 0x43
        // 0x5890DD2F: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5890DD31: jl 0x5890dcf0
        __asm _emit 0x7C
        __asm _emit 0xBD
        // 0x5890DD33: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890DD35: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5890DD38: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5890DD3B: pop edi
        __asm _emit 0x5F
        // 0x5890DD3C: pop ebp
        __asm _emit 0x5D
        // 0x5890DD3D: pop ebx
        __asm _emit 0x5B
        // 0x5890DD3E: mov dword ptr [esi + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DD45: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DD4A: pop esi
        __asm _emit 0x5E
        // 0x5890DD4B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890DD4E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
