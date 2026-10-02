// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886F17D .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_5886f17d() {
    __asm {
        // 0x5886F17D: mov eax, dword ptr fs:[0x18]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886F183: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x5886F186: mov eax, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x68
        // 0x5886F189: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5886F18C: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5886F18E: ret
        __asm _emit 0xC3
    }
}
