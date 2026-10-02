// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B0CB .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5885b0cb() {
    __asm {
        // 0x5885B0CB: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B0CD: push ebp
        __asm _emit 0x55
        // 0x5885B0CE: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B0D0: push ebx
        __asm _emit 0x53
        // 0x5885B0D1: push esi
        __asm _emit 0x56
        // 0x5885B0D2: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885B0D5: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885B0D7: push edi
        __asm _emit 0x57
        // 0x5885B0D8: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885B0DB: push ebx
        __asm _emit 0x53
        // 0x5885B0DC: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885B0DE: push esi
        __asm _emit 0x56
        // 0x5885B0DF: push edi
        __asm _emit 0x57
        // 0x5885B0E0: call 0x5887d190
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B0E5: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5885B0E7: jne 0x5885b0f7
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5885B0E9: push ebx
        __asm _emit 0x53
        // 0x5885B0EA: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5885B0EC: push esi
        __asm _emit 0x56
        // 0x5885B0ED: push edi
        __asm _emit 0x57
        // 0x5885B0EE: call 0x5887d190
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B0F3: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5885B0F5: jne 0x5885b110
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5885B0F7: push ebx
        __asm _emit 0x53
        // 0x5885B0F8: add edi, 0x76c
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x6C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B0FE: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B103: adc esi, ebx
        __asm _emit 0x13
        __asm _emit 0xF3
        // 0x5885B105: push esi
        __asm _emit 0x56
        // 0x5885B106: push edi
        __asm _emit 0x57
        // 0x5885B107: call 0x5887d190
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885B10C: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5885B10E: jne 0x5885b114
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5885B110: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885B112: jmp 0x5885b116
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885B114: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885B116: pop edi
        __asm _emit 0x5F
        // 0x5885B117: pop esi
        __asm _emit 0x5E
        // 0x5885B118: pop ebx
        __asm _emit 0x5B
        // 0x5885B119: pop ebp
        __asm _emit 0x5D
        // 0x5885B11A: ret
        __asm _emit 0xC3
    }
}
