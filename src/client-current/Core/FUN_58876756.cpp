// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58876756 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_58876756() {
    __asm {
        // 0x58876756: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58876758: push ebp
        __asm _emit 0x55
        // 0x58876759: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5887675B: push esi
        __asm _emit 0x56
        // 0x5887675C: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5887675F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58876761: je 0x588767bc
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x58876763: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58876765: cmp eax, dword ptr [0x58907310]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887676B: je 0x58876774
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5887676D: push eax
        __asm _emit 0x50
        // 0x5887676E: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876773: pop ecx
        __asm _emit 0x59
        // 0x58876774: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58876777: cmp eax, dword ptr [0x58907314]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887677D: je 0x58876786
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5887677F: push eax
        __asm _emit 0x50
        // 0x58876780: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876785: pop ecx
        __asm _emit 0x59
        // 0x58876786: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58876789: cmp eax, dword ptr [0x58907318]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887678F: je 0x58876798
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58876791: push eax
        __asm _emit 0x50
        // 0x58876792: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876797: pop ecx
        __asm _emit 0x59
        // 0x58876798: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x5887679B: cmp eax, dword ptr [0x58907340]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588767A1: je 0x588767aa
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588767A3: push eax
        __asm _emit 0x50
        // 0x588767A4: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588767A9: pop ecx
        __asm _emit 0x59
        // 0x588767AA: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588767AD: cmp eax, dword ptr [0x58907344]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588767B3: je 0x588767bc
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588767B5: push eax
        __asm _emit 0x50
        // 0x588767B6: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588767BB: pop ecx
        __asm _emit 0x59
        // 0x588767BC: pop esi
        __asm _emit 0x5E
        // 0x588767BD: pop ebp
        __asm _emit 0x5D
        // 0x588767BE: ret
        __asm _emit 0xC3
    }
}
