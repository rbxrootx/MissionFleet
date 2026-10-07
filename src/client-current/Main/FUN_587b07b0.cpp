// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B07B0 .. +0x36 bytes.
// Source symbol alias: FUN_587b07b0.
extern "C" __declspec(naked) void FUN_587b07b0() {
    __asm {
        // 0x587B07B0: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07B6: mov eax, dword ptr [ecx + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07BC: lea eax, [eax + edx + 0x384]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07C3: push esi
        __asm _emit 0x56
        // 0x587B07C4: cdq
        __asm _emit 0x99
        // 0x587B07C5: mov esi, 0xe10
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07CA: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587B07CC: pop esi
        __asm _emit 0x5E
        // 0x587B07CD: mov dword ptr [ecx + 0xe4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07D3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587B07D5: jge 0x587b07e3
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x587B07D7: add edx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07DD: mov dword ptr [ecx + 0xe4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B07E3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B07E5: ret
        __asm _emit 0xC3
    }
}
