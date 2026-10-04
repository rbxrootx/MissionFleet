// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873DAE0 .. +0x9F7 bytes.
// Source symbol alias: FUN_5873dae0.
extern "C" __declspec(naked) void FUN_5873dae0() {
    __asm {
        // 0x5873DAE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5873DAE2: push 0x5897de0b
        __asm _emit 0x68
        __asm _emit 0x0B
        __asm _emit 0xDE
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5873DAE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DAED: push eax
        __asm _emit 0x50
        // 0x5873DAEE: sub esp, 0x58
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x58
        // 0x5873DAF1: push ebx
        __asm _emit 0x53
        // 0x5873DAF2: push ebp
        __asm _emit 0x55
        // 0x5873DAF3: push esi
        __asm _emit 0x56
        // 0x5873DAF4: push edi
        __asm _emit 0x57
        // 0x5873DAF5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873DAFA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873DAFC: push eax
        __asm _emit 0x50
        // 0x5873DAFD: lea eax, [esp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5873DB01: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB07: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873DB09: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB0F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873DB11: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5873DB13: je 0x5873db43
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5873DB15: mov eax, dword ptr [eax + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB1B: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5873DB20: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873DB25: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5873DB28: cmp dword ptr [esi + 0x4d8], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB2E: jne 0x5873db43
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5873DB30: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873DB36: push ebp
        __asm _emit 0x55
        // 0x5873DB37: push 0x83
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB3C: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x5873DB3E: call 0x588ec100
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xE5
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5873DB43: mov eax, dword ptr [esi + 0x31c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB49: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5873DB4B: jne 0x5873dd44
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB51: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB57: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873DB5C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873DB5E: je 0x5873dd35
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB64: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873DB67: mov ebx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB6D: mov ebp, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x04
        // 0x5873DB70: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873DB74: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DB7A: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873DB7F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873DB81: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873DB84: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5873DB86: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873DB8A: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x5873DB8D: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873DB91: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5873DB94: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5873DB96: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5873DB98: sub ebp, dword ptr [esp + 0x24]
        __asm _emit 0x2B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873DB9C: imul ecx, ecx, 0xc8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DBA2: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873DBA7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873DBA9: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873DBAC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873DBAE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873DBB1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873DBB3: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873DBB5: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873DBB8: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5873DBBA: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x5873DBBD: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873DBBF: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873DBC3: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873DBC7: push ecx
        __asm _emit 0x51
        // 0x5873DBC8: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873DBCC: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873DBD1: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xF0
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873DBD6: imul eax, eax, 0xc8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DBDC: movzx ecx, word ptr [esi + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DBE3: and ecx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x3F
        // 0x5873DBE6: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x5873DBE9: cdq
        __asm _emit 0x99
        // 0x5873DBEA: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5873DBEC: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5873DBEE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5873DBF0: add eax, dword ptr [esi + 0x4e8]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DBF6: push eax
        __asm _emit 0x50
        // 0x5873DBF7: call 0x588d6d90
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x91
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873DBFC: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873DC00: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873DC04: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873DC08: push edx
        __asm _emit 0x52
        // 0x5873DC09: push eax
        __asm _emit 0x50
        // 0x5873DC0A: push edi
        __asm _emit 0x57
        // 0x5873DC0B: push ecx
        __asm _emit 0x51
        // 0x5873DC0C: call 0x5876c010
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xE3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873DC11: mov ebx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x5873DC14: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5873DC18: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873DC1C: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5873DC1F: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x5873DC21: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873DC24: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5873DC26: and edi, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5873DC2C: mov dword ptr [esp + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5873DC30: jns 0x5873dc37
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5873DC32: dec edi
        __asm _emit 0x4F
        // 0x5873DC33: or edi, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFE
        // 0x5873DC36: inc edi
        __asm _emit 0x47
        // 0x5873DC37: lea eax, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x01
        // 0x5873DC3A: jne 0x5873dc3e
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5873DC3C: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5873DC3E: cdq
        __asm _emit 0x99
        // 0x5873DC3F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873DC41: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5873DC43: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5873DC45: je 0x5873dc51
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5873DC47: lea edx, [eax + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5873DC4A: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x5873DC4C: imul ebx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD8
        // 0x5873DC4F: jmp 0x5873dc53
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873DC51: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873DC53: lea edx, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DC5A: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5873DC5C: lea eax, [ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DC63: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x5873DC65: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x5873DC67: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873DC69: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873DC6B: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873DC6D: push ecx
        __asm _emit 0x51
        // 0x5873DC6E: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873DC72: mov dword ptr [esi + 0x4e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DC78: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873DC7C: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x5873DC7E: push eax
        __asm _emit 0x50
        // 0x5873DC7F: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873DC83: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873DC85: push ecx
        __asm _emit 0x51
        // 0x5873DC86: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873DC8A: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xE3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873DC8F: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5873DC93: imul ecx, ecx, 0x56
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x56
        // 0x5873DC96: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873DC9B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873DC9D: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5873DCA1: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873DCA4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873DCA6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873DCA9: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873DCAB: add eax, dword ptr [esp + 0x64]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5873DCAF: movzx edx, word ptr [esi + 0x2de]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xDE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DCB6: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5873DCB8: mov dword ptr [esi + 0x4a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DCBE: mov dword ptr [esi + 0x4a0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DCC4: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DCCA: mov dword ptr [esi + 0x230], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DCD0: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873DCD5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873DCD7: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873DCDA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873DCDC: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873DCDF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873DCE1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5873DCE4: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x5873DCE7: jge 0x5873dd1a
        __asm _emit 0x7D
        __asm _emit 0x31
        // 0x5873DCE9: cmp dword ptr [esi + 0x348], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DCF0: jne 0x5873dd1a
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5873DCF2: mov dword ptr [esi + 0x31c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DCFC: mov dword ptr [esi + 0x4ec], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD06: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5873DD0A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD11: pop ecx
        __asm _emit 0x59
        // 0x5873DD12: pop edi
        __asm _emit 0x5F
        // 0x5873DD13: pop esi
        __asm _emit 0x5E
        // 0x5873DD14: pop ebp
        __asm _emit 0x5D
        // 0x5873DD15: pop ebx
        __asm _emit 0x5B
        // 0x5873DD16: add esp, 0x64
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x64
        // 0x5873DD19: ret
        __asm _emit 0xC3
        // 0x5873DD1A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873DD1C: call 0x5873a270
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873DD21: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5873DD25: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD2C: pop ecx
        __asm _emit 0x59
        // 0x5873DD2D: pop edi
        __asm _emit 0x5F
        // 0x5873DD2E: pop esi
        __asm _emit 0x5E
        // 0x5873DD2F: pop ebp
        __asm _emit 0x5D
        // 0x5873DD30: pop ebx
        __asm _emit 0x5B
        // 0x5873DD31: add esp, 0x64
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x64
        // 0x5873DD34: ret
        __asm _emit 0xC3
        // 0x5873DD35: mov dword ptr [esi + 0x31c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD3F: jmp 0x5873e4b3
        __asm _emit 0xE9
        __asm _emit 0x6F
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD44: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873DD47: jne 0x5873e3e4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD4D: cmp dword ptr [esi + 0x484], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD53: jne 0x5873df4d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD59: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD5F: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873DD61: je 0x5873ddc2
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x5873DD63: mov eax, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD69: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873DD6C: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5873DD6F: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x5873DD72: jne 0x5873ddc2
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x5873DD74: movzx eax, word ptr [ecx + 0x164]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD7B: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5873DD7F: je 0x5873dd8f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873DD81: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873DD84: push eax
        __asm _emit 0x50
        // 0x5873DD85: call 0x588dda60
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xFC
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873DD8A: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873DD8D: je 0x5873ddc2
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5873DD8F: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD95: movzx eax, word ptr [ecx + 0x164]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DD9C: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5873DD9F: je 0x5873ddc2
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5873DDA1: push ebp
        __asm _emit 0x55
        // 0x5873DDA2: call 0x5873a670
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873DDA7: mov ecx, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DDAD: mov dword ptr [esi + 0x31c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DDB7: mov dword ptr [esi + 0x324], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DDBD: jmp 0x5873e4b3
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DDC2: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873DDC5: mov ebp, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DDCB: mov ebx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x04
        // 0x5873DDCE: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873DDD2: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DDD8: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873DDDD: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873DDDF: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873DDE2: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5873DDE4: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873DDE8: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5873DDEB: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873DDEF: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5873DDF2: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5873DDF4: sub ebx, dword ptr [esp + 0x34]
        __asm _emit 0x2B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873DDF8: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5873DDFA: imul ecx, ecx, 0xc8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DE00: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873DE05: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873DE07: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873DE0A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873DE0C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873DE0F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873DE11: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873DE13: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5873DE15: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5873DE18: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x5873DE1B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873DE1D: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873DE21: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873DE25: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xEE
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873DE2A: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xEE
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873DE2F: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873DE31: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873DE35: push eax
        __asm _emit 0x50
        // 0x5873DE36: movzx eax, word ptr [esi + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DE3D: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x3F
        // 0x5873DE40: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5873DE43: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5873DE45: imul eax, eax, 0xc8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DE4B: cdq
        __asm _emit 0x99
        // 0x5873DE4C: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5873DE4E: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5873DE50: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873DE52: add eax, dword ptr [esi + 0x4e8]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DE58: push eax
        __asm _emit 0x50
        // 0x5873DE59: call 0x588d6d90
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x8F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873DE5E: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873DE62: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873DE66: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873DE6A: push edx
        __asm _emit 0x52
        // 0x5873DE6B: push eax
        __asm _emit 0x50
        // 0x5873DE6C: push edi
        __asm _emit 0x57
        // 0x5873DE6D: push ecx
        __asm _emit 0x51
        // 0x5873DE6E: call 0x5876c010
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xE1
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873DE73: mov ebp, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x78
        // 0x5873DE76: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873DE7A: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5873DE7D: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873DE81: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x5873DE83: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873DE86: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5873DE88: and edi, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5873DE8E: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873DE92: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873DE96: jns 0x5873de9d
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5873DE98: dec edi
        __asm _emit 0x4F
        // 0x5873DE99: or edi, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFE
        // 0x5873DE9C: inc edi
        __asm _emit 0x47
        // 0x5873DE9D: lea eax, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x01
        // 0x5873DEA0: jne 0x5873dea4
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5873DEA2: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5873DEA4: cdq
        __asm _emit 0x99
        // 0x5873DEA5: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873DEA7: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5873DEA9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5873DEAB: je 0x5873deb7
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5873DEAD: lea edx, [eax + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5873DEB0: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x5873DEB2: imul ebp, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xE8
        // 0x5873DEB5: jmp 0x5873deb9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873DEB7: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5873DEB9: lea edx, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DEC0: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5873DEC2: lea eax, [ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DEC9: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5873DECB: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x5873DECD: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873DECF: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873DED1: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873DED3: push ecx
        __asm _emit 0x51
        // 0x5873DED4: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5873DED8: mov dword ptr [esi + 0x4e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DEDE: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873DEE2: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x5873DEE4: push eax
        __asm _emit 0x50
        // 0x5873DEE5: lea ecx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5873DEE9: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873DEEB: push ecx
        __asm _emit 0x51
        // 0x5873DEEC: mov dword ptr [esp + 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873DEF0: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873DEF5: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5873DEF9: imul ecx, ecx, 0x56
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x56
        // 0x5873DEFC: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873DF01: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873DF03: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5873DF07: add ecx, dword ptr [esp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873DF0B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873DF0E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873DF10: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873DF13: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873DF15: add eax, dword ptr [esp + 0x2c]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873DF19: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5873DF1C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873DF1E: cmp ebx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF24: mov dword ptr [esi + 0x4a0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF2A: mov dword ptr [esi + 0x4a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF30: jge 0x5873df52
        __asm _emit 0x7D
        __asm _emit 0x20
        // 0x5873DF32: mov edx, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF38: mov dword ptr [esi + 0x31c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF42: mov dword ptr [esi + 0x324], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF48: jmp 0x5873e375
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF4D: mov ebx, 0x1f4
        __asm _emit 0xBB
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF52: cmp dword ptr [esi + 0x46c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF58: je 0x5873e375
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF5E: cmp dword ptr [esi + 0x4ec], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF64: jne 0x5873df6d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5873DF66: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873DF68: call 0x5873bc90
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873DF6D: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x5873DF6F: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x5873DF71: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x5873DF73: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873DF78: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x5873DF7A: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873DF7D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873DF7F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873DF82: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873DF84: cmp dword ptr [esi + 0x4ec], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF8A: jge 0x5873df98
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5873DF8C: cmp dword ptr [esi + 0x484], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF92: je 0x5873e375
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DF98: cmp dword ptr [0x589c8edc], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873DF9E: je 0x5873e094
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DFA4: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873DFAA: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x5873DFAD: sub eax, dword ptr [ebx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x5873DFB0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873DFB6: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873DFBC: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DFC2: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5873DFC4: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DFCA: cdq
        __asm _emit 0x99
        // 0x5873DFCB: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5873DFCD: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5873DFD0: mov ebp, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x5873DFD3: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5873DFD5: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x5873DFD8: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x5873DFDB: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5873DFDD: mov ebp, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x54
        // 0x5873DFE0: mov ecx, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DFE6: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5873DFE8: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DFEE: cdq
        __asm _emit 0x99
        // 0x5873DFEF: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5873DFF1: mov ecx, dword ptr [esi + 0x528]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873DFF7: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873DFFA: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5873DFFC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873DFFE: je 0x5873e00e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873E000: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E006: push edx
        __asm _emit 0x52
        // 0x5873E007: push eax
        __asm _emit 0x50
        // 0x5873E008: push edi
        __asm _emit 0x57
        // 0x5873E009: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873E00E: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E013: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E01A: jne 0x5873e092
        __asm _emit 0x75
        __asm _emit 0x76
        // 0x5873E01C: cmp dword ptr [esi + 0x474], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E023: je 0x5873e092
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x5873E025: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E02B: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5873E02E: cmp dword ptr [esi + 0x74], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873E031: jne 0x5873e092
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x5873E033: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E038: mov edi, 0x1f
        __asm _emit 0xBF
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E03D: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E043: jle 0x5873e059
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5873E045: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E04C: je 0x5873e059
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873E04E: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E054: mov ecx, dword ptr [edx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x7C
        // 0x5873E057: jmp 0x5873e05b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873E059: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873E05B: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E060: push eax
        __asm _emit 0x50
        // 0x5873E061: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x99
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873E066: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E06B: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E071: jle 0x5873e087
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5873E073: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E07A: je 0x5873e087
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873E07C: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E082: mov ecx, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x7C
        // 0x5873E085: jmp 0x5873e089
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873E087: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873E089: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873E08B: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873E08E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873E090: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873E092: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873E094: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E099: add word ptr [esi + 0x2d6], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E0A0: movzx eax, word ptr [esi + 0x2d6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E0A7: mov ecx, dword ptr [esi + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E0AD: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5873E0B0: push edx
        __asm _emit 0x52
        // 0x5873E0B1: mov dword ptr [esi + 0x46c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E0B7: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x92
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873E0BC: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x5873E0C1: mul dword ptr [esi + 0x4d4]
        __asm _emit 0xF7
        __asm _emit 0xA6
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E0C7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873E0C9: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E0CF: mov eax, dword ptr [edx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873E0D5: add eax, dword ptr [edx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873E0DB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873E0DD: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E0E3: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E0E8: shr ecx, 3
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x03
        // 0x5873E0EB: push 0x440
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E0F0: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x5873E0F3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873E0F5: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5873E0F7: mov eax, dword ptr [esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E0FD: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E102: mov dword ptr [esp + 0x68], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5873E106: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E108: cdq
        __asm _emit 0x99
        // 0x5873E109: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5873E10B: movzx eax, word ptr [esi + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E112: shr eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x5873E115: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x3F
        // 0x5873E118: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5873E11B: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5873E11D: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873E122: mov dword ptr [esp + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5873E126: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5873E128: mov edx, dword ptr [edi*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873E12F: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873E132: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873E134: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873E137: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E139: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E13C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E13E: mov edx, dword ptr [edi*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873E145: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873E148: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5873E14C: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873E151: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873E153: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873E156: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873E158: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873E15B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873E15D: mov dword ptr [esp + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5873E161: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873E166: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873E168: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873E16B: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873E16F: mov dword ptr [esp + 0x74], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x5873E173: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873E175: je 0x5873e1e7
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x5873E177: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E17C: mov ebx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873E182: mov ebp, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873E188: add ebx, dword ptr [eax + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873E18E: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5873E191: movzx edx, word ptr [edx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E198: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873E19C: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E1A2: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5873E1A4: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873E1A9: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873E1AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873E1AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873E1AF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873E1B1: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873E1B4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E1B6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E1B9: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E1BB: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873E1BE: push eax
        __asm _emit 0x50
        // 0x5873E1BF: movzx eax, word ptr [esi + 0x214]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E1C6: push edx
        __asm _emit 0x52
        // 0x5873E1C7: push ebp
        __asm _emit 0x55
        // 0x5873E1C8: push edi
        __asm _emit 0x57
        // 0x5873E1C9: push eax
        __asm _emit 0x50
        // 0x5873E1CA: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5873E1CE: lea edx, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E1D5: push edx
        __asm _emit 0x52
        // 0x5873E1D6: push eax
        __asm _emit 0x50
        // 0x5873E1D7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873E1D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873E1DB: push ebx
        __asm _emit 0x53
        // 0x5873E1DC: call 0x588f5180
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x6F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5873E1E1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5873E1E3: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873E1E5: jmp 0x5873e1e9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873E1E7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873E1E9: mov ecx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E1EF: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873E1F4: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873E1F6: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873E1F9: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873E1FB: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873E1FE: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873E200: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873E203: push ecx
        __asm _emit 0x51
        // 0x5873E204: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x5873E207: push edx
        __asm _emit 0x52
        // 0x5873E208: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873E20A: mov dword ptr [esp + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5873E20E: call 0x588f4990
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x67
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5873E213: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873E216: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5873E218: lea ecx, [esi + 0x16c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E21E: push ecx
        __asm _emit 0x51
        // 0x5873E21F: push ebp
        __asm _emit 0x55
        // 0x5873E220: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873E222: mov dword ptr [edi + 0x3fc], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E228: call 0x588f48b0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5873E22D: movzx edx, word ptr [esi + 0x216]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E234: push 0x6e
        __asm _emit 0x6A
        __asm _emit 0x6E
        // 0x5873E236: push edx
        __asm _emit 0x52
        // 0x5873E237: push 0x32c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E23C: call 0x5876bf40
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873E241: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873E243: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5873E246: mov dword ptr [edi + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E24C: mov dword ptr [edi + 0x41c], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E252: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E257: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5873E25A: cmp dword ptr [eax + 0x21c34], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873E260: jne 0x5873e27b
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5873E262: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5873E26A: jne 0x5873e27b
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5873E26C: mov ecx, dword ptr [eax + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873E272: push edi
        __asm _emit 0x57
        // 0x5873E273: add ecx, 0x74
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x74
        // 0x5873E276: call 0x5873be00
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873E27B: mov edx, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E281: mov dword ptr [esi + 0x31c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E28B: mov dword ptr [esi + 0x324], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E291: cmp dword ptr [esi + 0x484], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E297: jne 0x5873e2b3
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5873E299: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E29F: push ebp
        __asm _emit 0x55
        // 0x5873E2A0: call 0x5873a670
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873E2A5: mov dword ptr [esi + 0x4d8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E2AB: mov dword ptr [esi + 0x4dc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E2B1: jmp 0x5873e2b9
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5873E2B3: mov dword ptr [esi + 0x484], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E2B9: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E2BE: mov edi, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873E2C4: mov ebx, dword ptr [edi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E2CA: mov eax, 0x7d000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873E2CF: cdq
        __asm _emit 0x99
        // 0x5873E2D0: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x5873E2D2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873E2D4: mov eax, 0x5dc00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5873E2D9: cdq
        __asm _emit 0x99
        // 0x5873E2DA: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x5873E2DC: add ecx, dword ptr [edi + 0x50]
        __asm _emit 0x03
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5873E2DF: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873E2E2: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873E2E5: add eax, dword ptr [edi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x5873E2E8: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873E2EA: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873E2ED: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873E2EF: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5873E2F2: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873E2F4: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873E2F8: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873E2FC: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xE9
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873E301: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xE9
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873E306: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E30C: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x5873E30F: sub edx, dword ptr [ecx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5873E312: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x5873E314: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5873E316: jge 0x5873e375
        __asm _emit 0x7D
        __asm _emit 0x5D
        // 0x5873E318: mov eax, dword ptr [0x58a246e4]
        __asm _emit 0xA1
        __asm _emit 0xE4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E31D: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E322: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E328: jle 0x5873e33d
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5873E32A: cmp dword ptr [eax + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E330: je 0x5873e33d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873E332: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E338: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5873E33B: jmp 0x5873e33f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873E33D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873E33F: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E345: push edx
        __asm _emit 0x52
        // 0x5873E346: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873E34B: mov eax, dword ptr [0x58a246e4]
        __asm _emit 0xA1
        __asm _emit 0xE4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E350: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E356: jle 0x5873e36b
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5873E358: cmp dword ptr [eax + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E35E: je 0x5873e36b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873E360: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E366: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5873E369: jmp 0x5873e36d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873E36B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873E36D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873E36F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873E372: push ebp
        __asm _emit 0x55
        // 0x5873E373: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873E375: cmp dword ptr [esi + 0x31c], 2
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5873E37C: jne 0x5873e4c3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E382: mov eax, dword ptr [esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E388: lea ecx, [eax - 0x384]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x7C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873E38E: mov dword ptr [esp + 0x4c], 0x190
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E396: mov dword ptr [esp + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5873E39A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873E39C: jge 0x5873e3a3
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5873E39E: add eax, 0xe10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E3A3: push eax
        __asm _emit 0x50
        // 0x5873E3A4: lea edx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5873E3A8: push edx
        __asm _emit 0x52
        // 0x5873E3A9: lea eax, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5873E3AD: push eax
        __asm _emit 0x50
        // 0x5873E3AE: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xDB
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873E3B3: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873E3B6: add ecx, dword ptr [esp + 0x60]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5873E3BA: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5873E3BD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5873E3C0: sub edx, dword ptr [esp + 0x58]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5873E3C4: mov dword ptr [esi + 0x4a0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E3CA: mov dword ptr [esi + 0x4a4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E3D0: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5873E3D4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E3DB: pop ecx
        __asm _emit 0x59
        // 0x5873E3DC: pop edi
        __asm _emit 0x5F
        // 0x5873E3DD: pop esi
        __asm _emit 0x5E
        // 0x5873E3DE: pop ebp
        __asm _emit 0x5D
        // 0x5873E3DF: pop ebx
        __asm _emit 0x5B
        // 0x5873E3E0: add esp, 0x64
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x64
        // 0x5873E3E3: ret
        __asm _emit 0xC3
        // 0x5873E3E4: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5873E3E7: jne 0x5873e4c3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E3ED: mov ecx, dword ptr [esi + 0x324]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E3F3: lea edx, [ecx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC9
        // 0x5873E3F6: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873E3FB: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873E3FD: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873E400: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E402: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E405: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E407: mov edx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E40D: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5873E40F: jge 0x5873e435
        __asm _emit 0x7D
        __asm _emit 0x24
        // 0x5873E411: mov eax, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E417: cmp eax, 0x1c2
        __asm _emit 0x3D
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E41C: jge 0x5873e429
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x5873E41E: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x5873E421: mov dword ptr [esi + 0x348], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E427: jmp 0x5873e49a
        __asm _emit 0xEB
        __asm _emit 0x71
        // 0x5873E429: mov dword ptr [esi + 0x348], 0x1c2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E433: jmp 0x5873e49a
        __asm _emit 0xEB
        __asm _emit 0x65
        // 0x5873E435: jle 0x5873e460
        __asm _emit 0x7E
        __asm _emit 0x29
        // 0x5873E437: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5873E439: jge 0x5873e464
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x5873E43B: mov eax, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E441: lea ecx, [eax - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xF6
        // 0x5873E444: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x64
        // 0x5873E447: jg 0x5873e455
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x5873E449: mov dword ptr [esi + 0x348], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E453: jmp 0x5873e49a
        __asm _emit 0xEB
        __asm _emit 0x45
        // 0x5873E455: add eax, -0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xEC
        // 0x5873E458: mov dword ptr [esi + 0x348], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E45E: jmp 0x5873e49a
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x5873E460: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5873E462: jl 0x5873e49a
        __asm _emit 0x7C
        __asm _emit 0x36
        // 0x5873E464: mov dword ptr [esi + 0x348], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E46A: mov dword ptr [esi + 0x31c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E470: mov dword ptr [esi + 0x4c8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E476: cmp word ptr [esi + 0x2d6], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E47D: je 0x5873e487
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5873E47F: mov dword ptr [esi + 0x4c8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E485: jmp 0x5873e49a
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5873E487: lea edx, [esp + 0x17]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x5873E48B: push edx
        __asm _emit 0x52
        // 0x5873E48C: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5873E48E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873E490: mov byte ptr [esp + 0x1f], 0x61
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1F
        __asm _emit 0x61
        // 0x5873E495: call 0x5873cee0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873E49A: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E4A0: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5873E4A2: je 0x5873e4c3
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5873E4A4: mov eax, dword ptr [eax + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E4AA: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E4AF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873E4B3: mov dword ptr [esi + 0x4d8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E4B9: mov dword ptr [esi + 0x4dc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873E4C3: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5873E4C7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E4CE: pop ecx
        __asm _emit 0x59
        // 0x5873E4CF: pop edi
        __asm _emit 0x5F
        // 0x5873E4D0: pop esi
        __asm _emit 0x5E
        // 0x5873E4D1: pop ebp
        __asm _emit 0x5D
        // 0x5873E4D2: pop ebx
        __asm _emit 0x5B
        // 0x5873E4D3: add esp, 0x64
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x64
        // 0x5873E4D6: ret
        __asm _emit 0xC3
    }
}
