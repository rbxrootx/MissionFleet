// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875F650 .. +0x36 bytes.
// Source symbol alias: FUN_5875f650.
extern "C" __declspec(naked) void FUN_5875f650() {
    __asm {
        // 0x5875F650: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875F654: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5875F656: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875F658: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5875F65B: mov dword ptr [eax + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5875F65E: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875F662: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5875F665: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875F669: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875F66C: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875F670: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5875F673: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875F677: mov dword ptr [eax], 0x5898dbac
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xAC
        __asm _emit 0xDB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F67D: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5875F680: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5875F683: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
