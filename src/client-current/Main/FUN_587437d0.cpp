// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 137 bytes in 1 exact ranges.
// Source symbol alias: FUN_587437d0.

// Ghidra body range 0x587437D0..0x58743859; 137 mapped bytes.
extern "C" __declspec(naked) void FUN_587437d0_segment_00() {
    __asm {
        // 0x587437D0: push esi
        __asm _emit 0x56
        // 0x587437D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587437D3: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587437D6: jne 0x587437dd
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587437D8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587437DD: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587437E0: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587437E4: je 0x587437f8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587437E6: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587437E9: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587437EC: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587437F0: je 0x58743857
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x587437F2: pop esi
        __asm _emit 0x5E
        // 0x587437F3: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0x7A
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587437F8: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587437FA: cmp byte ptr [ecx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587437FE: jne 0x58743820
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58743800: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58743803: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743807: jne 0x5874381b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58743809: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743810: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58743812: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58743815: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743819: je 0x58743810
        __asm _emit 0x74
        __asm _emit 0xF5
        // 0x5874381B: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874381E: pop esi
        __asm _emit 0x5E
        // 0x5874381F: ret
        __asm _emit 0xC3
        // 0x58743820: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58743823: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743827: jne 0x58743845
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58743829: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743830: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58743833: cmp ecx, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x08
        // 0x58743835: jne 0x58743845
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58743837: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5874383A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5874383C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5874383F: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743843: je 0x58743830
        __asm _emit 0x74
        __asm _emit 0xEB
        // 0x58743845: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58743848: cmp byte ptr [ecx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5874384C: je 0x58743854
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874384E: pop esi
        __asm _emit 0x5E
        // 0x5874384F: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0x1E
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743854: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58743857: pop esi
        __asm _emit 0x5E
        // 0x58743858: ret
        __asm _emit 0xC3
    }
}
