// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58850FBB .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58850fbb() {
    __asm {
        // 0x58850FBB: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58850FBD: push esi
        __asm _emit 0x56
        // 0x58850FBE: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58850FC0: push esi
        __asm _emit 0x56
        // 0x58850FC1: push esi
        __asm _emit 0x56
        // 0x58850FC2: push esi
        __asm _emit 0x56
        // 0x58850FC3: push esi
        __asm _emit 0x56
        // 0x58850FC4: push esi
        __asm _emit 0x56
        // 0x58850FC5: call 0x58850ef7
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850FCA: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58850FCD: push esi
        __asm _emit 0x56
        // 0x58850FCE: push esi
        __asm _emit 0x56
        // 0x58850FCF: push esi
        __asm _emit 0x56
        // 0x58850FD0: push esi
        __asm _emit 0x56
        // 0x58850FD1: push esi
        __asm _emit 0x56
        // 0x58850FD2: call 0x58850fd9
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
