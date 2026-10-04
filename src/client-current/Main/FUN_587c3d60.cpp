// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C3D60 .. +0x61 bytes.
// Source symbol alias: FUN_587c3d60.
extern "C" __declspec(naked) void FUN_587c3d60() {
    __asm {
        // 0x587C3D60: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587C3D64: push ebx
        __asm _emit 0x53
        // 0x587C3D65: cdq
        __asm _emit 0x99
        // 0x587C3D66: push esi
        __asm _emit 0x56
        // 0x587C3D67: mov esi, dword ptr [ecx + 0x1d78]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x78
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C3D6D: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587C3D6F: mov ebx, dword ptr [ecx + 0x1d7c]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x7C
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C3D75: push edi
        __asm _emit 0x57
        // 0x587C3D76: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587C3D78: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C3D7C: cdq
        __asm _emit 0x99
        // 0x587C3D7D: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587C3D7F: cmp esi, 0x12
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x12
        // 0x587C3D82: jne 0x587c3db9
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x587C3D84: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587C3D86: jne 0x587c3db9
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x587C3D88: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587C3D8A: jl 0x587c3db9
        __asm _emit 0x7C
        __asm _emit 0x2D
        // 0x587C3D8C: mov edx, dword ptr [ecx + 0x1d70]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C3D92: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x587C3D94: jge 0x587c3db9
        __asm _emit 0x7D
        __asm _emit 0x23
        // 0x587C3D96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C3D98: jl 0x587c3db9
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587C3D9A: cmp eax, dword ptr [ecx + 0x1d74]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C3DA0: jge 0x587c3db9
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x587C3DA2: mov ecx, dword ptr [ecx + 0x1db4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C3DA8: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587C3DAB: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587C3DAD: pop edi
        __asm _emit 0x5F
        // 0x587C3DAE: lea eax, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x92
        // 0x587C3DB1: pop esi
        __asm _emit 0x5E
        // 0x587C3DB2: lea eax, [ecx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x587C3DB5: pop ebx
        __asm _emit 0x5B
        // 0x587C3DB6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587C3DB9: pop edi
        __asm _emit 0x5F
        // 0x587C3DBA: pop esi
        __asm _emit 0x5E
        // 0x587C3DBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C3DBD: pop ebx
        __asm _emit 0x5B
        // 0x587C3DBE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
