// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1758 bytes in 1 exact ranges.
// Source symbol alias: FUN_5883b500.

// Ghidra body range 0x5883B500..0x5883BBDE; 1758 mapped bytes.
extern "C" __declspec(naked) void FUN_5883b500_segment_00() {
    __asm {
        // 0x5883B500: sub esp, 0xf4
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B506: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5883B50B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883B50D: mov dword ptr [esp + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B514: mov eax, dword ptr [esp + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B51B: push ebx
        __asm _emit 0x53
        // 0x5883B51C: push esi
        __asm _emit 0x56
        // 0x5883B51D: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B522: push edi
        __asm _emit 0x57
        // 0x5883B523: mov edi, dword ptr [esp + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B52A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883B52C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5883B52E: jne 0x5883b986
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B534: mov eax, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B53B: cmp eax, dword ptr [esi + 0xb8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B541: jne 0x5883b601
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B547: call 0x587b6c60
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xB7
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883B54C: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B552: mov dword ptr [esi + 0x2e8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B55C: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B561: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5883B565: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B56B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5883B56D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5883B571: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B577: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5883B57B: mov edx, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B581: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5883B585: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5883B587: je 0x5883b593
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883B589: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B58F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5883B593: mov edx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B599: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5883B59D: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5883B59F: je 0x5883b5b0
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5883B5A1: mov eax, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5A7: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5AC: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5883B5B0: cmp word ptr [0x58a0b4a8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x03
        // 0x5883B5B8: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5BE: jne 0x5883b5dd
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5883B5C0: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883B5C4: mov eax, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5CA: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883B5CE: mov esi, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5D4: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x5883B5D8: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0xE5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5DD: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5E2: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5883B5E6: mov eax, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5EC: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5883B5EE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5883B5F2: mov esi, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B5F8: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5883B5FC: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0xC1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B601: cmp eax, dword ptr [esi + 0x1d0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B607: jne 0x5883b697
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B60D: call 0x587b6be0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xB5
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883B612: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B618: mov dword ptr [esi + 0x2e8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B622: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883B626: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B62C: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883B630: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B636: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883B63A: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B640: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5883B644: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5883B647: je 0x5883b653
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883B649: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B64F: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883B653: mov edx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B659: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5883B65D: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5883B65F: je 0x5883b66b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883B661: mov eax, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B667: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883B66B: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B671: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B676: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5883B67A: mov eax, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B680: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5883B682: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5883B686: mov esi, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B68C: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5883B68E: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5883B692: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x2B
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B697: cmp eax, dword ptr [esi + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B69D: jne 0x5883b6b6
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5883B69F: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5883B6A2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5883B6A4: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5883B6A7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B6A9: push 0xf232
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B6AE: push esi
        __asm _emit 0x56
        // 0x5883B6AF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5883B6B1: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B6B6: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B6BC: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5883B6BE: jne 0x5883b6d9
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5883B6C0: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B6C5: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B6CB: push eax
        __asm _emit 0x50
        // 0x5883B6CC: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xD1
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B6D1: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B6D7: jmp 0x5883b6fa
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x5883B6D9: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B6DF: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5883B6E1: jne 0x5883b717
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x5883B6E3: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B6E8: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B6EE: push eax
        __asm _emit 0x50
        // 0x5883B6EF: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xD1
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B6F4: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B6FA: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B6FF: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B705: push eax
        __asm _emit 0x50
        // 0x5883B706: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xD1
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B70B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883B70D: call 0x58839fa0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883B712: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0xAB
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B717: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B71D: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5883B71F: jne 0x5883b755
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x5883B721: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B726: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B72C: push eax
        __asm _emit 0x50
        // 0x5883B72D: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B732: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B738: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B73D: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B743: push eax
        __asm _emit 0x50
        // 0x5883B744: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B749: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883B74B: call 0x58839fa0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883B750: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x6D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B755: cmp eax, dword ptr [esi + 0x258]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B75B: jne 0x5883b76b
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5883B75D: mov byte ptr [esi + 0x2e6], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5883B764: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B766: jmp 0x5883b847
        __asm _emit 0xE9
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B76B: cmp eax, dword ptr [esi + 0x25c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B771: jne 0x5883b800
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B777: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B77D: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x5883B780: push eax
        __asm _emit 0x50
        // 0x5883B781: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B787: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883B789: jle 0x5883bbc2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B78F: mov edx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B795: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5883B798: push eax
        __asm _emit 0x50
        // 0x5883B799: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883B79B: call 0x5883b3b0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883B7A0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883B7A2: je 0x5883bbc2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B7A8: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B7AE: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B7B3: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B7B9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883B7BB: push edi
        __asm _emit 0x57
        // 0x5883B7BC: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B7C1: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B7C7: push edi
        __asm _emit 0x57
        // 0x5883B7C8: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B7CD: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B7D3: push edi
        __asm _emit 0x57
        // 0x5883B7D4: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B7D9: mov eax, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B7DF: sub eax, dword ptr [esi + 0x228]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B7E5: mov ecx, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B7EB: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5883B7EE: push eax
        __asm _emit 0x50
        // 0x5883B7EF: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xBB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B7F4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883B7F6: call 0x58839730
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883B7FB: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0xC2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B800: cmp eax, dword ptr [esi + 0x260]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B806: jne 0x5883b810
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5883B808: mov byte ptr [esi + 0x2e6], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xE6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B80E: jmp 0x5883b845
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x5883B810: cmp eax, dword ptr [esi + 0x134]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B816: jne 0x5883b828
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5883B818: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B81A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B81C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B81E: push 0x130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B823: jmp 0x5883bbb6
        __asm _emit 0xE9
        __asm _emit 0x8E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B828: cmp eax, dword ptr [esi + 0x154]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B82E: jne 0x5883b85c
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5883B830: cmp word ptr [0x58a0b4a8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x03
        // 0x5883B838: jne 0x5883bbc2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B83E: mov byte ptr [esi + 0x2e6], 4
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5883B845: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883B847: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5883B84A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5883B84C: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5883B84F: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B854: push esi
        __asm _emit 0x56
        // 0x5883B855: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5883B857: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B85C: cmp eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B862: jne 0x5883b8e3
        __asm _emit 0x75
        __asm _emit 0x7F
        // 0x5883B864: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5883B86B: jbe 0x5883bbc2
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B871: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5883B874: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5883B877: add ecx, 0x197
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B87D: mov byte ptr [esi + 0x308], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5883B884: mov dword ptr [esi + 0x300], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B88E: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883B893: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5883B897: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B89D: add edx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7D
        // 0x5883B8A0: push eax
        __asm _emit 0x50
        // 0x5883B8A1: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883B8A5: call 0x587c8190
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xC8
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5883B8AA: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5883B8AE: push ecx
        __asm _emit 0x51
        // 0x5883B8AF: push 0x5899e2b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883B8B4: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B8BA: mov edx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883B8C0: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B8C6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883B8C9: push eax
        __asm _emit 0x50
        // 0x5883B8CA: push edx
        __asm _emit 0x52
        // 0x5883B8CB: push esi
        __asm _emit 0x56
        // 0x5883B8CC: call 0x587c8910
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xD0
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5883B8D1: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B8D7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883B8D9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5883B8DC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883B8DE: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B8E3: cmp eax, dword ptr [esi + 0x2fc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B8E9: jne 0x5883bbc2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B8EF: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x5883B8F7: jne 0x5883b96a
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x5883B8F9: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5883B8FC: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5883B8FF: add ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x7D
        // 0x5883B902: mov byte ptr [esi + 0x308], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B908: mov dword ptr [esi + 0x304], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B912: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883B918: add eax, 0x197
        __asm _emit 0x05
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B91D: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883B921: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B927: push edx
        __asm _emit 0x52
        // 0x5883B928: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883B92C: call 0x587c8190
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xC8
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5883B931: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883B935: push eax
        __asm _emit 0x50
        // 0x5883B936: push 0x5899e294
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883B93B: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B941: mov ecx, dword ptr [esi + 0x30c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B947: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883B94A: push eax
        __asm _emit 0x50
        // 0x5883B94B: push ecx
        __asm _emit 0x51
        // 0x5883B94C: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B952: push esi
        __asm _emit 0x56
        // 0x5883B953: call 0x587c8910
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xCF
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5883B958: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B95E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5883B960: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5883B963: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5883B965: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B96A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B96C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B96E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B970: push 0x475
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B975: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5883B97A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883B97C: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x93
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883B981: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B986: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B98B: jne 0x5883bb0e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B991: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883B997: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B99D: mov eax, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B9A4: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5883B9A6: jne 0x5883babe
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B9AC: mov al, byte ptr [esi + 0x2e6]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xE6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B9B2: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5883B9B4: jne 0x5883ba12
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x5883B9B6: mov edx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B9BC: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5883B9BF: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B9C5: push eax
        __asm _emit 0x50
        // 0x5883B9C6: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5883B9CA: push ecx
        __asm _emit 0x51
        // 0x5883B9CB: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5883B9CD: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883B9D3: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B9D9: mov ecx, dword ptr [eax + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B9DF: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x5883B9E2: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B9E8: push eax
        __asm _emit 0x50
        // 0x5883B9E9: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5883B9ED: push ecx
        __asm _emit 0x51
        // 0x5883B9EE: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5883B9F0: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883B9F5: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883B9FB: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883B9FF: push edx
        __asm _emit 0x52
        // 0x5883BA00: push eax
        __asm _emit 0x50
        // 0x5883BA01: push ecx
        __asm _emit 0x51
        // 0x5883BA02: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883BA08: call 0x587b9400
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xD9
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883BA0D: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA12: cmp al, bl
        __asm _emit 0x3A
        __asm _emit 0xC3
        // 0x5883BA14: jne 0x5883ba72
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x5883BA16: mov edx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA1C: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5883BA1F: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883BA25: push eax
        __asm _emit 0x50
        // 0x5883BA26: lea ecx, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5883BA2A: push ecx
        __asm _emit 0x51
        // 0x5883BA2B: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5883BA2D: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883BA33: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA39: mov ecx, dword ptr [eax + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA3F: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x5883BA42: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA48: push eax
        __asm _emit 0x50
        // 0x5883BA49: lea ecx, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5883BA4D: push ecx
        __asm _emit 0x51
        // 0x5883BA4E: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5883BA50: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883BA55: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883BA5B: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5883BA5F: push edx
        __asm _emit 0x52
        // 0x5883BA60: push eax
        __asm _emit 0x50
        // 0x5883BA61: push ecx
        __asm _emit 0x51
        // 0x5883BA62: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883BA68: call 0x587b9420
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xD9
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883BA6D: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA72: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5883BA74: jne 0x5883ba96
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x5883BA76: mov edx, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA7C: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x5883BA7F: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA85: push ecx
        __asm _emit 0x51
        // 0x5883BA86: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883BA8C: call 0x587b94a0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xDA
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883BA91: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA96: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5883BA98: jne 0x5883bbc2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BA9E: mov edx, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BAA4: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x5883BAA7: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BAAD: push ecx
        __asm _emit 0x51
        // 0x5883BAAE: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883BAB4: call 0x587baae0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xF0
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883BAB9: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BABE: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5883BAC0: jne 0x5883bbc2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BAC6: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BACC: mov eax, dword ptr [esi + 0x304]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BAD2: mov ecx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x64
        // 0x5883BAD5: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5883BAD7: jns 0x5883baf5
        __asm _emit 0x79
        __asm _emit 0x1C
        // 0x5883BAD9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883BADB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883BADD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883BADF: push 0x481
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BAE4: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5883BAE9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883BAEB: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x92
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883BAF0: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BAF5: mov edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883BAFB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883BB01: push edi
        __asm _emit 0x57
        // 0x5883BB02: push eax
        __asm _emit 0x50
        // 0x5883BB03: push edx
        __asm _emit 0x52
        // 0x5883BB04: call 0x587ba070
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xE5
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883BB09: jmp 0x5883bbc2
        __asm _emit 0xE9
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB0E: cmp eax, 0xf235
        __asm _emit 0x3D
        __asm _emit 0x35
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB13: jne 0x5883bbc2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB19: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB1E: lea eax, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB25: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883BB27: push eax
        __asm _emit 0x50
        // 0x5883BB28: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x11
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883BB2D: mov al, byte ptr [esi + 0x308]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB33: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5883BB36: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5883BB38: jne 0x5883bb77
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x5883BB3A: push edi
        __asm _emit 0x57
        // 0x5883BB3B: lea ecx, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB42: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883BB47: push ecx
        __asm _emit 0x51
        // 0x5883BB48: mov dword ptr [esi + 0x300], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB4E: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883BB54: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB5A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5883BB5C: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5883BB5F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5883BB62: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5883BB64: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883BB66: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883BB68: lea ecx, [esp + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB6F: push ecx
        __asm _emit 0x51
        // 0x5883BB70: push 0x142
        __asm _emit 0x68
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB75: jmp 0x5883bbb6
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x5883BB77: cmp al, bl
        __asm _emit 0x3A
        __asm _emit 0xC3
        // 0x5883BB79: jne 0x5883bbc2
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x5883BB7B: push edi
        __asm _emit 0x57
        // 0x5883BB7C: lea edx, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB83: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883BB88: push edx
        __asm _emit 0x52
        // 0x5883BB89: mov dword ptr [esi + 0x304], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB8F: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883BB95: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BB9B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883BB9D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883BBA0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5883BBA3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883BBA5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883BBA7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883BBA9: lea eax, [esp + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BBB0: push eax
        __asm _emit 0x50
        // 0x5883BBB1: push 0x143
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BBB6: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xFF
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883BBBB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883BBBD: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xE9
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883BBC2: mov ecx, dword ptr [esp + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BBC9: pop edi
        __asm _emit 0x5F
        // 0x5883BBCA: pop esi
        __asm _emit 0x5E
        // 0x5883BBCB: pop ebx
        __asm _emit 0x5B
        // 0x5883BBCC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5883BBCE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883BBD0: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883BBD5: add esp, 0xf4
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883BBDB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
