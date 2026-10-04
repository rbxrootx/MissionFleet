// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C7CE0 .. +0x4C bytes.
// Source symbol alias: FUN_587c7ce0.
extern "C" __declspec(naked) void FUN_587c7ce0() {
    __asm {
        // 0x587C7CE0: push edi
        __asm _emit 0x57
        // 0x587C7CE1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587C7CE3: mov ecx, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x58
        // 0x587C7CE6: dec ecx
        __asm _emit 0x49
        // 0x587C7CE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C7CE9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587C7CEB: jle 0x587c7d28
        __asm _emit 0x7E
        __asm _emit 0x3B
        // 0x587C7CED: push ebx
        __asm _emit 0x53
        // 0x587C7CEE: push ebp
        __asm _emit 0x55
        // 0x587C7CEF: push esi
        __asm _emit 0x56
        // 0x587C7CF0: lea esi, [edi + 0xac]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7CF6: cmp eax, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C7CFA: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587C7CFC: mov bx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x587C7D00: setge cl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC1
        // 0x587C7D03: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x01
        // 0x587C7D06: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587C7D0A: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7D0F: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x587C7D12: or cx, bx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xCB
        // 0x587C7D15: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x24
        // 0x587C7D19: mov edx, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x58
        // 0x587C7D1C: inc eax
        __asm _emit 0x40
        // 0x587C7D1D: dec edx
        __asm _emit 0x4A
        // 0x587C7D1E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587C7D21: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587C7D23: jl 0x587c7cf6
        __asm _emit 0x7C
        __asm _emit 0xD1
        // 0x587C7D25: pop esi
        __asm _emit 0x5E
        // 0x587C7D26: pop ebp
        __asm _emit 0x5D
        // 0x587C7D27: pop ebx
        __asm _emit 0x5B
        // 0x587C7D28: pop edi
        __asm _emit 0x5F
        // 0x587C7D29: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
