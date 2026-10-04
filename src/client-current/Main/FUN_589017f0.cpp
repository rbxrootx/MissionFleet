// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x589017F0 .. +0x75 bytes.
// Source symbol alias: FUN_589017f0.
extern "C" __declspec(naked) void FUN_589017f0() {
    __asm {
        // 0x589017F0: push esi
        __asm _emit 0x56
        // 0x589017F1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589017F5: push edi
        __asm _emit 0x57
        // 0x589017F6: push esi
        __asm _emit 0x56
        // 0x589017F7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x589017F9: call 0x589016d0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589017FE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58901800: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58901803: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58901805: inc eax
        __asm _emit 0x40
        // 0x58901806: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58901808: jne 0x58901803
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5890180A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5890180C: cmp eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x46
        // 0x5890180F: ja 0x58901860
        __asm _emit 0x77
        __asm _emit 0x4F
        // 0x58901811: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58901814: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58901817: jge 0x58901860
        __asm _emit 0x7D
        __asm _emit 0x47
        // 0x58901819: imul eax, eax, 0x47
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x47
        // 0x5890181C: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5890181E: mov esi, 0x47
        __asm _emit 0xBE
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901823: lea eax, [eax + edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x38
        __asm _emit 0x08
        // 0x58901827: jmp 0x58901830
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58901829: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901830: lea ecx, [esi + 0x7fffffb7]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB7
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58901836: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58901838: je 0x58901855
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5890183A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5890183C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5890183E: je 0x58901855
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58901840: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58901842: inc eax
        __asm _emit 0x40
        // 0x58901843: inc edx
        __asm _emit 0x42
        // 0x58901844: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58901847: jne 0x58901830
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58901849: dec eax
        __asm _emit 0x48
        // 0x5890184A: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890184D: inc dword ptr [edi + 4]
        __asm _emit 0xFF
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58901850: pop edi
        __asm _emit 0x5F
        // 0x58901851: pop esi
        __asm _emit 0x5E
        // 0x58901852: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58901855: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58901857: jne 0x5890185a
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58901859: dec eax
        __asm _emit 0x48
        // 0x5890185A: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890185D: inc dword ptr [edi + 4]
        __asm _emit 0xFF
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58901860: pop edi
        __asm _emit 0x5F
        // 0x58901861: pop esi
        __asm _emit 0x5E
        // 0x58901862: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
