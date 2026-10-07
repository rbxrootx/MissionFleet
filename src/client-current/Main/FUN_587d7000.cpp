// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1230 bytes in 1 exact ranges.
// Source symbol alias: FUN_587d7000.

// Ghidra body range 0x587D7000..0x587D74CE; 1230 mapped bytes.
extern "C" __declspec(naked) void FUN_587d7000_segment_00() {
    __asm {
        // 0x587D7000: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587D7002: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D7007: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D700D: push eax
        __asm _emit 0x50
        // 0x587D700E: push ecx
        __asm _emit 0x51
        // 0x587D700F: push ebx
        __asm _emit 0x53
        // 0x587D7010: push ebp
        __asm _emit 0x55
        // 0x587D7011: push esi
        __asm _emit 0x56
        // 0x587D7012: push edi
        __asm _emit 0x57
        // 0x587D7013: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D7018: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D701A: push eax
        __asm _emit 0x50
        // 0x587D701B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D701F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7025: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D7027: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D702B: mov dword ptr [esi], 0x5899b824
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0xB8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D7031: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587D7034: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D7036: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D703A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D703C: je 0x587d7049
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D703E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7040: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7042: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7044: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7046: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x587D7049: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587D704C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D704E: je 0x587d705b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D7050: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7052: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7054: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7056: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7058: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x587D705B: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587D705E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7060: je 0x587d706d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D7062: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7064: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7066: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7068: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D706A: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x587D706D: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587D7070: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7072: je 0x587d707f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D7074: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7076: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7078: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D707A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D707C: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x587D707F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587D7082: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7084: je 0x587d7091
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D7086: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7088: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D708A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D708C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D708E: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x587D7091: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7097: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7099: je 0x587d70a9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D709B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D709D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D709F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D70A1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D70A3: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D70A9: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D70AF: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D70B1: je 0x587d70c1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D70B3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D70B5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D70B7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D70B9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D70BB: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D70C1: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D70C7: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D70C9: je 0x587d70d9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D70CB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D70CD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D70CF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D70D1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D70D3: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D70D9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D70DB: call 0x587d6740
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D70E0: mov ecx, dword ptr [esi + 0x5d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D70E6: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D70E8: je 0x587d70f8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D70EA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D70EC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D70EE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D70F0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D70F2: mov dword ptr [esi + 0x5d0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D70F8: mov ecx, dword ptr [esi + 0x5f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D70FE: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7100: je 0x587d7110
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7102: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7104: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7106: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7108: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D710A: mov dword ptr [esi + 0x5f8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7110: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7116: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7118: je 0x587d7128
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D711A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D711C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D711E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7120: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7122: mov dword ptr [esi + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7128: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D712E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7130: je 0x587d7140
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7132: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7134: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7136: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7138: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D713A: mov dword ptr [esi + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7140: mov ecx, dword ptr [esi + 0x590]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7146: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7148: je 0x587d7158
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D714A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D714C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D714E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7150: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7152: mov dword ptr [esi + 0x590], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7158: mov ecx, dword ptr [esi + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D715E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7160: je 0x587d7170
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7162: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7164: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7166: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7168: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D716A: mov dword ptr [esi + 0x58c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7170: mov ecx, dword ptr [esi + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7176: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7178: je 0x587d7188
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D717A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D717C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D717E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7180: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7182: mov dword ptr [esi + 0x588], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7188: mov ecx, dword ptr [esi + 0x594]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D718E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7190: je 0x587d71a0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7192: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7194: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7196: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7198: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D719A: mov dword ptr [esi + 0x594], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D71A0: mov ecx, dword ptr [esi + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D71A6: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D71A8: je 0x587d71b8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D71AA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D71AC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D71AE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D71B0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D71B2: mov dword ptr [esi + 0x5a0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D71B8: mov ecx, dword ptr [esi + 0x59c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D71BE: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D71C0: je 0x587d71d0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D71C2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D71C4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D71C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D71C8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D71CA: mov dword ptr [esi + 0x59c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D71D0: mov ecx, dword ptr [esi + 0x5a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D71D6: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D71D8: je 0x587d71e8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D71DA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D71DC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D71DE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D71E0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D71E2: mov dword ptr [esi + 0x5a8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D71E8: mov ecx, dword ptr [esi + 0x5a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D71EE: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D71F0: je 0x587d7200
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D71F2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D71F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D71F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D71F8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D71FA: mov dword ptr [esi + 0x5a4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7200: mov ecx, dword ptr [esi + 0x5ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7206: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7208: je 0x587d7218
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D720A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D720C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D720E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7210: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7212: mov dword ptr [esi + 0x5ac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7218: mov ecx, dword ptr [esi + 0x5b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D721E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7220: je 0x587d7230
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7222: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7224: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7226: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7228: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D722A: mov dword ptr [esi + 0x5b0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7230: mov ecx, dword ptr [esi + 0x5b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7236: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7238: je 0x587d7248
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D723A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D723C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D723E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7240: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7242: mov dword ptr [esi + 0x5b4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7248: mov ecx, dword ptr [esi + 0x5b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D724E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7250: je 0x587d7260
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7252: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7254: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7256: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7258: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D725A: mov dword ptr [esi + 0x5b8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7260: mov ecx, dword ptr [esi + 0x5bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7266: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7268: je 0x587d7278
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D726A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D726C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D726E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7270: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7272: mov dword ptr [esi + 0x5bc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7278: mov ecx, dword ptr [esi + 0x5c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D727E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7280: je 0x587d7290
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7282: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7284: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7286: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7288: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D728A: mov dword ptr [esi + 0x5c0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7290: mov ecx, dword ptr [esi + 0x4d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7296: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7298: je 0x587d72a8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D729A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D729C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D729E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D72A0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D72A2: mov dword ptr [esi + 0x4d4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D72A8: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D72AE: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D72B0: je 0x587d72c0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D72B2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D72B4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D72B6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D72B8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D72BA: mov dword ptr [esi + 0x4d8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D72C0: mov ecx, dword ptr [esi + 0x4dc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D72C6: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D72C8: je 0x587d72d8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D72CA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D72CC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D72CE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D72D0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D72D2: mov dword ptr [esi + 0x4dc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D72D8: lea ebx, [esi + 0x4e0]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D72DE: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D72E3: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587D72E5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D72E7: je 0x587d72f3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D72E9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D72EB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D72ED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D72EF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D72F1: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x587D72F3: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587D72F6: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587D72F9: jne 0x587d72e3
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x587D72FB: mov ecx, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7301: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7303: je 0x587d7313
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7305: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7307: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7309: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D730B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D730D: mov dword ptr [esi + 0xda8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7313: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7319: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D731B: je 0x587d732b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D731D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D731F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7321: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7323: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7325: mov dword ptr [esi + 0xdc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D732B: mov ecx, dword ptr [esi + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7331: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7333: je 0x587d7343
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7335: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7337: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7339: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D733B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D733D: mov dword ptr [esi + 0xdac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7343: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7349: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D734B: je 0x587d735b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D734D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D734F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7351: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7353: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7355: mov dword ptr [esi + 0xdbc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D735B: mov ecx, dword ptr [esi + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7361: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7363: je 0x587d7373
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7365: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7367: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7369: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D736B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D736D: mov dword ptr [esi + 0xdb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7373: mov ecx, dword ptr [esi + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7379: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D737B: je 0x587d738b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D737D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D737F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7381: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7383: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7385: mov dword ptr [esi + 0xdb8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D738B: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7391: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7393: je 0x587d73a3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7395: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7397: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7399: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D739B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D739D: mov dword ptr [esi + 0xdb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D73A3: mov ecx, dword ptr [esi + 0xdd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D73A9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D73AB: je 0x587d73bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D73AD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D73AF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D73B1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D73B3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D73B5: mov dword ptr [esi + 0xdd0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D73BB: mov ecx, dword ptr [esi + 0xdc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D73C1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D73C3: je 0x587d73d3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D73C5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D73C7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D73C9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D73CB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D73CD: mov dword ptr [esi + 0xdc0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D73D3: mov ecx, dword ptr [esi + 0x478]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D73D9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D73DB: je 0x587d73eb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D73DD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D73DF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D73E1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D73E3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D73E5: mov dword ptr [esi + 0x478], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D73EB: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D73F1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D73F3: je 0x587d7403
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D73F5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D73F7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D73F9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D73FB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D73FD: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7403: mov ecx, dword ptr [esi + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7409: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D740B: je 0x587d741b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D740D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D740F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7411: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7413: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7415: mov dword ptr [esi + 0x4f4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D741B: mov ecx, dword ptr [esi + 0x4f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7421: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7423: je 0x587d7433
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7425: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7427: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7429: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D742B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D742D: mov dword ptr [esi + 0x4f8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7433: mov ecx, dword ptr [esi + 0x4fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7439: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D743B: je 0x587d744b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D743D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D743F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7441: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7443: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7445: mov dword ptr [esi + 0x4fc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D744B: mov ecx, dword ptr [esi + 0x1044]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7451: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7453: je 0x587d7463
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7455: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7457: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7459: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D745B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D745D: mov dword ptr [esi + 0x1044], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7463: mov ecx, dword ptr [esi + 0x1048]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7469: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D746B: je 0x587d747b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D746D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D746F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7471: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7473: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D7475: mov dword ptr [esi + 0x1048], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D747B: mov ecx, dword ptr [esi + 0x104c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7481: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D7483: je 0x587d7493
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D7485: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D7487: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D7489: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D748B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D748D: mov dword ptr [esi + 0x104c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7493: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7499: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587D749B: je 0x587d74ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D749D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D749F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D74A1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D74A3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D74A5: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D74AB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D74AD: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D74B5: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D74BA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D74BE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D74C5: pop ecx
        __asm _emit 0x59
        // 0x587D74C6: pop edi
        __asm _emit 0x5F
        // 0x587D74C7: pop esi
        __asm _emit 0x5E
        // 0x587D74C8: pop ebp
        __asm _emit 0x5D
        // 0x587D74C9: pop ebx
        __asm _emit 0x5B
        // 0x587D74CA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D74CD: ret
        __asm _emit 0xC3
    }
}
