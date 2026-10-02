// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58876C7D .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_58876c7d() {
    __asm {
        // 0x58876C7D: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58876C7F: push ebp
        __asm _emit 0x55
        // 0x58876C80: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58876C82: push esi
        __asm _emit 0x56
        // 0x58876C83: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58876C86: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58876C88: je 0x58876d5e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876C8E: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58876C90: push esi
        __asm _emit 0x56
        // 0x58876C91: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876C96: lea eax, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58876C99: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58876C9B: push eax
        __asm _emit 0x50
        // 0x58876C9C: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CA1: lea eax, [esi + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x38
        // 0x58876CA4: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58876CA6: push eax
        __asm _emit 0x50
        // 0x58876CA7: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CAC: lea eax, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58876CAF: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58876CB1: push eax
        __asm _emit 0x50
        // 0x58876CB2: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CB7: lea eax, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CBD: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58876CBF: push eax
        __asm _emit 0x50
        // 0x58876CC0: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CC5: push dword ptr [esi + 0xa0]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CCB: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x5F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CD0: push dword ptr [esi + 0xa4]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CD6: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x5F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CDB: push dword ptr [esi + 0xa8]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CE1: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x5F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CE6: lea eax, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CEC: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58876CEE: push eax
        __asm _emit 0x50
        // 0x58876CEF: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876CF4: lea eax, [esi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876CFA: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58876CFC: push eax
        __asm _emit 0x50
        // 0x58876CFD: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876D02: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x44
        // 0x58876D05: lea eax, [esi + 0xec]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D0B: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58876D0D: push eax
        __asm _emit 0x50
        // 0x58876D0E: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876D13: lea eax, [esi + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D19: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58876D1B: push eax
        __asm _emit 0x50
        // 0x58876D1C: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876D21: lea eax, [esi + 0x14c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D27: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58876D29: push eax
        __asm _emit 0x50
        // 0x58876D2A: call 0x588769dc
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876D2F: push dword ptr [esi + 0x154]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D35: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876D3A: push dword ptr [esi + 0x158]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D40: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876D45: push dword ptr [esi + 0x15c]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D4B: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876D50: push dword ptr [esi + 0x160]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876D56: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876D5B: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x58876D5E: pop esi
        __asm _emit 0x5E
        // 0x58876D5F: pop ebp
        __asm _emit 0x5D
        // 0x58876D60: ret
        __asm _emit 0xC3
    }
}
