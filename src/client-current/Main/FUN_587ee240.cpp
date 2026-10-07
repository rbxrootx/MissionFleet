// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 120 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ee240.

// Ghidra body range 0x587EE240..0x587EE2B8; 120 mapped bytes.
extern "C" __declspec(naked) void FUN_587ee240_segment_00() {
    __asm {
        // 0x587EE240: push esi
        __asm _emit 0x56
        // 0x587EE241: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EE245: push edi
        __asm _emit 0x57
        // 0x587EE246: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EE24A: mov dword ptr [ecx + 0x21ce8], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE250: mov dword ptr [ecx + 0x21ce4], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE256: mov ecx, dword ptr [ecx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE25C: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x16
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EE261: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE267: push esi
        __asm _emit 0x56
        // 0x587EE268: call 0x5888cdf0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587EE26D: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE272: mov esi, dword ptr [eax + 0x154]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE278: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EE27C: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE282: push ecx
        __asm _emit 0x51
        // 0x587EE283: push edx
        __asm _emit 0x52
        // 0x587EE284: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE28A: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE290: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587EE293: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587EE295: inc eax
        __asm _emit 0x40
        // 0x587EE296: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587EE298: jne 0x587ee293
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587EE29A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587EE29C: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE2A2: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE2A8: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE2AD: mov dword ptr [eax + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE2B3: pop edi
        __asm _emit 0x5F
        // 0x587EE2B4: pop esi
        __asm _emit 0x5E
        // 0x587EE2B5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
