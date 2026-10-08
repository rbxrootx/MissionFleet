// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 38 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875ec60.

// Ghidra body range 0x5875EC60..0x5875EC86; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_5875ec60_segment_00() {
    __asm {
        // 0x5875EC60: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875EC64: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x5875EC67: push esi
        __asm _emit 0x56
        // 0x5875EC68: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875EC6C: lea eax, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC0
        // 0x5875EC6F: lea eax, [esi + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x86
        // 0x5875EC72: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875EC75: lea edx, [eax + edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0xFF
        // 0x5875EC79: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x5875EC7C: mov dword ptr [ecx + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x5875EC7F: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875EC82: pop esi
        __asm _emit 0x5E
        // 0x5875EC83: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
