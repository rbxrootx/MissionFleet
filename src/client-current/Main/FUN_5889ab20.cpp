// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2218 bytes in 3 exact ranges.
// Source symbol alias: FUN_5889ab20.

// Ghidra body range 0x5889AB20..0x5889B393; 2163 mapped bytes.
extern "C" __declspec(naked) void FUN_5889ab20_segment_00() {
    __asm {
        // 0x5889AB20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5889AB22: push 0x5898755f
        __asm _emit 0x68
        __asm _emit 0x5F
        __asm _emit 0x75
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889AB27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AB2D: push eax
        __asm _emit 0x50
        // 0x5889AB2E: sub esp, 0x54
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x54
        // 0x5889AB31: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889AB36: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5889AB38: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5889AB3C: push ebx
        __asm _emit 0x53
        // 0x5889AB3D: push ebp
        __asm _emit 0x55
        // 0x5889AB3E: push esi
        __asm _emit 0x56
        // 0x5889AB3F: push edi
        __asm _emit 0x57
        // 0x5889AB40: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889AB45: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5889AB47: push eax
        __asm _emit 0x50
        // 0x5889AB48: lea eax, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5889AB4C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AB52: mov edi, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AB59: mov edx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AB60: mov ebp, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AB67: mov ebx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5889AB6B: mov eax, dword ptr [esp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x5889AB6F: push edi
        __asm _emit 0x57
        // 0x5889AB70: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889AB72: mov ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AB79: push ecx
        __asm _emit 0x51
        // 0x5889AB7A: push edx
        __asm _emit 0x52
        // 0x5889AB7B: push ebp
        __asm _emit 0x55
        // 0x5889AB7C: push ebx
        __asm _emit 0x53
        // 0x5889AB7D: push eax
        __asm _emit 0x50
        // 0x5889AB7E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889AB80: mov dword ptr [esp + 0x58], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5889AB84: call 0x587b62b0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xB7
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5889AB89: lea ecx, [esi + 0x138]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AB8F: mov dword ptr [esp + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AB97: mov dword ptr [esi], 0x589a0174
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889AB9D: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889ABA2: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ABA7: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889ABAC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889ABB1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889ABB4: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889ABB8: mov byte ptr [esp + 0x70], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x02
        // 0x5889ABBD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889ABBF: je 0x5889abd3
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5889ABC1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889ABC3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889ABC5: push 0x589a0190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889ABCA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889ABCC: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5889ABD1: jmp 0x5889abd5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889ABD3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889ABD5: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889ABD7: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889ABDC: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ABE2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889ABE7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889ABEA: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889ABEE: mov byte ptr [esp + 0x70], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x03
        // 0x5889ABF3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889ABF5: je 0x5889ac30
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5889ABF7: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ABFD: cmp dword ptr [ecx + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AC04: jle 0x5889ac20
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x5889AC06: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AC0C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889AC0E: je 0x5889ac20
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5889AC10: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x5889AC12: push edi
        __asm _emit 0x57
        // 0x5889AC13: push ebp
        __asm _emit 0x55
        // 0x5889AC14: push ebx
        __asm _emit 0x53
        // 0x5889AC15: push ecx
        __asm _emit 0x51
        // 0x5889AC16: push esi
        __asm _emit 0x56
        // 0x5889AC17: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AC19: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x70
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889AC1E: jmp 0x5889ac32
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5889AC20: push edi
        __asm _emit 0x57
        // 0x5889AC21: push ebp
        __asm _emit 0x55
        // 0x5889AC22: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889AC24: push ebx
        __asm _emit 0x53
        // 0x5889AC25: push ecx
        __asm _emit 0x51
        // 0x5889AC26: push esi
        __asm _emit 0x56
        // 0x5889AC27: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AC29: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x70
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889AC2E: jmp 0x5889ac32
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889AC30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889AC32: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889AC37: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AC39: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889AC3E: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AC44: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AC49: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AC4F: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AC54: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889AC58: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AC5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889AC60: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AC65: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889AC67: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x1F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889AC6C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889AC6F: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889AC73: mov byte ptr [esp + 0x70], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x5889AC78: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889AC7A: je 0x5889acb0
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5889AC7C: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AC82: cmp dword ptr [ecx + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5889AC89: jle 0x5889ac9a
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5889AC8B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AC91: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889AC93: je 0x5889ac9a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5889AC95: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x5889AC98: jmp 0x5889ac9c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889AC9A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889AC9C: push edi
        __asm _emit 0x57
        // 0x5889AC9D: lea edx, [ebp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x68
        // 0x5889ACA0: push edx
        __asm _emit 0x52
        // 0x5889ACA1: lea edx, [ebx - 1]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0xFF
        // 0x5889ACA4: push edx
        __asm _emit 0x52
        // 0x5889ACA5: push ecx
        __asm _emit 0x51
        // 0x5889ACA6: push esi
        __asm _emit 0x56
        // 0x5889ACA7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889ACA9: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x6F
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889ACAE: jmp 0x5889acb2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889ACB0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889ACB2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889ACB4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889ACB6: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889ACBB: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ACC1: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889ACC6: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ACCC: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ACD1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889ACD5: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889ACD7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x1F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889ACDC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889ACDF: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889ACE3: mov byte ptr [esp + 0x70], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x05
        // 0x5889ACE8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889ACEA: je 0x5889ad26
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5889ACEC: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ACF2: cmp dword ptr [ecx + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5889ACF9: jle 0x5889ad16
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x5889ACFB: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AD01: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889AD03: je 0x5889ad16
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5889AD05: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x5889AD08: push edi
        __asm _emit 0x57
        // 0x5889AD09: push ebp
        __asm _emit 0x55
        // 0x5889AD0A: push ebx
        __asm _emit 0x53
        // 0x5889AD0B: push ecx
        __asm _emit 0x51
        // 0x5889AD0C: push esi
        __asm _emit 0x56
        // 0x5889AD0D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AD0F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x6F
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889AD14: jmp 0x5889ad28
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5889AD16: push edi
        __asm _emit 0x57
        // 0x5889AD17: push ebp
        __asm _emit 0x55
        // 0x5889AD18: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889AD1A: push ebx
        __asm _emit 0x53
        // 0x5889AD1B: push ecx
        __asm _emit 0x51
        // 0x5889AD1C: push esi
        __asm _emit 0x56
        // 0x5889AD1D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AD1F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x6F
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889AD24: jmp 0x5889ad28
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889AD26: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889AD28: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889AD2D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AD2F: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889AD34: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AD3A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x7F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AD3F: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AD45: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AD4A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889AD4E: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AD54: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889AD56: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x7F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AD5B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889AD5D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x1E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889AD62: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889AD65: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889AD69: mov byte ptr [esp + 0x70], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x06
        // 0x5889AD6E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889AD70: je 0x5889adac
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5889AD72: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AD78: cmp dword ptr [ecx + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5889AD7F: jle 0x5889ad9c
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x5889AD81: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AD87: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889AD89: je 0x5889ad9c
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5889AD8B: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5889AD8E: push edi
        __asm _emit 0x57
        // 0x5889AD8F: push ebp
        __asm _emit 0x55
        // 0x5889AD90: push ebx
        __asm _emit 0x53
        // 0x5889AD91: push ecx
        __asm _emit 0x51
        // 0x5889AD92: push esi
        __asm _emit 0x56
        // 0x5889AD93: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AD95: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x6E
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889AD9A: jmp 0x5889adae
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5889AD9C: push edi
        __asm _emit 0x57
        // 0x5889AD9D: push ebp
        __asm _emit 0x55
        // 0x5889AD9E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889ADA0: push ebx
        __asm _emit 0x53
        // 0x5889ADA1: push ecx
        __asm _emit 0x51
        // 0x5889ADA2: push esi
        __asm _emit 0x56
        // 0x5889ADA3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889ADA5: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x6E
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889ADAA: jmp 0x5889adae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889ADAC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889ADAE: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ADB3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889ADB5: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889ADBA: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ADC0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x7F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889ADC5: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ADCB: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ADD0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889ADD4: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ADDA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889ADDC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x7E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889ADE1: mov edx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5889ADE5: add edx, 0x2bc
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ADEB: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ADF0: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889ADF4: lea ebx, [ebp + 0x7e]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x7E
        // 0x5889ADF7: lea edi, [esi + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ADFD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5889AE00: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE06: cmp dword ptr [eax + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE0C: jle 0x5889ae20
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889AE0E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5889AE10: jl 0x5889ae20
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889AE12: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE18: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889AE1A: je 0x5889ae20
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889AE1C: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5889AE1E: jmp 0x5889ae22
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889AE20: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889AE22: mov eax, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x28
        // 0x5889AE25: mov ecx, 0xfffffff6
        __asm _emit 0xB9
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889AE2A: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5889AE2C: add dword ptr [esp + 0x18], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889AE30: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE35: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x1E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889AE3A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889AE3D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889AE41: mov byte ptr [esp + 0x70], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x07
        // 0x5889AE46: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889AE48: je 0x5889ae9d
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x5889AE4A: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE50: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE56: jle 0x5889ae6a
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889AE58: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5889AE5A: jl 0x5889ae6a
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889AE5C: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE62: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889AE64: je 0x5889ae6a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889AE66: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5889AE68: jmp 0x5889ae6c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889AE6A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889AE6C: mov edx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE73: push edx
        __asm _emit 0x52
        // 0x5889AE74: mov edx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AE7B: add edx, 0x7b
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7B
        // 0x5889AE7E: push edx
        __asm _emit 0x52
        // 0x5889AE7F: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889AE83: push edx
        __asm _emit 0x52
        // 0x5889AE84: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889AE8A: push ecx
        __asm _emit 0x51
        // 0x5889AE8B: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889AE91: push esi
        __asm _emit 0x56
        // 0x5889AE92: push ecx
        __asm _emit 0x51
        // 0x5889AE93: push edx
        __asm _emit 0x52
        // 0x5889AE94: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AE96: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x2F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889AE9B: jmp 0x5889ae9f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889AE9D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889AE9F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AEA4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AEA6: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889AEAB: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x5889AEAD: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x7E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AEB2: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5889AEB4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889AEB6: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x7E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AEBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889AEBD: mov dword ptr [edi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AEC3: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AEC9: dec ebp
        __asm _emit 0x4D
        // 0x5889AECA: sub edi, 4
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x04
        // 0x5889AECD: sub ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x5889AED0: jns 0x5889ae00
        __asm _emit 0x0F
        __asm _emit 0x89
        __asm _emit 0x2A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889AED6: mov ebx, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AEDD: mov dword ptr [esi + 0x128], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AEE3: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AEE9: mov byte ptr [esp + 0x44], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889AEED: mov dword ptr [esp + 0x45], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x45
        // 0x5889AEF1: mov dword ptr [esp + 0x49], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x49
        // 0x5889AEF5: mov dword ptr [esp + 0x4d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4D
        // 0x5889AEF9: mov dword ptr [esp + 0x51], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x51
        // 0x5889AEFD: mov dword ptr [esp + 0x55], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x55
        // 0x5889AF01: mov dword ptr [esp + 0x59], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x59
        // 0x5889AF05: mov dword ptr [esp + 0x5d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5D
        // 0x5889AF09: mov word ptr [esp + 0x61], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x61
        // 0x5889AF0E: mov byte ptr [esp + 0x63], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x63
        // 0x5889AF12: lea ebp, [esi + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AF18: add ebx, 0xac
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AF1E: mov dword ptr [esp + 0x14], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AF26: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5889AF28: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x1D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889AF2D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889AF30: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889AF34: mov byte ptr [esp + 0x70], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x5889AF39: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889AF3B: je 0x5889af76
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5889AF3D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889AF3F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889AF41: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AF46: lea ecx, [ebx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x5889AF49: push ecx
        __asm _emit 0x51
        // 0x5889AF4A: mov ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AF51: lea edx, [ecx + 0x2bb]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AF57: push edx
        __asm _emit 0x52
        // 0x5889AF58: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AF5E: push ebx
        __asm _emit 0x53
        // 0x5889AF5F: add ecx, 0x6e
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x6E
        // 0x5889AF62: push ecx
        __asm _emit 0x51
        // 0x5889AF63: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889AF69: push ecx
        __asm _emit 0x51
        // 0x5889AF6A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889AF6C: push edx
        __asm _emit 0x52
        // 0x5889AF6D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889AF6F: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889AF74: jmp 0x5889af78
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889AF76: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889AF78: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5889AF7B: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5889AF7E: mov byte ptr [esp + 0x70], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x5889AF83: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889AF85: je 0x5889afb5
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5889AF87: lea edi, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5889AF8B: mov edx, 0x80
        __asm _emit 0xBA
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AF90: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5889AF92: lea ecx, [edx + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5889AF98: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889AF9A: je 0x5889afad
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5889AF9C: mov cl, byte ptr [edi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x5889AF9F: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5889AFA1: je 0x5889afad
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5889AFA3: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5889AFA5: inc eax
        __asm _emit 0x40
        // 0x5889AFA6: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5889AFA9: jne 0x5889af92
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5889AFAB: jmp 0x5889afb1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5889AFAD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5889AFAF: jne 0x5889afb2
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5889AFB1: dec eax
        __asm _emit 0x48
        // 0x5889AFB2: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AFB5: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5889AFB8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889AFBA: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x7D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AFBF: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5889AFC2: mov eax, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AFC9: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5889AFCC: add eax, 0x190
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889AFD1: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5889AFD5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889AFD7: je 0x5889afdf
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5889AFD9: push edi
        __asm _emit 0x57
        // 0x5889AFDA: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x7F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AFDF: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5889AFE2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889AFE4: je 0x5889afec
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5889AFE6: push edi
        __asm _emit 0x57
        // 0x5889AFE7: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x7E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889AFEC: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5889AFEF: add ebx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x14
        // 0x5889AFF2: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x5889AFF7: jne 0x5889af26
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889AFFD: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B002: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x1C
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889B007: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889B00A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889B00E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5889B010: mov byte ptr [esp + 0x70], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x09
        // 0x5889B015: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889B017: je 0x5889b07d
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x5889B019: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B01F: cmp dword ptr [ecx + 0x160], 0x1e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        // 0x5889B026: jle 0x5889b03e
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5889B028: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B02E: je 0x5889b03e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889B030: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B036: add edx, 0x780
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B03C: jmp 0x5889b040
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B03E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889B040: mov edi, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B047: mov ebp, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B04E: push edi
        __asm _emit 0x57
        // 0x5889B04F: lea ecx, [ebp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B055: push ecx
        __asm _emit 0x51
        // 0x5889B056: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B05D: add ecx, 0x2c6
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B063: push ecx
        __asm _emit 0x51
        // 0x5889B064: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B06A: push edx
        __asm _emit 0x52
        // 0x5889B06B: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B071: push esi
        __asm _emit 0x56
        // 0x5889B072: push edx
        __asm _emit 0x52
        // 0x5889B073: push ecx
        __asm _emit 0x51
        // 0x5889B074: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B076: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x2D
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889B07B: jmp 0x5889b08d
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5889B07D: mov ebp, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B084: mov edi, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B08B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B08D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B092: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B094: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889B099: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B09F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x7C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B0A4: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B0AA: push ebx
        __asm _emit 0x53
        // 0x5889B0AB: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x7C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B0B0: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B0B5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x1B
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889B0BA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889B0BD: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889B0C1: mov byte ptr [esp + 0x70], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x0A
        // 0x5889B0C6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889B0C8: je 0x5889b120
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x5889B0CA: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B0D0: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x5889B0D7: jle 0x5889b0ef
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5889B0D9: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B0DF: je 0x5889b0ef
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889B0E1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B0E7: add ecx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B0ED: jmp 0x5889b0f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B0EF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889B0F1: push edi
        __asm _emit 0x57
        // 0x5889B0F2: lea edx, [ebp + 0x1c9]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B0F8: push edx
        __asm _emit 0x52
        // 0x5889B0F9: mov edx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B100: add edx, 0x2c6
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B106: push edx
        __asm _emit 0x52
        // 0x5889B107: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B10D: push ecx
        __asm _emit 0x51
        // 0x5889B10E: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B114: push esi
        __asm _emit 0x56
        // 0x5889B115: push ecx
        __asm _emit 0x51
        // 0x5889B116: push edx
        __asm _emit 0x52
        // 0x5889B117: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B119: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889B11E: jmp 0x5889b122
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B120: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B122: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B127: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B129: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889B12E: mov dword ptr [esi + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B134: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x7B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B139: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B13F: push ebx
        __asm _emit 0x53
        // 0x5889B140: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x7B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B145: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B14A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x1A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889B14F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889B152: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889B156: mov byte ptr [esp + 0x70], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x0B
        // 0x5889B15B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889B15D: je 0x5889b1b2
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x5889B15F: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B165: cmp dword ptr [ecx + 0x160], 0x20
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x5889B16C: jle 0x5889b184
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5889B16E: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B174: je 0x5889b184
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889B176: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B17C: add ecx, 0x800
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B182: jmp 0x5889b186
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B184: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889B186: mov edx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5889B18A: push edi
        __asm _emit 0x57
        // 0x5889B18B: add ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B191: push ebp
        __asm _emit 0x55
        // 0x5889B192: add edx, 0x2c7
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B198: push edx
        __asm _emit 0x52
        // 0x5889B199: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B19F: push ecx
        __asm _emit 0x51
        // 0x5889B1A0: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B1A6: push esi
        __asm _emit 0x56
        // 0x5889B1A7: push ecx
        __asm _emit 0x51
        // 0x5889B1A8: push edx
        __asm _emit 0x52
        // 0x5889B1A9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B1AB: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x2B
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889B1B0: jmp 0x5889b1b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B1B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B1B4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B1B9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B1BB: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889B1C0: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B1C6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x7B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B1CB: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B1D1: push ebx
        __asm _emit 0x53
        // 0x5889B1D2: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x7B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B1D7: fld dword ptr [0x589a0130]
        __asm _emit 0xD9
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889B1DD: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B1E3: fstp dword ptr [esi + 0xec]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B1E9: mov byte ptr [esi + 0xf0], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B1F0: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889B1F3: mov dword ptr [esi + 0xf4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B1F9: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5889B1FC: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889B1FF: mov ebp, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x20
        // 0x5889B202: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889B206: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889B209: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889B20D: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889B210: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5889B212: mov dword ptr [esi + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B218: mov dword ptr [esi + 0xf8], 0x104
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B222: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5889B225: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889B228: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889B22C: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5889B22F: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x5889B232: add eax, 0x20e
        __asm _emit 0x05
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B237: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B23C: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889B240: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889B244: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5889B248: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B24E: mov dword ptr [esi + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B254: mov dword ptr [esi + 0x110], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B25A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x19
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889B25F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889B262: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889B266: mov byte ptr [esp + 0x70], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x5889B26B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889B26D: je 0x5889b2cc
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x5889B26F: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B275: cmp dword ptr [ecx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5889B27C: jle 0x5889b294
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5889B27E: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B284: je 0x5889b294
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889B286: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B28C: add ecx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B292: jmp 0x5889b296
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B294: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889B296: mov edx, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B29D: push edi
        __asm _emit 0x57
        // 0x5889B29E: add edx, 0x1ef
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xEF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B2A4: push edx
        __asm _emit 0x52
        // 0x5889B2A5: mov edx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B2AC: add edx, 0x28a
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x8A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B2B2: push edx
        __asm _emit 0x52
        // 0x5889B2B3: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B2B9: push ecx
        __asm _emit 0x51
        // 0x5889B2BA: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B2C0: push esi
        __asm _emit 0x56
        // 0x5889B2C1: push ecx
        __asm _emit 0x51
        // 0x5889B2C2: push edx
        __asm _emit 0x52
        // 0x5889B2C3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B2C5: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x2A
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889B2CA: jmp 0x5889b2ce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B2CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B2CE: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B2D3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B2D5: mov byte ptr [esp + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5889B2DA: mov dword ptr [esi + 0x114], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B2E0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x7A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B2E5: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B2EB: push ebx
        __asm _emit 0x53
        // 0x5889B2EC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B2F1: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B2F6: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5889B2FA: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889B2FE: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B303: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5889B306: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B30B: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5889B30E: mov dword ptr [esi + 0x150], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B314: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5889B318: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5889B31A: lea ecx, [esi + 0x138]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B320: call 0x5889a240
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B325: mov dword ptr [esp + 0x14], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B32D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5889B330: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5889B332: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x19
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889B337: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889B33A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889B33C: je 0x5889b346
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5889B33E: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889B342: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5889B344: jmp 0x5889b348
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B346: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B348: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889B34C: mov dword ptr [esp + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889B350: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889B354: mov dword ptr [esp + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889B358: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889B35C: push edx
        __asm _emit 0x52
        // 0x5889B35D: lea ecx, [esi + 0x138]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B363: mov byte ptr [esp + 0x74], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889B368: call 0x5889aa80
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B36D: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889B371: mov byte ptr [esp + 0x70], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x5889B376: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889B378: je 0x5889b3ba
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5889B37A: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889B37E: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5889B380: je 0x5889b3b1
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5889B382: lea edi, [eax + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x5889B385: cmp dword ptr [edi], 0x10
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x10
        // 0x5889B388: jb 0x5889b396
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x5889B38A: mov eax, dword ptr [edi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xEC
        // 0x5889B38D: push eax
        __asm _emit 0x50
        // 0x5889B38E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x18
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889B396..0x5889B3B7; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_5889ab20_segment_01() {
    __asm {
        // 0x5889B396: mov dword ptr [edi], 0xf
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B39C: mov dword ptr [edi - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xFC
        // 0x5889B39F: mov byte ptr [edi - 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x47
        __asm _emit 0xEC
        __asm _emit 0x00
        // 0x5889B3A3: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x5889B3A6: lea ecx, [edi - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0xE8
        // 0x5889B3A9: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889B3AB: jne 0x5889b385
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x5889B3AD: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5889B3B1: push eax
        __asm _emit 0x50
        // 0x5889B3B2: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889B3BA..0x5889B3D0; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_5889ab20_segment_02() {
    __asm {
        // 0x5889B3BA: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889B3BE: push edx
        __asm _emit 0x52
        // 0x5889B3BF: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889B3C3: mov dword ptr [esp + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889B3C7: mov dword ptr [esp + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5889B3CB: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}
