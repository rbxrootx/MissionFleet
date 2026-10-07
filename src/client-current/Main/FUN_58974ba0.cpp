// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 89 bytes in 1 exact ranges.
// Source symbol alias: FUN_58974ba0.

// Ghidra body range 0x58974BA0..0x58974BF9; 89 mapped bytes.
extern "C" __declspec(naked) void FUN_58974ba0_segment_00() {
    __asm {
        // 0x58974BA0: push esi
        __asm _emit 0x56
        // 0x58974BA1: push edi
        __asm _emit 0x57
        // 0x58974BA2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58974BA6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58974BA8: lea eax, [edi + 3]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x03
        // 0x58974BAB: push eax
        __asm _emit 0x50
        // 0x58974BAC: call 0x58973f60
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974BB1: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58974BB3: lea edx, [edi + 5]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x05
        // 0x58974BB6: push edx
        __asm _emit 0x52
        // 0x58974BB7: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x58974BBA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974BBC: call 0x58973f60
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974BC1: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58974BC3: mov dword ptr [ecx + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x58974BC6: mov al, byte ptr [edi + 7]
        __asm _emit 0x8A
        __asm _emit 0x47
        __asm _emit 0x07
        // 0x58974BC9: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58974BCB: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58974BCD: jne 0x58974be4
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58974BCF: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974BD3: mov dword ptr [edx + 0x70], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974BDA: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58974BDC: pop edi
        __asm _emit 0x5F
        // 0x58974BDD: pop esi
        __asm _emit 0x5E
        // 0x58974BDE: mov dword ptr [eax + 0x74], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x58974BE1: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58974BE4: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974BE8: mov dword ptr [edx + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974BEF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58974BF1: pop edi
        __asm _emit 0x5F
        // 0x58974BF2: pop esi
        __asm _emit 0x5E
        // 0x58974BF3: mov dword ptr [eax + 0x74], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x58974BF6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
