// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58853B90 .. +0x82 bytes.
// Source symbol alias: FUN_58853b90.
extern "C" __declspec(naked) void FUN_58853b90() {
    __asm {
        // 0x58853B90: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853B95: push esi
        __asm _emit 0x56
        // 0x58853B96: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58853B98: mov cl, byte ptr [eax + 0x74]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x58853B9B: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58853B9D: je 0x58853ba4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58853B9F: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x58853BA2: jne 0x58853c10
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x58853BA4: cmp dword ptr [esi + 0x2cc], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58853BAE: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58853BB4: jne 0x58853be4
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x58853BB6: push 0x2f
        __asm _emit 0x6A
        __asm _emit 0x2F
        // 0x58853BB8: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x3A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58853BBD: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853BC3: push 0x2f
        __asm _emit 0x6A
        __asm _emit 0x2F
        // 0x58853BC5: call 0x587e5c10
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58853BCA: mov dword ptr [esi + 0x2cc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853BD4: mov eax, dword ptr [esi + 0x2cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853BDA: push eax
        __asm _emit 0x50
        // 0x58853BDB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58853BDD: call 0x58853570
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58853BE2: pop esi
        __asm _emit 0x5E
        // 0x58853BE3: ret
        __asm _emit 0xC3
        // 0x58853BE4: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x58853BE6: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x39
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58853BEB: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58853BF1: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x58853BF3: call 0x587e5c10
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58853BF8: mov dword ptr [esi + 0x2cc], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58853C02: mov eax, dword ptr [esi + 0x2cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853C08: push eax
        __asm _emit 0x50
        // 0x58853C09: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58853C0B: call 0x58853570
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58853C10: pop esi
        __asm _emit 0x5E
        // 0x58853C11: ret
        __asm _emit 0xC3
    }
}
