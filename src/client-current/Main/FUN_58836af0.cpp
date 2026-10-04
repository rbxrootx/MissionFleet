// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58836AF0 .. +0x9E bytes.
// Source symbol alias: FUN_58836af0.
extern "C" __declspec(naked) void FUN_58836af0() {
    __asm {
        // 0x58836AF0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58836AF3: push ebx
        __asm _emit 0x53
        // 0x58836AF4: push esi
        __asm _emit 0x56
        // 0x58836AF5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58836AF7: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58836AFA: push edi
        __asm _emit 0x57
        // 0x58836AFB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58836AFD: jne 0x58836b03
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58836AFF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58836B01: jmp 0x58836b19
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58836B03: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58836B06: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58836B08: mov eax, 0x30c30c31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x30
        // 0x58836B0D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58836B0F: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58836B12: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58836B14: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58836B17: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58836B19: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58836B1C: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58836B1E: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58836B20: mov eax, 0x30c30c31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x30
        // 0x58836B25: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58836B27: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58836B2A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58836B2C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58836B2F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58836B31: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58836B33: jae 0x58836b67
        __asm _emit 0x73
        __asm _emit 0x32
        // 0x58836B35: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58836B39: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58836B3E: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58836B42: push ecx
        __asm _emit 0x51
        // 0x58836B43: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58836B47: push edx
        __asm _emit 0x52
        // 0x58836B48: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58836B4B: push eax
        __asm _emit 0x50
        // 0x58836B4C: push ecx
        __asm _emit 0x51
        // 0x58836B4D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58836B4F: push edi
        __asm _emit 0x57
        // 0x58836B50: call 0x58834ad0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58836B55: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58836B58: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x58836B5B: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58836B5E: pop edi
        __asm _emit 0x5F
        // 0x58836B5F: pop esi
        __asm _emit 0x5E
        // 0x58836B60: pop ebx
        __asm _emit 0x5B
        // 0x58836B61: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58836B64: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58836B67: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58836B69: jbe 0x58836b70
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58836B6B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x61
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836B70: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58836B74: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58836B76: push edx
        __asm _emit 0x52
        // 0x58836B77: push edi
        __asm _emit 0x57
        // 0x58836B78: push eax
        __asm _emit 0x50
        // 0x58836B79: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58836B7D: push eax
        __asm _emit 0x50
        // 0x58836B7E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58836B80: call 0x58836a20
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58836B85: pop edi
        __asm _emit 0x5F
        // 0x58836B86: pop esi
        __asm _emit 0x5E
        // 0x58836B87: pop ebx
        __asm _emit 0x5B
        // 0x58836B88: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58836B8B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
