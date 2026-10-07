// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 564 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6940.

// Ghidra body range 0x588F6940..0x588F6B74; 564 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6940_segment_00() {
    __asm {
        // 0x588F6940: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F6942: push 0x58989f76
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0x9F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F6947: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F694D: push eax
        __asm _emit 0x50
        // 0x588F694E: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x588F6951: push ebx
        __asm _emit 0x53
        // 0x588F6952: push ebp
        __asm _emit 0x55
        // 0x588F6953: push esi
        __asm _emit 0x56
        // 0x588F6954: push edi
        __asm _emit 0x57
        // 0x588F6955: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F695A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F695C: push eax
        __asm _emit 0x50
        // 0x588F695D: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F6961: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6967: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F6969: mov esi, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588F696D: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x588F6970: jl 0x588f6b5e
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6976: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F6978: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588F697B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F697D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F697F: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x588F6982: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x588F6985: inc eax
        __asm _emit 0x40
        // 0x588F6986: mov dword ptr [edi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x60
        // 0x588F6989: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588F698B: jle 0x588f6b04
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6991: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F6995: lea ebx, [edi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x68
        // 0x588F6998: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F699C: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F69A0: push 0x33c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F69A5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F69AA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F69AD: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F69B1: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588F69B3: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F69B7: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588F69B9: je 0x588f69f9
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588F69BB: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x588F69BE: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588F69C1: mov esi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588F69C4: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588F69C6: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588F69C9: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x588F69CB: mov cx, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x588F69CF: add cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0A
        // 0x588F69D3: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588F69D6: push ecx
        __asm _emit 0x51
        // 0x588F69D7: lea ecx, [edx + 0x166]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F69DD: push ecx
        __asm _emit 0x51
        // 0x588F69DE: lea ecx, [esi + 0xf9]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F69E4: push ecx
        __asm _emit 0x51
        // 0x588F69E5: add edx, 0x2a
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x2A
        // 0x588F69E8: push edx
        __asm _emit 0x52
        // 0x588F69E9: add esi, 0x41
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x41
        // 0x588F69EC: push esi
        __asm _emit 0x56
        // 0x588F69ED: push edi
        __asm _emit 0x57
        // 0x588F69EE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F69F0: call 0x5886dda0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x73
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588F69F5: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588F69F7: jmp 0x588f69fb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F69F9: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588F69FB: push 0x27c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6A00: mov dword ptr [esp + 0x3c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6A08: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F6A0C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6A11: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F6A14: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F6A18: mov dword ptr [esp + 0x38], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6A20: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588F6A22: je 0x588f6a32
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F6A24: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F6A28: push edx
        __asm _emit 0x52
        // 0x588F6A29: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F6A2B: call 0x5877cc30
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x62
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588F6A30: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588F6A32: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F6A37: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6A3C: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588F6A40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x588F6A43: mov dword ptr [esp + 0x38], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6A4B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F6A4D: je 0x588f6a55
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F6A4F: push esi
        __asm _emit 0x56
        // 0x588F6A50: call 0x58903160
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6A55: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F6A57: push ebp
        __asm _emit 0x55
        // 0x588F6A58: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F6A5A: call 0x5886ffa0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x95
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588F6A5F: mov eax, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6A65: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588F6A6C: jle 0x588f6a7d
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588F6A6E: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6A74: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F6A76: je 0x588f6a7d
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588F6A78: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x588F6A7B: jmp 0x588f6a7f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F6A7D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F6A7F: movzx ecx, word ptr [ebp + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x5E
        // 0x588F6A83: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588F6A86: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x588F6A89: mov eax, dword ptr [edx + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x8A
        // 0x588F6A8C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F6A8E: je 0x588f6a98
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588F6A90: push eax
        __asm _emit 0x50
        // 0x588F6A91: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F6A93: call 0x5886dcf0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588F6A98: mov ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x588F6A9B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F6A9D: jne 0x588f6aa3
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588F6A9F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F6AA1: jmp 0x588f6aab
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588F6AA3: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x588F6AA6: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588F6AA8: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F6AAB: mov ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x588F6AAE: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x588F6AB0: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588F6AB2: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F6AB5: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588F6AB7: jae 0x588f6ad3
        __asm _emit 0x73
        __asm _emit 0x1A
        // 0x588F6AB9: mov dword ptr [ebp], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x588F6ABC: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588F6ABF: mov byte ptr [esp + 0x44], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        // 0x588F6AC4: mov byte ptr [esp + 0x40], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x588F6AC9: mov byte ptr [esp + 0x17], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588F6ACE: mov dword ptr [ebx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x588F6AD1: jmp 0x588f6af1
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x588F6AD3: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588F6AD5: jbe 0x588f6adc
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588F6AD7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6ADC: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588F6ADE: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F6AE2: push ecx
        __asm _emit 0x51
        // 0x588F6AE3: push ebp
        __asm _emit 0x55
        // 0x588F6AE4: push eax
        __asm _emit 0x50
        // 0x588F6AE5: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F6AE9: push edx
        __asm _emit 0x52
        // 0x588F6AEA: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588F6AEC: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6AF1: add dword ptr [esp + 0x18], 0x180
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6AF9: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x588F6AFE: jne 0x588f69a0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6B04: mov eax, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x78
        // 0x588F6B07: sub eax, dword ptr [edi + 0x74]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x74
        // 0x588F6B0A: mov esi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x588F6B0D: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F6B10: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F6B12: jb 0x588f6b19
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588F6B14: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6B19: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x588F6B1C: mov eax, dword ptr [ecx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB1
        // 0x588F6B1F: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588F6B24: mov edx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x78
        // 0x588F6B27: sub edx, dword ptr [edi + 0x74]
        __asm _emit 0x2B
        __asm _emit 0x57
        __asm _emit 0x74
        // 0x588F6B2A: mov esi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x588F6B2D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F6B30: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x588F6B32: jb 0x588f6b39
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588F6B34: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6B39: mov eax, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x74
        // 0x588F6B3C: mov esi, dword ptr [eax + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xB0
        // 0x588F6B3F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588F6B43: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6B48: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588F6B4B: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6B50: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588F6B53: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588F6B57: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F6B59: call 0x588f6580
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6B5E: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F6B62: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6B69: pop ecx
        __asm _emit 0x59
        // 0x588F6B6A: pop edi
        __asm _emit 0x5F
        // 0x588F6B6B: pop esi
        __asm _emit 0x5E
        // 0x588F6B6C: pop ebp
        __asm _emit 0x5D
        // 0x588F6B6D: pop ebx
        __asm _emit 0x5B
        // 0x588F6B6E: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x588F6B71: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
