// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 234 bytes in 1 exact ranges.
// Source symbol alias: FUN_587891a0.

// Ghidra body range 0x587891A0..0x5878928A; 234 mapped bytes.
extern "C" __declspec(naked) void FUN_587891a0_segment_00() {
    __asm {
        // 0x587891A0: push ebp
        __asm _emit 0x55
        // 0x587891A1: push esi
        __asm _emit 0x56
        // 0x587891A2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587891A4: push edi
        __asm _emit 0x57
        // 0x587891A5: lea edi, [esi + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x587891A8: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587891AD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587891B0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587891B2: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x587891B5: sub eax, dword ptr [esi + 0x94]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587891BB: mov edx, 0
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587891C0: sets dl
        __asm _emit 0x0F
        __asm _emit 0x98
        __asm _emit 0xC2
        // 0x587891C3: dec edx
        __asm _emit 0x4A
        // 0x587891C4: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x587891C6: push edx
        __asm _emit 0x52
        // 0x587891C7: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x9B
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587891CC: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587891CF: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587891D2: jne 0x587891b0
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x587891D4: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587891D8: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587891DB: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587891DD: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587891E3: push eax
        __asm _emit 0x50
        // 0x587891E4: push ecx
        __asm _emit 0x51
        // 0x587891E5: mov ecx, dword ptr [esi + edx*4 + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x96
        __asm _emit 0x50
        // 0x587891E9: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xA0
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587891EE: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587891F4: mov ecx, dword ptr [esi + eax*4 + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x86
        __asm _emit 0x50
        // 0x587891F8: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587891FD: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x9A
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58789202: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58789204: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878920A: mov dword ptr [esi + eax*8 + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0xC6
        __asm _emit 0x60
        // 0x5878920E: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x58789211: mov dword ptr [esi + eax*8 + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0xC6
        __asm _emit 0x64
        // 0x58789215: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878921B: mov dword ptr [esi + eax*4 + 0x80], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789222: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789228: mov edx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x30
        // 0x5878922B: lea eax, [esi + ecx*8 + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0xCE
        __asm _emit 0x60
        // 0x5878922F: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58789232: sub dword ptr [eax], ecx
        __asm _emit 0x29
        __asm _emit 0x08
        // 0x58789234: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878923A: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5878923D: lea eax, [esi + edx*8 + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0xD6
        __asm _emit 0x64
        // 0x58789241: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58789244: sub dword ptr [eax], edx
        __asm _emit 0x29
        __asm _emit 0x10
        // 0x58789246: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878924C: mov ecx, dword ptr [esi + eax*8 + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xC6
        __asm _emit 0x64
        // 0x58789250: lea edi, [esi + eax*8 + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0xC6
        __asm _emit 0x64
        // 0x58789254: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x58789257: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5878925C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5878925E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58789261: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58789263: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58789266: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58789268: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x5878926A: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789270: inc edx
        __asm _emit 0x42
        // 0x58789271: and edx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58789277: jns 0x5878927e
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58789279: dec edx
        __asm _emit 0x4A
        // 0x5878927A: or edx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFC
        // 0x5878927D: inc edx
        __asm _emit 0x42
        // 0x5878927E: pop edi
        __asm _emit 0x5F
        // 0x5878927F: mov dword ptr [esi + 0x98], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789285: pop esi
        __asm _emit 0x5E
        // 0x58789286: pop ebp
        __asm _emit 0x5D
        // 0x58789287: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
