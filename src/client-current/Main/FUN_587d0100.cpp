// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D0100 .. +0x7B bytes.
// Source symbol alias: FUN_587d0100.
extern "C" __declspec(naked) void FUN_587d0100() {
    __asm {
        // 0x587D0100: push ebx
        __asm _emit 0x53
        // 0x587D0101: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D0105: push ebp
        __asm _emit 0x55
        // 0x587D0106: push esi
        __asm _emit 0x56
        // 0x587D0107: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587D0109: push edi
        __asm _emit 0x57
        // 0x587D010A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D010C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D010E: lea edi, [ebp + 0x168]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0114: jmp 0x587d0118
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D0116: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D0118: mov ecx, dword ptr [ebx*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x9D
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D011F: cmp byte ptr [ecx + esi + 0xfc], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x31
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0127: je 0x587d0136
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D0129: mov edx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0xFC
        // 0x587D012C: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587D012F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587D0131: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D0134: jmp 0x587d016b
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x587D0136: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x587D013B: mul esi
        __asm _emit 0xF7
        __asm _emit 0xE6
        // 0x587D013D: shr edx, 2
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x587D0140: lea edx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x92
        // 0x587D0143: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587D0145: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587D0147: je 0x587d015b
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587D0149: push esi
        __asm _emit 0x56
        // 0x587D014A: push ebx
        __asm _emit 0x53
        // 0x587D014B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D014D: call 0x587cf000
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0152: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D0154: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0159: je 0x587d0160
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587D015B: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0160: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x587D0163: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D0166: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587D0168: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587D016B: inc esi
        __asm _emit 0x46
        // 0x587D016C: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587D016F: cmp esi, 0x19
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x19
        // 0x587D0172: jl 0x587d0116
        __asm _emit 0x7C
        __asm _emit 0xA2
        // 0x587D0174: pop edi
        __asm _emit 0x5F
        // 0x587D0175: pop esi
        __asm _emit 0x5E
        // 0x587D0176: pop ebp
        __asm _emit 0x5D
        // 0x587D0177: pop ebx
        __asm _emit 0x5B
        // 0x587D0178: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
