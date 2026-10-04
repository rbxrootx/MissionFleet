// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754A30 .. +0x9E bytes.
// Source symbol alias: FUN_58754a30.
extern "C" __declspec(naked) void FUN_58754a30() {
    __asm {
        // 0x58754A30: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58754A33: push ebx
        __asm _emit 0x53
        // 0x58754A34: push esi
        __asm _emit 0x56
        // 0x58754A35: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58754A37: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58754A3A: push edi
        __asm _emit 0x57
        // 0x58754A3B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58754A3D: jne 0x58754a43
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58754A3F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58754A41: jmp 0x58754a59
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58754A43: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58754A46: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58754A48: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58754A4D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58754A4F: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58754A52: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58754A54: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58754A57: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58754A59: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58754A5C: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58754A5E: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58754A60: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58754A65: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58754A67: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58754A6A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58754A6C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58754A6F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58754A71: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58754A73: jae 0x58754aa7
        __asm _emit 0x73
        __asm _emit 0x32
        // 0x58754A75: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58754A79: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58754A7E: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58754A82: push ecx
        __asm _emit 0x51
        // 0x58754A83: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58754A87: push edx
        __asm _emit 0x52
        // 0x58754A88: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58754A8B: push eax
        __asm _emit 0x50
        // 0x58754A8C: push ecx
        __asm _emit 0x51
        // 0x58754A8D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58754A8F: push edi
        __asm _emit 0x57
        // 0x58754A90: call 0x58753660
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754A95: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58754A98: add edi, 0x48
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x48
        // 0x58754A9B: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58754A9E: pop edi
        __asm _emit 0x5F
        // 0x58754A9F: pop esi
        __asm _emit 0x5E
        // 0x58754AA0: pop ebx
        __asm _emit 0x5B
        // 0x58754AA1: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58754AA4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58754AA7: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58754AA9: jbe 0x58754ab0
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58754AAB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754AB0: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58754AB4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58754AB6: push edx
        __asm _emit 0x52
        // 0x58754AB7: push edi
        __asm _emit 0x57
        // 0x58754AB8: push eax
        __asm _emit 0x50
        // 0x58754AB9: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58754ABD: push eax
        __asm _emit 0x50
        // 0x58754ABE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58754AC0: call 0x58754890
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754AC5: pop edi
        __asm _emit 0x5F
        // 0x58754AC6: pop esi
        __asm _emit 0x5E
        // 0x58754AC7: pop ebx
        __asm _emit 0x5B
        // 0x58754AC8: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58754ACB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
