// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58889020 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58889020() {
    __asm {
        // 0x58889020: push esi
        __asm _emit 0x56
        // 0x58889021: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58889023: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58889026: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58889029: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5888902C: push eax
        __asm _emit 0x50
        // 0x5888902D: push edx
        __asm _emit 0x52
        // 0x5888902E: call 0x587b67a0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xD7
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58889033: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58889036: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58889038: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5888903B: pop esi
        __asm _emit 0x5E
        // 0x5888903C: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
