// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 151 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f74c0.

// Ghidra body range 0x588F74C0..0x588F7557; 151 mapped bytes.
extern "C" __declspec(naked) void FUN_588f74c0_segment_00() {
    __asm {
        // 0x588F74C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F74C2: push 0x58989fae
        __asm _emit 0x68
        __asm _emit 0xAE
        __asm _emit 0x9F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F74C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F74CD: push eax
        __asm _emit 0x50
        // 0x588F74CE: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F74D3: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F74D5: push eax
        __asm _emit 0x50
        // 0x588F74D6: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F74DA: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F74E0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F74E5: test byte ptr [0x58a284bc], al
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0xBC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F74EB: jne 0x588f7542
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x588F74ED: or dword ptr [0x58a284bc], eax
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0xBC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F74F3: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588F74F5: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F74FD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7502: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F7505: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F7507: je 0x588f752b
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588F7509: mov dword ptr [eax], 0x589a1a14
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F750F: mov dword ptr [eax + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7516: mov dword ptr [0x58a284b8], eax
        __asm _emit 0xA3
        __asm _emit 0xB8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F751B: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F751F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7526: pop ecx
        __asm _emit 0x59
        // 0x588F7527: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F752A: ret
        __asm _emit 0xC3
        // 0x588F752B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F752D: mov dword ptr [0x58a284b8], eax
        __asm _emit 0xA3
        __asm _emit 0xB8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F7532: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F7536: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F753D: pop ecx
        __asm _emit 0x59
        // 0x588F753E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F7541: ret
        __asm _emit 0xC3
        // 0x588F7542: mov eax, dword ptr [0x58a284b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F7547: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F754B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7552: pop ecx
        __asm _emit 0x59
        // 0x588F7553: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F7556: ret
        __asm _emit 0xC3
    }
}
