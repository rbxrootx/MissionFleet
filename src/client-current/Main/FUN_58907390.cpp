// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907390 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58907390() {
    __asm {
        // 0x58907390: mov eax, dword ptr [ecx + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907396: push eax
        __asm _emit 0x50
        // 0x58907397: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890739C: ret
        __asm _emit 0xC3
    }
}
