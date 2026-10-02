// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58855EA0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_58855ea0() {
    __asm {
        // 0x58855EA0: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58855EA2: push ebp
        __asm _emit 0x55
        // 0x58855EA3: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58855EA5: push ecx
        __asm _emit 0x51
        // 0x58855EA6: push ebx
        __asm _emit 0x53
        // 0x58855EA7: push esi
        __asm _emit 0x56
        // 0x58855EA8: push edi
        __asm _emit 0x57
        // 0x58855EA9: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58855EAB: call 0x58850d92
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58855EB0: push dword ptr [ebx + 4]
        __asm _emit 0xFF
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58855EB3: lea esi, [ebx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x58855EB6: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58855EB9: push esi
        __asm _emit 0x56
        // 0x58855EBA: mov edx, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x4C
        // 0x58855EBD: lea edi, [ebx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x58855EC0: mov dword ptr [esi], edx
        __asm _emit 0x89
        __asm _emit 0x16
        // 0x58855EC2: mov edx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x48
        // 0x58855EC5: push eax
        __asm _emit 0x50
        // 0x58855EC6: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        // 0x58855EC8: call 0x5886cf4e
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58855ECD: push dword ptr [ebx + 4]
        __asm _emit 0xFF
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58855ED0: mov esi, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x58855ED3: push edi
        __asm _emit 0x57
        // 0x58855ED4: push esi
        __asm _emit 0x56
        // 0x58855ED5: call 0x5886cfac
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58855EDA: mov eax, dword ptr [esi + 0x350]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58855EE0: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58855EE3: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x58855EE5: jne 0x58855ef4
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58855EE7: or eax, 2
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x02
        // 0x58855EEA: mov dword ptr [esi + 0x350], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58855EF0: mov byte ptr [ebx + 0x14], 2
        __asm _emit 0xC6
        __asm _emit 0x43
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x58855EF4: pop edi
        __asm _emit 0x5F
        // 0x58855EF5: pop esi
        __asm _emit 0x5E
        // 0x58855EF6: pop ebx
        __asm _emit 0x5B
        // 0x58855EF7: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58855EF9: pop ebp
        __asm _emit 0x5D
        // 0x58855EFA: ret
        __asm _emit 0xC3
    }
}
