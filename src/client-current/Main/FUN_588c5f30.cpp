// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C5F30 .. +0x94 bytes.
// Source symbol alias: FUN_588c5f30.
extern "C" __declspec(naked) void FUN_588c5f30() {
    __asm {
        // 0x588C5F30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588C5F32: push 0x58988a28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x8A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C5F37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5F3D: push eax
        __asm _emit 0x50
        // 0x588C5F3E: push ecx
        __asm _emit 0x51
        // 0x588C5F3F: push ebx
        __asm _emit 0x53
        // 0x588C5F40: push esi
        __asm _emit 0x56
        // 0x588C5F41: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588C5F46: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588C5F48: push eax
        __asm _emit 0x50
        // 0x588C5F49: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588C5F4D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5F53: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C5F55: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C5F59: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588C5F5D: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C5F61: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C5F65: push eax
        __asm _emit 0x50
        // 0x588C5F66: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C5F6A: push ecx
        __asm _emit 0x51
        // 0x588C5F6B: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C5F6F: push edx
        __asm _emit 0x52
        // 0x588C5F70: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C5F74: push eax
        __asm _emit 0x50
        // 0x588C5F75: push ecx
        __asm _emit 0x51
        // 0x588C5F76: push edx
        __asm _emit 0x52
        // 0x588C5F77: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588C5F79: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xD2
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C5F7E: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588C5F82: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588C5F84: lea ecx, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588C5F87: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588C5F8B: mov dword ptr [esi], 0x589a0bcc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xCC
        __asm _emit 0x0B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588C5F91: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588C5F94: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x9E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C5F99: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588C5F9C: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x588C5F9F: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x588C5FA2: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x588C5FA5: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x588C5FA8: mov byte ptr [esi + 0x80], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5FAE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588C5FB0: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588C5FB4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5FBB: pop ecx
        __asm _emit 0x59
        // 0x588C5FBC: pop esi
        __asm _emit 0x5E
        // 0x588C5FBD: pop ebx
        __asm _emit 0x5B
        // 0x588C5FBE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588C5FC1: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
