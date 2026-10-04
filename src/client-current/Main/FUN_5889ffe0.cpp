// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889FFE0 .. +0x470 bytes.
// Source symbol alias: FUN_5889ffe0.
extern "C" __declspec(naked) void FUN_5889ffe0() {
    __asm {
        // 0x5889FFE0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5889FFE3: push ebx
        __asm _emit 0x53
        // 0x5889FFE4: push ebp
        __asm _emit 0x55
        // 0x5889FFE5: push esi
        __asm _emit 0x56
        // 0x5889FFE6: push edi
        __asm _emit 0x57
        // 0x5889FFE7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889FFE9: call 0x5889e970
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FFEE: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889FFF2: push eax
        __asm _emit 0x50
        // 0x5889FFF3: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5889FFF8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889FFFA: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FFFF: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588A0004: call dword ptr [0x5898c008]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A000A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A000C: je 0x588a0038
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588A000E: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588A0012: push ecx
        __asm _emit 0x51
        // 0x588A0013: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588A0017: push edx
        __asm _emit 0x52
        // 0x588A0018: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A001A: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588A001F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A0021: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A0026: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A0028: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A002D: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588A0032: call dword ptr [0x5898c010]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A0038: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A003C: lea ebp, [esi + 0x150]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0042: push ebp
        __asm _emit 0x55
        // 0x588A0043: push 0x589a05d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0048: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A004D: push eax
        __asm _emit 0x50
        // 0x588A004E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0050: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0055: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0059: lea ecx, [esi + 0x154]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A005F: push ecx
        __asm _emit 0x51
        // 0x588A0060: push 0x589a05c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0065: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A006A: push edx
        __asm _emit 0x52
        // 0x588A006B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A006D: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0072: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0076: lea eax, [esi + 0x158]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A007C: push eax
        __asm _emit 0x50
        // 0x588A007D: push 0x589a05b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0082: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0087: push ecx
        __asm _emit 0x51
        // 0x588A0088: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A008A: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A008F: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0093: lea edx, [esi + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0099: push edx
        __asm _emit 0x52
        // 0x588A009A: push 0x589a059c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A009F: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A00A4: push eax
        __asm _emit 0x50
        // 0x588A00A5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A00A7: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A00AC: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A00B0: lea ecx, [esi + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A00B6: push ecx
        __asm _emit 0x51
        // 0x588A00B7: push 0x589a058c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A00BC: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A00C1: push edx
        __asm _emit 0x52
        // 0x588A00C2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A00C4: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A00C9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A00CD: lea eax, [esi + 0x164]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A00D3: push eax
        __asm _emit 0x50
        // 0x588A00D4: push 0x589a0578
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A00D9: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A00DE: push ecx
        __asm _emit 0x51
        // 0x588A00DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A00E1: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A00E6: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A00EA: lea edx, [esi + 0x168]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A00F0: push edx
        __asm _emit 0x52
        // 0x588A00F1: push 0x589a0560
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A00F6: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A00FB: push eax
        __asm _emit 0x50
        // 0x588A00FC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A00FE: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0103: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0107: lea ecx, [esi + 0x16c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A010D: push ecx
        __asm _emit 0x51
        // 0x588A010E: push 0x589a0554
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0113: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0118: push edx
        __asm _emit 0x52
        // 0x588A0119: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A011B: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0120: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0124: lea eax, [esi + 0x170]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A012A: push eax
        __asm _emit 0x50
        // 0x588A012B: push 0x589a054c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0130: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0135: push ecx
        __asm _emit 0x51
        // 0x588A0136: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0138: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A013D: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0141: lea edx, [esi + 0x174]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0147: push edx
        __asm _emit 0x52
        // 0x588A0148: push 0x589a0538
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A014D: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0152: push eax
        __asm _emit 0x50
        // 0x588A0153: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0155: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A015A: lea ecx, [esi + 0x178]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0160: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0164: push ecx
        __asm _emit 0x51
        // 0x588A0165: push 0x589a0524
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A016A: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A016F: push edx
        __asm _emit 0x52
        // 0x588A0170: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0172: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0177: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A017B: lea eax, [esi + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0181: push eax
        __asm _emit 0x50
        // 0x588A0182: push 0x589a0510
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0187: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A018C: push ecx
        __asm _emit 0x51
        // 0x588A018D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A018F: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0194: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0198: lea edx, [esi + 0x180]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A019E: push edx
        __asm _emit 0x52
        // 0x588A019F: push 0x589a0500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A01A4: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A01A9: push eax
        __asm _emit 0x50
        // 0x588A01AA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A01AC: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A01B1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A01B5: lea ecx, [esi + 0x184]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A01BB: push ecx
        __asm _emit 0x51
        // 0x588A01BC: push 0x589a04f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A01C1: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A01C6: push edx
        __asm _emit 0x52
        // 0x588A01C7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A01C9: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A01CE: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A01D2: lea eax, [esi + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A01D8: push eax
        __asm _emit 0x50
        // 0x588A01D9: push 0x589a04e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A01DE: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A01E3: push ecx
        __asm _emit 0x51
        // 0x588A01E4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A01E6: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A01EB: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A01EF: lea edx, [esi + 0x18c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A01F5: push edx
        __asm _emit 0x52
        // 0x588A01F6: push 0x589a04d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A01FB: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0200: push eax
        __asm _emit 0x50
        // 0x588A0201: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0203: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0208: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A020C: lea ecx, [esi + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0212: push ecx
        __asm _emit 0x51
        // 0x588A0213: push 0x589a04c4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0218: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A021D: push edx
        __asm _emit 0x52
        // 0x588A021E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0220: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0225: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0229: lea eax, [esi + 0x194]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A022F: push eax
        __asm _emit 0x50
        // 0x588A0230: push 0x589a04b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0235: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A023A: push ecx
        __asm _emit 0x51
        // 0x588A023B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A023D: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0242: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0246: lea edx, [esi + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A024C: push edx
        __asm _emit 0x52
        // 0x588A024D: push 0x589a049c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0252: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0257: push eax
        __asm _emit 0x50
        // 0x588A0258: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A025A: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A025F: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0263: lea ecx, [esi + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0269: push ecx
        __asm _emit 0x51
        // 0x588A026A: push 0x589a048c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A026F: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0274: push edx
        __asm _emit 0x52
        // 0x588A0275: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0277: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A027C: lea eax, [esi + 0x1a0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0282: push eax
        __asm _emit 0x50
        // 0x588A0283: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588A0287: push 0x589a047c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A028C: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0291: push ecx
        __asm _emit 0x51
        // 0x588A0292: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0294: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0299: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A029D: lea edx, [esi + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A02A3: push edx
        __asm _emit 0x52
        // 0x588A02A4: push 0x589a046c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A02A9: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A02AE: push eax
        __asm _emit 0x50
        // 0x588A02AF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A02B1: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A02B6: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A02BA: lea ecx, [esi + 0x1a8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A02C0: push ecx
        __asm _emit 0x51
        // 0x588A02C1: push 0x589a045c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A02C6: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A02CB: push edx
        __asm _emit 0x52
        // 0x588A02CC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A02CE: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A02D3: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A02D7: lea eax, [esi + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A02DD: push eax
        __asm _emit 0x50
        // 0x588A02DE: push 0x589a0454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A02E3: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A02E8: push ecx
        __asm _emit 0x51
        // 0x588A02E9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A02EB: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A02F0: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A02F4: lea edx, [esi + 0x1b0]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A02FA: push edx
        __asm _emit 0x52
        // 0x588A02FB: push 0x589a044c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0300: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0305: push eax
        __asm _emit 0x50
        // 0x588A0306: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0308: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A030D: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0311: lea ecx, [esi + 0x1b4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0317: push ecx
        __asm _emit 0x51
        // 0x588A0318: push 0x589a043c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A031D: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0322: push edx
        __asm _emit 0x52
        // 0x588A0323: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0325: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A032A: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A032E: lea eax, [esi + 0x1b8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0334: push eax
        __asm _emit 0x50
        // 0x588A0335: push 0x589a0428
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A033A: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A033F: push ecx
        __asm _emit 0x51
        // 0x588A0340: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0342: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0347: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A034B: lea edx, [esi + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0351: push edx
        __asm _emit 0x52
        // 0x588A0352: push 0x589a041c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0357: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A035C: push eax
        __asm _emit 0x50
        // 0x588A035D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A035F: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0364: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0368: lea ecx, [esi + 0x1c4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A036E: push ecx
        __asm _emit 0x51
        // 0x588A036F: push 0x589a0410
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0374: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0379: push edx
        __asm _emit 0x52
        // 0x588A037A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A037C: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A0381: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A0385: lea eax, [esi + 0x1c8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A038B: push eax
        __asm _emit 0x50
        // 0x588A038C: push 0x589a03fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0391: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A0396: push ecx
        __asm _emit 0x51
        // 0x588A0397: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0399: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A039E: lea edx, [esi + 0x1c0]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A03A4: push edx
        __asm _emit 0x52
        // 0x588A03A5: push 0x589a03ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A03AA: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A03AE: push 0x589a05e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A03B3: push eax
        __asm _emit 0x50
        // 0x588A03B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A03B6: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A03BB: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A03BF: push ecx
        __asm _emit 0x51
        // 0x588A03C0: call dword ptr [0x5898c000]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A03C6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A03C8: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x588A03CA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A03D0: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588A03D2: cmp ecx, 0x41
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x41
        // 0x588A03D5: jb 0x588a03dc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588A03D7: cmp ecx, 0x5a
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x5A
        // 0x588A03DA: jbe 0x588a041b
        __asm _emit 0x76
        __asm _emit 0x3F
        // 0x588A03DC: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x588A03DF: je 0x588a041b
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x588A03E1: cmp ecx, 0x11
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x11
        // 0x588A03E4: je 0x588a041b
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588A03E6: cmp ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x588A03E9: je 0x588a041b
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588A03EB: cmp ecx, 0xdc
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A03F1: je 0x588a041b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588A03F3: cmp ecx, 0xba
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A03F9: je 0x588a041b
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588A03FB: cmp ecx, 0xde
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0401: je 0x588a041b
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588A0403: cmp ecx, 0xbc
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0409: je 0x588a041b
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588A040B: cmp ecx, 0xbe
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0411: je 0x588a041b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A0413: cmp ecx, 0xbf
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A0419: jne 0x588a0442
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x588A041B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A041D: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x588A041F: nop
        __asm _emit 0x90
        // 0x588A0420: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588A0422: je 0x588a0428
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588A0424: cmp ecx, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x0A
        // 0x588A0426: je 0x588a0442
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588A0428: inc eax
        __asm _emit 0x40
        // 0x588A0429: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588A042C: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x588A042F: jl 0x588a0420
        __asm _emit 0x7C
        __asm _emit 0xEF
        // 0x588A0431: inc edi
        __asm _emit 0x47
        // 0x588A0432: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588A0435: cmp edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x1F
        // 0x588A0438: jl 0x588a03d0
        __asm _emit 0x7C
        __asm _emit 0x96
        // 0x588A043A: pop edi
        __asm _emit 0x5F
        // 0x588A043B: pop esi
        __asm _emit 0x5E
        // 0x588A043C: pop ebp
        __asm _emit 0x5D
        // 0x588A043D: pop ebx
        __asm _emit 0x5B
        // 0x588A043E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588A0441: ret
        __asm _emit 0xC3
        // 0x588A0442: pop edi
        __asm _emit 0x5F
        // 0x588A0443: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A0445: pop esi
        __asm _emit 0x5E
        // 0x588A0446: pop ebp
        __asm _emit 0x5D
        // 0x588A0447: pop ebx
        __asm _emit 0x5B
        // 0x588A0448: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588A044B: jmp 0x5889e970
        __asm _emit 0xE9
        __asm _emit 0x20
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
