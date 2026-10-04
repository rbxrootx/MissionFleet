// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x588E6B60 .. +0x7C8 bytes.
// Source symbol alias: FUN_588e6b60.
extern "C" __declspec(naked) void FUN_588e6b60() {
    __asm {
        // 0x588E6B60: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x588E6B63: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E6B65: push ebp
        __asm _emit 0x55
        // 0x588E6B66: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588E6B68: push esi
        __asm _emit 0x56
        // 0x588E6B69: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E6B6B: push edi
        __asm _emit 0x57
        // 0x588E6B6C: mov word ptr [ebp + 0x91e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x1E
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6B73: mov word ptr [ebp + 0x91c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6B7A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E6B7E: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E6B82: mov dword ptr [ebp + 0xab0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6B88: mov dword ptr [ebp + 0xab4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6B8E: mov dword ptr [ebp + 0xab8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6B94: mov dword ptr [ebp + 0xabc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6B9A: lea esi, [ebp + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BA0: lea edi, [ebp + 0x51c]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BA6: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BAB: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588E6BAF: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588E6BB3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E6BB5: lea eax, [ebp + 0x924]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BBB: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588E6BBD: mov word ptr [ebp + 0x920], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BC4: lea esi, [ebp + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BCA: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E6BCE: mov dword ptr [esp + 0x28], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BD6: push ebx
        __asm _emit 0x53
        // 0x588E6BD7: jmp 0x588e6be0
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588E6BD9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BE0: mov ecx, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6BE6: lea edi, [esi - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xF0
        // 0x588E6BE9: push edi
        __asm _emit 0x57
        // 0x588E6BEA: push ecx
        __asm _emit 0x51
        // 0x588E6BEB: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E6BED: call 0x588e67e0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E6BF2: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588E6BF6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E6BF8: mov ebx, 0x58a24304
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6BFD: lea eax, [ebp + 0x91c]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6C03: mov dword ptr [edx], ecx
        __asm _emit 0x89
        __asm _emit 0x0A
        // 0x588E6C05: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588E6C09: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E6C0D: add edi, 0x408
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6C13: movzx eax, word ptr [edi - 0x400]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E6C1A: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6C1D: cdq
        __asm _emit 0x99
        // 0x588E6C1E: idiv dword ptr [ebx]
        __asm _emit 0xF7
        __asm _emit 0x3B
        // 0x588E6C20: cmp eax, 0xffff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6C25: jbe 0x588e6c2c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588E6C27: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6C2C: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E6C30: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588E6C33: movzx edx, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x12
        // 0x588E6C36: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x588E6C39: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588E6C3B: cmp edx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6C41: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E6C45: jle 0x588e6c51
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x588E6C47: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6C4C: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x588E6C4F: jmp 0x588e6c59
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588E6C51: movzx ebx, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x1A
        // 0x588E6C54: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x588E6C56: mov word ptr [edx], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x1A
        // 0x588E6C59: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588E6C5D: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588E6C60: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x588E6C63: add edi, 2
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x02
        // 0x588E6C66: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E6C6A: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588E6C6E: cmp ebx, 0x58a24310
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6C74: jne 0x588e6c13
        __asm _emit 0x75
        __asm _emit 0x9D
        // 0x588E6C76: movzx eax, byte ptr [esi - 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0xF2
        // 0x588E6C7A: cmp eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x11
        // 0x588E6C7D: ja 0x588e704d
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6C83: jmp dword ptr [eax*4 + 0x588e7328]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x73
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588E6C8A: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6C8D: mov dx, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xFE
        // 0x588E6C91: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6C94: mov word ptr [esi + 0x3fe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6C9B: cdq
        __asm _emit 0x99
        // 0x588E6C9C: idiv dword ptr [0x58a24320]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6CA2: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6CA9: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6CAD: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6CB0: cdq
        __asm _emit 0x99
        // 0x588E6CB1: idiv dword ptr [0x58a24324]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x24
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6CB7: jmp 0x588e7046
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6CBC: mov eax, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6CC2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E6CC4: je 0x588e6d14
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x588E6CC6: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588E6CCA: mov edx, 0x3e0
        __asm _emit 0xBA
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6CCF: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588E6CD2: cmp ax, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x588E6CD6: je 0x588e6d14
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588E6CD8: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6CDC: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6CDF: cdq
        __asm _emit 0x99
        // 0x588E6CE0: idiv dword ptr [0x58a24328]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x28
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6CE6: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6CED: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6CF0: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6CF3: cdq
        __asm _emit 0x99
        // 0x588E6CF4: idiv dword ptr [0x58a2432c]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6CFA: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D01: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6D05: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6D08: cdq
        __asm _emit 0x99
        // 0x588E6D09: idiv dword ptr [0x58a24330]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6D0F: jmp 0x588e7046
        __asm _emit 0xE9
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D14: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E6D16: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D1D: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6D21: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6D24: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E6D26: mov word ptr [esi + 0x400], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D2D: cdq
        __asm _emit 0x99
        // 0x588E6D2E: idiv dword ptr [0x58a24330]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6D34: jmp 0x588e7046
        __asm _emit 0xE9
        __asm _emit 0x0D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D39: mov al, byte ptr [esi - 0x10]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0xF0
        // 0x588E6D3C: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x588E6D3E: jae 0x588e6d7c
        __asm _emit 0x73
        __asm _emit 0x3C
        // 0x588E6D40: mov edx, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D46: mov dx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588E6D4A: mov edi, 0x3e0
        __asm _emit 0xBF
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D4F: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x588E6D52: cmp dx, 0x60
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x60
        // 0x588E6D56: jne 0x588e6d5c
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588E6D58: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588E6D5A: je 0x588e6d7c
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588E6D5C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E6D5E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E6D60: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E6D62: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D69: mov word ptr [esi + 0x400], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D70: mov word ptr [esi + 0x402], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D77: jmp 0x588e704d
        __asm _emit 0xE9
        __asm _emit 0xD1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D7C: mov eax, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D82: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E6D84: je 0x588e6d5c
        __asm _emit 0x74
        __asm _emit 0xD6
        // 0x588E6D86: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588E6D8A: mov edx, 0x3e0
        __asm _emit 0xBA
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6D8F: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588E6D92: cmp ax, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x588E6D96: je 0x588e6d5c
        __asm _emit 0x74
        __asm _emit 0xC4
        // 0x588E6D98: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6D9C: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6D9F: cdq
        __asm _emit 0x99
        // 0x588E6DA0: idiv dword ptr [0x58a24334]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6DA6: inc dword ptr [esp + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E6DAA: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6DB1: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6DB4: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6DB7: cdq
        __asm _emit 0x99
        // 0x588E6DB8: idiv dword ptr [0x58a24338]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6DBE: movzx ecx, word ptr [esi + 0x3fe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6DC5: add dword ptr [esp + 0x14], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E6DC9: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6DD0: movzx edx, word ptr [esi + 0x400]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6DD7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E6DD9: add dword ptr [esp + 0x20], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588E6DDD: jmp 0x588e7046
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6DE2: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6DE6: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6DE9: cdq
        __asm _emit 0x99
        // 0x588E6DEA: idiv dword ptr [0x58a24340]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6DF0: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6DF7: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6DFA: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6DFD: cdq
        __asm _emit 0x99
        // 0x588E6DFE: idiv dword ptr [0x58a24344]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x44
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6E04: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E0B: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6E0F: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6E12: cdq
        __asm _emit 0x99
        // 0x588E6E13: idiv dword ptr [0x58a24348]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x48
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6E19: mov word ptr [esi + 0x402], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E20: mov ecx, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E26: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588E6E29: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588E6E2C: cmp dl, 8
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x588E6E2F: jne 0x588e6e88
        __asm _emit 0x75
        __asm _emit 0x57
        // 0x588E6E31: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E6E34: je 0x588e704d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E3A: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588E6E3E: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588E6E42: jge 0x588e6e5a
        __asm _emit 0x7D
        __asm _emit 0x16
        // 0x588E6E44: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588E6E47: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588E6E4A: add dword ptr [ebp + 0xab0], eax
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E50: inc ecx
        __asm _emit 0x41
        // 0x588E6E51: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588E6E55: jmp 0x588e704d
        __asm _emit 0xE9
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E5A: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588E6E5E: jge 0x588e6e75
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x588E6E60: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x588E6E63: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588E6E65: add dword ptr [ebp + 0xab0], edx
        __asm _emit 0x01
        __asm _emit 0x95
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E6B: inc ecx
        __asm _emit 0x41
        // 0x588E6E6C: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588E6E70: jmp 0x588e704d
        __asm _emit 0xE9
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E75: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588E6E78: add dword ptr [ebp + 0xab0], eax
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E7E: inc ecx
        __asm _emit 0x41
        // 0x588E6E7F: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588E6E83: jmp 0x588e704d
        __asm _emit 0xE9
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E88: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x588E6E8B: add dword ptr [ebp + 0xab0], ecx
        __asm _emit 0x01
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E91: jmp 0x588e704d
        __asm _emit 0xE9
        __asm _emit 0xB7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6E96: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6E9A: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6E9D: cdq
        __asm _emit 0x99
        // 0x588E6E9E: idiv dword ptr [0x58a2434c]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x4C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6EA4: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6EAB: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6EAE: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6EB1: cdq
        __asm _emit 0x99
        // 0x588E6EB2: idiv dword ptr [0x58a24350]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x50
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6EB8: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6EBF: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6EC3: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6EC6: cdq
        __asm _emit 0x99
        // 0x588E6EC7: idiv dword ptr [0x58a24354]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6ECD: movzx edx, word ptr [esi + 0x3fe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6ED4: mov word ptr [esi + 0x402], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6EDB: add dword ptr [ebp + 0xab8], edx
        __asm _emit 0x01
        __asm _emit 0x95
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6EE1: movzx eax, word ptr [esi + 0x400]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6EE8: add dword ptr [ebp + 0xab4], eax
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6EEE: movzx ecx, word ptr [esi + 0x402]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6EF5: add dword ptr [ebp + 0xabc], ecx
        __asm _emit 0x01
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6EFB: jmp 0x588e704d
        __asm _emit 0xE9
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6F00: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6F04: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6F07: cdq
        __asm _emit 0x99
        // 0x588E6F08: idiv dword ptr [0x58a24358]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6F0E: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6F15: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6F18: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6F1B: cdq
        __asm _emit 0x99
        // 0x588E6F1C: idiv dword ptr [0x58a2435c]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x5C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6F22: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6F29: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6F2D: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6F30: cdq
        __asm _emit 0x99
        // 0x588E6F31: idiv dword ptr [0x58a24360]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x60
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6F37: jmp 0x588e7046
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6F3C: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6F40: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6F43: cdq
        __asm _emit 0x99
        // 0x588E6F44: idiv dword ptr [0x58a24364]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x64
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6F4A: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6F51: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6F54: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6F57: cdq
        __asm _emit 0x99
        // 0x588E6F58: idiv dword ptr [0x58a24368]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6F5E: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6F65: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6F69: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6F6C: cdq
        __asm _emit 0x99
        // 0x588E6F6D: idiv dword ptr [0x58a2436c]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x6C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6F73: jmp 0x588e7046
        __asm _emit 0xE9
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6F78: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6F7C: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6F7F: cdq
        __asm _emit 0x99
        // 0x588E6F80: idiv dword ptr [0x58a24388]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x88
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6F86: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6F8D: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6F90: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6F93: cdq
        __asm _emit 0x99
        // 0x588E6F94: idiv dword ptr [0x58a2438c]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x8C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6F9A: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6FA1: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6FA5: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6FA8: cdq
        __asm _emit 0x99
        // 0x588E6FA9: idiv dword ptr [0x58a24390]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6FAF: jmp 0x588e7046
        __asm _emit 0xE9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6FB4: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6FB8: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6FBB: cdq
        __asm _emit 0x99
        // 0x588E6FBC: idiv dword ptr [0x58a24394]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x94
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6FC2: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6FC9: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E6FCC: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6FCF: cdq
        __asm _emit 0x99
        // 0x588E6FD0: idiv dword ptr [0x58a24398]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6FD6: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6FDD: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E6FE1: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6FE4: cdq
        __asm _emit 0x99
        // 0x588E6FE5: idiv dword ptr [0x58a2439c]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x9C
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6FEB: jmp 0x588e7046
        __asm _emit 0xEB
        __asm _emit 0x59
        // 0x588E6FED: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E6FF1: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6FF4: cdq
        __asm _emit 0x99
        // 0x588E6FF5: idiv dword ptr [0x58a243a0]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6FFB: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7002: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x588E7005: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E7008: cdq
        __asm _emit 0x99
        // 0x588E7009: idiv dword ptr [0x58a243a4]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E700F: mov word ptr [esi + 0x400], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7016: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x588E701A: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E701D: cdq
        __asm _emit 0x99
        // 0x588E701E: idiv dword ptr [0x58a243a8]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E7024: jmp 0x588e7046
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x588E7026: movzx eax, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x588E702A: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E702D: cdq
        __asm _emit 0x99
        // 0x588E702E: idiv dword ptr [0x58a243ac]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xAC
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E7034: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E7036: mov word ptr [esi + 0x400], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E703D: mov word ptr [esi + 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7044: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7046: mov word ptr [esi + 0x402], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E704D: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x588E7052: add esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x20
        // 0x588E7055: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588E705A: jne 0x588e6be0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7060: movzx eax, word ptr [ebp + 0x91c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7067: cdq
        __asm _emit 0x99
        // 0x588E7068: idiv dword ptr [0x58a24310]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E706E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588E7070: mov word ptr [ebp + 0x91c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7077: movzx eax, word ptr [ebp + 0x91e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x1E
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E707E: cdq
        __asm _emit 0x99
        // 0x588E707F: idiv dword ptr [0x58a24314]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E7085: mov word ptr [ebp + 0x91e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x1E
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E708C: movzx eax, word ptr [ebp + 0x920]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7093: cdq
        __asm _emit 0x99
        // 0x588E7094: idiv dword ptr [0x58a24318]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x18
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E709A: mov word ptr [ebp + 0x920], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70A1: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E70A5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588E70A7: jle 0x588e711d
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x588E70A9: dec eax
        __asm _emit 0x48
        // 0x588E70AA: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588E70AD: ja 0x588e70fc
        __asm _emit 0x77
        __asm _emit 0x4D
        // 0x588E70AF: jmp dword ptr [eax*4 + 0x588e7370]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x73
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588E70B6: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70BB: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x588E70BD: mov eax, 0x2c3
        __asm _emit 0xB8
        __asm _emit 0xC3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70C2: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x588E70C4: mov eax, 0x241
        __asm _emit 0xB8
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70C9: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x588E70CB: mov eax, 0x1f4
        __asm _emit 0xB8
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70D0: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x588E70D2: mov eax, 0x1bf
        __asm _emit 0xB8
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70D7: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x588E70D9: mov eax, 0x198
        __asm _emit 0xB8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70DE: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588E70E0: mov eax, 0x179
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70E5: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588E70E7: mov eax, 0x162
        __asm _emit 0xB8
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70EC: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588E70EE: mov eax, 0x14d
        __asm _emit 0xB8
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70F3: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E70F5: mov eax, 0x13c
        __asm _emit 0xB8
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E70FA: jmp 0x588e7101
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588E70FC: mov eax, 0x12c
        __asm _emit 0xB8
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7101: imul eax, dword ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E7106: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E7108: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588E710D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E710F: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588E7112: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588E7114: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588E7117: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E7119: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588E711B: jmp 0x588e7121
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588E711D: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E7121: mov eax, dword ptr [ebp + 0xccc]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7127: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588E7129: je 0x588e7168
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588E712B: movzx edx, word ptr [eax + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7132: movzx ecx, word ptr [ebp + 0x52e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0x2E
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7139: mov dword ptr [ebp + 0xa74], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E713F: movzx eax, word ptr [eax + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7146: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588E7148: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E714A: shl ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x588E714D: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x588E714F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E7154: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E7156: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588E7159: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E715B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E715E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E7160: mov dword ptr [ebp + 0xa78], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7166: jmp 0x588e7174
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E7168: mov dword ptr [ebp + 0xa74], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E716E: mov dword ptr [ebp + 0xa78], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7174: mov esi, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E717A: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x588E717C: je 0x588e71ba
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588E717E: movzx eax, word ptr [esi + 0x380]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7185: mov dword ptr [ebp + 0xa80], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E718B: mov cx, word ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588E718F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E7193: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588E7197: je 0x588e71ad
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588E7199: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588E719D: je 0x588e71ad
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588E719F: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x588E71A2: cdq
        __asm _emit 0x99
        // 0x588E71A3: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588E71A6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E71A8: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588E71AB: jmp 0x588e71c5
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x588E71AD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E71AF: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588E71B2: mov dword ptr [ebp + 0xa84], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E71B8: jmp 0x588e71cb
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x588E71BA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E71BF: mov dword ptr [ebp + 0xa80], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E71C5: mov dword ptr [ebp + 0xa84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E71CB: mov edi, dword ptr [ebp + 0xcc8]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E71D1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E71D3: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588E71D5: je 0x588e7296
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E71DB: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E71E1: movzx eax, word ptr [edx + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E71E8: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588E71EC: je 0x588e7246
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x588E71EE: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x588E71F2: je 0x588e7246
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588E71F4: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588E71F6: je 0x588e723e
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x588E71F8: movzx ecx, word ptr [esi + 0x7c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588E71FC: imul ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7203: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E7208: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E720A: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588E720D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588E720F: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588E7212: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E7214: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588E7219: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x588E721B: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x588E721E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7220: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E7223: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E7225: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588E7227: cmp eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x46
        // 0x588E722A: mov dword ptr [ebp + 0xaa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7230: jle 0x588e727f
        __asm _emit 0x7E
        __asm _emit 0x4D
        // 0x588E7232: mov dword ptr [ebp + 0xaa4], 0x46
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E723C: jmp 0x588e727f
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x588E723E: mov dword ptr [ebp + 0xaa4], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7244: jmp 0x588e727f
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x588E7246: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588E7248: je 0x588e7266
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588E724A: movzx ecx, word ptr [esi + 0x7c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588E724E: imul ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7255: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E725A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E725C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588E725F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588E7261: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588E7264: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E7266: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588E726B: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x588E726D: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x588E7270: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7272: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E7275: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E7277: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588E7279: mov dword ptr [ebp + 0xaa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E727F: mov ecx, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7285: imul ecx, ecx, 0x32
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x32
        // 0x588E7288: add ecx, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588E728C: mov dword ptr [ebp + 0xaa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7292: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E7294: jmp 0x588e72a2
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E7296: mov dword ptr [ebp + 0xaa4], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E729C: mov dword ptr [ebp + 0xaa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72A2: mov dword ptr [ebp + 0xa88], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72A8: movzx ecx, word ptr [ebp + 0x920]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72AF: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72B4: cdq
        __asm _emit 0x99
        // 0x588E72B5: lea edi, [ecx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x64
        // 0x588E72B8: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588E72BA: pop ebx
        __asm _emit 0x5B
        // 0x588E72BB: mov dword ptr [ebp + 0xa90], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72C1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E72C3: jne 0x588e72ca
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588E72C5: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72CA: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x588E72CC: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x588E72CF: mov dword ptr [ebp + 0xa90], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72D5: mov dword ptr [ebp + 0xa8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72DB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588E72DD: je 0x588e7317
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588E72DF: movzx ecx, word ptr [esi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588E72E3: movzx edx, word ptr [ebp + 0x91c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72EA: add edx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72F0: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E72F6: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x588E72F9: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588E72FE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E7300: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588E7303: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7305: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E7308: pop edi
        __asm _emit 0x5F
        // 0x588E7309: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E730B: pop esi
        __asm _emit 0x5E
        // 0x588E730C: mov dword ptr [ebp + 0xa94], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7312: pop ebp
        __asm _emit 0x5D
        // 0x588E7313: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x588E7316: ret
        __asm _emit 0xC3
        // 0x588E7317: pop edi
        __asm _emit 0x5F
        // 0x588E7318: pop esi
        __asm _emit 0x5E
        // 0x588E7319: mov dword ptr [ebp + 0xa94], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7323: pop ebp
        __asm _emit 0x5D
        // 0x588E7324: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x588E7327: ret
        __asm _emit 0xC3
    }
}
