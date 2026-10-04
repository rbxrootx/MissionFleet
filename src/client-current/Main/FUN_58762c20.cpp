// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58762C20 .. +0xAC bytes.
// Source symbol alias: FUN_58762c20.
extern "C" __declspec(naked) void FUN_58762c20() {
    __asm {
        // 0x58762C20: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58762C23: push ebx
        __asm _emit 0x53
        // 0x58762C24: push esi
        __asm _emit 0x56
        // 0x58762C25: push edi
        __asm _emit 0x57
        // 0x58762C26: mov edi, dword ptr [0x589cfc58]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58762C2C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58762C2E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58762C30: jne 0x58762c47
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58762C32: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762C37: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58762C3C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58762C3E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58762C41: mov dword ptr [0x589cfc58], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58762C47: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762C4C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58762C4E: push edi
        __asm _emit 0x57
        // 0x58762C4F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x9F
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58762C54: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58762C58: push eax
        __asm _emit 0x50
        // 0x58762C59: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58762C5E: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762C63: push edi
        __asm _emit 0x57
        // 0x58762C64: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x8D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58762C69: mov ecx, dword ptr [0x589cfc58]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58762C6F: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762C72: push ecx
        __asm _emit 0x51
        // 0x58762C73: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58762C76: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58762C7B: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x58762C7E: mov ebx, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58762C81: mov ecx, dword ptr [0x589cfc58]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58762C87: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x58762C89: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58762C8D: push eax
        __asm _emit 0x50
        // 0x58762C8E: push ecx
        __asm _emit 0x51
        // 0x58762C8F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58762C92: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58762C98: mov edx, dword ptr [0x589cfc58]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58762C9E: push eax
        __asm _emit 0x50
        // 0x58762C9F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58762CA1: push edx
        __asm _emit 0x52
        // 0x58762CA2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58762CA4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58762CA6: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58762CAA: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58762CAD: cdq
        __asm _emit 0x99
        // 0x58762CAE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58762CB0: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58762CB2: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58762CB4: add ecx, 0x109
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762CBA: push ecx
        __asm _emit 0x51
        // 0x58762CBB: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58762CBE: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x06
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762CC3: pop edi
        __asm _emit 0x5F
        // 0x58762CC4: pop esi
        __asm _emit 0x5E
        // 0x58762CC5: pop ebx
        __asm _emit 0x5B
        // 0x58762CC6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58762CC9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
