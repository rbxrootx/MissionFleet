// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 228 bytes in 1 exact ranges.
// Source symbol alias: FUN_5885c060.

// Ghidra body range 0x5885C060..0x5885C144; 228 mapped bytes.
extern "C" __declspec(naked) void FUN_5885c060_segment_00() {
    __asm {
        // 0x5885C060: push esi
        __asm _emit 0x56
        // 0x5885C061: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885C063: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5885C067: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5885C069: je 0x5885c13c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C06F: push ebx
        __asm _emit 0x53
        // 0x5885C070: push ebp
        __asm _emit 0x55
        // 0x5885C071: push edi
        __asm _emit 0x57
        // 0x5885C072: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C074: lea edi, [esi + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C07A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C080: cmp dword ptr [edi], 0
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x5885C083: je 0x5885c110
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C089: add byte ptr [ebx + esi + 0xc8], 0xff
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5885C091: jne 0x5885c110
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x5885C093: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x5885C096: mov eax, dword ptr [esi + edx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C09D: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5885C0A2: mov byte ptr [edx + esi + 0xc8], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C0AA: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885C0AF: cmp dword ptr [eax + 0x160], 0x18
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        // 0x5885C0B6: jle 0x5885c0ce
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5885C0B8: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C0BF: je 0x5885c0ce
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5885C0C1: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C0C7: add eax, 0x600
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C0CC: jmp 0x5885c0d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885C0CE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C0D0: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C0D6: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5885C0D9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885C0DB: je 0x5885c105
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5885C0DD: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x5885C0E0: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x5885C0E3: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x5885C0E6: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5885C0E9: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x5885C0EC: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x5885C0EE: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5885C0F1: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x5885C0F3: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x5885C0F6: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x5885C0F9: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x5885C0FC: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x5885C0FF: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885C102: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5885C105: mov dword ptr [esi + edx*4 + 0xa8], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C110: inc ebx
        __asm _emit 0x43
        // 0x5885C111: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5885C114: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x08
        // 0x5885C117: jl 0x5885c080
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x63
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C11D: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5885C120: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885C122: je 0x5885c139
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5885C124: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5885C127: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885C129: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5885C12C: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5885C12F: je 0x5885c13e
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5885C131: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885C133: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C135: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885C137: jne 0x5885c124
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5885C139: pop edi
        __asm _emit 0x5F
        // 0x5885C13A: pop ebp
        __asm _emit 0x5D
        // 0x5885C13B: pop ebx
        __asm _emit 0x5B
        // 0x5885C13C: pop esi
        __asm _emit 0x5E
        // 0x5885C13D: ret
        __asm _emit 0xC3
        // 0x5885C13E: pop edi
        __asm _emit 0x5F
        // 0x5885C13F: pop ebp
        __asm _emit 0x5D
        // 0x5885C140: pop ebx
        __asm _emit 0x5B
        // 0x5885C141: pop esi
        __asm _emit 0x5E
        // 0x5885C142: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
