// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58832760 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_58832760() {
    __asm {
        // 0x58832760: push 0x5884ed90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xED
        __asm _emit 0x84
        __asm _emit 0x58
        // 0x58832765: push dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883276C: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58832770: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58832774: lea ebp, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58832778: sub esp, eax
        __asm _emit 0x2B
        __asm _emit 0xE0
        // 0x5883277A: push ebx
        __asm _emit 0x53
        // 0x5883277B: push esi
        __asm _emit 0x56
        // 0x5883277C: push edi
        __asm _emit 0x57
        // 0x5883277D: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58832782: xor dword ptr [ebp - 4], eax
        __asm _emit 0x31
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58832785: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58832787: push eax
        __asm _emit 0x50
        // 0x58832788: mov dword ptr [ebp - 0x18], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xE8
        // 0x5883278B: push dword ptr [ebp - 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5883278E: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58832791: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832798: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5883279B: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5883279E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588327A4: ret
        __asm _emit 0xC3
    }
}
