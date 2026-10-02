// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886CE81 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5886ce81() {
    __asm {
        // 0x5886CE81: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886CE83: push ebp
        __asm _emit 0x55
        // 0x5886CE84: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886CE86: push esi
        __asm _emit 0x56
        // 0x5886CE87: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886CE8A: push edi
        __asm _emit 0x57
        // 0x5886CE8B: lea edi, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5886CE8E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5886CE90: nop
        __asm _emit 0x90
        // 0x5886CE91: shr eax, 0xd
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0D
        // 0x5886CE94: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5886CE96: je 0x5886cebd
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5886CE98: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5886CE9A: nop
        __asm _emit 0x90
        // 0x5886CE9B: shr eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x5886CE9E: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5886CEA0: je 0x5886cebd
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5886CEA2: push dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x5886CEA5: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886CEAA: pop ecx
        __asm _emit 0x59
        // 0x5886CEAB: mov eax, 0xfffffebf
        __asm _emit 0xB8
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886CEB0: lock and dword ptr [edi], eax
        __asm _emit 0xF0
        __asm _emit 0x21
        __asm _emit 0x07
        // 0x5886CEB3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886CEB5: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5886CEB8: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5886CEBA: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5886CEBD: pop edi
        __asm _emit 0x5F
        // 0x5886CEBE: pop esi
        __asm _emit 0x5E
        // 0x5886CEBF: pop ebp
        __asm _emit 0x5D
        // 0x5886CEC0: ret
        __asm _emit 0xC3
    }
}
