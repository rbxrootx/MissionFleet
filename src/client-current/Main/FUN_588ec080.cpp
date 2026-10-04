// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EC080 .. +0x7E bytes.
// Source symbol alias: FUN_588ec080.
extern "C" __declspec(naked) void FUN_588ec080() {
    __asm {
        // 0x588EC080: push esi
        __asm _emit 0x56
        // 0x588EC081: push edi
        __asm _emit 0x57
        // 0x588EC082: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EC086: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EC088: mov eax, dword ptr [esi + edi*8 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x588EC08C: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588EC08F: je 0x588ec0e9
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x588EC091: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588EC094: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC09A: jle 0x588ec0af
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EC09C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC09E: jl 0x588ec0af
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EC0A0: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC0A6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EC0A8: je 0x588ec0af
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EC0AA: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588EC0AD: jmp 0x588ec0b1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EC0AF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EC0B1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC0B3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC0B5: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x588EC0B8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EC0BA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC0BC: je 0x588ec0e9
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588EC0BE: mov eax, dword ptr [esi + edi*8 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x588EC0C2: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588EC0C5: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC0CB: jle 0x588ec0e0
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EC0CD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC0CF: jl 0x588ec0e0
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EC0D1: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC0D7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EC0D9: je 0x588ec0e0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EC0DB: mov ecx, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x81
        // 0x588EC0DE: jmp 0x588ec0e2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EC0E0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588EC0E2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588EC0E4: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588EC0E7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EC0E9: mov dword ptr [esi + edi*8 + 8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0x08
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EC0F1: mov dword ptr [esi + edi*8 + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC0F9: pop edi
        __asm _emit 0x5F
        // 0x588EC0FA: pop esi
        __asm _emit 0x5E
        // 0x588EC0FB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
