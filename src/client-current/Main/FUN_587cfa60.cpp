// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CFA60 .. +0x6D bytes.
// Source symbol alias: FUN_587cfa60.
extern "C" __declspec(naked) void FUN_587cfa60() {
    __asm {
        // 0x587CFA60: push ecx
        __asm _emit 0x51
        // 0x587CFA61: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CFA67: push ebx
        __asm _emit 0x53
        // 0x587CFA68: mov ebx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x587CFA6B: push esi
        __asm _emit 0x56
        // 0x587CFA6C: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587CFA6F: mov edx, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x74
        // 0x587CFA72: push edi
        __asm _emit 0x57
        // 0x587CFA73: mov edi, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x68
        // 0x587CFA76: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587CFA78: sub eax, dword ptr [ecx + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x587CFA7B: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x587CFA7D: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CFA81: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFA87: imul edi, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF8
        // 0x587CFA8A: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x587CFA8C: jg 0x587cfac6
        __asm _emit 0x7F
        __asm _emit 0x38
        // 0x587CFA8E: mov edi, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x6C
        // 0x587CFA91: push ebp
        __asm _emit 0x55
        // 0x587CFA92: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587CFA94: imul ebp, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xE8
        // 0x587CFA97: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x587CFA99: pop ebp
        __asm _emit 0x5D
        // 0x587CFA9A: jl 0x587cfac6
        __asm _emit 0x7C
        __asm _emit 0x2A
        // 0x587CFA9C: sub esi, dword ptr [ecx + 0x78]
        __asm _emit 0x2B
        __asm _emit 0x71
        __asm _emit 0x78
        // 0x587CFA9F: mov ecx, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x7C
        // 0x587CFAA2: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x587CFAA4: imul edi, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFE
        // 0x587CFAA7: imul ecx, ecx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFAAD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587CFAAF: jg 0x587cfac6
        __asm _emit 0x7F
        __asm _emit 0x15
        // 0x587CFAB1: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CFAB5: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x587CFAB8: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587CFABA: jl 0x587cfac6
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x587CFABC: pop edi
        __asm _emit 0x5F
        // 0x587CFABD: pop esi
        __asm _emit 0x5E
        // 0x587CFABE: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFAC3: pop ebx
        __asm _emit 0x5B
        // 0x587CFAC4: pop ecx
        __asm _emit 0x59
        // 0x587CFAC5: ret
        __asm _emit 0xC3
        // 0x587CFAC6: pop edi
        __asm _emit 0x5F
        // 0x587CFAC7: pop esi
        __asm _emit 0x5E
        // 0x587CFAC8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CFACA: pop ebx
        __asm _emit 0x5B
        // 0x587CFACB: pop ecx
        __asm _emit 0x59
        // 0x587CFACC: ret
        __asm _emit 0xC3
    }
}
