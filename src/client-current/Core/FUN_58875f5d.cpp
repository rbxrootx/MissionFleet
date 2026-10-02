// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58875F5D .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_58875f5d() {
    __asm {
        // 0x58875F5D: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58875F5F: push ebp
        __asm _emit 0x55
        // 0x58875F60: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58875F62: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58875F65: lock inc dword ptr [eax + 0xc]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58875F69: mov ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x58875F6C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58875F6E: je 0x58875f73
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58875F70: lock inc dword ptr [ecx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x58875F73: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875F79: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58875F7B: je 0x58875f80
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58875F7D: lock inc dword ptr [ecx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x58875F80: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875F86: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58875F88: je 0x58875f8d
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58875F8A: lock inc dword ptr [ecx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x58875F8D: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875F93: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58875F95: je 0x58875f9a
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58875F97: lock inc dword ptr [ecx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x58875F9A: push esi
        __asm _emit 0x56
        // 0x58875F9B: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58875F9D: lea ecx, [eax + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x58875FA0: pop esi
        __asm _emit 0x5E
        // 0x58875FA1: cmp dword ptr [ecx - 8], 0x58907520
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58875FA8: je 0x58875fb3
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58875FAA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58875FAC: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58875FAE: je 0x58875fb3
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58875FB0: lock inc dword ptr [edx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58875FB3: cmp dword ptr [ecx - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0xF4
        __asm _emit 0x00
        // 0x58875FB7: je 0x58875fc3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58875FB9: mov edx, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0xFC
        // 0x58875FBC: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58875FBE: je 0x58875fc3
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58875FC0: lock inc dword ptr [edx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58875FC3: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x58875FC6: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58875FC9: jne 0x58875fa1
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x58875FCB: pop esi
        __asm _emit 0x5E
        // 0x58875FCC: push dword ptr [eax + 0x9c]
        __asm _emit 0xFF
        __asm _emit 0xB0
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875FD2: call 0x58876122
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875FD7: pop ecx
        __asm _emit 0x59
        // 0x58875FD8: pop ebp
        __asm _emit 0x5D
        // 0x58875FD9: ret
        __asm _emit 0xC3
    }
}
