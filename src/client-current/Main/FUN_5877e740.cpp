// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877E740 .. +0x27 bytes.
// Source symbol alias: FUN_5877e740.
extern "C" __declspec(naked) void FUN_5877e740() {
    __asm {
        // 0x5877E740: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5877E743: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5877E747: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5877E749: jle 0x5877e74d
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5877E74B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877E74D: mov ecx, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x70
        // 0x5877E750: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5877E752: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877E754: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x5877E757: mov dword ptr [ecx + 0x60], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5877E75E: dec edx
        __asm _emit 0x4A
        // 0x5877E75F: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5877E761: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5C
        // 0x5877E764: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
