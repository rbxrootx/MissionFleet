// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588701D2 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_588701d2() {
    __asm {
        // 0x588701D2: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588701D4: push 0x588ed5b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xD5
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588701D9: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x25
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588701DE: and dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x588701E2: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588701E4: call 0x58863c1c
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588701E9: pop ecx
        __asm _emit 0x59
        // 0x588701EA: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x588701EE: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588701F0: pop esi
        __asm _emit 0x5E
        // 0x588701F1: mov dword ptr [ebp - 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x588701F4: cmp esi, dword ptr [0x58969614]
        __asm _emit 0x3B
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588701FA: je 0x58870255
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588701FC: mov eax, dword ptr [0x58969618]
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58870201: mov eax, dword ptr [eax + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB0
        // 0x58870204: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58870206: je 0x58870252
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x58870208: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5887020B: nop
        __asm _emit 0x90
        // 0x5887020C: shr eax, 0xd
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0D
        // 0x5887020F: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58870211: je 0x58870229
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58870213: mov eax, dword ptr [0x58969618]
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58870218: push dword ptr [eax + esi*4]
        __asm _emit 0xFF
        __asm _emit 0x34
        __asm _emit 0xB0
        // 0x5887021B: call 0x58851481
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x12
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58870220: pop ecx
        __asm _emit 0x59
        // 0x58870221: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58870224: je 0x58870229
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58870226: inc dword ptr [ebp - 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x58870229: mov eax, dword ptr [0x58969618]
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5887022E: mov eax, dword ptr [eax + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB0
        // 0x58870231: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58870234: push eax
        __asm _emit 0x50
        // 0x58870235: call dword ptr [0x58894218]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5887023B: mov eax, dword ptr [0x58969618]
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58870240: push dword ptr [eax + esi*4]
        __asm _emit 0xFF
        __asm _emit 0x34
        __asm _emit 0xB0
        // 0x58870243: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58870248: pop ecx
        __asm _emit 0x59
        // 0x58870249: mov eax, dword ptr [0x58969618]
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5887024E: and dword ptr [eax + esi*4], 0
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        // 0x58870252: inc esi
        __asm _emit 0x46
        // 0x58870253: jmp 0x588701f1
        __asm _emit 0xEB
        __asm _emit 0x9C
        // 0x58870255: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887025C: call 0x58870274
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870261: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x58870264: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x58870267: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887026E: pop ecx
        __asm _emit 0x59
        // 0x5887026F: pop edi
        __asm _emit 0x5F
        // 0x58870270: pop esi
        __asm _emit 0x5E
        // 0x58870271: pop ebx
        __asm _emit 0x5B
        // 0x58870272: leave
        __asm _emit 0xC9
        // 0x58870273: ret
        __asm _emit 0xC3
    }
}
