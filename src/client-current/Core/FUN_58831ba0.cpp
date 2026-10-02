// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58831BA0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_58831ba0() {
    __asm {
        // 0x58831BA0: push ebx
        __asm _emit 0x53
        // 0x58831BA1: push esi
        __asm _emit 0x56
        // 0x58831BA2: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58831BA6: or eax, eax
        __asm _emit 0x0B
        __asm _emit 0xC0
        // 0x58831BA8: jne 0x58831bc2
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58831BAA: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831BAE: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58831BB2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58831BB4: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58831BB6: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58831BB8: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58831BBC: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58831BBE: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x58831BC0: jmp 0x58831c03
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x58831BC2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58831BC4: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831BC8: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58831BCC: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58831BD0: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x58831BD2: rcr ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xDB
        // 0x58831BD4: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58831BD6: rcr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xD8
        // 0x58831BD8: or ecx, ecx
        __asm _emit 0x0B
        __asm _emit 0xC9
        // 0x58831BDA: jne 0x58831bd0
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x58831BDC: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x58831BDE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58831BE0: mul dword ptr [esp + 0x18]
        __asm _emit 0xF7
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58831BE4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58831BE6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831BEA: mul esi
        __asm _emit 0xF7
        __asm _emit 0xE6
        // 0x58831BEC: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58831BEE: jb 0x58831bfe
        __asm _emit 0x72
        __asm _emit 0x0E
        // 0x58831BF0: cmp edx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58831BF4: ja 0x58831bfe
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x58831BF6: jb 0x58831bff
        __asm _emit 0x72
        __asm _emit 0x07
        // 0x58831BF8: cmp eax, dword ptr [esp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58831BFC: jbe 0x58831bff
        __asm _emit 0x76
        __asm _emit 0x01
        // 0x58831BFE: dec esi
        __asm _emit 0x4E
        // 0x58831BFF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58831C01: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58831C03: pop esi
        __asm _emit 0x5E
        // 0x58831C04: pop ebx
        __asm _emit 0x5B
        // 0x58831C05: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
