// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5880AF90 .. +0x136 bytes.
// Source symbol alias: FUN_5880af90.
extern "C" __declspec(naked) void FUN_5880af90() {
    __asm {
        // 0x5880AF90: push edi
        __asm _emit 0x57
        // 0x5880AF91: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5880AF93: cmp dword ptr [edi + 0x6e0], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xE0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AF9A: je 0x5880b0c4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AFA0: cmp dword ptr [edi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AFA7: jne 0x5880afe3
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x5880AFA9: mov dword ptr [edi + 0x80], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5880AFB3: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AFB9: push esi
        __asm _emit 0x56
        // 0x5880AFBA: call 0x587f2940
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5880AFBF: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AFC5: call 0x5878a1e0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xF2
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880AFCA: mov esi, 0x58a0b1c4
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880AFCF: nop
        __asm _emit 0x90
        // 0x5880AFD0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5880AFD2: call 0x58789890
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880AFD7: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5880AFDA: cmp esi, 0x58a0b1e4
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880AFE0: jl 0x5880afd0
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x5880AFE2: pop esi
        __asm _emit 0x5E
        // 0x5880AFE3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AFE9: push ebx
        __asm _emit 0x53
        // 0x5880AFEA: call 0x587bab60
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xFB
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5880AFEF: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AFF4: movzx eax, word ptr [eax + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880AFFB: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B000: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5880B004: je 0x5880b023
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5880B006: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5880B00A: je 0x5880b023
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5880B00C: cmp dword ptr [0x58a248f0], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0xF0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B012: jne 0x5880b023
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5880B014: mov ecx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x64
        // 0x5880B017: push ecx
        __asm _emit 0x51
        // 0x5880B018: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B01E: call 0x587b99d0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5880B023: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B029: mov eax, dword ptr [edx + 0xdd4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B02F: cmp dword ptr [eax + 0xe4], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B035: jne 0x5880b077
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5880B037: mov cl, byte ptr [0x58a0b1fd]
        __asm _emit 0x8A
        __asm _emit 0x0D
        __asm _emit 0xFD
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B03D: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x5880B040: jae 0x5880b061
        __asm _emit 0x73
        __asm _emit 0x1F
        // 0x5880B042: movzx edx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD1
        // 0x5880B045: mov eax, dword ptr [edx*4 + 0x58a0b1e4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B04C: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5880B04F: je 0x5880b061
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5880B051: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x5880B054: push ecx
        __asm _emit 0x51
        // 0x5880B055: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B05B: push eax
        __asm _emit 0x50
        // 0x5880B05C: call 0x587b99f0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5880B061: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B067: mov eax, dword ptr [edx + 0xdd4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B06D: mov dword ptr [eax + 0xe4], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B077: cmp dword ptr [0x58a248f4], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0xF4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B07D: jne 0x5880b0b9
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x5880B07F: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B085: call 0x587d8840
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xD7
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5880B08A: mov al, byte ptr [0x58a0b1fd]
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880B08F: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x5880B092: cmp dword ptr [ecx*4 + 0x58a0b1e4], -1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x8D
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x5880B09A: je 0x5880b0b9
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5880B09C: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B0A2: test byte ptr [edx + 0x105a8], bl
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880B0A8: je 0x5880b0b9
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5880B0AA: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x5880B0AC: jae 0x5880b0b9
        __asm _emit 0x73
        __asm _emit 0x0B
        // 0x5880B0AE: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B0B4: call 0x587d89f0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xD9
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5880B0B9: mov dword ptr [edi + 0x6e0], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xE0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B0C3: pop ebx
        __asm _emit 0x5B
        // 0x5880B0C4: pop edi
        __asm _emit 0x5F
        // 0x5880B0C5: ret
        __asm _emit 0xC3
    }
}
