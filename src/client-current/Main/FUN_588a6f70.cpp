// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6F70 .. +0xBF bytes.
// Source symbol alias: FUN_588a6f70.
extern "C" __declspec(naked) void FUN_588a6f70() {
    __asm {
        // 0x588A6F70: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588A6F74: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588A6F77: ja 0x588a702c
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F7D: push esi
        __asm _emit 0x56
        // 0x588A6F7E: jmp dword ptr [eax*4 + 0x588a7030]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x70
        __asm _emit 0x8A
        __asm _emit 0x58
        // 0x588A6F85: mov eax, dword ptr [ecx + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F8B: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A6F8F: mov esi, 0xe1ff
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F94: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD6
        // 0x588A6F97: mov esi, 0x100
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F9C: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD6
        // 0x588A6F9F: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A6FA3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6FA5: mov edx, dword ptr [ecx + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6FAB: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x588A6FAE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A6FB0: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588A6FB2: push edx
        __asm _emit 0x52
        // 0x588A6FB3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6FB5: pop esi
        __asm _emit 0x5E
        // 0x588A6FB6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A6FB9: mov eax, dword ptr [ecx + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6FBF: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A6FC3: mov esi, 0xe4ff
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6FC8: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD6
        // 0x588A6FCB: mov esi, 0x400
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6FD0: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD6
        // 0x588A6FD3: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A6FD7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6FD9: mov edx, dword ptr [ecx + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6FDF: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x588A6FE2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6FE4: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588A6FE6: push edx
        __asm _emit 0x52
        // 0x588A6FE7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6FE9: pop esi
        __asm _emit 0x5E
        // 0x588A6FEA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A6FED: mov eax, dword ptr [ecx + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6FF3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6FF5: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588A6FF8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6FFA: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588A6FFC: push eax
        __asm _emit 0x50
        // 0x588A6FFD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6FFF: pop esi
        __asm _emit 0x5E
        // 0x588A7000: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A7003: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A7005: mov edx, dword ptr [ecx + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A700B: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x588A700E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A7010: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588A7012: push edx
        __asm _emit 0x52
        // 0x588A7013: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A7015: pop esi
        __asm _emit 0x5E
        // 0x588A7016: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A7019: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A701F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A7021: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588A7024: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A7026: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588A7028: push eax
        __asm _emit 0x50
        // 0x588A7029: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A702B: pop esi
        __asm _emit 0x5E
        // 0x588A702C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
