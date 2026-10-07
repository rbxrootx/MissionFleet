// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1289 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877370.

// Ghidra body range 0x58877370..0x58877879; 1289 mapped bytes.
extern "C" __declspec(naked) void FUN_58877370_segment_00() {
    __asm {
        // 0x58877370: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58877372: push 0x589865eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x65
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58877377: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887737D: push eax
        __asm _emit 0x50
        // 0x5887737E: push ecx
        __asm _emit 0x51
        // 0x5887737F: push ebx
        __asm _emit 0x53
        // 0x58877380: push ebp
        __asm _emit 0x55
        // 0x58877381: push esi
        __asm _emit 0x56
        // 0x58877382: push edi
        __asm _emit 0x57
        // 0x58877383: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58877388: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5887738A: push eax
        __asm _emit 0x50
        // 0x5887738B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5887738F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877395: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58877397: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887739B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887739F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588773A3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588773A7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588773AB: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588773AF: push eax
        __asm _emit 0x50
        // 0x588773B0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588773B4: push ecx
        __asm _emit 0x51
        // 0x588773B5: push edx
        __asm _emit 0x52
        // 0x588773B6: push edi
        __asm _emit 0x57
        // 0x588773B7: push ebp
        __asm _emit 0x55
        // 0x588773B8: push eax
        __asm _emit 0x50
        // 0x588773B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588773BB: call 0x587b62b0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xEE
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588773C0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588773C2: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588773C7: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588773CB: mov dword ptr [esi], 0x5899efa0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA0
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588773D1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588773D6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588773D9: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588773DD: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588773E2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588773E4: je 0x588773f7
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588773E6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588773E8: push ebx
        __asm _emit 0x53
        // 0x588773E9: push 0x5899efc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588773EE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588773F0: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xC9
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588773F5: jmp 0x588773f9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588773F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588773F9: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588773FB: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588773FF: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877405: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887740A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887740D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58877411: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58877416: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58877418: je 0x5887745a
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5887741A: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877420: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877426: jle 0x58877446
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58877428: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887742E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58877430: je 0x58877446
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58877432: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58877436: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58877438: push edx
        __asm _emit 0x52
        // 0x58877439: push edi
        __asm _emit 0x57
        // 0x5887743A: push ebp
        __asm _emit 0x55
        // 0x5887743B: push ecx
        __asm _emit 0x51
        // 0x5887743C: push esi
        __asm _emit 0x56
        // 0x5887743D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5887743F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xA8
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58877444: jmp 0x5887745c
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58877446: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887744A: push edx
        __asm _emit 0x52
        // 0x5887744B: push edi
        __asm _emit 0x57
        // 0x5887744C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887744E: push ebp
        __asm _emit 0x55
        // 0x5887744F: push ecx
        __asm _emit 0x51
        // 0x58877450: push esi
        __asm _emit 0x56
        // 0x58877451: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58877453: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xA8
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58877458: jmp 0x5887745c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887745A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887745C: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877461: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58877463: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58877467: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887746D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877472: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877478: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887747D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58877481: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58877483: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58877488: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887748B: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887748F: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58877494: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58877496: je 0x588774da
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58877498: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887749E: cmp dword ptr [ecx + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588774A5: jle 0x588774c6
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588774A7: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588774AD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588774AF: je 0x588774c6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588774B1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588774B5: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588774B8: push edx
        __asm _emit 0x52
        // 0x588774B9: push edi
        __asm _emit 0x57
        // 0x588774BA: push ebp
        __asm _emit 0x55
        // 0x588774BB: push ecx
        __asm _emit 0x51
        // 0x588774BC: push esi
        __asm _emit 0x56
        // 0x588774BD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588774BF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xA7
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588774C4: jmp 0x588774dc
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588774C6: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588774CA: push edx
        __asm _emit 0x52
        // 0x588774CB: push edi
        __asm _emit 0x57
        // 0x588774CC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588774CE: push ebp
        __asm _emit 0x55
        // 0x588774CF: push ecx
        __asm _emit 0x51
        // 0x588774D0: push esi
        __asm _emit 0x56
        // 0x588774D1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588774D3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xA7
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588774D8: jmp 0x588774dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588774DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588774DC: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588774E1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588774E3: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588774E7: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588774ED: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xB7
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588774F2: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588774F8: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588774FD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58877501: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58877503: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58877508: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887750B: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887750F: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58877514: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58877516: je 0x5887755a
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58877518: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887751E: cmp dword ptr [ecx + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58877525: jle 0x58877546
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x58877527: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887752D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5887752F: je 0x58877546
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58877531: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58877535: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58877538: push edx
        __asm _emit 0x52
        // 0x58877539: push edi
        __asm _emit 0x57
        // 0x5887753A: push ebp
        __asm _emit 0x55
        // 0x5887753B: push ecx
        __asm _emit 0x51
        // 0x5887753C: push esi
        __asm _emit 0x56
        // 0x5887753D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5887753F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xA7
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58877544: jmp 0x5887755c
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58877546: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887754A: push edx
        __asm _emit 0x52
        // 0x5887754B: push edi
        __asm _emit 0x57
        // 0x5887754C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887754E: push ebp
        __asm _emit 0x55
        // 0x5887754F: push ecx
        __asm _emit 0x51
        // 0x58877550: push esi
        __asm _emit 0x56
        // 0x58877551: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58877553: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xA7
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58877558: jmp 0x5887755c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887755A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887755C: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877561: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58877563: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58877567: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887756D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xB7
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877572: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877578: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887757D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58877581: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58877583: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58877588: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887758B: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887758F: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58877594: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58877596: je 0x588775da
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58877598: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887759E: cmp dword ptr [ecx + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588775A5: jle 0x588775c6
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588775A7: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588775AD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588775AF: je 0x588775c6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588775B1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588775B5: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588775B8: push edx
        __asm _emit 0x52
        // 0x588775B9: push edi
        __asm _emit 0x57
        // 0x588775BA: push ebp
        __asm _emit 0x55
        // 0x588775BB: push ecx
        __asm _emit 0x51
        // 0x588775BC: push esi
        __asm _emit 0x56
        // 0x588775BD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588775BF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xA6
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588775C4: jmp 0x588775dc
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588775C6: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588775CA: push edx
        __asm _emit 0x52
        // 0x588775CB: push edi
        __asm _emit 0x57
        // 0x588775CC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588775CE: push ebp
        __asm _emit 0x55
        // 0x588775CF: push ecx
        __asm _emit 0x51
        // 0x588775D0: push esi
        __asm _emit 0x56
        // 0x588775D1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588775D3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xA6
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588775D8: jmp 0x588775dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588775DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588775DC: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588775E2: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588775E7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588775EB: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588775F1: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588775F6: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588775FA: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xB6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588775FF: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877604: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58877609: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887760C: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58877610: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58877615: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58877617: je 0x5887765f
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58877619: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887761F: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877625: jle 0x58877631
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x58877627: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887762D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5887762F: jne 0x58877633
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58877631: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58877633: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58877637: push edx
        __asm _emit 0x52
        // 0x58877638: lea edx, [edi + 0x1ef]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xEF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887763E: push edx
        __asm _emit 0x52
        // 0x5887763F: lea edx, [ebp + 0x23a]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877645: push edx
        __asm _emit 0x52
        // 0x58877646: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887764C: push ecx
        __asm _emit 0x51
        // 0x5887764D: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58877653: push esi
        __asm _emit 0x56
        // 0x58877654: push ecx
        __asm _emit 0x51
        // 0x58877655: push edx
        __asm _emit 0x52
        // 0x58877656: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58877658: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x67
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5887765D: jmp 0x58877661
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887765F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58877661: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877666: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58877668: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5887766C: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877672: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xB6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877677: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887767D: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877682: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xB6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877687: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887768C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58877691: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58877694: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58877698: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5887769D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5887769F: je 0x588776f4
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588776A1: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588776A7: cmp dword ptr [ecx + 0x160], 0x1e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        // 0x588776AE: jle 0x588776c6
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588776B0: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588776B6: je 0x588776c6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588776B8: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588776BE: add ecx, 0x780
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588776C4: jmp 0x588776c8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588776C6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588776C8: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588776CC: push edx
        __asm _emit 0x52
        // 0x588776CD: lea edx, [edi + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588776D3: push edx
        __asm _emit 0x52
        // 0x588776D4: lea edx, [ebp + 0x277]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588776DA: push edx
        __asm _emit 0x52
        // 0x588776DB: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588776E1: push ecx
        __asm _emit 0x51
        // 0x588776E2: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588776E8: push esi
        __asm _emit 0x56
        // 0x588776E9: push ecx
        __asm _emit 0x51
        // 0x588776EA: push edx
        __asm _emit 0x52
        // 0x588776EB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588776ED: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x66
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588776F2: jmp 0x588776f6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588776F4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588776F6: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588776FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588776FD: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58877701: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877707: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xB6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887770C: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877712: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877717: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xB5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887771C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877721: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58877726: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58877729: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887772D: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58877732: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58877734: je 0x58877789
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x58877736: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887773C: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x58877743: jle 0x5887775b
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58877745: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887774B: je 0x5887775b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887774D: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877753: add ecx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877759: jmp 0x5887775d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887775B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887775D: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58877761: push edx
        __asm _emit 0x52
        // 0x58877762: lea edx, [edi + 0x1c9]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877768: push edx
        __asm _emit 0x52
        // 0x58877769: lea edx, [ebp + 0x277]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887776F: push edx
        __asm _emit 0x52
        // 0x58877770: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58877776: push ecx
        __asm _emit 0x51
        // 0x58877777: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887777D: push esi
        __asm _emit 0x56
        // 0x5887777E: push ecx
        __asm _emit 0x51
        // 0x5887777F: push edx
        __asm _emit 0x52
        // 0x58877780: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58877782: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x66
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877787: jmp 0x5887778b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58877789: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887778B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877790: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58877792: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58877796: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887779C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xB5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588777A1: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777A7: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777AC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xB5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588777B1: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777B6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588777BB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588777BE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588777C2: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588777C7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588777C9: je 0x58877806
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588777CB: push ebx
        __asm _emit 0x53
        // 0x588777CC: push ebx
        __asm _emit 0x53
        // 0x588777CD: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777D2: lea ecx, [edi + 0x1d9]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xD9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777D8: push ecx
        __asm _emit 0x51
        // 0x588777D9: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588777DF: lea edx, [ebp + 0x265]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777E5: push edx
        __asm _emit 0x52
        // 0x588777E6: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777EC: add edi, 0xac
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777F2: push edi
        __asm _emit 0x57
        // 0x588777F3: add ebp, 0xad
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588777F9: push ebp
        __asm _emit 0x55
        // 0x588777FA: push ecx
        __asm _emit 0x51
        // 0x588777FB: push ebx
        __asm _emit 0x53
        // 0x588777FC: push edx
        __asm _emit 0x52
        // 0x588777FD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588777FF: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x98
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58877804: jmp 0x58877808
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58877806: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58877808: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887780E: mov ecx, 0x47
        __asm _emit 0xB9
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877813: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887781A: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877820: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877825: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58877829: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887782F: push ebx
        __asm _emit 0x53
        // 0x58877830: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58877834: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877839: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887783E: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58877842: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58877846: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887784B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887784E: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877853: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58877856: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887785A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887785C: call 0x58876e50
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877861: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58877863: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58877867: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887786E: pop ecx
        __asm _emit 0x59
        // 0x5887786F: pop edi
        __asm _emit 0x5F
        // 0x58877870: pop esi
        __asm _emit 0x5E
        // 0x58877871: pop ebp
        __asm _emit 0x5D
        // 0x58877872: pop ebx
        __asm _emit 0x5B
        // 0x58877873: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58877876: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
