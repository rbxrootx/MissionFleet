// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859DB6 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_58859db6() {
    __asm {
        // 0x58859DB6: push 0x2c
        __asm _emit 0x6A
        __asm _emit 0x2C
        // 0x58859DB8: push 0x588ed180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xD1
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x58859DBD: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x89
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58859DC2: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58859DC5: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58859DC7: call 0x58863c1c
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859DCC: pop ecx
        __asm _emit 0x59
        // 0x58859DCD: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x58859DD1: mov esi, dword ptr [0x58969618]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58859DD7: mov eax, dword ptr [0x58969614]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58859DDC: lea ebx, [esi + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x86
        // 0x58859DDF: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58859DE2: mov dword ptr [ebp - 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x58859DE5: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58859DE7: je 0x58859e38
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x58859DE9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58859DEB: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x58859DEE: push dword ptr [edi]
        __asm _emit 0xFF
        __asm _emit 0x37
        // 0x58859DF0: push eax
        __asm _emit 0x50
        // 0x58859DF1: call 0x58859f0e
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859DF6: pop ecx
        __asm _emit 0x59
        // 0x58859DF7: pop ecx
        __asm _emit 0x59
        // 0x58859DF8: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58859DFA: je 0x58859e33
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58859DFC: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x58859DFF: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58859E02: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58859E04: lea edi, [ebp - 0x20]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0xE0
        // 0x58859E07: mov dword ptr [ebp - 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xC4
        // 0x58859E0A: mov dword ptr [ebp - 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x58859E0D: mov dword ptr [ebp - 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xCC
        // 0x58859E10: mov dword ptr [ebp - 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xD0
        // 0x58859E13: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x58859E16: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x58859E19: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x58859E1C: lea eax, [ebp - 0x24]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x58859E1F: push eax
        __asm _emit 0x50
        // 0x58859E20: lea eax, [ebp - 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x58859E23: push eax
        __asm _emit 0x50
        // 0x58859E24: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x58859E27: push eax
        __asm _emit 0x50
        // 0x58859E28: lea ecx, [ebp - 0x19]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xE7
        // 0x58859E2B: call 0x58859d2a
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859E30: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58859E33: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58859E36: jmp 0x58859de2
        __asm _emit 0xEB
        __asm _emit 0xAA
        // 0x58859E38: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859E3F: call 0x58859e56
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E44: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x58859E47: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859E4E: pop ecx
        __asm _emit 0x59
        // 0x58859E4F: pop edi
        __asm _emit 0x5F
        // 0x58859E50: pop esi
        __asm _emit 0x5E
        // 0x58859E51: pop ebx
        __asm _emit 0x5B
        // 0x58859E52: leave
        __asm _emit 0xC9
        // 0x58859E53: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
