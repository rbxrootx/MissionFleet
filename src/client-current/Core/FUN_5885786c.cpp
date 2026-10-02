// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885786C .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5885786c() {
    __asm {
        // 0x5885786C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885786E: push ebp
        __asm _emit 0x55
        // 0x5885786F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58857871: mov ecx, dword ptr [0x58906040]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58857877: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885787A: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5885787D: xor eax, dword ptr [0x58906040]
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58857883: ror eax, cl
        __asm _emit 0xD3
        __asm _emit 0xC8
        // 0x58857885: pop ebp
        __asm _emit 0x5D
        // 0x58857886: ret
        __asm _emit 0xC3
    }
}
