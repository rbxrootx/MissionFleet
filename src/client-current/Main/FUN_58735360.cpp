// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58735360 .. +0x6B bytes.
// Source symbol alias: FUN_58735360.
extern "C" __declspec(naked) void FUN_58735360() {
    __asm {
        // 0x58735360: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58735362: push 0x5897dc08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xDC
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58735367: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873536D: push eax
        __asm _emit 0x50
        // 0x5873536E: push ecx
        __asm _emit 0x51
        // 0x5873536F: push esi
        __asm _emit 0x56
        // 0x58735370: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58735375: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58735377: push eax
        __asm _emit 0x50
        // 0x58735378: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873537C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735382: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58735384: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58735388: call 0x5897cc84
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873538D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873538F: lea ecx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58735392: mov dword ptr [esi], 0x5898ca9c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x9C
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58735398: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5873539A: mov dword ptr [ecx + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x5873539D: mov dword ptr [ecx + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587353A4: push eax
        __asm _emit 0x50
        // 0x587353A5: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587353A9: mov byte ptr [ecx + 4], al
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587353AC: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587353B0: push eax
        __asm _emit 0x50
        // 0x587353B1: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587353B6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587353B8: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587353BC: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587353C3: pop ecx
        __asm _emit 0x59
        // 0x587353C4: pop esi
        __asm _emit 0x5E
        // 0x587353C5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587353C8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
