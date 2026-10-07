// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 41 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9240.

// Ghidra body range 0x587B9240..0x587B9269; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9240_segment_00() {
    __asm {
        // 0x587B9240: push esi
        __asm _emit 0x56
        // 0x587B9241: push edi
        __asm _emit 0x57
        // 0x587B9242: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9246: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9248: push edi
        __asm _emit 0x57
        // 0x587B9249: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B924B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9251: inc eax
        __asm _emit 0x40
        // 0x587B9252: push eax
        __asm _emit 0x50
        // 0x587B9253: push edi
        __asm _emit 0x57
        // 0x587B9254: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9256: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9258: push 0x80010f05
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B925D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B925F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x7A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9264: pop edi
        __asm _emit 0x5F
        // 0x587B9265: pop esi
        __asm _emit 0x5E
        // 0x587B9266: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
