// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D8F90 .. +0x5A bytes.
// Source symbol alias: FUN_587d8f90.
extern "C" __declspec(naked) void FUN_587d8f90() {
    __asm {
        // 0x587D8F90: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D8F94: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D8F96: jne 0x587d8fb0
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587D8F98: cmp dword ptr [esp + 8], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D8F9C: je 0x587d8fab
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D8F9E: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8FA3: call 0x587d8ef0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8FA8: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587D8FAB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D8FAD: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587D8FB0: push ebx
        __asm _emit 0x53
        // 0x587D8FB1: mov bl, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x59
        __asm _emit 0x61
        // 0x587D8FB4: mov ecx, dword ptr [edx + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8FBA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D8FBC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D8FBE: je 0x587d8fe6
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587D8FC0: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8FC6: cmp byte ptr [edx + 0x35c], bl
        __asm _emit 0x38
        __asm _emit 0x9A
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8FCC: jne 0x587d8fd6
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587D8FCE: cmp dword ptr [ecx + 0xec], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8FD4: je 0x587d8fe4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D8FD6: mov ecx, dword ptr [ecx + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8FDC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D8FDE: jne 0x587d8fc0
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587D8FE0: pop ebx
        __asm _emit 0x5B
        // 0x587D8FE1: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587D8FE4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D8FE6: pop ebx
        __asm _emit 0x5B
        // 0x587D8FE7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
