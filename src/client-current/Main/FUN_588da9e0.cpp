// Shared state-reset/routing helper called by verified FUN_587FAEC0 and
// FUN_587FD890. It clears receiver bit 0 at +0x24 and DWORD +0x6088, then
// calls FUN_587E8750 with ECX=[0x58A2459C], stack args (this, 5) when that
// global object's +0x218E0 is nonzero, or stack args (this, 1) otherwise.
// Field meanings, why the caller selects each mode, and the downstream
// visible effect remain unresolved; see docs/current-main-state-reset-routing.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DA9E0 .. +0x36 bytes.
// Source symbol alias: FUN_588da9e0.
extern "C" __declspec(naked) void FUN_588da9e0() {
    __asm {
        // 0x588DA9E0: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588DA9E2: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA9E7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DA9EB: mov dword ptr [eax + 0x6088], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA9F5: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA9FB: cmp dword ptr [ecx + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAA02: je 0x588daa0d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588DAA04: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588DAA06: push eax
        __asm _emit 0x50
        // 0x588DAA07: call 0x587e8750
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xDD
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DAA0C: ret
        __asm _emit 0xC3
        // 0x588DAA0D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DAA0F: push eax
        __asm _emit 0x50
        // 0x588DAA10: call 0x587e8750
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xDD
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DAA15: ret
        __asm _emit 0xC3
    }
}
