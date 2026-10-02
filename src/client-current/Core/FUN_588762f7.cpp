// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588762F7 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_588762f7() {
    __asm {
        // 0x588762F7: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588762F9: push ebp
        __asm _emit 0x55
        // 0x588762FA: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588762FC: push esi
        __asm _emit 0x56
        // 0x588762FD: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58876300: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58876302: je 0x588763f2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876308: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5887630B: cmp eax, dword ptr [0x5890731c]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x1C
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58876311: je 0x5887631a
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58876313: push eax
        __asm _emit 0x50
        // 0x58876314: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876319: pop ecx
        __asm _emit 0x59
        // 0x5887631A: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5887631D: cmp eax, dword ptr [0x58907320]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58876323: je 0x5887632c
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58876325: push eax
        __asm _emit 0x50
        // 0x58876326: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887632B: pop ecx
        __asm _emit 0x59
        // 0x5887632C: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5887632F: cmp eax, dword ptr [0x58907324]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58876335: je 0x5887633e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58876337: push eax
        __asm _emit 0x50
        // 0x58876338: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887633D: pop ecx
        __asm _emit 0x59
        // 0x5887633E: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58876341: cmp eax, dword ptr [0x58907328]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58876347: je 0x58876350
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58876349: push eax
        __asm _emit 0x50
        // 0x5887634A: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887634F: pop ecx
        __asm _emit 0x59
        // 0x58876350: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58876353: cmp eax, dword ptr [0x5890732c]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x2C
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58876359: je 0x58876362
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5887635B: push eax
        __asm _emit 0x50
        // 0x5887635C: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876361: pop ecx
        __asm _emit 0x59
        // 0x58876362: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58876365: cmp eax, dword ptr [0x58907330]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887636B: je 0x58876374
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5887636D: push eax
        __asm _emit 0x50
        // 0x5887636E: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876373: pop ecx
        __asm _emit 0x59
        // 0x58876374: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58876377: cmp eax, dword ptr [0x58907334]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887637D: je 0x58876386
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5887637F: push eax
        __asm _emit 0x50
        // 0x58876380: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876385: pop ecx
        __asm _emit 0x59
        // 0x58876386: mov eax, dword ptr [esi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x38
        // 0x58876389: cmp eax, dword ptr [0x58907348]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887638F: je 0x58876398
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58876391: push eax
        __asm _emit 0x50
        // 0x58876392: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876397: pop ecx
        __asm _emit 0x59
        // 0x58876398: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5887639B: cmp eax, dword ptr [0x5890734c]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x4C
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588763A1: je 0x588763aa
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588763A3: push eax
        __asm _emit 0x50
        // 0x588763A4: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588763A9: pop ecx
        __asm _emit 0x59
        // 0x588763AA: mov eax, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x40
        // 0x588763AD: cmp eax, dword ptr [0x58907350]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588763B3: je 0x588763bc
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588763B5: push eax
        __asm _emit 0x50
        // 0x588763B6: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588763BB: pop ecx
        __asm _emit 0x59
        // 0x588763BC: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x588763BF: cmp eax, dword ptr [0x58907354]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588763C5: je 0x588763ce
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588763C7: push eax
        __asm _emit 0x50
        // 0x588763C8: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588763CD: pop ecx
        __asm _emit 0x59
        // 0x588763CE: mov eax, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x48
        // 0x588763D1: cmp eax, dword ptr [0x58907358]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588763D7: je 0x588763e0
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588763D9: push eax
        __asm _emit 0x50
        // 0x588763DA: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588763DF: pop ecx
        __asm _emit 0x59
        // 0x588763E0: mov eax, dword ptr [esi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x4C
        // 0x588763E3: cmp eax, dword ptr [0x5890735c]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x5C
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588763E9: je 0x588763f2
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588763EB: push eax
        __asm _emit 0x50
        // 0x588763EC: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588763F1: pop ecx
        __asm _emit 0x59
        // 0x588763F2: pop esi
        __asm _emit 0x5E
        // 0x588763F3: pop ebp
        __asm _emit 0x5D
        // 0x588763F4: ret
        __asm _emit 0xC3
    }
}
