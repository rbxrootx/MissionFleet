// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 73 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_58748650.

// Ghidra body range 0x58748650..0x5874867F; 47 mapped bytes.
extern "C" __declspec(naked) void FUN_58748650_segment_00() {
    __asm {
        // 0x58748650: push ebx
        __asm _emit 0x53
        // 0x58748651: push ebp
        __asm _emit 0x55
        // 0x58748652: push esi
        __asm _emit 0x56
        // 0x58748653: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58748657: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58748659: push edi
        __asm _emit 0x57
        // 0x5874865A: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5874865C: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x5874865E: cmp byte ptr [esi + 0x2d], bl
        __asm _emit 0x38
        __asm _emit 0x5E
        __asm _emit 0x2D
        // 0x58748661: jne 0x5874869f
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x58748663: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58748666: push eax
        __asm _emit 0x50
        // 0x58748667: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58748669: call 0x58748650
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874866E: cmp dword ptr [esi + 0x24], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58748672: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x58748674: jb 0x58748682
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x58748676: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58748679: push ecx
        __asm _emit 0x51
        // 0x5874867A: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x45
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58748682..0x58748695; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_58748650_segment_01() {
    __asm {
        // 0x58748682: mov dword ptr [esi + 0x24], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748689: mov dword ptr [esi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x20
        // 0x5874868C: push esi
        __asm _emit 0x56
        // 0x5874868D: mov byte ptr [esi + 0x10], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58748690: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x45
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5874869F..0x587486A6; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_58748650_segment_02() {
    __asm {
        // 0x5874869F: pop edi
        __asm _emit 0x5F
        // 0x587486A0: pop esi
        __asm _emit 0x5E
        // 0x587486A1: pop ebp
        __asm _emit 0x5D
        // 0x587486A2: pop ebx
        __asm _emit 0x5B
        // 0x587486A3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
