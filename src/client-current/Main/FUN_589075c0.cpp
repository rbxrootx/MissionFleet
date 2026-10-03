// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589075C0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_589075c0() {
    __asm {
        // 0x589075C0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589075C4: push esi
        __asm _emit 0x56
        // 0x589075C5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589075C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589075C9: je 0x589075d8
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x589075CB: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x589075CE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589075D0: je 0x589075d8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x589075D2: cmp dword ptr [eax + 4], 1
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x589075D6: je 0x589075de
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x589075D8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589075DA: pop esi
        __asm _emit 0x5E
        // 0x589075DB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589075DE: mov eax, dword ptr [0x58a28534]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x589075E3: push edi
        __asm _emit 0x57
        // 0x589075E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589075E6: je 0x5890761f
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x589075E8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x589075EA: lea edi, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x589075ED: push edi
        __asm _emit 0x57
        // 0x589075EE: push ecx
        __asm _emit 0x51
        // 0x589075EF: push eax
        __asm _emit 0x50
        // 0x589075F0: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x589075F3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589075F5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589075F7: jne 0x58907646
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x589075F9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x589075FB: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x589075FD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x589075FF: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x1C
        // 0x58907602: push esi
        __asm _emit 0x56
        // 0x58907603: push 0x589a3cd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58907608: push eax
        __asm _emit 0x50
        // 0x58907609: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890760B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890760D: je 0x58907615
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5890760F: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907615: pop edi
        __asm _emit 0x5F
        // 0x58907616: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890761B: pop esi
        __asm _emit 0x5E
        // 0x5890761C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5890761F: mov eax, dword ptr [0x58a28538]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58907624: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907626: je 0x58907646
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58907628: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5890762A: lea edi, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5890762D: push edi
        __asm _emit 0x57
        // 0x5890762E: push ecx
        __asm _emit 0x51
        // 0x5890762F: push eax
        __asm _emit 0x50
        // 0x58907630: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x58907633: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58907635: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907637: jne 0x58907646
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58907639: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5890763C: pop edi
        __asm _emit 0x5F
        // 0x5890763D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907642: pop esi
        __asm _emit 0x5E
        // 0x58907643: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58907646: pop edi
        __asm _emit 0x5F
        // 0x58907647: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58907649: pop esi
        __asm _emit 0x5E
        // 0x5890764A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
