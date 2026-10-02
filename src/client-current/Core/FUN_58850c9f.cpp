// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58850C9F .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58850c9f() {
    __asm {
        // 0x58850C9F: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58850CA1: push ebp
        __asm _emit 0x55
        // 0x58850CA2: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58850CA4: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58850CA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58850CA8: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58850CAB: mov byte ptr [edx + 0x14], al
        __asm _emit 0x88
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x58850CAE: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x58850CB0: mov byte ptr [edx + 8], al
        __asm _emit 0x88
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58850CB3: mov byte ptr [edx + 0x1c], al
        __asm _emit 0x88
        __asm _emit 0x42
        __asm _emit 0x1C
        // 0x58850CB6: mov byte ptr [edx + 0x24], al
        __asm _emit 0x88
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58850CB9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58850CBB: je 0x58850cc4
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58850CBD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58850CBF: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58850CC2: jmp 0x58850cd7
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58850CC4: cmp dword ptr [0x58969980], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58850CCA: jne 0x58850ce1
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58850CCC: mov eax, dword ptr [0x58907518]
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58850CD1: mov ecx, dword ptr [0x5890751c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58850CD7: mov byte ptr [edx + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58850CDB: mov dword ptr [edx + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x10
        // 0x58850CDE: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58850CE1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58850CE3: pop ebp
        __asm _emit 0x5D
        // 0x58850CE4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
