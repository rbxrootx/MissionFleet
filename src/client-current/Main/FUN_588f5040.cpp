// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F5040 .. +0xE0 bytes.
// Source symbol alias: FUN_588f5040.
extern "C" __declspec(naked) void FUN_588f5040() {
    __asm {
        // 0x588F5040: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F5042: push 0x5898924b
        __asm _emit 0x68
        __asm _emit 0x4B
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F5047: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F504D: push eax
        __asm _emit 0x50
        // 0x588F504E: push ebx
        __asm _emit 0x53
        // 0x588F504F: push ebp
        __asm _emit 0x55
        // 0x588F5050: push esi
        __asm _emit 0x56
        // 0x588F5051: push edi
        __asm _emit 0x57
        // 0x588F5052: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F5057: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F5059: push eax
        __asm _emit 0x50
        // 0x588F505A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F505E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5064: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x7B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5069: cdq
        __asm _emit 0x99
        // 0x588F506A: idiv dword ptr [esp + 0x30]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F506E: add edx, dword ptr [esp + 0x2c]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F5072: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F5074: jle 0x588f510a
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F507A: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F507E: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F5082: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F5086: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F508A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5090: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5095: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x7B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F509A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588F509C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F509F: mov dword ptr [esp + 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F50A3: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F50AB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588F50AD: je 0x588f50fb
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x588F50AF: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x7B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F50B4: cdq
        __asm _emit 0x99
        // 0x588F50B5: idiv dword ptr [esp + 0x38]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F50B9: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F50BE: add edx, dword ptr [esp + 0x34]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F50C2: cmp dword ptr [eax + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F50C8: jle 0x588f50e2
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588F50CA: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F50CC: jl 0x588f50e2
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588F50CE: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F50D5: je 0x588f50e2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F50D7: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x588F50DA: add edx, dword ptr [eax + 0x190]
        __asm _emit 0x03
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F50E0: jmp 0x588f50e4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F50E2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F50E4: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F50E9: mov eax, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F50EF: push ebp
        __asm _emit 0x55
        // 0x588F50F0: push edi
        __asm _emit 0x57
        // 0x588F50F1: push ebx
        __asm _emit 0x53
        // 0x588F50F2: push edx
        __asm _emit 0x52
        // 0x588F50F3: push eax
        __asm _emit 0x50
        // 0x588F50F4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F50F6: call 0x5876be10
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x6D
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F50FB: sub dword ptr [esp + 0x30], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x588F5100: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5108: jne 0x588f5090
        __asm _emit 0x75
        __asm _emit 0x86
        // 0x588F510A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F510E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5115: pop ecx
        __asm _emit 0x59
        // 0x588F5116: pop edi
        __asm _emit 0x5F
        // 0x588F5117: pop esi
        __asm _emit 0x5E
        // 0x588F5118: pop ebp
        __asm _emit 0x5D
        // 0x588F5119: pop ebx
        __asm _emit 0x5B
        // 0x588F511A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F511D: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
