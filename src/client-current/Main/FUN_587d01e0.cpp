// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D01E0 .. +0x6A bytes.
// Source symbol alias: FUN_587d01e0.
extern "C" __declspec(naked) void FUN_587d01e0() {
    __asm {
        // 0x587D01E0: push ebx
        __asm _emit 0x53
        // 0x587D01E1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D01E5: push ebp
        __asm _emit 0x55
        // 0x587D01E6: push esi
        __asm _emit 0x56
        // 0x587D01E7: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587D01E9: push edi
        __asm _emit 0x57
        // 0x587D01EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D01EC: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D01EE: lea edi, [ebp + 0x168]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D01F4: jmp 0x587d01f8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D01F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D01F8: mov ecx, dword ptr [ebx*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x9D
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D01FF: cmp byte ptr [ecx + esi + 0xfc], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x31
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0207: jne 0x587d022f
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x587D0209: lea eax, [esi - 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0xFC
        // 0x587D020C: cdq
        __asm _emit 0x99
        // 0x587D020D: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0212: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587D0214: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D0216: je 0x587d022a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587D0218: push esi
        __asm _emit 0x56
        // 0x587D0219: push ebx
        __asm _emit 0x53
        // 0x587D021A: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D021C: call 0x587cf000
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0221: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D0223: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0228: je 0x587d022f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587D022A: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D022F: mov edx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0xFC
        // 0x587D0232: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587D0235: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587D0237: inc esi
        __asm _emit 0x46
        // 0x587D0238: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587D023B: cmp esi, 0x19
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x19
        // 0x587D023E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D0241: jl 0x587d01f6
        __asm _emit 0x7C
        __asm _emit 0xB3
        // 0x587D0243: pop edi
        __asm _emit 0x5F
        // 0x587D0244: pop esi
        __asm _emit 0x5E
        // 0x587D0245: pop ebp
        __asm _emit 0x5D
        // 0x587D0246: pop ebx
        __asm _emit 0x5B
        // 0x587D0247: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
