// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 218 bytes in 1 exact ranges.
// Source symbol alias: FUN_587d9910.

// Ghidra body range 0x587D9910..0x587D99EA; 218 mapped bytes.
extern "C" __declspec(naked) void FUN_587d9910_segment_00() {
    __asm {
        // 0x587D9910: push ecx
        __asm _emit 0x51
        // 0x587D9911: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9917: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D991D: mov edx, dword ptr [edx + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9923: mov eax, dword ptr [eax + 0xa48]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9929: push edi
        __asm _emit 0x57
        // 0x587D992A: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D992E: test dl, 0xf
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x0F
        // 0x587D9931: je 0x587d99e2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9937: mov ecx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D993D: push esi
        __asm _emit 0x56
        // 0x587D993E: mov esi, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9944: movzx eax, word ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x587D9948: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587D994B: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587D994E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D9950: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9952: jle 0x587d998d
        __asm _emit 0x7E
        __asm _emit 0x39
        // 0x587D9954: push ebx
        __asm _emit 0x53
        // 0x587D9955: lea edx, [ecx + 0x9a4]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D995B: push ebp
        __asm _emit 0x55
        // 0x587D995C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587D9960: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587D9962: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D9964: je 0x587d9983
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D9966: movzx ebx, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x59
        __asm _emit 0x5E
        // 0x587D996A: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D996E: shr ebx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587D9971: inc ebp
        __asm _emit 0x45
        // 0x587D9972: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587D9974: jb 0x587d9983
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x587D9976: test dword ptr [ecx + 0xb4], 0x80203c00
        __asm _emit 0xF7
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x20
        __asm _emit 0x80
        // 0x587D9980: je 0x587d9983
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x587D9982: inc edi
        __asm _emit 0x47
        // 0x587D9983: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587D9986: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587D9989: jne 0x587d9960
        __asm _emit 0x75
        __asm _emit 0xD5
        // 0x587D998B: pop ebp
        __asm _emit 0x5D
        // 0x587D998C: pop ebx
        __asm _emit 0x5B
        // 0x587D998D: mov cl, byte ptr [esi + 4]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587D9990: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587D9993: pop esi
        __asm _emit 0x5E
        // 0x587D9994: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x587D9997: jne 0x587d99b7
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587D9999: cmp edi, 5
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x05
        // 0x587D999C: jle 0x587d99e2
        __asm _emit 0x7E
        __asm _emit 0x44
        // 0x587D999E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D99A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D99A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D99A4: push 0x46
        __asm _emit 0x6A
        __asm _emit 0x46
        // 0x587D99A6: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x21
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D99AB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D99AD: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xB3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D99B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D99B4: pop edi
        __asm _emit 0x5F
        // 0x587D99B5: pop ecx
        __asm _emit 0x59
        // 0x587D99B6: ret
        __asm _emit 0xC3
        // 0x587D99B7: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x587D99BA: jle 0x587d99e2
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x587D99BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D99BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D99C0: push 0x58994700
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D99C5: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D99CB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D99CE: push eax
        __asm _emit 0x50
        // 0x587D99CF: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x587D99D1: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x21
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D99D6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D99D8: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xB3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D99DD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D99DF: pop edi
        __asm _emit 0x5F
        // 0x587D99E0: pop ecx
        __asm _emit 0x59
        // 0x587D99E1: ret
        __asm _emit 0xC3
        // 0x587D99E2: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D99E7: pop edi
        __asm _emit 0x5F
        // 0x587D99E8: pop ecx
        __asm _emit 0x59
        // 0x587D99E9: ret
        __asm _emit 0xC3
    }
}
