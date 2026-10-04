// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889DD30 .. +0x54D bytes.
// Source symbol alias: FUN_5889dd30.
extern "C" __declspec(naked) void FUN_5889dd30() {
    __asm {
        // 0x5889DD30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5889DD32: push 0x589876cb
        __asm _emit 0x68
        __asm _emit 0xCB
        __asm _emit 0x76
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889DD37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DD3D: push eax
        __asm _emit 0x50
        // 0x5889DD3E: push ecx
        __asm _emit 0x51
        // 0x5889DD3F: push ebx
        __asm _emit 0x53
        // 0x5889DD40: push ebp
        __asm _emit 0x55
        // 0x5889DD41: push esi
        __asm _emit 0x56
        // 0x5889DD42: push edi
        __asm _emit 0x57
        // 0x5889DD43: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889DD48: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5889DD4A: push eax
        __asm _emit 0x50
        // 0x5889DD4B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889DD4F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DD55: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889DD57: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889DD5B: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889DD5F: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889DD63: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889DD67: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889DD69: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5889DD6B: push ebx
        __asm _emit 0x53
        // 0x5889DD6C: push ebx
        __asm _emit 0x53
        // 0x5889DD6D: push edi
        __asm _emit 0x57
        // 0x5889DD6E: push ebp
        __asm _emit 0x55
        // 0x5889DD6F: push eax
        __asm _emit 0x50
        // 0x5889DD70: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889DD75: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889DD7B: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889DD80: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5889DD83: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5889DD86: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DD8D: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5889DD90: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889DD92: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5889DD96: mov dword ptr [esi], 0x589a01e0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889DD9C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xEE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889DDA1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889DDA4: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889DDA8: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5889DDAD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5889DDAF: je 0x5889ddf7
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5889DDB1: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889DDB7: cmp dword ptr [ecx + 0x164], 0x407
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DDC1: jle 0x5889dde6
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5889DDC3: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DDC9: je 0x5889dde6
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5889DDCB: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DDD1: mov ecx, dword ptr [ecx + 0x101c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DDD7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889DDD9: push edi
        __asm _emit 0x57
        // 0x5889DDDA: push ebp
        __asm _emit 0x55
        // 0x5889DDDB: push ecx
        __asm _emit 0x51
        // 0x5889DDDC: push esi
        __asm _emit 0x56
        // 0x5889DDDD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DDDF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x3E
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889DDE4: jmp 0x5889ddf9
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5889DDE6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889DDE8: push edi
        __asm _emit 0x57
        // 0x5889DDE9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889DDEB: push ebp
        __asm _emit 0x55
        // 0x5889DDEC: push ecx
        __asm _emit 0x51
        // 0x5889DDED: push esi
        __asm _emit 0x56
        // 0x5889DDEE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DDF0: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x3E
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889DDF5: jmp 0x5889ddf9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889DDF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889DDF9: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889DDFE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DE00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889DE05: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5889DE08: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x4F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889DE0D: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5889DE10: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE15: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889DE19: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5889DE1B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xEE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889DE20: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889DE23: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889DE27: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5889DE2C: mov ebx, 0x406
        __asm _emit 0xBB
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE31: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889DE33: je 0x5889de78
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5889DE35: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889DE3B: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE41: jle 0x5889de67
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x5889DE43: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE4A: je 0x5889de67
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5889DE4C: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE52: mov ecx, dword ptr [ecx + 0x1018]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE58: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889DE5A: push edi
        __asm _emit 0x57
        // 0x5889DE5B: push ebp
        __asm _emit 0x55
        // 0x5889DE5C: push ecx
        __asm _emit 0x51
        // 0x5889DE5D: push esi
        __asm _emit 0x56
        // 0x5889DE5E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DE60: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x3D
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889DE65: jmp 0x5889de7a
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5889DE67: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889DE69: push edi
        __asm _emit 0x57
        // 0x5889DE6A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889DE6C: push ebp
        __asm _emit 0x55
        // 0x5889DE6D: push ecx
        __asm _emit 0x51
        // 0x5889DE6E: push esi
        __asm _emit 0x56
        // 0x5889DE6F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DE71: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x3D
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889DE76: jmp 0x5889de7a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889DE78: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889DE7A: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5889DE7D: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889DE82: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE88: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5889DE8D: jle 0x5889dea6
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889DE8F: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE96: je 0x5889dea6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889DE98: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DE9E: mov eax, dword ptr [edx + 0x1018]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DEA4: jmp 0x5889dea8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889DEA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889DEA8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889DEAB: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5889DEAE: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5889DEB1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5889DEB3: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x5889DEB6: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5889DEB8: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DEBD: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5889DEC0: mov dword ptr [esi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x5889DEC3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xED
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889DEC8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889DECB: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889DECF: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5889DED4: mov ebx, 0xcb
        __asm _emit 0xBB
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DED9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889DEDB: je 0x5889df19
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5889DEDD: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889DEE3: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DEE9: jle 0x5889df02
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889DEEB: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DEF2: je 0x5889df02
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889DEF4: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DEFA: add ecx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF00: jmp 0x5889df04
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889DF02: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889DF04: lea edx, [edi + 0x31]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x31
        // 0x5889DF07: push edx
        __asm _emit 0x52
        // 0x5889DF08: lea edx, [ebp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x68
        // 0x5889DF0B: push edx
        __asm _emit 0x52
        // 0x5889DF0C: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5889DF0E: push ecx
        __asm _emit 0x51
        // 0x5889DF0F: push esi
        __asm _emit 0x56
        // 0x5889DF10: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DF12: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889DF17: jmp 0x5889df1b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889DF19: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889DF1B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF20: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DF22: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889DF27: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5889DF2A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x4D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889DF2F: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5889DF32: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF37: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889DF3B: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF40: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xED
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889DF45: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889DF48: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889DF4C: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5889DF51: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889DF53: je 0x5889df91
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5889DF55: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889DF5B: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF61: jle 0x5889df7a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889DF63: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF6A: je 0x5889df7a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889DF6C: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF72: add ecx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF78: jmp 0x5889df7c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889DF7A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889DF7C: lea edx, [edi + 0x3d]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x3D
        // 0x5889DF7F: push edx
        __asm _emit 0x52
        // 0x5889DF80: lea edx, [ebp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x68
        // 0x5889DF83: push edx
        __asm _emit 0x52
        // 0x5889DF84: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5889DF86: push ecx
        __asm _emit 0x51
        // 0x5889DF87: push esi
        __asm _emit 0x56
        // 0x5889DF88: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DF8A: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889DF8F: jmp 0x5889df93
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889DF91: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889DF93: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DF98: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889DF9A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889DF9F: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5889DFA2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x4D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889DFA7: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5889DFAA: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DFAF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889DFB3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DFB8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xEC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889DFBD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889DFC0: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889DFC4: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5889DFC9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889DFCB: je 0x5889e018
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5889DFCD: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889DFD3: cmp dword ptr [ecx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5889DFDA: jle 0x5889dff3
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889DFDC: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DFE3: je 0x5889dff3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889DFE5: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DFEB: add ecx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889DFF1: jmp 0x5889dff5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889DFF3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889DFF5: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889DFF7: lea edx, [edi + 0x4d]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x4D
        // 0x5889DFFA: push edx
        __asm _emit 0x52
        // 0x5889DFFB: lea edx, [ebp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x50
        // 0x5889DFFE: push edx
        __asm _emit 0x52
        // 0x5889DFFF: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E005: push ecx
        __asm _emit 0x51
        // 0x5889E006: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E00C: push esi
        __asm _emit 0x56
        // 0x5889E00D: push ecx
        __asm _emit 0x51
        // 0x5889E00E: push edx
        __asm _emit 0x52
        // 0x5889E00F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889E011: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xFD
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5889E016: jmp 0x5889e01a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E018: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889E01A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E01F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889E021: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889E026: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E02C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889E031: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E037: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E03C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889E040: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E045: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xEC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889E04A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889E04D: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889E051: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5889E056: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889E058: je 0x5889e0a5
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5889E05A: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E060: cmp dword ptr [ecx + 0x160], 0x24
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        // 0x5889E067: jle 0x5889e080
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889E069: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E070: je 0x5889e080
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E072: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E078: add ecx, 0x900
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E07E: jmp 0x5889e082
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E080: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889E082: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889E084: lea edx, [edi + 0x4d]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x4D
        // 0x5889E087: push edx
        __asm _emit 0x52
        // 0x5889E088: lea edx, [ebp + 0x7b]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x7B
        // 0x5889E08B: push edx
        __asm _emit 0x52
        // 0x5889E08C: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E092: push ecx
        __asm _emit 0x51
        // 0x5889E093: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E099: push esi
        __asm _emit 0x56
        // 0x5889E09A: push ecx
        __asm _emit 0x51
        // 0x5889E09B: push edx
        __asm _emit 0x52
        // 0x5889E09C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889E09E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFC
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5889E0A3: jmp 0x5889e0a7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E0A5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889E0A7: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E0AC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889E0AE: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889E0B3: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E0B9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889E0BE: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E0C4: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E0C9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889E0CD: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E0D2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xEB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889E0D7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889E0DA: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889E0DE: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5889E0E3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889E0E5: je 0x5889e124
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x5889E0E7: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E0ED: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x5889E0F4: jle 0x5889e10d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889E0F6: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E0FD: je 0x5889e10d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E0FF: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E105: add ecx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E10B: jmp 0x5889e10f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E10D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889E10F: lea edx, [edi + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x1E
        // 0x5889E112: push edx
        __asm _emit 0x52
        // 0x5889E113: lea edx, [ebp + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x60
        // 0x5889E116: push edx
        __asm _emit 0x52
        // 0x5889E117: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5889E119: push ecx
        __asm _emit 0x51
        // 0x5889E11A: push esi
        __asm _emit 0x56
        // 0x5889E11B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889E11D: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x8F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889E122: jmp 0x5889e126
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E124: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889E126: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5889E129: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E130: mov dword ptr [eax + 0x54], 0xa
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E137: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5889E13A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E13F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889E144: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x4B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889E149: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5889E14C: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E151: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889E155: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E15A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xEA
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889E15F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889E162: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889E166: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5889E16B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889E16D: je 0x5889e1bd
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5889E16F: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E175: cmp dword ptr [ecx + 0x160], 0x1e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        // 0x5889E17C: jle 0x5889e195
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889E17E: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E185: je 0x5889e195
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E187: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E18D: add ecx, 0x780
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E193: jmp 0x5889e197
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E195: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889E197: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889E199: lea edx, [edi + 0x16]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x16
        // 0x5889E19C: push edx
        __asm _emit 0x52
        // 0x5889E19D: lea edx, [ebp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E1A3: push edx
        __asm _emit 0x52
        // 0x5889E1A4: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E1AA: push ecx
        __asm _emit 0x51
        // 0x5889E1AB: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E1B1: push esi
        __asm _emit 0x56
        // 0x5889E1B2: push ecx
        __asm _emit 0x51
        // 0x5889E1B3: push edx
        __asm _emit 0x52
        // 0x5889E1B4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889E1B6: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xFB
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5889E1BB: jmp 0x5889e1bf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E1BD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889E1BF: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E1C4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889E1C9: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5889E1CC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xEA
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889E1D1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889E1D4: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889E1D8: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x5889E1DD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889E1DF: je 0x5889e22c
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5889E1E1: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E1E7: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x5889E1EE: jle 0x5889e207
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889E1F0: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E1F7: je 0x5889e207
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5889E1F9: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E1FF: add edx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E205: jmp 0x5889e209
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E207: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889E209: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E20F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5889E211: add edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x20
        // 0x5889E214: push edi
        __asm _emit 0x57
        // 0x5889E215: sub ebp, -0x80
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x80
        // 0x5889E218: push ebp
        __asm _emit 0x55
        // 0x5889E219: push edx
        __asm _emit 0x52
        // 0x5889E21A: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889E220: push esi
        __asm _emit 0x56
        // 0x5889E221: push ecx
        __asm _emit 0x51
        // 0x5889E222: push edx
        __asm _emit 0x52
        // 0x5889E223: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889E225: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xFB
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5889E22A: jmp 0x5889e22e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889E22C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889E22E: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5889E231: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E236: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889E23B: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5889E23E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x4A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889E243: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5889E246: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E24B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x4A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889E250: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5889E253: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E258: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889E25C: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5889E25F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5889E261: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889E265: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889E267: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889E26B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E272: pop ecx
        __asm _emit 0x59
        // 0x5889E273: pop edi
        __asm _emit 0x5F
        // 0x5889E274: pop esi
        __asm _emit 0x5E
        // 0x5889E275: pop ebp
        __asm _emit 0x5D
        // 0x5889E276: pop ebx
        __asm _emit 0x5B
        // 0x5889E277: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5889E27A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
