// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B91B0 .. +0x28 bytes.
// Source symbol alias: FUN_587b91b0.
extern "C" __declspec(naked) void FUN_587b91b0() {
    __asm {
        // 0x587B91B0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B91B4: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x587B91B7: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587B91B9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B91BB: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587B91BD: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587B91BF: push edx
        __asm _emit 0x52
        // 0x587B91C0: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B91C4: push edx
        __asm _emit 0x52
        // 0x587B91C5: push eax
        __asm _emit 0x50
        // 0x587B91C6: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B91CA: push eax
        __asm _emit 0x50
        // 0x587B91CB: push 0x80010f03
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B91D0: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x7A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B91D5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
