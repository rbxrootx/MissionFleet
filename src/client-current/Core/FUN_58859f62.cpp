// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859F62 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_58859f62() {
    __asm {
        // 0x58859F62: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58859F64: push ebp
        __asm _emit 0x55
        // 0x58859F65: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58859F67: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58859F6A: push ebx
        __asm _emit 0x53
        // 0x58859F6B: push esi
        __asm _emit 0x56
        // 0x58859F6C: push edi
        __asm _emit 0x57
        // 0x58859F6D: lea esi, [ecx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58859F70: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58859F72: nop
        __asm _emit 0x90
        // 0x58859F73: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58859F75: and al, 3
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x58859F77: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58859F79: jne 0x58859fc4
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x58859F7B: test dl, 0xc0
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0xC0
        // 0x58859F7E: je 0x58859fc4
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x58859F80: mov edi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x39
        // 0x58859F82: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x58859F85: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x58859F87: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x58859F89: and dword ptr [ecx + 8], 0
        __asm _emit 0x83
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58859F8D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58859F8F: jle 0x58859fc4
        __asm _emit 0x7E
        __asm _emit 0x33
        // 0x58859F91: push ecx
        __asm _emit 0x51
        // 0x58859F92: call 0x5886cc56
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58859F97: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58859F9A: push edi
        __asm _emit 0x57
        // 0x58859F9B: push ebx
        __asm _emit 0x53
        // 0x58859F9C: push eax
        __asm _emit 0x50
        // 0x58859F9D: call 0x58870b79
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x6B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58859FA2: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58859FA5: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58859FA7: je 0x58859fb4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58859FA9: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x58859FAB: pop eax
        __asm _emit 0x58
        // 0x58859FAC: lock or dword ptr [esi], eax
        __asm _emit 0xF0
        __asm _emit 0x09
        __asm _emit 0x06
        // 0x58859FAF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58859FB2: jmp 0x58859fc6
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58859FB4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58859FB6: nop
        __asm _emit 0x90
        // 0x58859FB7: shr eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x58859FBA: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58859FBC: je 0x58859fc4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58859FBE: push -3
        __asm _emit 0x6A
        __asm _emit 0xFD
        // 0x58859FC0: pop eax
        __asm _emit 0x58
        // 0x58859FC1: lock and dword ptr [esi], eax
        __asm _emit 0xF0
        __asm _emit 0x21
        __asm _emit 0x06
        // 0x58859FC4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58859FC6: pop edi
        __asm _emit 0x5F
        // 0x58859FC7: pop esi
        __asm _emit 0x5E
        // 0x58859FC8: pop ebx
        __asm _emit 0x5B
        // 0x58859FC9: pop ebp
        __asm _emit 0x5D
        // 0x58859FCA: ret
        __asm _emit 0xC3
    }
}
