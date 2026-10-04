// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5B50 .. +0x49 bytes.
// Source symbol alias: FUN_587e5b50.
extern "C" __declspec(naked) void FUN_587e5b50() {
    __asm {
        // 0x587E5B50: mov eax, dword ptr [ecx + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B56: or eax, 0x80
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B5B: xor eax, 0x80
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B60: or eax, 0x100
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B65: xor eax, 0x100
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B6A: or eax, 0x800
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B6F: xor eax, 0x800
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B74: or eax, 0x1000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B79: xor eax, 0x1000
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B7E: or eax, 0x200
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B83: xor eax, 0x200
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B88: or eax, 0x400
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B8D: xor eax, 0x400
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B92: mov dword ptr [ecx + 0x394], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B98: ret
        __asm _emit 0xC3
    }
}
