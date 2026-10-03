// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B6360 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_587b6360() {
    __asm {
        // 0x587B6360: push edi
        __asm _emit 0x57
        // 0x587B6361: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B6363: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x587B6367: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x587B6369: je 0x587b638e
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587B636B: call 0x587b60a0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B6370: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x587B6373: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B6375: je 0x587b638e
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587B6377: push esi
        __asm _emit 0x56
        // 0x587B6378: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x38
        // 0x587B637B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587B637D: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587B6380: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x587B6383: je 0x587b6390
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587B6385: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587B6387: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6389: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B638B: jne 0x587b6378
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x587B638D: pop esi
        __asm _emit 0x5E
        // 0x587B638E: pop edi
        __asm _emit 0x5F
        // 0x587B638F: ret
        __asm _emit 0xC3
        // 0x587B6390: pop esi
        __asm _emit 0x5E
        // 0x587B6391: pop edi
        __asm _emit 0x5F
        // 0x587B6392: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
