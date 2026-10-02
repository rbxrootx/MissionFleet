// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58850F2E .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_58850f2e() {
    __asm {
        // 0x58850F2E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58850F30: push ebp
        __asm _emit 0x55
        // 0x58850F31: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58850F33: push esi
        __asm _emit 0x56
        // 0x58850F34: push edi
        __asm _emit 0x57
        // 0x58850F35: mov edi, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x58850F38: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58850F3A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58850F3C: jne 0x58850f49
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58850F3E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58850F40: call 0x58850d4c
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850F45: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58850F47: je 0x58850f73
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58850F49: mov esi, dword ptr [eax + 0x35c]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850F4F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58850F51: je 0x58850f73
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58850F53: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58850F56: push dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58850F59: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58850F5C: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58850F5F: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58850F62: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58850F64: call dword ptr [0x5889459c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58850F6A: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58850F6C: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58850F6F: pop edi
        __asm _emit 0x5F
        // 0x58850F70: pop esi
        __asm _emit 0x5E
        // 0x58850F71: pop ebp
        __asm _emit 0x5D
        // 0x58850F72: ret
        __asm _emit 0xC3
        // 0x58850F73: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58850F75: call 0x58850d23
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850F7A: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58850F7D: mov ecx, dword ptr [0x58906040]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58850F83: push dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58850F86: mov esi, dword ptr [eax*4 + 0x58969600]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58850F8D: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58850F90: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58850F93: xor esi, dword ptr [0x58906040]
        __asm _emit 0x33
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58850F99: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58850F9C: ror esi, cl
        __asm _emit 0xD3
        __asm _emit 0xCE
        // 0x58850F9E: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58850FA1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58850FA3: jne 0x58850f62
        __asm _emit 0x75
        __asm _emit 0xBD
        // 0x58850FA5: call 0x58850fd9
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
