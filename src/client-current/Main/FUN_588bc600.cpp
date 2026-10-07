// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 408 bytes in 2 exact ranges.
// Source symbol alias: FUN_588bc600.

// Ghidra body range 0x588BC600..0x588BC668; 104 mapped bytes.
extern "C" __declspec(naked) void FUN_588bc600_segment_00() {
    __asm {
        // 0x588BC600: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BC605: push ebx
        __asm _emit 0x53
        // 0x588BC606: push ebp
        __asm _emit 0x55
        // 0x588BC607: push esi
        __asm _emit 0x56
        // 0x588BC608: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588BC60A: mov cl, byte ptr [eax + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588BC60D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588BC60F: mov byte ptr [esi + 0x13a4], cl
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC615: mov byte ptr [esi + 0xa0], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC61B: mov byte ptr [esi + 0x13a5], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC621: mov byte ptr [esi + 0x13a7], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xA7
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC627: lea eax, [esi + 0xfa4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC62D: mov ecx, 0x80
        __asm _emit 0xB9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC632: mov dword ptr [eax + 0x200], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC638: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x588BC63A: mov dword ptr [eax - 0x200], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BC640: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BC643: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588BC646: jne 0x588bc632
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588BC648: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BC64E: mov ebp, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588BC651: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588BC653: jne 0x588bc665
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588BC655: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC65B: push ebx
        __asm _emit 0x53
        // 0x588BC65C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BC661: pop esi
        __asm _emit 0x5E
        // 0x588BC662: pop ebp
        __asm _emit 0x5D
        // 0x588BC663: pop ebx
        __asm _emit 0x5B
        // 0x588BC664: ret
        __asm _emit 0xC3
        // 0x588BC665: push edi
        __asm _emit 0x57
        // 0x588BC666: jmp 0x588bc670
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x588BC670..0x588BC7A0; 304 mapped bytes.
extern "C" __declspec(naked) void FUN_588bc600_segment_01() {
    __asm {
        // 0x588BC670: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x588BC673: mov eax, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC679: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588BC67B: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588BC67E: cmp ax, 0x50
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x50
        // 0x588BC682: je 0x588bc774
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC688: cmp ax, 0x51
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x51
        // 0x588BC68C: je 0x588bc774
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC692: cmp ax, 0x52
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x52
        // 0x588BC696: je 0x588bc774
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC69C: cmp dword ptr [edi + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588BC6A3: jne 0x588bc774
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6A9: movzx ecx, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6B0: mov edx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x30
        // 0x588BC6B3: mov dword ptr [esi + ecx*4 + 0xa4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6BA: movzx eax, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6C1: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588BC6C4: mov dword ptr [esi + eax*8 + 0x2a4], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6CB: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x588BC6CE: mov dword ptr [esi + eax*8 + 0x2a8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xC6
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6D5: movzx eax, word ptr [edi + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588BC6D9: movzx ecx, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6E0: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x588BC6E3: mov dword ptr [esi + ecx*4 + 0x6a4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6EA: movzx edx, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6F1: movzx eax, word ptr [edi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588BC6F5: mov word ptr [esi + edx*2 + 0x8a4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0xA4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC6FD: movzx ecx, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC704: mov edx, dword ptr [edi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x2C
        // 0x588BC707: mov dword ptr [esi + ecx*4 + 0x9a4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC70E: movzx eax, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC715: mov ecx, dword ptr [edi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x28
        // 0x588BC718: mov dword ptr [esi + eax*4 + 0xba4], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC71F: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC724: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588BC726: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BC72B: movzx edx, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC732: mov dword ptr [esi + edx*4 + 0xda4], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC739: movzx eax, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC740: mov dword ptr [esi + eax*4 + 0xfa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC747: movzx ecx, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC74E: mov dword ptr [esi + ecx*4 + 0x11a4], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC755: push edi
        __asm _emit 0x57
        // 0x588BC756: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588BC758: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BC75D: push edi
        __asm _emit 0x57
        // 0x588BC75E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588BC760: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BC765: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BC767: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588BC769: call 0x5877cbe0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588BC76E: inc byte ptr [esi + 0xa0]
        __asm _emit 0xFE
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC774: cmp byte ptr [esi + 0xa0], 0x80
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588BC77B: je 0x588bc788
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BC77D: mov ebp, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x08
        // 0x588BC780: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588BC782: jne 0x588bc670
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BC788: movzx edx, byte ptr [esi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC78F: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC795: push edx
        __asm _emit 0x52
        // 0x588BC796: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xAB
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BC79B: pop edi
        __asm _emit 0x5F
        // 0x588BC79C: pop esi
        __asm _emit 0x5E
        // 0x588BC79D: pop ebp
        __asm _emit 0x5D
        // 0x588BC79E: pop ebx
        __asm _emit 0x5B
        // 0x588BC79F: ret
        __asm _emit 0xC3
    }
}
