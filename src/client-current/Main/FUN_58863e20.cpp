// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 55 bytes in 1 exact ranges.
// Source symbol alias: FUN_58863e20.

// Ghidra body range 0x58863E20..0x58863E57; 55 mapped bytes.
extern "C" __declspec(naked) void FUN_58863e20_segment_00() {
    __asm {
        // 0x58863E20: push esi
        __asm _emit 0x56
        // 0x58863E21: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58863E23: mov eax, dword ptr [esi + 0x1f40]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863E29: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58863E2C: je 0x58863e55
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58863E2E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58863E34: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58863E36: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58863E38: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58863E3A: push eax
        __asm _emit 0x50
        // 0x58863E3B: mov eax, dword ptr [esi + 0x648]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863E41: push eax
        __asm _emit 0x50
        // 0x58863E42: push 0x8001020e
        __asm _emit 0x68
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x58863E47: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xCE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58863E4C: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58863E51: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58863E55: pop esi
        __asm _emit 0x5E
        // 0x58863E56: ret
        __asm _emit 0xC3
    }
}
