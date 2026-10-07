// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 381 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897a5f0.

// Ghidra body range 0x5897A5F0..0x5897A76D; 381 mapped bytes.
extern "C" __declspec(naked) void FUN_5897a5f0_segment_00() {
    __asm {
        // 0x5897A5F0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5897A5F3: push ebx
        __asm _emit 0x53
        // 0x5897A5F4: push esi
        __asm _emit 0x56
        // 0x5897A5F5: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897A5F9: push 0x34
        __asm _emit 0x6A
        __asm _emit 0x34
        // 0x5897A5FB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897A5FD: push esi
        __asm _emit 0x56
        // 0x5897A5FE: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5897A601: mov byte ptr [esp + 0x17], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x01
        // 0x5897A606: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897A608: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5897A60A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5897A60D: mov dword ptr [esi + 0x154], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A613: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897A617: mov dword ptr [ebx], 0x5897b780
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x80
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A61D: mov dword ptr [ebx + 4], 0x5897a770
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x70
        __asm _emit 0xA7
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A624: mov byte ptr [ebx + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5897A628: mov al, byte ptr [esi + 0xb3]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A62E: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897A630: je 0x5897a643
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897A632: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897A634: push esi
        __asm _emit 0x56
        // 0x5897A635: mov dword ptr [ecx + 0x14], 0x19
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A63C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897A63E: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897A640: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897A643: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5897A646: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x5897A649: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897A64B: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A653: jle 0x5897a741
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A659: push ebp
        __asm _emit 0x55
        // 0x5897A65A: push edi
        __asm _emit 0x57
        // 0x5897A65B: lea ebp, [eax + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x5897A65E: lea edi, [ebx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x0C
        // 0x5897A661: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5897A664: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A66A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5897A66C: jne 0x5897a69d
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x5897A66E: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5897A671: cmp edx, dword ptr [esi + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A677: jne 0x5897a69d
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5897A679: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A67F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897A681: je 0x5897a692
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5897A683: mov dword ptr [edi], 0x5897ae60
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x60
        __asm _emit 0xAE
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A689: mov byte ptr [ebx + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5897A68D: jmp 0x5897a725
        __asm _emit 0xE9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A692: mov dword ptr [edi], 0x5897a990
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x90
        __asm _emit 0xA9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A698: jmp 0x5897a725
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A69D: lea edx, [ecx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x09
        // 0x5897A6A0: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5897A6A2: jne 0x5897a6f3
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x5897A6A4: mov ebx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x5897A6A7: cmp ebx, dword ptr [esi + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A6AD: jne 0x5897a6c0
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5897A6AF: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897A6B3: mov byte ptr [esp + 0x13], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5897A6B8: mov dword ptr [edi], 0x5897a9e0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xE0
        __asm _emit 0xA9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A6BE: jmp 0x5897a725
        __asm _emit 0xEB
        __asm _emit 0x65
        // 0x5897A6C0: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897A6C4: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5897A6C6: jne 0x5897a6f3
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x5897A6C8: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5897A6CB: shl edx, 1
        __asm _emit 0xD1
        __asm _emit 0xE2
        // 0x5897A6CD: cmp edx, dword ptr [esi + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A6D3: jne 0x5897a6f3
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5897A6D5: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A6DB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897A6DD: je 0x5897a6eb
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5897A6DF: mov dword ptr [edi], 0x5897ab70
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x70
        __asm _emit 0xAB
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A6E5: mov byte ptr [ebx + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5897A6E9: jmp 0x5897a725
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x5897A6EB: mov dword ptr [edi], 0x5897aa90
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x90
        __asm _emit 0xAA
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A6F1: jmp 0x5897a725
        __asm _emit 0xEB
        __asm _emit 0x32
        // 0x5897A6F3: cdq
        __asm _emit 0x99
        // 0x5897A6F4: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5897A6F6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5897A6F8: jne 0x5897a714
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5897A6FA: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A700: cdq
        __asm _emit 0x99
        // 0x5897A701: idiv dword ptr [ebp]
        __asm _emit 0xF7
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5897A704: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5897A706: jne 0x5897a714
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5897A708: mov byte ptr [esp + 0x13], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x5897A70C: mov dword ptr [edi], 0x5897a800
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A712: jmp 0x5897a725
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5897A714: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897A716: push esi
        __asm _emit 0x56
        // 0x5897A717: mov dword ptr [eax + 0x14], 0x26
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A71E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897A720: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897A722: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897A725: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897A729: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5897A72C: inc eax
        __asm _emit 0x40
        // 0x5897A72D: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5897A730: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x54
        // 0x5897A733: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5897A735: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897A739: jl 0x5897a661
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x22
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897A73F: pop edi
        __asm _emit 0x5F
        // 0x5897A740: pop ebp
        __asm _emit 0x5D
        // 0x5897A741: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A747: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897A749: je 0x5897a767
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5897A74B: mov al, byte ptr [esp + 0xb]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x5897A74F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897A751: jne 0x5897a767
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5897A753: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897A755: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5897A757: push esi
        __asm _emit 0x56
        // 0x5897A758: mov dword ptr [edx + 0x14], 0x63
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A75F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897A761: call dword ptr [eax + 4]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5897A764: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5897A767: pop esi
        __asm _emit 0x5E
        // 0x5897A768: pop ebx
        __asm _emit 0x5B
        // 0x5897A769: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5897A76C: ret
        __asm _emit 0xC3
    }
}
