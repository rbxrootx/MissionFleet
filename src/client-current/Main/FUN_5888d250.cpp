// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888D250 .. +0x77 bytes.
// Source symbol alias: FUN_5888d250.
extern "C" __declspec(naked) void FUN_5888d250() {
    __asm {
        // 0x5888D250: push ebx
        __asm _emit 0x53
        // 0x5888D251: push ebp
        __asm _emit 0x55
        // 0x5888D252: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5888D256: push esi
        __asm _emit 0x56
        // 0x5888D257: push edi
        __asm _emit 0x57
        // 0x5888D258: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888D25C: push edi
        __asm _emit 0x57
        // 0x5888D25D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888D25F: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D265: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5888D267: push ebp
        __asm _emit 0x55
        // 0x5888D268: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xB6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D26D: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D273: mov ebx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D279: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xAE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D27E: add ebx, -0xa
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0xF6
        // 0x5888D281: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5888D283: jne 0x5888d2a3
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5888D285: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D28B: call 0x58908870
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xB5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D290: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D296: mov eax, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D29C: dec eax
        __asm _emit 0x48
        // 0x5888D29D: push eax
        __asm _emit 0x50
        // 0x5888D29E: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D2A3: mov ecx, dword ptr [esi + 0x4c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D2A9: push edi
        __asm _emit 0x57
        // 0x5888D2AA: push ebp
        __asm _emit 0x55
        // 0x5888D2AB: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xEA
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D2B0: mov esi, dword ptr [esi + 0x4c0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D2B6: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5888D2B9: pop edi
        __asm _emit 0x5F
        // 0x5888D2BA: mov dword ptr [esi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D2C1: pop esi
        __asm _emit 0x5E
        // 0x5888D2C2: pop ebp
        __asm _emit 0x5D
        // 0x5888D2C3: pop ebx
        __asm _emit 0x5B
        // 0x5888D2C4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
