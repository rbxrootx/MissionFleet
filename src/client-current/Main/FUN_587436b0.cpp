// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 99 bytes in 1 exact ranges.
// Source symbol alias: FUN_587436b0.

// Ghidra body range 0x587436B0..0x58743713; 99 mapped bytes.
extern "C" __declspec(naked) void FUN_587436b0_segment_00() {
    __asm {
        // 0x587436B0: push esi
        __asm _emit 0x56
        // 0x587436B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587436B3: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587436B6: jne 0x587436bd
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587436B8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x95
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587436BD: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587436C0: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587436C4: je 0x587436cc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587436C6: pop esi
        __asm _emit 0x5E
        // 0x587436C7: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0xA6
        __asm _emit 0x95
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587436CC: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587436CF: cmp byte ptr [ecx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587436D3: jne 0x587436ef
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587436D5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587436D7: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587436DB: jne 0x587436ea
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587436DD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587436E0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587436E2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587436E4: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587436E8: je 0x587436e0
        __asm _emit 0x74
        __asm _emit 0xF6
        // 0x587436EA: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587436ED: pop esi
        __asm _emit 0x5E
        // 0x587436EE: ret
        __asm _emit 0xC3
        // 0x587436EF: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587436F2: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587436F6: jne 0x5874370e
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587436F8: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587436FB: cmp ecx, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587436FE: jne 0x5874370e
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58743700: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58743703: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58743705: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58743708: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5874370C: je 0x587436f8
        __asm _emit 0x74
        __asm _emit 0xEA
        // 0x5874370E: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58743711: pop esi
        __asm _emit 0x5E
        // 0x58743712: ret
        __asm _emit 0xC3
    }
}
