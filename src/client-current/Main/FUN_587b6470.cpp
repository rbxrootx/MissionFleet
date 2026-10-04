// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B6470 .. +0x37 bytes.
// Source symbol alias: FUN_587b6470.
extern "C" __declspec(naked) void FUN_587b6470() {
    __asm {
        // 0x587B6470: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B6474: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B6478: mov dword ptr [ecx + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x587B647B: mov dword ptr [ecx + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x587B647E: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x587B6481: jne 0x587b64a4
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587B6483: mov edx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x587B6486: mov edx, dword ptr [edx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B648D: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587B6490: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B6495: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B6497: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B649A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B649C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B649F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B64A1: mov dword ptr [ecx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x587B64A4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
