// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58789750 .. +0x20 bytes.
// Source symbol alias: FUN_58789750.
extern "C" __declspec(naked) void FUN_58789750() {
    __asm {
        // 0x58789750: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789752: push esi
        __asm _emit 0x56
        // 0x58789753: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58789755: mov dword ptr [esi], 0x58996b78
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x78
        __asm _emit 0x6B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5878975B: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5878975E: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58789761: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58789764: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58789767: call 0x58789620
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878976C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5878976E: pop esi
        __asm _emit 0x5E
        // 0x5878976F: ret
        __asm _emit 0xC3
    }
}
