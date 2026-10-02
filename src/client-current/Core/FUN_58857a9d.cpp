// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58857A9D .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_58857a9d() {
    __asm {
        // 0x58857A9D: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58857A9F: push ebp
        __asm _emit 0x55
        // 0x58857AA0: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58857AA2: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58857AA4: push 0x5887dc90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xDC
        __asm _emit 0x87
        __asm _emit 0x58
        // 0x58857AA9: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857AAF: push eax
        __asm _emit 0x50
        // 0x58857AB0: push ecx
        __asm _emit 0x51
        // 0x58857AB1: push esi
        __asm _emit 0x56
        // 0x58857AB2: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58857AB7: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58857AB9: push eax
        __asm _emit 0x50
        // 0x58857ABA: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58857ABD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857AC3: and dword ptr [ebp - 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xF0
        __asm _emit 0x00
        // 0x58857AC7: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x58857ACA: push eax
        __asm _emit 0x50
        // 0x58857ACB: push 0x588c32e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x32
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x58857AD0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58857AD2: call dword ptr [0x5889426c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x6C
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857AD8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58857ADA: je 0x58857afd
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58857ADC: push 0x588c32f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x32
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x58857AE1: push dword ptr [ebp - 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58857AE4: call dword ptr [0x588942dc]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857AEA: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58857AEC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58857AEE: je 0x58857afd
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58857AF0: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58857AF3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857AF5: call dword ptr [0x5889459c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857AFB: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58857AFD: cmp dword ptr [ebp - 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xF0
        __asm _emit 0x00
        // 0x58857B01: je 0x58857b0c
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58857B03: push dword ptr [ebp - 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58857B06: call dword ptr [0x588942e8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857B0C: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58857B0F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B16: pop ecx
        __asm _emit 0x59
        // 0x58857B17: pop esi
        __asm _emit 0x5E
        // 0x58857B18: leave
        __asm _emit 0xC9
        // 0x58857B19: ret
        __asm _emit 0xC3
    }
}
