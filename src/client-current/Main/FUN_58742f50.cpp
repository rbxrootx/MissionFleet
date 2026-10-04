// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58742F50 .. +0x60 bytes.
// Source symbol alias: FUN_58742f50.
extern "C" __declspec(naked) void FUN_58742f50() {
    __asm {
        // 0x58742F50: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58742F54: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58742F58: push esi
        __asm _emit 0x56
        // 0x58742F59: push eax
        __asm _emit 0x50
        // 0x58742F5A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58742F5E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58742F60: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58742F64: push ecx
        __asm _emit 0x51
        // 0x58742F65: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58742F69: push edx
        __asm _emit 0x52
        // 0x58742F6A: push eax
        __asm _emit 0x50
        // 0x58742F6B: push ecx
        __asm _emit 0x51
        // 0x58742F6C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58742F6E: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x1A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58742F73: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58742F77: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58742F7B: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58742F7E: mov dword ptr [esi], 0x5898ce84
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58742F84: mov dword ptr [esi + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742F8B: mov dword ptr [esi + 0x58], 5
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742F92: mov dword ptr [esi + 0x5c], 0x3b9aca00
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0xCA
        __asm _emit 0x9A
        __asm _emit 0x3B
        // 0x58742F99: mov dword ptr [esi + 0x60], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742FA0: mov dword ptr [esi + 0x68], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742FA7: mov dword ptr [esi + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58742FAA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58742FAC: pop esi
        __asm _emit 0x5E
        // 0x58742FAD: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
