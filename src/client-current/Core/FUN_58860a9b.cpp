// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860A9B .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58860a9b() {
    __asm {
        // 0x58860A9B: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860A9D: push ebp
        __asm _emit 0x55
        // 0x58860A9E: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58860AA0: push ecx
        __asm _emit 0x51
        // 0x58860AA1: push ecx
        __asm _emit 0x51
        // 0x58860AA2: push esi
        __asm _emit 0x56
        // 0x58860AA3: push edi
        __asm _emit 0x57
        // 0x58860AA4: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58860AA6: call 0x58860d42
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860AAB: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58860AAE: mov esi, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x58860AB1: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x58860AB4: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58860AB7: mov byte ptr [ebp - 1], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58860ABB: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58860ABE: mov edx, esp
        __asm _emit 0x8B
        __asm _emit 0xD4
        // 0x58860AC0: push eax
        __asm _emit 0x50
        // 0x58860AC1: push dword ptr [edi + 0x34]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x34
        // 0x58860AC4: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58860AC7: push dword ptr [edi + 0x30]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x30
        // 0x58860ACA: push eax
        __asm _emit 0x50
        // 0x58860ACB: push edx
        __asm _emit 0x52
        // 0x58860ACC: call 0x5885b8d2
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860AD1: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58860AD4: push esi
        __asm _emit 0x56
        // 0x58860AD5: call 0x5885d110
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860ADA: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x58860ADD: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58860AE1: jne 0x58860ae7
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58860AE3: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860AE5: jmp 0x58860afa
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58860AE7: cmp byte ptr [edi + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x58860AEB: je 0x58860af1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58860AED: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58860AEF: jmp 0x58860afa
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58860AF1: push edx
        __asm _emit 0x52
        // 0x58860AF2: push eax
        __asm _emit 0x50
        // 0x58860AF3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58860AF5: call 0x588615c8
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860AFA: pop edi
        __asm _emit 0x5F
        // 0x58860AFB: pop esi
        __asm _emit 0x5E
        // 0x58860AFC: leave
        __asm _emit 0xC9
        // 0x58860AFD: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
