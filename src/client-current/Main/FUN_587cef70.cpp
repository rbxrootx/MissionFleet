// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 64 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cef70.

// Ghidra body range 0x587CEF70..0x587CEFB0; 64 mapped bytes.
extern "C" __declspec(naked) void FUN_587cef70_segment_00() {
    __asm {
        // 0x587CEF70: push esi
        __asm _emit 0x56
        // 0x587CEF71: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CEF73: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEF79: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CEF7D: movzx edx, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEF84: push eax
        __asm _emit 0x50
        // 0x587CEF85: push ecx
        __asm _emit 0x51
        // 0x587CEF86: mov ecx, dword ptr [esi + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEF8C: push edx
        __asm _emit 0x52
        // 0x587CEF8D: call 0x588cba30
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xCA
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587CEF92: mov ecx, dword ptr [esi + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEF98: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CEF9A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CEF9D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CEF9F: mov ecx, dword ptr [esi + 0xadc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEFA5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CEFA7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CEFAA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CEFAC: pop esi
        __asm _emit 0x5E
        // 0x587CEFAD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
