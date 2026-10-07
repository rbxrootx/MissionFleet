// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 49 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b07f0.

// Ghidra body range 0x587B07F0..0x587B0821; 49 mapped bytes.
extern "C" __declspec(naked) void FUN_587b07f0_segment_00() {
    __asm {
        // 0x587B07F0: mov eax, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07F6: cmp eax, dword ptr [ecx + 0xb8]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07FC: mov dword ptr [ecx + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0802: jg 0x587b080e
        __asm _emit 0x7F
        __asm _emit 0x0A
        // 0x587B0804: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B0806: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B0808: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x587B080B: dec edx
        __asm _emit 0x4A
        // 0x587B080C: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x587B080E: push esi
        __asm _emit 0x56
        // 0x587B080F: cdq
        __asm _emit 0x99
        // 0x587B0810: mov esi, 0xe10
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0815: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587B0817: pop esi
        __asm _emit 0x5E
        // 0x587B0818: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B081A: mov dword ptr [ecx + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0820: ret
        __asm _emit 0xC3
    }
}
