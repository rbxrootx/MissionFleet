// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B92B0 .. +0x26 bytes.
// Source symbol alias: FUN_587b92b0.
extern "C" __declspec(naked) void FUN_587b92b0() {
    __asm {
        // 0x587B92B0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B92B4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B92B6: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B92BD: push edx
        __asm _emit 0x52
        // 0x587B92BE: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B92C2: push edx
        __asm _emit 0x52
        // 0x587B92C3: push eax
        __asm _emit 0x50
        // 0x587B92C4: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B92C8: push eax
        __asm _emit 0x50
        // 0x587B92C9: push 0x80010f12
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B92CE: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B92D3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
