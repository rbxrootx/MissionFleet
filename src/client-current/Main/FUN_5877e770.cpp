// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877E770 .. +0x26 bytes.
// Source symbol alias: FUN_5877e770.
extern "C" __declspec(naked) void FUN_5877e770() {
    __asm {
        // 0x5877E770: push esi
        __asm _emit 0x56
        // 0x5877E771: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877E775: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5877E778: jge 0x5877e77f
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5877E77A: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E77F: mov eax, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x5877E782: mov dword ptr [ecx + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x5877E785: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x58
        // 0x5877E788: imul eax, dword ptr [ecx + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x5877E78C: cdq
        __asm _emit 0x99
        // 0x5877E78D: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5877E78F: pop esi
        __asm _emit 0x5E
        // 0x5877E790: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x5877E793: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
