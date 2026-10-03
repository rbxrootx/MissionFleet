// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874F990 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_5874f990() {
    __asm {
        // 0x5874F990: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874F992: push 0x5897f888
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874F997: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F99D: push eax
        __asm _emit 0x50
        // 0x5874F99E: push ecx
        __asm _emit 0x51
        // 0x5874F99F: push esi
        __asm _emit 0x56
        // 0x5874F9A0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874F9A5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874F9A7: push eax
        __asm _emit 0x50
        // 0x5874F9A8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874F9AC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F9B2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874F9B4: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874F9B8: mov dword ptr [esi], 0x5898d5c8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC8
        __asm _emit 0xD5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874F9BE: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5874F9C1: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F9C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874F9CB: je 0x5874f9dc
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5874F9CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5874F9CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874F9D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5874F9D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5874F9D5: mov dword ptr [esi + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F9DC: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5874F9DF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874F9E1: je 0x5874f9f2
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5874F9E3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5874F9E5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874F9E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5874F9E9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5874F9EB: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F9F2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874F9F4: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F9FC: call 0x58902d60
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x33
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874FA01: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874FA05: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FA0C: pop ecx
        __asm _emit 0x59
        // 0x5874FA0D: pop esi
        __asm _emit 0x5E
        // 0x5874FA0E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5874FA11: ret
        __asm _emit 0xC3
    }
}
