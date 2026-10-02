// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885AAC1 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_5885aac1() {
    __asm {
        // 0x5885AAC1: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885AAC3: push ebx
        __asm _emit 0x53
        // 0x5885AAC4: push esi
        __asm _emit 0x56
        // 0x5885AAC5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885AAC7: push edi
        __asm _emit 0x57
        // 0x5885AAC8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885AACA: push dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5885AACD: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x5885AACF: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AAD2: and edi, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0xFE
        // 0x5885AAD5: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885AAD7: call 0x58859f62
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AADC: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AADF: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885AAE1: call 0x5886ce81
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885AAE6: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AAE9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885AAEC: mov ecx, 0xfffff81f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AAF1: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5885AAF3: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x5885AAF6: lock and dword ptr [eax], ecx
        __asm _emit 0xF0
        __asm _emit 0x21
        __asm _emit 0x08
        // 0x5885AAF9: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885AAFC: test byte ptr [eax], 4
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5885AAFF: je 0x5885ab14
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5885AB01: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AB04: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AB09: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5885AB0B: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5885AB0D: lea ecx, [eax + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5885AB10: push ecx
        __asm _emit 0x51
        // 0x5885AB11: push eax
        __asm _emit 0x50
        // 0x5885AB12: jmp 0x5885ab55
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x5885AB14: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885AB17: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5885AB19: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AB1B: jne 0x5885ab49
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885AB1D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885AB1F: push edi
        __asm _emit 0x57
        // 0x5885AB20: call 0x5886f210
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885AB25: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885AB27: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5885AB29: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885AB2E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885AB31: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885AB33: jne 0x5885ab40
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5885AB35: inc dword ptr [0x5896961c]
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0x1C
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5885AB3B: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885AB3E: jmp 0x5885ab5d
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x5885AB40: push 0x140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AB45: push edi
        __asm _emit 0x57
        // 0x5885AB46: push ebx
        __asm _emit 0x53
        // 0x5885AB47: jmp 0x5885ab50
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5885AB49: push 0x180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AB4E: push edi
        __asm _emit 0x57
        // 0x5885AB4F: push eax
        __asm _emit 0x50
        // 0x5885AB50: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AB53: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885AB55: call 0x5885abf7
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AB5A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885AB5D: pop edi
        __asm _emit 0x5F
        // 0x5885AB5E: pop esi
        __asm _emit 0x5E
        // 0x5885AB5F: pop ebx
        __asm _emit 0x5B
        // 0x5885AB60: ret
        __asm _emit 0xC3
    }
}
