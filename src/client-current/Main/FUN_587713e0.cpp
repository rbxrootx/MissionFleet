// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 79 bytes in 1 exact ranges.
// Source symbol alias: FUN_587713e0.

// Ghidra body range 0x587713E0..0x5877142F; 79 mapped bytes.
extern "C" __declspec(naked) void FUN_587713e0_segment_00() {
    __asm {
        // 0x587713E0: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587713E4: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587713E9: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x587713EC: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587713F1: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587713F4: jne 0x5877142e
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x587713F6: or word ptr [ecx + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x587713FB: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587713FF: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771404: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x58771407: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877140C: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5877140F: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58771413: mov eax, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x58771416: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58771419: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5877141C: add edx, 0x104
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771422: push edx
        __asm _emit 0x52
        // 0x58771423: add eax, 0x12c
        __asm _emit 0x05
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771428: push eax
        __asm _emit 0x50
        // 0x58771429: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x1E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877142E: ret
        __asm _emit 0xC3
    }
}
