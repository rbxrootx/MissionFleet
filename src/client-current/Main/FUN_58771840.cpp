// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1646 bytes in 1 exact ranges.
// Source symbol alias: FUN_58771840.

// Ghidra body range 0x58771840..0x58771EAE; 1646 mapped bytes.
extern "C" __declspec(naked) void FUN_58771840_segment_00() {
    __asm {
        // 0x58771840: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58771842: push 0x5897f0b1
        __asm _emit 0x68
        __asm _emit 0xB1
        __asm _emit 0xF0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58771847: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877184D: push eax
        __asm _emit 0x50
        // 0x5877184E: push ecx
        __asm _emit 0x51
        // 0x5877184F: push ebx
        __asm _emit 0x53
        // 0x58771850: push ebp
        __asm _emit 0x55
        // 0x58771851: push esi
        __asm _emit 0x56
        // 0x58771852: push edi
        __asm _emit 0x57
        // 0x58771853: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58771858: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877185A: push eax
        __asm _emit 0x50
        // 0x5877185B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877185F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771865: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58771867: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877186B: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5877186F: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58771873: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58771877: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877187B: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5877187F: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58771883: push ebx
        __asm _emit 0x53
        // 0x58771884: push eax
        __asm _emit 0x50
        // 0x58771885: push ecx
        __asm _emit 0x51
        // 0x58771886: push edi
        __asm _emit 0x57
        // 0x58771887: push ebp
        __asm _emit 0x55
        // 0x58771888: push edx
        __asm _emit 0x52
        // 0x58771889: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877188B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771890: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771896: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877189B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877189D: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x587718A0: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x587718A3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587718AA: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587718AD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587718AF: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587718B3: mov dword ptr [esi], 0x58996190
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587718B9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xB3
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587718BE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587718C1: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587718C5: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587718CA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587718CC: je 0x58771906
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x587718CE: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587718D2: cmp dword ptr [ecx + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587718D9: jle 0x587718f6
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x587718DB: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587718E1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587718E3: je 0x587718f6
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587718E5: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587718E8: push ebx
        __asm _emit 0x53
        // 0x587718E9: push edi
        __asm _emit 0x57
        // 0x587718EA: push ebp
        __asm _emit 0x55
        // 0x587718EB: push ecx
        __asm _emit 0x51
        // 0x587718EC: push esi
        __asm _emit 0x56
        // 0x587718ED: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587718EF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x03
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587718F4: jmp 0x58771908
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x587718F6: push ebx
        __asm _emit 0x53
        // 0x587718F7: push edi
        __asm _emit 0x57
        // 0x587718F8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587718FA: push ebp
        __asm _emit 0x55
        // 0x587718FB: push ecx
        __asm _emit 0x51
        // 0x587718FC: push esi
        __asm _emit 0x56
        // 0x587718FD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587718FF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58771904: jmp 0x58771908
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771906: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58771908: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877190D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877190F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58771914: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58771917: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877191C: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5877191E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xB3
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771923: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771926: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5877192A: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5877192F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771931: je 0x5877196b
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58771933: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771937: cmp dword ptr [ecx + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5877193E: jle 0x5877195b
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x58771940: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771946: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771948: je 0x5877195b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5877194A: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5877194D: push ebx
        __asm _emit 0x53
        // 0x5877194E: push edi
        __asm _emit 0x57
        // 0x5877194F: push ebp
        __asm _emit 0x55
        // 0x58771950: push ecx
        __asm _emit 0x51
        // 0x58771951: push esi
        __asm _emit 0x56
        // 0x58771952: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771954: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58771959: jmp 0x5877196d
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5877195B: push ebx
        __asm _emit 0x53
        // 0x5877195C: push edi
        __asm _emit 0x57
        // 0x5877195D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877195F: push ebp
        __asm _emit 0x55
        // 0x58771960: push ecx
        __asm _emit 0x51
        // 0x58771961: push esi
        __asm _emit 0x56
        // 0x58771962: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771964: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58771969: jmp 0x5877196d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877196B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877196D: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771972: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771974: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58771979: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5877197C: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771981: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771986: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xB2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877198B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877198E: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771992: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58771997: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771999: je 0x587719cc
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5877199B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877199D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877199F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587719A4: lea ecx, [edi + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x4C
        // 0x587719A7: push ecx
        __asm _emit 0x51
        // 0x587719A8: lea edx, [ebp + 0x1c2]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587719AE: push edx
        __asm _emit 0x52
        // 0x587719AF: lea ecx, [edi + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x19
        // 0x587719B2: push ecx
        __asm _emit 0x51
        // 0x587719B3: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587719B9: lea edx, [ebp + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x19
        // 0x587719BC: push edx
        __asm _emit 0x52
        // 0x587719BD: push ecx
        __asm _emit 0x51
        // 0x587719BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587719C0: push esi
        __asm _emit 0x56
        // 0x587719C1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587719C3: call 0x587494d0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x7B
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587719C8: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587719CA: jmp 0x587719ce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587719CC: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587719CE: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587719D3: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x587719D6: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x587719D9: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587719DE: mov word ptr [ebx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x26
        // 0x587719E2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587719E4: je 0x587719ec
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587719E6: push ebx
        __asm _emit 0x53
        // 0x587719E7: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587719EC: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587719EF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587719F1: je 0x587719f9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587719F3: push ebx
        __asm _emit 0x53
        // 0x587719F4: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587719F9: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587719FC: mov ecx, 0x48
        __asm _emit 0xB9
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771A01: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771A08: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58771A0B: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771A10: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x74
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58771A15: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58771A18: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771A1D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58771A21: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771A26: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xB2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771A2B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771A2E: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771A32: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58771A37: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771A39: je 0x58771a6c
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58771A3B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771A3D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771A3F: push 0xff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771A44: lea ecx, [edi + 0x6e]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x6E
        // 0x58771A47: push ecx
        __asm _emit 0x51
        // 0x58771A48: lea edx, [ebp + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771A4E: push edx
        __asm _emit 0x52
        // 0x58771A4F: lea ecx, [edi + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x4C
        // 0x58771A52: push ecx
        __asm _emit 0x51
        // 0x58771A53: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771A59: lea edx, [ebp + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x1E
        // 0x58771A5C: push edx
        __asm _emit 0x52
        // 0x58771A5D: push ecx
        __asm _emit 0x51
        // 0x58771A5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771A60: push esi
        __asm _emit 0x56
        // 0x58771A61: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771A63: call 0x587494d0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x7A
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58771A68: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58771A6A: jmp 0x58771a6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771A6C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58771A6E: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771A73: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x58771A76: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x58771A79: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771A7E: mov word ptr [ebx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x26
        // 0x58771A82: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771A84: je 0x58771a8c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771A86: push ebx
        __asm _emit 0x53
        // 0x58771A87: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771A8C: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58771A8F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771A91: je 0x58771a99
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771A93: push ebx
        __asm _emit 0x53
        // 0x58771A94: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771A99: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58771A9C: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771AA1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58771AA5: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58771AA8: mov edx, 0x41
        __asm _emit 0xBA
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771AAD: mov word ptr [eax + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771AB4: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58771AB7: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771ABC: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x73
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58771AC1: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771AC6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xB1
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771ACB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771ACE: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771AD2: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58771AD7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771AD9: je 0x58771b0f
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58771ADB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771ADD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771ADF: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771AE4: lea ecx, [edi + 0x6e]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x6E
        // 0x58771AE7: push ecx
        __asm _emit 0x51
        // 0x58771AE8: lea edx, [ebp + 0x1c2]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771AEE: push edx
        __asm _emit 0x52
        // 0x58771AEF: lea ecx, [edi + 0x5d]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x5D
        // 0x58771AF2: push ecx
        __asm _emit 0x51
        // 0x58771AF3: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771AF9: lea edx, [ebp + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771AFF: push edx
        __asm _emit 0x52
        // 0x58771B00: push ecx
        __asm _emit 0x51
        // 0x58771B01: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771B03: push esi
        __asm _emit 0x56
        // 0x58771B04: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771B06: call 0x587494d0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x79
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58771B0B: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58771B0D: jmp 0x58771b11
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771B0F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58771B11: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771B16: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x58771B19: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x58771B1C: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771B21: mov word ptr [ebx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x26
        // 0x58771B25: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771B27: je 0x58771b2f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771B29: push ebx
        __asm _emit 0x53
        // 0x58771B2A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771B2F: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58771B32: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771B34: je 0x58771b3c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771B36: push ebx
        __asm _emit 0x53
        // 0x58771B37: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771B3C: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58771B3F: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771B44: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58771B48: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771B4D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xB0
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771B52: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771B55: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771B59: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58771B5E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771B60: je 0x58771b93
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58771B62: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771B64: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771B66: push 0xff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771B6B: lea edx, [edi + 0x6e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x6E
        // 0x58771B6E: push edx
        __asm _emit 0x52
        // 0x58771B6F: lea ecx, [ebp + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771B75: push ecx
        __asm _emit 0x51
        // 0x58771B76: lea edx, [edi + 0x5d]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x5D
        // 0x58771B79: push edx
        __asm _emit 0x52
        // 0x58771B7A: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771B80: lea ecx, [ebp + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x1E
        // 0x58771B83: push ecx
        __asm _emit 0x51
        // 0x58771B84: push edx
        __asm _emit 0x52
        // 0x58771B85: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771B87: push esi
        __asm _emit 0x56
        // 0x58771B88: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771B8A: call 0x587494d0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x79
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58771B8F: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58771B91: jmp 0x58771b95
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771B93: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58771B95: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771B9A: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x58771B9D: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x58771BA0: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771BA5: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        // 0x58771BA9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771BAB: je 0x58771bb3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771BAD: push ebx
        __asm _emit 0x53
        // 0x58771BAE: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771BB3: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58771BB6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771BB8: je 0x58771bc0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771BBA: push ebx
        __asm _emit 0x53
        // 0x58771BBB: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771BC0: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58771BC3: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771BC8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58771BCC: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771BD1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xB0
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771BD6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771BD9: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771BDD: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58771BE2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771BE4: je 0x58771c1a
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58771BE6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771BE8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771BEA: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771BEF: lea edx, [edi + 0x6e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x6E
        // 0x58771BF2: push edx
        __asm _emit 0x52
        // 0x58771BF3: lea ecx, [ebp + 0x1c2]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771BF9: push ecx
        __asm _emit 0x51
        // 0x58771BFA: lea edx, [edi + 0x5d]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x5D
        // 0x58771BFD: push edx
        __asm _emit 0x52
        // 0x58771BFE: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771C04: lea ecx, [ebp + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771C0A: push ecx
        __asm _emit 0x51
        // 0x58771C0B: push edx
        __asm _emit 0x52
        // 0x58771C0C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771C0E: push esi
        __asm _emit 0x56
        // 0x58771C0F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771C11: call 0x587494d0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x78
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58771C16: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58771C18: jmp 0x58771c1c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771C1A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58771C1C: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771C21: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x58771C24: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x58771C27: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771C2C: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        // 0x58771C30: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771C32: je 0x58771c3a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771C34: push ebx
        __asm _emit 0x53
        // 0x58771C35: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771C3A: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58771C3D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771C3F: je 0x58771c47
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771C41: push ebx
        __asm _emit 0x53
        // 0x58771C42: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x12
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771C47: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58771C4A: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771C4F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58771C53: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771C58: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xAF
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771C5D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771C60: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771C64: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58771C69: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771C6B: je 0x58771c9e
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58771C6D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771C6F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771C71: push 0xff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771C76: lea edx, [edi + 0x7f]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x7F
        // 0x58771C79: push edx
        __asm _emit 0x52
        // 0x58771C7A: lea ecx, [ebp + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771C80: push ecx
        __asm _emit 0x51
        // 0x58771C81: lea edx, [edi + 0x6e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x6E
        // 0x58771C84: push edx
        __asm _emit 0x52
        // 0x58771C85: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771C8B: lea ecx, [ebp + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x1E
        // 0x58771C8E: push ecx
        __asm _emit 0x51
        // 0x58771C8F: push edx
        __asm _emit 0x52
        // 0x58771C90: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771C92: push esi
        __asm _emit 0x56
        // 0x58771C93: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771C95: call 0x587494d0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x78
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58771C9A: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58771C9C: jmp 0x58771ca0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771C9E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58771CA0: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771CA5: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x58771CA8: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x58771CAB: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771CB0: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        // 0x58771CB4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771CB6: je 0x58771cbe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771CB8: push ebx
        __asm _emit 0x53
        // 0x58771CB9: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x12
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771CBE: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58771CC1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771CC3: je 0x58771ccb
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771CC5: push ebx
        __asm _emit 0x53
        // 0x58771CC6: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771CCB: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58771CCE: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771CD3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58771CD7: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771CDC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xAF
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771CE1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771CE4: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771CE8: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58771CED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771CEF: je 0x58771d28
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58771CF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771CF3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771CF5: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58771CFA: lea edx, [edi + 0xa1]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D00: push edx
        __asm _emit 0x52
        // 0x58771D01: lea ecx, [ebp + 0x1c2]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D07: push ecx
        __asm _emit 0x51
        // 0x58771D08: lea edx, [edi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D0E: push edx
        __asm _emit 0x52
        // 0x58771D0F: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771D15: lea ecx, [ebp + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x19
        // 0x58771D18: push ecx
        __asm _emit 0x51
        // 0x58771D19: push edx
        __asm _emit 0x52
        // 0x58771D1A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771D1C: push esi
        __asm _emit 0x56
        // 0x58771D1D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771D1F: call 0x587494d0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x77
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58771D24: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58771D26: jmp 0x58771d2a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771D28: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58771D2A: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771D2F: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D35: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x58771D38: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771D3D: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        // 0x58771D41: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771D43: je 0x58771d4b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771D45: push ebx
        __asm _emit 0x53
        // 0x58771D46: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x12
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771D4B: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58771D4E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58771D50: je 0x58771d58
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58771D52: push ebx
        __asm _emit 0x53
        // 0x58771D53: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771D58: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D5E: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D63: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58771D67: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D6C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xAE
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771D71: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771D74: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771D78: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x58771D7D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771D7F: je 0x58771dd2
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x58771D81: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771D87: cmp dword ptr [ecx + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x58771D8E: jle 0x58771da7
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58771D90: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D97: je 0x58771da7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58771D99: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771D9F: add edx, 0x240
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771DA5: jmp 0x58771da9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771DA7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58771DA9: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771DAD: push ecx
        __asm _emit 0x51
        // 0x58771DAE: lea ecx, [edi + 0xaf]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771DB4: push ecx
        __asm _emit 0x51
        // 0x58771DB5: lea ecx, [ebp + 0x7d]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x7D
        // 0x58771DB8: push ecx
        __asm _emit 0x51
        // 0x58771DB9: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771DBF: push edx
        __asm _emit 0x52
        // 0x58771DC0: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771DC6: push esi
        __asm _emit 0x56
        // 0x58771DC7: push edx
        __asm _emit 0x52
        // 0x58771DC8: push ecx
        __asm _emit 0x51
        // 0x58771DC9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771DCB: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58771DD0: jmp 0x58771dd4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771DD2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58771DD4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771DD9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771DDB: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58771DE0: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771DE6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x0F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771DEB: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771DF0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xAE
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771DF5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771DF8: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771DFC: mov edx, 0xb
        __asm _emit 0xBA
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E01: mov byte ptr [esp + 0x20], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58771E05: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771E07: je 0x58771e5c
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x58771E09: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771E0F: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E15: jle 0x58771e2e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58771E17: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E1E: je 0x58771e2e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58771E20: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E26: add ecx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E2C: jmp 0x58771e30
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771E2E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58771E30: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58771E34: push edx
        __asm _emit 0x52
        // 0x58771E35: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771E3B: add edi, 0xaf
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E41: push edi
        __asm _emit 0x57
        // 0x58771E42: add ebp, 0x113
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E48: push ebp
        __asm _emit 0x55
        // 0x58771E49: push ecx
        __asm _emit 0x51
        // 0x58771E4A: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58771E50: push esi
        __asm _emit 0x56
        // 0x58771E51: push ecx
        __asm _emit 0x51
        // 0x58771E52: push edx
        __asm _emit 0x52
        // 0x58771E53: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771E55: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58771E5A: jmp 0x58771e5e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58771E5C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58771E5E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E63: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58771E65: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58771E6A: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E70: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x0E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58771E75: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E7A: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58771E7E: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58771E82: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E87: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771E8C: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58771E8F: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58771E92: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58771E96: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58771E98: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58771E9C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771EA3: pop ecx
        __asm _emit 0x59
        // 0x58771EA4: pop edi
        __asm _emit 0x5F
        // 0x58771EA5: pop esi
        __asm _emit 0x5E
        // 0x58771EA6: pop ebp
        __asm _emit 0x5D
        // 0x58771EA7: pop ebx
        __asm _emit 0x5B
        // 0x58771EA8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58771EAB: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
