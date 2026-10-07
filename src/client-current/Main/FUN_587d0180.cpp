// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D0180 .. +0x60 bytes.
// Source symbol alias: FUN_587d0180.
extern "C" __declspec(naked) void FUN_587d0180() {
    __asm {
        // 0x587D0180: push ebx
        __asm _emit 0x53
        // 0x587D0181: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D0185: push ebp
        __asm _emit 0x55
        // 0x587D0186: push esi
        __asm _emit 0x56
        // 0x587D0187: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587D0189: push edi
        __asm _emit 0x57
        // 0x587D018A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D018C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D018E: lea edi, [ebp + 0x168]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0194: jmp 0x587d0198
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D0196: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D0198: mov ecx, dword ptr [ebx*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x9D
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D019F: cmp byte ptr [ecx + esi + 0xfc], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x31
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D01A7: jne 0x587d01c5
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587D01A9: cmp esi, 0x13
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x13
        // 0x587D01AC: jg 0x587d01c0
        __asm _emit 0x7F
        __asm _emit 0x12
        // 0x587D01AE: push esi
        __asm _emit 0x56
        // 0x587D01AF: push ebx
        __asm _emit 0x53
        // 0x587D01B0: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D01B2: call 0x587cf000
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D01B7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D01B9: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D01BE: je 0x587d01c5
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587D01C0: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D01C5: mov edx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0xFC
        // 0x587D01C8: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587D01CB: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587D01CD: inc esi
        __asm _emit 0x46
        // 0x587D01CE: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587D01D1: cmp esi, 0x19
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x19
        // 0x587D01D4: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D01D7: jl 0x587d0196
        __asm _emit 0x7C
        __asm _emit 0xBD
        // 0x587D01D9: pop edi
        __asm _emit 0x5F
        // 0x587D01DA: pop esi
        __asm _emit 0x5E
        // 0x587D01DB: pop ebp
        __asm _emit 0x5D
        // 0x587D01DC: pop ebx
        __asm _emit 0x5B
        // 0x587D01DD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
