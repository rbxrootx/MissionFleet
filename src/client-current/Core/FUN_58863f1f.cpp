// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58863F1F .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58863f1f() {
    __asm {
        // 0x58863F1F: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58863F21: push ebp
        __asm _emit 0x55
        // 0x58863F22: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58863F24: push ecx
        __asm _emit 0x51
        // 0x58863F25: call 0x58868ba0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863F2A: mov ecx, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x4C
        // 0x58863F2D: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x58863F30: lea ecx, [ebp - 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x58863F33: push ecx
        __asm _emit 0x51
        // 0x58863F34: push eax
        __asm _emit 0x50
        // 0x58863F35: call 0x5886cf21
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863F3A: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58863F3D: pop ecx
        __asm _emit 0x59
        // 0x58863F3E: pop ecx
        __asm _emit 0x59
        // 0x58863F3F: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58863F41: leave
        __asm _emit 0xC9
        // 0x58863F42: ret
        __asm _emit 0xC3
    }
}
