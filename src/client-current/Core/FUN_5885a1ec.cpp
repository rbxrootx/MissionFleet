// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A1EC .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5885a1ec() {
    __asm {
        // 0x5885A1EC: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A1EE: push ebp
        __asm _emit 0x55
        // 0x5885A1EF: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A1F1: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885A1F5: jne 0x5885a20c
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5885A1F7: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A1FC: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A202: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A207: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A20A: pop ebp
        __asm _emit 0x5D
        // 0x5885A20B: ret
        __asm _emit 0xC3
        // 0x5885A20C: push esi
        __asm _emit 0x56
        // 0x5885A20D: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885A210: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885A212: jne 0x5885a226
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5885A214: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A219: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A21F: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A224: jmp 0x5885a23b
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5885A226: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A229: call 0x58867d73
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A22E: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5885A230: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x5885A232: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5885A235: pop ecx
        __asm _emit 0x59
        // 0x5885A236: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885A239: jne 0x5885a240
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885A23B: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A23E: jmp 0x5885a242
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A240: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A242: pop esi
        __asm _emit 0x5E
        // 0x5885A243: pop ebp
        __asm _emit 0x5D
        // 0x5885A244: ret
        __asm _emit 0xC3
    }
}
