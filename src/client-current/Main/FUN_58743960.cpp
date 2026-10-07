// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 104 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743960.

// Ghidra body range 0x58743960..0x587439C8; 104 mapped bytes.
extern "C" __declspec(naked) void FUN_58743960_segment_00() {
    __asm {
        // 0x58743960: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58743964: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874396B: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5874396D: cmp dword ptr [ecx + edx*8 + 0x34], 6
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xD1
        __asm _emit 0x34
        __asm _emit 0x06
        // 0x58743972: push esi
        __asm _emit 0x56
        // 0x58743973: lea esi, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xD1
        // 0x58743976: jne 0x5874397f
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58743978: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874397C: sub dword ptr [esi + 0x40], edx
        __asm _emit 0x29
        __asm _emit 0x56
        __asm _emit 0x40
        // 0x5874397F: mov edx, dword ptr [ecx + 0x70c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743985: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58743988: jl 0x5874399c
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x5874398A: pop esi
        __asm _emit 0x5E
        // 0x5874398B: mov dword ptr [esp + 8], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743993: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58743997: jmp 0x587435d0
        __asm _emit 0xE9
        __asm _emit 0x34
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874399C: cmp dword ptr [esi + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x587439A0: pop esi
        __asm _emit 0x5E
        // 0x587439A1: jne 0x587439b8
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587439A3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587439A5: jle 0x587439c5
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x587439A7: mov dword ptr [esp + 8], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587439AF: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587439B3: jmp 0x587435d0
        __asm _emit 0xE9
        __asm _emit 0x18
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587439B8: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587439BC: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587439C0: jmp 0x587435d0
        __asm _emit 0xE9
        __asm _emit 0x0B
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587439C5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
