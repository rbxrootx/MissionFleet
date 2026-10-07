// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1298 bytes in 1 exact ranges.
// Source symbol alias: FUN_5884ca60.

// Ghidra body range 0x5884CA60..0x5884CF72; 1298 mapped bytes.
extern "C" __declspec(naked) void FUN_5884ca60_segment_00() {
    __asm {
        // 0x5884CA60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884CA62: push 0x58984f5b
        __asm _emit 0x68
        __asm _emit 0x5B
        __asm _emit 0x4F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884CA67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CA6D: push eax
        __asm _emit 0x50
        // 0x5884CA6E: push ecx
        __asm _emit 0x51
        // 0x5884CA6F: push ebx
        __asm _emit 0x53
        // 0x5884CA70: push ebp
        __asm _emit 0x55
        // 0x5884CA71: push esi
        __asm _emit 0x56
        // 0x5884CA72: push edi
        __asm _emit 0x57
        // 0x5884CA73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884CA78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884CA7A: push eax
        __asm _emit 0x50
        // 0x5884CA7B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884CA7F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CA85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5884CA87: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884CA8B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CA8F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884CA93: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884CA97: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884CA9B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884CA9F: push eax
        __asm _emit 0x50
        // 0x5884CAA0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884CAA4: push ecx
        __asm _emit 0x51
        // 0x5884CAA5: push edx
        __asm _emit 0x52
        // 0x5884CAA6: push edi
        __asm _emit 0x57
        // 0x5884CAA7: push ebp
        __asm _emit 0x55
        // 0x5884CAA8: push eax
        __asm _emit 0x50
        // 0x5884CAA9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884CAAB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884CAB0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884CAB6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884CABB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884CABD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884CABF: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CAC3: mov dword ptr [esi], 0x5899e7f4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0xE7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884CAC9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884CACE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CAD1: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CAD5: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5884CADA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CADC: je 0x5884cb21
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5884CADE: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CAE4: cmp dword ptr [ecx + 0x164], 0x4a
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4A
        // 0x5884CAEB: jle 0x5884cb10
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5884CAED: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CAF3: je 0x5884cb10
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5884CAF5: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CAFB: mov ecx, dword ptr [ecx + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CB01: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CB03: push edi
        __asm _emit 0x57
        // 0x5884CB04: push ebp
        __asm _emit 0x55
        // 0x5884CB05: push ecx
        __asm _emit 0x51
        // 0x5884CB06: push esi
        __asm _emit 0x56
        // 0x5884CB07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CB09: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x51
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884CB0E: jmp 0x5884cb23
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5884CB10: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CB12: push edi
        __asm _emit 0x57
        // 0x5884CB13: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884CB15: push ebp
        __asm _emit 0x55
        // 0x5884CB16: push ecx
        __asm _emit 0x51
        // 0x5884CB17: push esi
        __asm _emit 0x56
        // 0x5884CB18: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CB1A: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x51
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884CB1F: jmp 0x5884cb23
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CB21: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CB23: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884CB25: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CB29: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884CB2C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884CB31: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CB34: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CB38: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5884CB3D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CB3F: je 0x5884cb84
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5884CB41: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CB47: cmp dword ptr [ecx + 0x164], 0x49
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x49
        // 0x5884CB4E: jle 0x5884cb73
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5884CB50: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CB56: je 0x5884cb73
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5884CB58: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CB5E: mov ecx, dword ptr [edx + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CB64: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CB66: push edi
        __asm _emit 0x57
        // 0x5884CB67: push ebp
        __asm _emit 0x55
        // 0x5884CB68: push ecx
        __asm _emit 0x51
        // 0x5884CB69: push esi
        __asm _emit 0x56
        // 0x5884CB6A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CB6C: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x50
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884CB71: jmp 0x5884cb86
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5884CB73: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CB75: push edi
        __asm _emit 0x57
        // 0x5884CB76: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884CB78: push ebp
        __asm _emit 0x55
        // 0x5884CB79: push ecx
        __asm _emit 0x51
        // 0x5884CB7A: push esi
        __asm _emit 0x56
        // 0x5884CB7B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CB7D: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x50
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884CB82: jmp 0x5884cb86
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CB84: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CB86: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884CB88: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CB8C: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5884CB8F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884CB94: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CB97: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CB9B: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5884CBA0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CBA2: je 0x5884cbe7
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5884CBA4: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CBAA: cmp dword ptr [ecx + 0x164], 0x4b
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4B
        // 0x5884CBB1: jle 0x5884cbd6
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5884CBB3: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CBB9: je 0x5884cbd6
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5884CBBB: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CBC1: mov ecx, dword ptr [ecx + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CBC7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CBC9: push edi
        __asm _emit 0x57
        // 0x5884CBCA: push ebp
        __asm _emit 0x55
        // 0x5884CBCB: push ecx
        __asm _emit 0x51
        // 0x5884CBCC: push esi
        __asm _emit 0x56
        // 0x5884CBCD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CBCF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x50
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884CBD4: jmp 0x5884cbe9
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5884CBD6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CBD8: push edi
        __asm _emit 0x57
        // 0x5884CBD9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884CBDB: push ebp
        __asm _emit 0x55
        // 0x5884CBDC: push ecx
        __asm _emit 0x51
        // 0x5884CBDD: push esi
        __asm _emit 0x56
        // 0x5884CBDE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CBE0: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x50
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884CBE5: jmp 0x5884cbe9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CBE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CBE9: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5884CBEC: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884CBF1: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CBF5: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5884CBF8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x61
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884CBFD: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5884CC00: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CC05: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x60
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884CC0A: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5884CC0D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CC12: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x61
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884CC17: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CC1C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884CC21: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CC24: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CC28: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5884CC2D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CC2F: je 0x5884cc61
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5884CC31: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5884CC36: push ebx
        __asm _emit 0x53
        // 0x5884CC37: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884CC3C: lea edx, [edi + 0x2f]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x2F
        // 0x5884CC3F: push edx
        __asm _emit 0x52
        // 0x5884CC40: lea ecx, [ebp + 0xa5]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CC46: push ecx
        __asm _emit 0x51
        // 0x5884CC47: lea edx, [edi + 0x23]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x23
        // 0x5884CC4A: push edx
        __asm _emit 0x52
        // 0x5884CC4B: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CC51: lea ecx, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5884CC54: push ecx
        __asm _emit 0x51
        // 0x5884CC55: push edx
        __asm _emit 0x52
        // 0x5884CC56: push ebx
        __asm _emit 0x53
        // 0x5884CC57: push esi
        __asm _emit 0x56
        // 0x5884CC58: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CC5A: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x44
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884CC5F: jmp 0x5884cc63
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CC61: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CC63: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CC68: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CC6C: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5884CC6F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884CC74: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CC77: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CC7B: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5884CC80: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CC82: je 0x5884ccb4
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5884CC84: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5884CC89: push ebx
        __asm _emit 0x53
        // 0x5884CC8A: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884CC8F: lea ecx, [edi + 0x7e]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x7E
        // 0x5884CC92: push ecx
        __asm _emit 0x51
        // 0x5884CC93: lea edx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CC99: push edx
        __asm _emit 0x52
        // 0x5884CC9A: lea ecx, [edi + 0x3a]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x3A
        // 0x5884CC9D: push ecx
        __asm _emit 0x51
        // 0x5884CC9E: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CCA4: lea edx, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x5884CCA7: push edx
        __asm _emit 0x52
        // 0x5884CCA8: push ecx
        __asm _emit 0x51
        // 0x5884CCA9: push ebx
        __asm _emit 0x53
        // 0x5884CCAA: push esi
        __asm _emit 0x56
        // 0x5884CCAB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CCAD: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x43
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884CCB2: jmp 0x5884ccb6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CCB4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CCB6: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5884CCB9: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5884CCBC: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CCC1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5884CCC5: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5884CCC8: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5884CCCA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884CCCE: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5884CCD1: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x5884CCD3: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CCD7: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5884CCDC: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5884CCDF: mov edx, 0x18
        __asm _emit 0xBA
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CCE4: mov word ptr [eax + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CCEB: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5884CCEE: push 0x48
        __asm _emit 0x6A
        __asm _emit 0x48
        // 0x5884CCF0: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5884CCF5: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CCFA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884CCFF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CD02: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CD06: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5884CD0B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CD0D: je 0x5884cd5c
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5884CD0F: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CD15: cmp dword ptr [ecx + 0x160], 0x10
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5884CD1C: jle 0x5884cd34
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5884CD1E: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CD24: je 0x5884cd34
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884CD26: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CD2C: add ecx, 0x400
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CD32: jmp 0x5884cd36
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CD34: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884CD36: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CD38: lea edx, [edi + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x0A
        // 0x5884CD3B: push edx
        __asm _emit 0x52
        // 0x5884CD3C: lea edx, [ebp + 0xab]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CD42: push edx
        __asm _emit 0x52
        // 0x5884CD43: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CD49: push ecx
        __asm _emit 0x51
        // 0x5884CD4A: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CD50: push esi
        __asm _emit 0x56
        // 0x5884CD51: push ecx
        __asm _emit 0x51
        // 0x5884CD52: push edx
        __asm _emit 0x52
        // 0x5884CD53: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CD55: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884CD5A: jmp 0x5884cd5e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CD5C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CD5E: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CD63: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CD67: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5884CD6A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xFE
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884CD6F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CD72: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CD76: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5884CD7B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CD7D: je 0x5884cdcc
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5884CD7F: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CD85: cmp dword ptr [ecx + 0x160], 0xd
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x5884CD8C: jle 0x5884cda4
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5884CD8E: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CD94: je 0x5884cda4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884CD96: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CD9C: add edx, 0x340
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CDA2: jmp 0x5884cda6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CDA4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884CDA6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CDA8: lea ecx, [edi + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x0A
        // 0x5884CDAB: push ecx
        __asm _emit 0x51
        // 0x5884CDAC: lea ecx, [ebp + 0x85]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CDB2: push ecx
        __asm _emit 0x51
        // 0x5884CDB3: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CDB9: push edx
        __asm _emit 0x52
        // 0x5884CDBA: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CDC0: push esi
        __asm _emit 0x56
        // 0x5884CDC1: push edx
        __asm _emit 0x52
        // 0x5884CDC2: push ecx
        __asm _emit 0x51
        // 0x5884CDC3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CDC5: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x0F
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884CDCA: jmp 0x5884cdce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CDCC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CDCE: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CDD3: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CDD7: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5884CDDA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xFE
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884CDDF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CDE2: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CDE6: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5884CDEB: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CDED: je 0x5884ce3c
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5884CDEF: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CDF5: cmp dword ptr [ecx + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x5884CDFC: jle 0x5884ce14
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5884CDFE: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE04: je 0x5884ce14
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884CE06: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE0C: add edx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE12: jmp 0x5884ce16
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CE14: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884CE16: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CE18: lea ecx, [edi + 0x22]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x22
        // 0x5884CE1B: push ecx
        __asm _emit 0x51
        // 0x5884CE1C: lea ecx, [ebp + 0xab]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE22: push ecx
        __asm _emit 0x51
        // 0x5884CE23: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CE29: push edx
        __asm _emit 0x52
        // 0x5884CE2A: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CE30: push esi
        __asm _emit 0x56
        // 0x5884CE31: push edx
        __asm _emit 0x52
        // 0x5884CE32: push ecx
        __asm _emit 0x51
        // 0x5884CE33: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CE35: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884CE3A: jmp 0x5884ce3e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CE3C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CE3E: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE43: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CE47: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5884CE4A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFD
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884CE4F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884CE52: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884CE56: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x5884CE5B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884CE5D: je 0x5884ceac
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5884CE5F: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CE65: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x5884CE6C: jle 0x5884ce84
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5884CE6E: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE74: je 0x5884ce84
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884CE76: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE7C: add edx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE82: jmp 0x5884ce86
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CE84: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884CE86: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CE8C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884CE8E: add edi, 0x22
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x22
        // 0x5884CE91: push edi
        __asm _emit 0x57
        // 0x5884CE92: add ebp, 0xab
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CE98: push ebp
        __asm _emit 0x55
        // 0x5884CE99: push edx
        __asm _emit 0x52
        // 0x5884CE9A: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CEA0: push esi
        __asm _emit 0x56
        // 0x5884CEA1: push edx
        __asm _emit 0x52
        // 0x5884CEA2: push ecx
        __asm _emit 0x51
        // 0x5884CEA3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884CEA5: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x0E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884CEAA: jmp 0x5884ceae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CEAC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CEAE: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5884CEB1: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CEB6: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884CEBA: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5884CEBD: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x5E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884CEC2: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5884CEC5: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CECA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x5E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884CECF: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884CED2: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CED7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x5E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884CEDC: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5884CEDF: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CEE4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x5E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884CEE9: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884CEEE: cmp dword ptr [eax + 0x170], 0xb
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5884CEF5: jle 0x5884cf0a
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5884CEF7: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CEFD: je 0x5884cf0a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884CEFF: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF05: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x2C
        // 0x5884CF08: jmp 0x5884cf0c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884CF0A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CF0C: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5884CF0F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884CF11: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF16: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5884CF1A: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5884CF1E: mov word ptr [esi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF25: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF2A: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5884CF2D: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF32: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5884CF35: mov byte ptr [esi + 0x78], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x5884CF38: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF3E: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF44: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF4A: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF50: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF56: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5884CF5A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5884CF5C: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884CF60: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884CF67: pop ecx
        __asm _emit 0x59
        // 0x5884CF68: pop edi
        __asm _emit 0x5F
        // 0x5884CF69: pop esi
        __asm _emit 0x5E
        // 0x5884CF6A: pop ebp
        __asm _emit 0x5D
        // 0x5884CF6B: pop ebx
        __asm _emit 0x5B
        // 0x5884CF6C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5884CF6F: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
