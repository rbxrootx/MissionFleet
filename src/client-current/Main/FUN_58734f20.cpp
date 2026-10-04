// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58734F20 .. +0xDA bytes.
// Source symbol alias: FUN_58734f20.
extern "C" __declspec(naked) void FUN_58734f20() {
    __asm {
        // 0x58734F20: push ebx
        __asm _emit 0x53
        // 0x58734F21: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58734F25: push ebp
        __asm _emit 0x55
        // 0x58734F26: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58734F2A: push esi
        __asm _emit 0x56
        // 0x58734F2B: push edi
        __asm _emit 0x57
        // 0x58734F2C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58734F2E: cmp dword ptr [ebx + 0x14], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x14
        // 0x58734F31: jae 0x58734f38
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58734F33: call 0x589714f6
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xC5
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58734F38: mov edi, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x14
        // 0x58734F3B: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58734F3F: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x58734F41: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58734F43: jae 0x58734f47
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x58734F45: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58734F47: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58734F49: jne 0x58734f6a
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58734F4B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58734F4D: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x58734F4F: push edi
        __asm _emit 0x57
        // 0x58734F50: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58734F52: call 0x58734d50
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734F57: push ebp
        __asm _emit 0x55
        // 0x58734F58: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58734F5A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58734F5C: call 0x58734d50
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734F61: pop edi
        __asm _emit 0x5F
        // 0x58734F62: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58734F64: pop esi
        __asm _emit 0x5E
        // 0x58734F65: pop ebp
        __asm _emit 0x5D
        // 0x58734F66: pop ebx
        __asm _emit 0x5B
        // 0x58734F67: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58734F6A: cmp edi, -2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFE
        // 0x58734F6D: jbe 0x58734f74
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58734F6F: call 0x589714be
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xC5
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58734F74: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58734F77: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58734F79: jae 0x58734f96
        __asm _emit 0x73
        __asm _emit 0x1B
        // 0x58734F7B: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58734F7E: push eax
        __asm _emit 0x50
        // 0x58734F7F: push edi
        __asm _emit 0x57
        // 0x58734F80: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58734F82: call 0x58734de0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734F87: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58734F89: jbe 0x58734ff1
        __asm _emit 0x76
        __asm _emit 0x66
        // 0x58734F8B: cmp dword ptr [ebx + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x58734F8F: jb 0x58734fc0
        __asm _emit 0x72
        __asm _emit 0x2F
        // 0x58734F91: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x58734F94: jmp 0x58734fc3
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x58734F96: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58734F98: jne 0x58734f89
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x58734F9A: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58734F9D: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58734FA0: jb 0x58734fb1
        __asm _emit 0x72
        __asm _emit 0x0F
        // 0x58734FA2: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58734FA5: pop edi
        __asm _emit 0x5F
        // 0x58734FA6: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734FA9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58734FAB: pop esi
        __asm _emit 0x5E
        // 0x58734FAC: pop ebp
        __asm _emit 0x5D
        // 0x58734FAD: pop ebx
        __asm _emit 0x5B
        // 0x58734FAE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58734FB1: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58734FB4: pop edi
        __asm _emit 0x5F
        // 0x58734FB5: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734FB8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58734FBA: pop esi
        __asm _emit 0x5E
        // 0x58734FBB: pop ebp
        __asm _emit 0x5D
        // 0x58734FBC: pop ebx
        __asm _emit 0x5B
        // 0x58734FBD: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58734FC0: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x58734FC3: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58734FC6: lea ebx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58734FC9: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x58734FCC: jb 0x58734fd2
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58734FCE: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58734FD0: jmp 0x58734fd4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58734FD2: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58734FD4: push edi
        __asm _emit 0x57
        // 0x58734FD5: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x58734FD7: push edx
        __asm _emit 0x52
        // 0x58734FD8: push ecx
        __asm _emit 0x51
        // 0x58734FD9: push eax
        __asm _emit 0x50
        // 0x58734FDA: call 0x5897cc5a
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58734FDF: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58734FE2: cmp dword ptr [esi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x58734FE6: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58734FE9: jb 0x58734fed
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x58734FEB: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x58734FED: mov byte ptr [ebx + edi], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x58734FF1: pop edi
        __asm _emit 0x5F
        // 0x58734FF2: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58734FF4: pop esi
        __asm _emit 0x5E
        // 0x58734FF5: pop ebp
        __asm _emit 0x5D
        // 0x58734FF6: pop ebx
        __asm _emit 0x5B
        // 0x58734FF7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
