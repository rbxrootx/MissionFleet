// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9270 .. +0x1E bytes.
// Source symbol alias: FUN_587b9270.
extern "C" __declspec(naked) void FUN_587b9270() {
    __asm {
        // 0x587B9270: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9274: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B9277: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587B9279: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B927B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B927D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B927F: push edx
        __asm _emit 0x52
        // 0x587B9280: push eax
        __asm _emit 0x50
        // 0x587B9281: push 0x80010f06
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9286: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B928B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
