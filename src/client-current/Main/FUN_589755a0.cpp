// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 218 bytes in 1 exact ranges.
// Source symbol alias: FUN_589755a0.

// Ghidra body range 0x589755A0..0x5897567A; 218 mapped bytes.
extern "C" __declspec(naked) void FUN_589755a0_segment_00() {
    __asm {
        // 0x589755A0: push ebx
        __asm _emit 0x53
        // 0x589755A1: push ebp
        __asm _emit 0x55
        // 0x589755A2: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589755A6: push esi
        __asm _emit 0x56
        // 0x589755A7: push edi
        __asm _emit 0x57
        // 0x589755A8: cmp dword ptr [ebp + 0x14], 0x64
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x14
        __asm _emit 0x64
        // 0x589755AC: je 0x589755ca
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x589755AE: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x589755B1: push ebp
        __asm _emit 0x55
        // 0x589755B2: mov dword ptr [eax + 0x14], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589755B9: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x589755BC: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x589755BF: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x589755C2: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x589755C5: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x589755C7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589755CA: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589755CE: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x589755D0: jl 0x589755d7
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x589755D2: cmp ebx, 4
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x04
        // 0x589755D5: jl 0x589755f0
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x589755D7: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x589755DA: push ebp
        __asm _emit 0x55
        // 0x589755DB: mov dword ptr [ecx + 0x14], 0x1f
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589755E2: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x589755E5: mov dword ptr [edx + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x18
        // 0x589755E8: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x589755EB: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x589755ED: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589755F0: mov eax, dword ptr [ebp + ebx*4 + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x9D
        __asm _emit 0x48
        // 0x589755F4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589755F6: jne 0x58975605
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x589755F8: push ebp
        __asm _emit 0x55
        // 0x589755F9: call 0x58976bd0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589755FE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975601: mov dword ptr [ebp + ebx*4 + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x9D
        __asm _emit 0x48
        // 0x58975605: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58975609: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5897560B: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5897560F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58975614: imul ecx, dword ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x0F
        // 0x58975617: add ecx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x32
        // 0x5897561A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5897561C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5897561F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58975621: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58975624: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58975626: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58975628: jg 0x58975631
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5897562A: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897562F: jmp 0x5897563e
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58975631: cmp edx, 0x7fff
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975637: jle 0x5897563e
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58975639: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897563E: mov al, byte ptr [esp + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58975642: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58975644: je 0x58975653
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58975646: cmp edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897564C: jle 0x58975653
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5897564E: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975653: mov eax, dword ptr [ebp + ebx*4 + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x9D
        __asm _emit 0x48
        // 0x58975657: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x02
        // 0x5897565A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5897565D: cmp esi, 0x80
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975663: mov word ptr [eax + esi - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0xFE
        // 0x58975668: jl 0x5897560b
        __asm _emit 0x7C
        __asm _emit 0xA1
        // 0x5897566A: mov ecx, dword ptr [ebp + ebx*4 + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x9D
        __asm _emit 0x48
        // 0x5897566E: pop edi
        __asm _emit 0x5F
        // 0x5897566F: pop esi
        __asm _emit 0x5E
        // 0x58975670: pop ebp
        __asm _emit 0x5D
        // 0x58975671: mov byte ptr [ecx + 0x80], 0
        __asm _emit 0xC6
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975678: pop ebx
        __asm _emit 0x5B
        // 0x58975679: ret
        __asm _emit 0xC3
    }
}
