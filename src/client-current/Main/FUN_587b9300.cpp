// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 29 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9300.

// Ghidra body range 0x587B9300..0x587B931D; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9300_segment_00() {
    __asm {
        // 0x587B9300: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9304: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9308: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B930A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B930C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B930E: push eax
        __asm _emit 0x50
        // 0x587B930F: push edx
        __asm _emit 0x52
        // 0x587B9310: push 0x80010f08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9315: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B931A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
