// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 365 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874b5a0.

// Ghidra body range 0x5874B5A0..0x5874B70D; 365 mapped bytes.
extern "C" __declspec(naked) void FUN_5874b5a0_segment_00() {
    __asm {
        // 0x5874B5A0: push esi
        __asm _emit 0x56
        // 0x5874B5A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874B5A3: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5A8: lea eax, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5AE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874B5B0: push eax
        __asm _emit 0x50
        // 0x5874B5B1: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874B5B6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874B5B8: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5BE: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5C4: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5CA: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5D0: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5D5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874B5D9: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5DF: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5874B5E1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5874B5E5: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B5EB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874B5EF: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874B5F4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874B5F7: cmp dword ptr [eax + 0x164], 0x5f3
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B601: jle 0x5874b61a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5874B603: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B60A: je 0x5874b61a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874B60C: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B612: mov eax, dword ptr [edx + 0x17cc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xCC
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B618: jmp 0x5874b61c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874B61A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874B61C: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B622: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5874B625: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874B627: je 0x5874b651
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874B629: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5874B62C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5874B62F: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5874B632: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5874B635: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5874B638: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874B63A: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5874B63D: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5874B63F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5874B642: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5874B645: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874B648: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5874B64B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874B64E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5874B651: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B657: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B65E: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874B663: cmp dword ptr [eax + 0x160], 0xc7
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B66D: jle 0x5874b685
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874B66F: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B676: je 0x5874b685
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5874B678: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B67E: add eax, 0x31c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B683: jmp 0x5874b687
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874B685: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874B687: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B68D: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5874B690: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874B692: je 0x5874b6bc
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874B694: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5874B697: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5874B69A: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5874B69D: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5874B6A0: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5874B6A3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874B6A5: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5874B6A8: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5874B6AA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5874B6AD: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5874B6B0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874B6B3: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5874B6B6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874B6B9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5874B6BC: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B6C2: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B6C9: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B6CF: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x5874B6D1: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x76
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874B6D6: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B6DC: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x5874B6DE: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x75
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874B6E3: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B6E9: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x5874B6EB: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x75
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874B6F0: mov eax, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B6F6: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B6FB: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5874B6FF: mov esi, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B705: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874B707: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5874B70B: pop esi
        __asm _emit 0x5E
        // 0x5874B70C: ret
        __asm _emit 0xC3
    }
}
