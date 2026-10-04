// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9290 .. +0x1D bytes.
// Source symbol alias: FUN_587b9290.
extern "C" __declspec(naked) void FUN_587b9290() {
    __asm {
        // 0x587B9290: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9294: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9298: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B929A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B929C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B929E: push eax
        __asm _emit 0x50
        // 0x587B929F: push edx
        __asm _emit 0x52
        // 0x587B92A0: push 0x80010f06
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B92A5: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B92AA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
