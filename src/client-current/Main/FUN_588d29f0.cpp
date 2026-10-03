// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D29F0 .. +0xBB bytes.
// Source symbol alias: FUN_588d29f0.
extern "C" __declspec(naked) void FUN_588d29f0() {
    __asm {
        // 0x588D29F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D29F2: push 0x589891e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D29F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D29FD: push eax
        __asm _emit 0x50
        // 0x588D29FE: push ecx
        __asm _emit 0x51
        // 0x588D29FF: push ebx
        __asm _emit 0x53
        // 0x588D2A00: push ebp
        __asm _emit 0x55
        // 0x588D2A01: push esi
        __asm _emit 0x56
        // 0x588D2A02: push edi
        __asm _emit 0x57
        // 0x588D2A03: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D2A08: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D2A0A: push eax
        __asm _emit 0x50
        // 0x588D2A0B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D2A0F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2A15: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2A17: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D2A1B: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588D2A1F: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588D2A23: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588D2A27: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588D2A2B: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588D2A2F: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D2A33: push eax
        __asm _emit 0x50
        // 0x588D2A34: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D2A38: push ecx
        __asm _emit 0x51
        // 0x588D2A39: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D2A3D: push edx
        __asm _emit 0x52
        // 0x588D2A3E: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D2A42: push edi
        __asm _emit 0x57
        // 0x588D2A43: push ebp
        __asm _emit 0x55
        // 0x588D2A44: push ebx
        __asm _emit 0x53
        // 0x588D2A45: push eax
        __asm _emit 0x50
        // 0x588D2A46: push ecx
        __asm _emit 0x51
        // 0x588D2A47: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D2A49: push edx
        __asm _emit 0x52
        // 0x588D2A4A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D2A4C: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x08
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D2A51: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D2A55: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D2A57: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2A5C: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D2A60: mov dword ptr [esi], 0x589a0f5c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D2A66: mov dword ptr [esi + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588D2A69: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x588D2A6C: mov dword ptr [esi + 0x78], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x78
        // 0x588D2A6F: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588D2A72: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2A78: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xEA
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588D2A7D: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2A83: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2A86: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D2A89: mov dword ptr [esi + 0x80], 3
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2A93: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D2A95: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D2A99: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2AA0: pop ecx
        __asm _emit 0x59
        // 0x588D2AA1: pop edi
        __asm _emit 0x5F
        // 0x588D2AA2: pop esi
        __asm _emit 0x5E
        // 0x588D2AA3: pop ebp
        __asm _emit 0x5D
        // 0x588D2AA4: pop ebx
        __asm _emit 0x5B
        // 0x588D2AA5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D2AA8: ret 0x28
        __asm _emit 0xC2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
