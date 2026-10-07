// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58878230 .. +0x4E4 bytes.
// Source symbol alias: FUN_58878230.
extern "C" __declspec(naked) void FUN_58878230() {
    __asm {
        // 0x58878230: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58878232: push 0x5898667b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x66
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878237: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887823D: push eax
        __asm _emit 0x50
        // 0x5887823E: push ecx
        __asm _emit 0x51
        // 0x5887823F: push ebx
        __asm _emit 0x53
        // 0x58878240: push ebp
        __asm _emit 0x55
        // 0x58878241: push esi
        __asm _emit 0x56
        // 0x58878242: push edi
        __asm _emit 0x57
        // 0x58878243: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58878248: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5887824A: push eax
        __asm _emit 0x50
        // 0x5887824B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5887824F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878255: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58878257: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887825B: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887825F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58878263: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58878267: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5887826B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5887826F: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58878273: push edi
        __asm _emit 0x57
        // 0x58878274: push eax
        __asm _emit 0x50
        // 0x58878275: push ecx
        __asm _emit 0x51
        // 0x58878276: push ebx
        __asm _emit 0x53
        // 0x58878277: push ebp
        __asm _emit 0x55
        // 0x58878278: push edx
        __asm _emit 0x52
        // 0x58878279: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887827B: call 0x587b62b0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xE0
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58878280: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58878282: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887828A: mov dword ptr [esi], 0x5899efe8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58878290: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x49
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58878295: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58878298: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887829C: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588782A1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588782A3: je 0x588782ea
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588782A5: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588782AB: cmp dword ptr [ecx + 0x164], 0x98
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588782B5: jle 0x588782da
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588782B7: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588782BE: je 0x588782da
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588782C0: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588782C6: mov ecx, dword ptr [ecx + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588782CC: push edi
        __asm _emit 0x57
        // 0x588782CD: push ebx
        __asm _emit 0x53
        // 0x588782CE: push ebp
        __asm _emit 0x55
        // 0x588782CF: push ecx
        __asm _emit 0x51
        // 0x588782D0: push esi
        __asm _emit 0x56
        // 0x588782D1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588782D3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588782D8: jmp 0x588782ec
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588782DA: push edi
        __asm _emit 0x57
        // 0x588782DB: push ebx
        __asm _emit 0x53
        // 0x588782DC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588782DE: push ebp
        __asm _emit 0x55
        // 0x588782DF: push ecx
        __asm _emit 0x51
        // 0x588782E0: push esi
        __asm _emit 0x56
        // 0x588782E1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588782E3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x99
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588782E8: jmp 0x588782ec
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588782EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588782EC: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588782F1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588782F3: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588782F8: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588782FE: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xAA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878303: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58878305: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x49
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887830A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887830D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58878311: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58878316: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58878318: je 0x5887835f
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x5887831A: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878320: cmp dword ptr [ecx + 0x164], 0x99
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887832A: jle 0x5887834f
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5887832C: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878333: je 0x5887834f
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58878335: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887833B: mov ecx, dword ptr [edx + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878341: push edi
        __asm _emit 0x57
        // 0x58878342: push ebx
        __asm _emit 0x53
        // 0x58878343: push ebp
        __asm _emit 0x55
        // 0x58878344: push ecx
        __asm _emit 0x51
        // 0x58878345: push esi
        __asm _emit 0x56
        // 0x58878346: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58878348: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x99
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887834D: jmp 0x58878361
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5887834F: push edi
        __asm _emit 0x57
        // 0x58878350: push ebx
        __asm _emit 0x53
        // 0x58878351: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58878353: push ebp
        __asm _emit 0x55
        // 0x58878354: push ecx
        __asm _emit 0x51
        // 0x58878355: push esi
        __asm _emit 0x56
        // 0x58878356: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58878358: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x99
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887835D: jmp 0x58878361
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887835F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58878361: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58878363: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58878368: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887836E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58878373: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58878376: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887837A: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5887837F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58878381: je 0x588783c8
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58878383: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878389: cmp dword ptr [ecx + 0x164], 0x97
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878393: jle 0x588783b8
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58878395: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887839C: je 0x588783b8
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5887839E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588783A4: mov ecx, dword ptr [ecx + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588783AA: push edi
        __asm _emit 0x57
        // 0x588783AB: push ebx
        __asm _emit 0x53
        // 0x588783AC: push ebp
        __asm _emit 0x55
        // 0x588783AD: push ecx
        __asm _emit 0x51
        // 0x588783AE: push esi
        __asm _emit 0x56
        // 0x588783AF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588783B1: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x98
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588783B6: jmp 0x588783ca
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588783B8: push edi
        __asm _emit 0x57
        // 0x588783B9: push ebx
        __asm _emit 0x53
        // 0x588783BA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588783BC: push ebp
        __asm _emit 0x55
        // 0x588783BD: push ecx
        __asm _emit 0x51
        // 0x588783BE: push esi
        __asm _emit 0x56
        // 0x588783BF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588783C1: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x98
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588783C6: jmp 0x588783ca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588783C8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588783CA: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588783CF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588783D1: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588783D6: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588783DC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xA9
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588783E1: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588783E3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588783E8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588783EB: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588783EF: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588783F4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588783F6: je 0x5887842f
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588783F8: push 0x1e1e1e
        __asm _emit 0x68
        __asm _emit 0x1E
        __asm _emit 0x1E
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x588783FD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588783FF: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x58878404: lea edx, [ebx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x58878407: push edx
        __asm _emit 0x52
        // 0x58878408: lea ecx, [ebp + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887840E: push ecx
        __asm _emit 0x51
        // 0x5887840F: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x58878412: push edx
        __asm _emit 0x52
        // 0x58878413: mov edx, dword ptr [0x58a24540]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878419: lea ecx, [ebp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887841F: push ecx
        __asm _emit 0x51
        // 0x58878420: push edx
        __asm _emit 0x52
        // 0x58878421: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58878423: push esi
        __asm _emit 0x56
        // 0x58878424: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58878426: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xAE
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887842B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887842D: jmp 0x58878431
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887842F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58878431: mov dword ptr [esi + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878437: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5887843A: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887843F: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58878444: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58878448: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887844A: je 0x58878452
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887844C: push edi
        __asm _emit 0x57
        // 0x5887844D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xAA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878452: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58878455: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58878457: je 0x5887845f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58878459: push edi
        __asm _emit 0x57
        // 0x5887845A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xAA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887845F: lea ecx, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878465: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58878469: add ebx, 0x36
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x36
        // 0x5887846C: mov dword ptr [esp + 0x38], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878474: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878479: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887847E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58878481: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58878485: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5887848A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887848C: je 0x588784bf
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5887848E: push 0x1e1e1e
        __asm _emit 0x68
        __asm _emit 0x1E
        __asm _emit 0x1E
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58878493: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58878495: push 0xaaaaaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x00
        // 0x5887849A: lea edx, [ebx + 0xb]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x0B
        // 0x5887849D: push edx
        __asm _emit 0x52
        // 0x5887849E: lea ecx, [ebp + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588784A4: push ecx
        __asm _emit 0x51
        // 0x588784A5: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588784AB: push ebx
        __asm _emit 0x53
        // 0x588784AC: lea edx, [ebp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x40
        // 0x588784AF: push edx
        __asm _emit 0x52
        // 0x588784B0: push ecx
        __asm _emit 0x51
        // 0x588784B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588784B3: push esi
        __asm _emit 0x56
        // 0x588784B4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588784B6: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x6F
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588784BB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588784BD: jmp 0x588784c1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588784BF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588784C1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588784C5: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x588784C7: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588784CA: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588784CF: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588784D4: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588784D8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588784DA: je 0x588784e2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588784DC: push edi
        __asm _emit 0x57
        // 0x588784DD: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xAA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588784E2: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588784E5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588784E7: je 0x588784ef
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588784E9: push edi
        __asm _emit 0x57
        // 0x588784EA: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xA9
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588784EF: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588784F4: add ebx, 0xc
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x0C
        // 0x588784F7: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588784FC: jne 0x58878474
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58878502: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878507: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887850C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887850F: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58878513: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58878518: mov edi, 0x2c
        __asm _emit 0xBF
        __asm _emit 0x2C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887851D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887851F: je 0x58878564
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58878521: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878527: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887852D: jle 0x58878546
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5887852F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878536: je 0x58878546
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58878538: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887853E: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878544: jmp 0x58878548
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58878546: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58878548: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5887854C: lea ecx, [ebx + 0xa1]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878552: push ecx
        __asm _emit 0x51
        // 0x58878553: lea ecx, [ebp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x34
        // 0x58878556: push ecx
        __asm _emit 0x51
        // 0x58878557: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58878559: push edx
        __asm _emit 0x52
        // 0x5887855A: push esi
        __asm _emit 0x56
        // 0x5887855B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5887855D: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xEB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878562: jmp 0x5887856a
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58878564: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58878568: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887856A: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887856F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58878574: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887857A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887857F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58878582: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58878586: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5887858B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887858D: je 0x588785ce
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5887858F: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878595: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887859B: jle 0x588785b4
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5887859D: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588785A4: je 0x588785b4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588785A6: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588785AC: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588785B2: jmp 0x588785b6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588785B4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588785B6: lea ecx, [ebx + 0xaf]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588785BC: push ecx
        __asm _emit 0x51
        // 0x588785BD: lea ecx, [ebp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x34
        // 0x588785C0: push ecx
        __asm _emit 0x51
        // 0x588785C1: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588785C3: push edx
        __asm _emit 0x52
        // 0x588785C4: push esi
        __asm _emit 0x56
        // 0x588785C5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588785C7: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xEB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588785CC: jmp 0x588785d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588785CE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588785D0: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588785D5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588785DA: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588785E0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588785E5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588785E8: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588785EC: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588785F1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588785F3: je 0x5887862c
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588785F5: push 0x1e1e1e
        __asm _emit 0x68
        __asm _emit 0x1E
        __asm _emit 0x1E
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x588785FA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588785FC: push 0xfafafa
        __asm _emit 0x68
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0x00
        // 0x58878601: lea edx, [ebx + 0xca]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878607: push edx
        __asm _emit 0x52
        // 0x58878608: lea ecx, [ebp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x7C
        // 0x5887860B: push ecx
        __asm _emit 0x51
        // 0x5887860C: lea edx, [ebx + 0xad]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878612: push edx
        __asm _emit 0x52
        // 0x58878613: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878619: lea ecx, [ebp + 0x33]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x33
        // 0x5887861C: push ecx
        __asm _emit 0x51
        // 0x5887861D: push edx
        __asm _emit 0x52
        // 0x5887861E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58878620: push esi
        __asm _emit 0x56
        // 0x58878621: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58878623: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x6D
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58878628: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887862A: jmp 0x5887862e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887862C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5887862E: mov dword ptr [esi + 0x190], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878634: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58878637: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887863C: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58878641: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58878645: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58878647: je 0x5887864f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58878649: push edi
        __asm _emit 0x57
        // 0x5887864A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xA9
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887864F: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58878652: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58878654: je 0x5887865c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58878656: push edi
        __asm _emit 0x57
        // 0x58878657: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887865C: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878661: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58878666: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58878669: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5887866D: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58878672: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58878674: je 0x588786ad
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58878676: push 0x1e1e1e
        __asm _emit 0x68
        __asm _emit 0x1E
        __asm _emit 0x1E
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5887867B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887867D: push 0xfafafa
        __asm _emit 0x68
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0x00
        // 0x58878682: lea ecx, [ebx + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878688: push ecx
        __asm _emit 0x51
        // 0x58878689: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887868F: lea edx, [ebp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x7C
        // 0x58878692: push edx
        __asm _emit 0x52
        // 0x58878693: add ebx, 0xc9
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878699: push ebx
        __asm _emit 0x53
        // 0x5887869A: add ebp, 0x33
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x33
        // 0x5887869D: push ebp
        __asm _emit 0x55
        // 0x5887869E: push ecx
        __asm _emit 0x51
        // 0x5887869F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588786A1: push esi
        __asm _emit 0x56
        // 0x588786A2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588786A4: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x6D
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588786A9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588786AB: jmp 0x588786af
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588786AD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588786AF: mov dword ptr [esi + 0x194], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588786B5: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588786B8: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588786BD: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588786C2: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588786C6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588786C8: je 0x588786d0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588786CA: push edi
        __asm _emit 0x57
        // 0x588786CB: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588786D0: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588786D3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588786D5: je 0x588786dd
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588786D7: push edi
        __asm _emit 0x57
        // 0x588786D8: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588786DD: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588786E2: lea eax, [esi + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588786E8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588786EA: push eax
        __asm _emit 0x50
        // 0x588786EB: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588786F0: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588786F5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588786F8: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588786FC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588786FE: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58878702: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878709: pop ecx
        __asm _emit 0x59
        // 0x5887870A: pop edi
        __asm _emit 0x5F
        // 0x5887870B: pop esi
        __asm _emit 0x5E
        // 0x5887870C: pop ebp
        __asm _emit 0x5D
        // 0x5887870D: pop ebx
        __asm _emit 0x5B
        // 0x5887870E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58878711: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
