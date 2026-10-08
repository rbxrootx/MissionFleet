// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 776 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882ec80.

// Ghidra body range 0x5882EC80..0x5882EF88; 776 mapped bytes.
extern "C" __declspec(naked) void FUN_5882ec80_segment_00() {
    __asm {
        // 0x5882EC80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882EC82: push 0x58988648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882EC87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EC8D: push eax
        __asm _emit 0x50
        // 0x5882EC8E: push ecx
        __asm _emit 0x51
        // 0x5882EC8F: push esi
        __asm _emit 0x56
        // 0x5882EC90: push edi
        __asm _emit 0x57
        // 0x5882EC91: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882EC96: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882EC98: push eax
        __asm _emit 0x50
        // 0x5882EC99: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882EC9D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ECA3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882ECA5: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882ECA9: mov dword ptr [esi], 0x5899e000
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882ECAF: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ECB5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5882ECB7: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882ECBB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ECBD: je 0x5882eccd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ECBF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ECC1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ECC3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ECC5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ECC7: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ECCD: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ECD3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ECD5: je 0x5882ece5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ECD7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ECD9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ECDB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ECDD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ECDF: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ECE5: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ECEB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ECED: je 0x5882ecfd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ECEF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ECF1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ECF3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ECF5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ECF7: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ECFD: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED03: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ED05: je 0x5882ed15
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ED07: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ED09: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ED0B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ED0D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ED0F: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED15: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED1B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ED1D: je 0x5882ed2d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ED1F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ED21: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ED23: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ED25: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ED27: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED2D: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED33: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ED35: je 0x5882ed45
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ED37: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ED39: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ED3B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ED3D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ED3F: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED45: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED4B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ED4D: je 0x5882ed5d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ED4F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ED51: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ED53: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ED55: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ED57: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED5D: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED63: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ED65: je 0x5882ed75
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ED67: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ED69: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ED6B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ED6D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ED6F: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED75: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED7B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ED7D: je 0x5882ed8d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ED7F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ED81: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ED83: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ED85: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ED87: mov dword ptr [esi + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED8D: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882ED93: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882ED95: je 0x5882eda5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882ED97: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882ED99: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882ED9B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882ED9D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882ED9F: mov dword ptr [esi + 0xbc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EDA5: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EDAB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EDAD: je 0x5882edbd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EDAF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EDB1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EDB3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EDB5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EDB7: mov dword ptr [esi + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EDBD: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EDC3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EDC5: je 0x5882edd5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EDC7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EDC9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EDCB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EDCD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EDCF: mov dword ptr [esi + 0xe0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EDD5: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EDDB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EDDD: je 0x5882eded
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EDDF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EDE1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EDE3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EDE5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EDE7: mov dword ptr [esi + 0xe4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EDED: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EDF3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EDF5: je 0x5882ee05
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EDF7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EDF9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EDFB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EDFD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EDFF: mov dword ptr [esi + 0xe8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE05: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE0B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EE0D: je 0x5882ee1d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EE0F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EE11: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EE13: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EE15: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EE17: mov dword ptr [esi + 0xec], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE1D: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE23: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EE25: je 0x5882ee35
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EE27: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EE29: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EE2B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EE2D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EE2F: mov dword ptr [esi + 0xf0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE35: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE3B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EE3D: je 0x5882ee4d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EE3F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EE41: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EE43: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EE45: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EE47: mov dword ptr [esi + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE4D: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE53: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EE55: je 0x5882ee65
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EE57: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EE59: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EE5B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EE5D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EE5F: mov dword ptr [esi + 0xf8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE65: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE6B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EE6D: je 0x5882ee7d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EE6F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EE71: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EE73: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EE75: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EE77: mov dword ptr [esi + 0xfc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE7D: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE83: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EE85: je 0x5882ee95
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EE87: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EE89: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EE8B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EE8D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EE8F: mov dword ptr [esi + 0x100], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE95: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EE9B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EE9D: je 0x5882eead
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EE9F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EEA1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EEA3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EEA5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EEA7: mov dword ptr [esi + 0x104], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EEAD: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EEB3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EEB5: je 0x5882eec5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EEB7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EEB9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EEBB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EEBD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EEBF: mov dword ptr [esi + 0x108], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EEC5: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EECB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EECD: je 0x5882eedd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EECF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EED1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EED3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EED5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EED7: mov dword ptr [esi + 0x10c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EEDD: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EEE3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EEE5: je 0x5882eef5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EEE7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EEE9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EEEB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EEED: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EEEF: mov dword ptr [esi + 0x110], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EEF5: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EEFB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EEFD: je 0x5882ef0d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EEFF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EF01: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EF03: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EF05: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EF07: mov dword ptr [esi + 0x114], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF0D: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF13: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EF15: je 0x5882ef25
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EF17: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EF19: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EF1B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EF1D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EF1F: mov dword ptr [esi + 0x118], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF25: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5882EF28: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EF2A: je 0x5882ef37
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5882EF2C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EF2E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EF30: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EF32: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EF34: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5882EF37: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF3D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EF3F: je 0x5882ef4f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EF41: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EF43: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EF45: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EF47: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EF49: mov dword ptr [esi + 0x254], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF4F: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF55: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5882EF57: je 0x5882ef67
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882EF59: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882EF5B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882EF5D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882EF5F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882EF61: mov dword ptr [esi + 0x258], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF67: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882EF69: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882EF71: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x3C
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882EF76: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882EF7A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF81: pop ecx
        __asm _emit 0x59
        // 0x5882EF82: pop edi
        __asm _emit 0x5F
        // 0x5882EF83: pop esi
        __asm _emit 0x5E
        // 0x5882EF84: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882EF87: ret
        __asm _emit 0xC3
    }
}
