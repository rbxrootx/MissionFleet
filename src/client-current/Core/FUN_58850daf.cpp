// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58850DAF .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_58850daf() {
    __asm {
        // 0x58850DAF: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58850DB1: push ebp
        __asm _emit 0x55
        // 0x58850DB2: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58850DB4: sub esp, 0x328
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850DBA: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58850DBF: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58850DC1: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58850DC4: cmp dword ptr [ebp + 8], -1
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x58850DC8: push edi
        __asm _emit 0x57
        // 0x58850DC9: je 0x58850dd4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58850DCB: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58850DCE: call 0x5883274e
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x19
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58850DD3: pop ecx
        __asm _emit 0x59
        // 0x58850DD4: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x58850DD6: lea eax, [ebp - 0x320]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850DDC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58850DDE: push eax
        __asm _emit 0x50
        // 0x58850DDF: call 0x5884ce10
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850DE4: push 0x2cc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850DE9: lea eax, [ebp - 0x2d0]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850DEF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58850DF1: push eax
        __asm _emit 0x50
        // 0x58850DF2: call 0x5884ce10
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850DF7: lea eax, [ebp - 0x320]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850DFD: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58850E00: mov dword ptr [ebp - 0x328], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E06: lea eax, [ebp - 0x2d0]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E0C: mov dword ptr [ebp - 0x324], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E12: mov dword ptr [ebp - 0x220], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E18: mov dword ptr [ebp - 0x224], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xDC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E1E: mov dword ptr [ebp - 0x228], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E24: mov dword ptr [ebp - 0x22c], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xD4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E2A: mov dword ptr [ebp - 0x230], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xD0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E30: mov dword ptr [ebp - 0x234], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xCC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E36: mov word ptr [ebp - 0x208], ss
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E3D: mov word ptr [ebp - 0x214], cs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E44: mov word ptr [ebp - 0x238], ds
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x9D
        __asm _emit 0xC8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E4B: mov word ptr [ebp - 0x23c], es
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E52: mov word ptr [ebp - 0x240], fs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0xA5
        __asm _emit 0xC0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E59: mov word ptr [ebp - 0x244], gs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0xAD
        __asm _emit 0xBC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E60: pushfd
        __asm _emit 0x9C
        // 0x58850E61: pop dword ptr [ebp - 0x210]
        __asm _emit 0x8F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E67: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58850E6A: mov dword ptr [ebp - 0x218], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E70: lea eax, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58850E73: mov dword ptr [ebp - 0x20c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E79: mov dword ptr [ebp - 0x2d0], 0x10001
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58850E83: mov eax, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0xFC
        // 0x58850E86: mov dword ptr [ebp - 0x21c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E8C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58850E8F: mov dword ptr [ebp - 0x320], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E95: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58850E98: mov dword ptr [ebp - 0x31c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850E9E: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58850EA1: mov dword ptr [ebp - 0x314], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850EA7: call dword ptr [0x58894394]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58850EAD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58850EAF: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58850EB1: call dword ptr [0x58894274]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58850EB7: lea eax, [ebp - 0x328]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850EBD: push eax
        __asm _emit 0x50
        // 0x58850EBE: call dword ptr [0x588943b0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58850EC4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58850EC6: jne 0x58850edb
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58850EC8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58850ECA: jne 0x58850edb
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58850ECC: cmp dword ptr [ebp + 8], -1
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x58850ED0: je 0x58850edb
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58850ED2: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58850ED5: call 0x5883274e
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58850EDA: pop ecx
        __asm _emit 0x59
        // 0x58850EDB: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x58850EDE: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x58850EE0: pop edi
        __asm _emit 0x5F
        // 0x58850EE1: call 0x58831050
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58850EE6: leave
        __asm _emit 0xC9
        // 0x58850EE7: ret
        __asm _emit 0xC3
    }
}
