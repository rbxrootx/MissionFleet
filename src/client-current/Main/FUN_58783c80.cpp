// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 156 bytes in 1 exact ranges.
// Source symbol alias: FUN_58783c80.

// Ghidra body range 0x58783C80..0x58783D1C; 156 mapped bytes.
extern "C" __declspec(naked) void FUN_58783c80_segment_00() {
    __asm {
        // 0x58783C80: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58783C84: push ebx
        __asm _emit 0x53
        // 0x58783C85: push esi
        __asm _emit 0x56
        // 0x58783C86: push edi
        __asm _emit 0x57
        // 0x58783C87: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58783C8B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58783C8D: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58783C90: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58783C93: push eax
        __asm _emit 0x50
        // 0x58783C94: push ecx
        __asm _emit 0x51
        // 0x58783C95: push edx
        __asm _emit 0x52
        // 0x58783C96: push edi
        __asm _emit 0x57
        // 0x58783C97: call 0x5876c8d0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58783C9C: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58783CA0: fild dword ptr [esp + 0x24]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58783CA4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58783CA7: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x8F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58783CAC: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x8F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58783CB1: movzx ecx, word ptr [esi + 0x6e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x6E
        // 0x58783CB5: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58783CB7: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58783CBA: push ebx
        __asm _emit 0x53
        // 0x58783CBB: push eax
        __asm _emit 0x50
        // 0x58783CBC: push ecx
        __asm _emit 0x51
        // 0x58783CBD: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x82
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58783CC2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58783CC5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58783CC7: jle 0x58783d16
        __asm _emit 0x7E
        __asm _emit 0x4D
        // 0x58783CC9: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58783CCC: movzx ecx, word ptr [edx + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8A
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783CD3: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58783CD5: movzx edx, word ptr [edi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783CDC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58783CDE: push ebx
        __asm _emit 0x53
        // 0x58783CDF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58783CE1: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783CE6: push ecx
        __asm _emit 0x51
        // 0x58783CE7: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58783CEA: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58783CEC: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58783CEE: push eax
        __asm _emit 0x50
        // 0x58783CEF: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58783CF2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58783CF4: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58783CF6: push edx
        __asm _emit 0x52
        // 0x58783CF7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58783CF9: push edi
        __asm _emit 0x57
        // 0x58783CFA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58783CFC: push eax
        __asm _emit 0x50
        // 0x58783CFD: push ecx
        __asm _emit 0x51
        // 0x58783CFE: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58783D04: mov edx, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58783D0A: add edx, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58783D10: push edx
        __asm _emit 0x52
        // 0x58783D11: call 0x587efd60
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xC0
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58783D16: pop edi
        __asm _emit 0x5F
        // 0x58783D17: pop esi
        __asm _emit 0x5E
        // 0x58783D18: pop ebx
        __asm _emit 0x5B
        // 0x58783D19: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
