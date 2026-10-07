// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 58 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9340.

// Ghidra body range 0x587B9340..0x587B937A; 58 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9340_segment_00() {
    __asm {
        // 0x587B9340: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9344: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9346: push 0x839
        __asm _emit 0x68
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B934B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B934D: jne 0x587b9365
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587B934F: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9353: push eax
        __asm _emit 0x50
        // 0x587B9354: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9356: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9358: push 0x80010f10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B935D: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9362: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B9365: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9369: push edx
        __asm _emit 0x52
        // 0x587B936A: push eax
        __asm _emit 0x50
        // 0x587B936B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B936D: push 0x80010f14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9372: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x78
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9377: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
