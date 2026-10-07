// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 347 bytes in 1 exact ranges.
// Source symbol alias: FUN_588b6050.

// Ghidra body range 0x588B6050..0x588B61AB; 347 mapped bytes.
extern "C" __declspec(naked) void FUN_588b6050_segment_00() {
    __asm {
        // 0x588B6050: push esi
        __asm _emit 0x56
        // 0x588B6051: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B6053: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6059: cmp dword ptr [ecx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6060: jne 0x588b6086
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x588B6062: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6068: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B606C: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B606F: je 0x588b61a9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6075: mov esi, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B607B: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6080: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B6084: pop esi
        __asm _emit 0x5E
        // 0x588B6085: ret
        __asm _emit 0xC3
        // 0x588B6086: push ebx
        __asm _emit 0x53
        // 0x588B6087: push ebp
        __asm _emit 0x55
        // 0x588B6088: push edi
        __asm _emit 0x57
        // 0x588B6089: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B608E: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6094: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B6096: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B609B: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588B609D: jg 0x588b6107
        __asm _emit 0x7F
        __asm _emit 0x68
        // 0x588B609F: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B60A5: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B60AA: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B60B0: lea edi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588B60B3: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B60B8: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588B60BA: jle 0x588b6107
        __asm _emit 0x7E
        __asm _emit 0x4B
        // 0x588B60BC: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B60C2: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B60C7: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B60CD: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B60CF: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B60D4: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B60DA: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x588B60DC: imul edi, edi, 0xd
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x0D
        // 0x588B60DF: add edi, 0xe8
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B60E5: push edi
        __asm _emit 0x57
        // 0x588B60E6: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xD2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B60EB: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B60F1: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B60F5: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B60F8: jne 0x588b6124
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588B60FA: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6100: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588B6105: jmp 0x588b6124
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588B6107: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B610D: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B6111: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B6113: je 0x588b6124
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588B6115: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B611B: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6120: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B6124: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B6126: lea ebx, [esi + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B612C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B6130: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6136: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B613B: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6141: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588B6143: push eax
        __asm _emit 0x50
        // 0x588B6144: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x1F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B6149: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588B614C: jne 0x588b6194
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x588B614E: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6154: mov ebp, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B615A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B615F: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588B6161: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588B6163: jge 0x588b6189
        __asm _emit 0x7D
        __asm _emit 0x24
        // 0x588B6165: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B616B: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B6170: mov edx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6176: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588B6178: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588B617A: mov eax, dword ptr [edx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x588B617D: movzx eax, word ptr [eax + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x5E
        // 0x588B6181: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588B6184: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B6187: jmp 0x588b619d
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588B6189: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x588B618B: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6192: jmp 0x588b619d
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588B6194: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588B6196: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B619D: inc edi
        __asm _emit 0x47
        // 0x588B619E: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588B61A1: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x588B61A4: jl 0x588b6130
        __asm _emit 0x7C
        __asm _emit 0x8A
        // 0x588B61A6: pop edi
        __asm _emit 0x5F
        // 0x588B61A7: pop ebp
        __asm _emit 0x5D
        // 0x588B61A8: pop ebx
        __asm _emit 0x5B
        // 0x588B61A9: pop esi
        __asm _emit 0x5E
        // 0x588B61AA: ret
        __asm _emit 0xC3
    }
}
