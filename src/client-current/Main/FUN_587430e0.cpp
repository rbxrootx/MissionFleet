// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 82 bytes in 1 exact ranges.
// Source symbol alias: FUN_587430e0.

// Ghidra body range 0x587430E0..0x58743132; 82 mapped bytes.
extern "C" __declspec(naked) void FUN_587430e0_segment_00() {
    __asm {
        // 0x587430E0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587430E4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587430E6: push esi
        __asm _emit 0x56
        // 0x587430E7: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587430EA: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x587430EC: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587430EF: cmp byte ptr [esi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587430F3: jne 0x587430f8
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587430F5: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587430F8: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587430FB: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587430FE: mov ecx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x18
        // 0x58743101: pop esi
        __asm _emit 0x5E
        // 0x58743102: cmp edx, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58743105: jne 0x58743113
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58743107: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5874310A: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874310D: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58743110: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58743113: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58743116: cmp edx, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58743119: jne 0x58743127
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5874311B: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5874311E: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58743121: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58743124: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58743127: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58743129: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874312C: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5874312F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
