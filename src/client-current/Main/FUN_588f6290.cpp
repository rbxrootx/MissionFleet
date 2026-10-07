// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 105 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6290.

// Ghidra body range 0x588F6290..0x588F62F9; 105 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6290_segment_00() {
    __asm {
        // 0x588F6290: push ebx
        __asm _emit 0x53
        // 0x588F6291: push ebp
        __asm _emit 0x55
        // 0x588F6292: push esi
        __asm _emit 0x56
        // 0x588F6293: push edi
        __asm _emit 0x57
        // 0x588F6294: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588F6296: push 0xe0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F629B: mov dword ptr [ebp + 4], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F62A2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F62A7: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F62AB: mov dword ptr [ebp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588F62AE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F62B0: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588F62B2: mov edx, 0x180
        __asm _emit 0xBA
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F62B7: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588F62B9: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588F62BC: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588F62BE: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588F62C0: push ecx
        __asm _emit 0x51
        // 0x588F62C1: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588F62C6: mov edi, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x588F62C9: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F62CD: mov dword ptr [ebp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588F62D0: lea eax, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x5B
        // 0x588F62D3: mov ecx, 0x38
        __asm _emit 0xB9
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F62D8: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588F62DA: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F62DE: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x588F62E1: shl eax, 7
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x07
        // 0x588F62E4: push eax
        __asm _emit 0x50
        // 0x588F62E5: push ecx
        __asm _emit 0x51
        // 0x588F62E6: push edx
        __asm _emit 0x52
        // 0x588F62E7: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x6A
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F62EC: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588F62EF: pop edi
        __asm _emit 0x5F
        // 0x588F62F0: pop esi
        __asm _emit 0x5E
        // 0x588F62F1: mov dword ptr [ebp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x588F62F4: pop ebp
        __asm _emit 0x5D
        // 0x588F62F5: pop ebx
        __asm _emit 0x5B
        // 0x588F62F6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
