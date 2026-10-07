// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 55 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9020.

// Ghidra body range 0x587B9020..0x587B9057; 55 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9020_segment_00() {
    __asm {
        // 0x587B9020: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9024: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9026: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B9028: je 0x587b9042
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587B902A: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B902E: inc edx
        __asm _emit 0x42
        // 0x587B902F: push edx
        __asm _emit 0x52
        // 0x587B9030: push eax
        __asm _emit 0x50
        // 0x587B9031: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9033: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9035: push 0x800100f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B903A: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x7C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B903F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B9042: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9044: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9046: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9048: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B904A: push 0x800100f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B904F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x7C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9054: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
