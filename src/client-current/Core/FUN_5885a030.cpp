// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A030 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_5885a030() {
    __asm {
        // 0x5885A030: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885A032: call 0x58859ec2
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A037: pop ecx
        __asm _emit 0x59
        // 0x5885A038: ret
        __asm _emit 0xC3
    }
}
