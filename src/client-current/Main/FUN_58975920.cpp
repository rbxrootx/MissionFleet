// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 95 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975920.

// Ghidra body range 0x58975920..0x5897597F; 95 mapped bytes.
extern "C" __declspec(naked) void FUN_58975920_segment_00() {
    __asm {
        // 0x58975920: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58975924: mov ecx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x58975927: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x5897592A: ja 0x5897596f
        __asm _emit 0x77
        __asm _emit 0x43
        // 0x5897592C: jmp dword ptr [ecx*4 + 0x58975980]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x80
        __asm _emit 0x59
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975933: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975935: push eax
        __asm _emit 0x50
        // 0x58975936: call 0x589759a0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897593B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5897593E: ret
        __asm _emit 0xC3
        // 0x5897593F: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58975941: push eax
        __asm _emit 0x50
        // 0x58975942: call 0x589759a0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975947: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5897594A: ret
        __asm _emit 0xC3
        // 0x5897594B: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5897594D: push eax
        __asm _emit 0x50
        // 0x5897594E: call 0x589759a0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975953: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58975956: ret
        __asm _emit 0xC3
        // 0x58975957: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58975959: push eax
        __asm _emit 0x50
        // 0x5897595A: call 0x589759a0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897595F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58975962: ret
        __asm _emit 0xC3
        // 0x58975963: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975965: push eax
        __asm _emit 0x50
        // 0x58975966: call 0x589759a0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897596B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5897596E: ret
        __asm _emit 0xC3
        // 0x5897596F: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58975971: push eax
        __asm _emit 0x50
        // 0x58975972: mov dword ptr [ecx + 0x14], 9
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975979: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5897597B: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897597D: pop ecx
        __asm _emit 0x59
        // 0x5897597E: ret
        __asm _emit 0xC3
    }
}
