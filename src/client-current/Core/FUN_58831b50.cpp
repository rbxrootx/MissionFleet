// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58831B50 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58831b50() {
    __asm {
        // 0x58831B50: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58831B54: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58831B58: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58831B5A: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58831B5E: jne 0x58831b69
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58831B60: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58831B64: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58831B66: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58831B69: push ebx
        __asm _emit 0x53
        // 0x58831B6A: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58831B6C: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58831B6E: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58831B72: mul dword ptr [esp + 0x14]
        __asm _emit 0xF7
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831B76: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x58831B78: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58831B7C: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58831B7E: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58831B80: pop ebx
        __asm _emit 0x5B
        // 0x58831B81: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
