// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D110 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5885d110() {
    __asm {
        // 0x5885D110: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D112: push ebp
        __asm _emit 0x55
        // 0x5885D113: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D115: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x5885D118: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5885D11B: push ebx
        __asm _emit 0x53
        // 0x5885D11C: push esi
        __asm _emit 0x56
        // 0x5885D11D: push edi
        __asm _emit 0x57
        // 0x5885D11E: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885D121: call 0x58850c9f
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D126: push dword ptr [ebp + 0x30]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x5885D129: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885D12C: push dword ptr [ebp + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885D12F: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D132: mov ecx, esp
        __asm _emit 0x8B
        __asm _emit 0xCC
        // 0x5885D134: push eax
        __asm _emit 0x50
        // 0x5885D135: call 0x5885da94
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D13A: lea eax, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x5885D13D: push eax
        __asm _emit 0x50
        // 0x5885D13E: call 0x5885ce1c
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D143: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x5885D146: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5885D149: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885D14B: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5885D14D: call 0x58850ce7
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D152: mov esi, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5885D155: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885D157: je 0x5885d163
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D159: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885D15C: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885D15F: jne 0x5885d163
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885D161: mov byte ptr [esi], cl
        __asm _emit 0x88
        __asm _emit 0x0E
        // 0x5885D163: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885D165: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5885D167: pop edi
        __asm _emit 0x5F
        // 0x5885D168: pop esi
        __asm _emit 0x5E
        // 0x5885D169: pop ebx
        __asm _emit 0x5B
        // 0x5885D16A: leave
        __asm _emit 0xC9
        // 0x5885D16B: ret
        __asm _emit 0xC3
    }
}
