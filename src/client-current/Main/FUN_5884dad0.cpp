// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884DAD0 .. +0x1E4 bytes.
extern "C" __declspec(naked) void FUN_5884dad0() {
    __asm {
        // 0x5884DAD0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884DAD2: push 0x58985018
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x50
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884DAD7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DADD: push eax
        __asm _emit 0x50
        // 0x5884DADE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5884DAE1: push ebx
        __asm _emit 0x53
        // 0x5884DAE2: push ebp
        __asm _emit 0x55
        // 0x5884DAE3: push esi
        __asm _emit 0x56
        // 0x5884DAE4: push edi
        __asm _emit 0x57
        // 0x5884DAE5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884DAEA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884DAEC: push eax
        __asm _emit 0x50
        // 0x5884DAED: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884DAF1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DAF7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5884DAF9: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884DAFD: mov dword ptr [edi], 0x5899e830
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x30
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884DB03: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884DB05: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884DB09: lea esi, [edi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x58
        // 0x5884DB0C: lea ebx, [ebp + 2]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x02
        // 0x5884DB0F: nop
        __asm _emit 0x90
        // 0x5884DB10: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5884DB12: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DB14: je 0x5884db20
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5884DB16: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DB18: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DB1A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DB1C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DB1E: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5884DB20: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5884DB23: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5884DB26: jne 0x5884db10
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5884DB28: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x5884DB2B: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DB2D: je 0x5884db3a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884DB2F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DB31: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DB33: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DB35: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DB37: mov dword ptr [edi + 0x60], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x60
        // 0x5884DB3A: mov ecx, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x54
        // 0x5884DB3D: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DB3F: je 0x5884db4c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884DB41: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DB43: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DB45: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DB47: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DB49: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x54
        // 0x5884DB4C: mov ecx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x64
        // 0x5884DB4F: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DB51: je 0x5884db5e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884DB53: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DB55: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DB57: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DB59: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DB5B: mov dword ptr [edi + 0x64], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x64
        // 0x5884DB5E: lea esi, [edi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x5884DB61: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DB66: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5884DB68: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DB6A: je 0x5884db76
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5884DB6C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DB6E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DB70: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DB72: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DB74: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5884DB76: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5884DB79: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5884DB7C: jne 0x5884db66
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5884DB7E: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x5884DB81: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DB83: je 0x5884db90
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884DB85: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DB87: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DB89: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DB8B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DB8D: mov dword ptr [edi + 0x70], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x70
        // 0x5884DB90: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x5884DB93: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DB95: je 0x5884dba2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884DB97: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DB99: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DB9B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DB9D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DB9F: mov dword ptr [edi + 0x74], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x74
        // 0x5884DBA2: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x5884DBA5: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DBA7: je 0x5884dbb4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884DBA9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DBAB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DBAD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DBAF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DBB1: mov dword ptr [edi + 0x78], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x78
        // 0x5884DBB4: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x5884DBB7: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DBB9: je 0x5884dbc6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884DBBB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DBBD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DBBF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DBC1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DBC3: mov dword ptr [edi + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x7C
        // 0x5884DBC6: lea esi, [edi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DBCC: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DBD1: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5884DBD3: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DBD5: je 0x5884dbe1
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5884DBD7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DBD9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DBDB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DBDD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DBDF: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5884DBE1: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5884DBE4: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5884DBE7: jne 0x5884dbd1
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5884DBE9: lea esi, [edi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DBEF: mov dword ptr [esp + 0x14], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DBF7: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DBFC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5884DC00: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5884DC02: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DC04: je 0x5884dc10
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5884DC06: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DC08: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DC0A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DC0C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DC0E: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5884DC10: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5884DC13: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5884DC16: jne 0x5884dc00
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5884DC18: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x5884DC1D: jne 0x5884dbf7
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x5884DC1F: mov ecx, dword ptr [edi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DC25: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DC27: je 0x5884dc37
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884DC29: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DC2B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DC2D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DC2F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DC31: mov dword ptr [edi + 0xbc], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DC37: mov ecx, dword ptr [edi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DC3D: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DC3F: je 0x5884dc4f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884DC41: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DC43: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DC45: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DC47: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DC49: mov dword ptr [edi + 0xc0], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DC4F: mov ecx, dword ptr [edi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DC55: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DC57: je 0x5884dc67
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884DC59: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DC5B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DC5D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DC5F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DC61: mov dword ptr [edi + 0xc4], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DC67: mov ecx, dword ptr [edi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DC6D: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DC6F: je 0x5884dc7f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884DC71: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DC73: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DC75: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DC77: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DC79: mov dword ptr [edi + 0xc8], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DC7F: mov ecx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5884DC82: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884DC84: je 0x5884dc91
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884DC86: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5884DC88: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DC8A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884DC8C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5884DC8E: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5884DC91: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884DC93: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884DC9B: call 0x589033e0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884DCA0: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884DCA4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DCAB: pop ecx
        __asm _emit 0x59
        // 0x5884DCAC: pop edi
        __asm _emit 0x5F
        // 0x5884DCAD: pop esi
        __asm _emit 0x5E
        // 0x5884DCAE: pop ebp
        __asm _emit 0x5D
        // 0x5884DCAF: pop ebx
        __asm _emit 0x5B
        // 0x5884DCB0: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5884DCB3: ret
        __asm _emit 0xC3
    }
}
