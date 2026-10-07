// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D0E40 .. +0x14E bytes.
// Source symbol alias: FUN_587d0e40.
extern "C" __declspec(naked) void FUN_587d0e40() {
    __asm {
        // 0x587D0E40: push ebp
        __asm _emit 0x55
        // 0x587D0E41: push esi
        __asm _emit 0x56
        // 0x587D0E42: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D0E44: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E4A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D0E4C: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587D0E4E: jne 0x587d0f2a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E54: lea eax, [esi + 0x148]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E5A: lea edx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x05
        // 0x587D0E5D: push edi
        __asm _emit 0x57
        // 0x587D0E5E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587D0E60: mov ecx, dword ptr [eax - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xEC
        // 0x587D0E63: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E68: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x587D0E6C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587D0E6E: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x587D0E72: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D0E75: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587D0E78: jne 0x587d0e60
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x587D0E7A: mov eax, 0xfffffffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0E7F: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E85: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E8B: mov eax, dword ptr [esi + 0x784]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E91: mov dword ptr [esi + 0x788], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0E97: mov dword ptr [esi + 0xf8], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587D0EA1: mov dword ptr [esi + 0x780], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0EA7: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0EAC: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587D0EB0: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0EB6: mov edx, dword ptr [esi + eax*8 + 0x5c0]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xC6
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0EBD: mov eax, dword ptr [esi + eax*8 + 0x5c4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0xC4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0EC4: mov ecx, dword ptr [esi + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0ECA: push ebx
        __asm _emit 0x53
        // 0x587D0ECB: push eax
        __asm _emit 0x50
        // 0x587D0ECC: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587D0ECE: sub edi, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x587D0ED1: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587D0ED3: sub ebx, dword ptr [ecx + 8]
        __asm _emit 0x2B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x587D0ED6: push edx
        __asm _emit 0x52
        // 0x587D0ED7: call 0x587b63b0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x54
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587D0EDC: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0EE2: push ebx
        __asm _emit 0x53
        // 0x587D0EE3: push edi
        __asm _emit 0x57
        // 0x587D0EE4: call 0x587896e0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x87
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D0EE9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D0EEB: cmp dword ptr [esi + 0x9e8], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0EF1: jle 0x587d0f25
        __asm _emit 0x7E
        __asm _emit 0x32
        // 0x587D0EF3: lea edx, [esi + 0x810]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0EF9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0F00: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587D0F02: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587D0F05: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xEF
        // 0x587D0F07: mov dword ptr [eax + 0x68], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x68
        // 0x587D0F0A: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x587D0F0D: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xEB
        // 0x587D0F0F: inc ecx
        __asm _emit 0x41
        // 0x587D0F10: mov dword ptr [eax + 0x6c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x6C
        // 0x587D0F13: mov dword ptr [eax + 0x70], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587D0F1A: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587D0F1D: cmp ecx, dword ptr [esi + 0x9e8]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0F23: jl 0x587d0f00
        __asm _emit 0x7C
        __asm _emit 0xDB
        // 0x587D0F25: pop ebx
        __asm _emit 0x5B
        // 0x587D0F26: pop edi
        __asm _emit 0x5F
        // 0x587D0F27: pop esi
        __asm _emit 0x5E
        // 0x587D0F28: pop ebp
        __asm _emit 0x5D
        // 0x587D0F29: ret
        __asm _emit 0xC3
        // 0x587D0F2A: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587D0F2F: jne 0x587d0f27
        __asm _emit 0x75
        __asm _emit 0xF6
        // 0x587D0F31: movzx edx, word ptr [esi + 0xe8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0F38: push edx
        __asm _emit 0x52
        // 0x587D0F39: call 0x587cf690
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0F3E: movzx eax, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0F45: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D0F4B: push eax
        __asm _emit 0x50
        // 0x587D0F4C: call 0x58888940
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x79
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D0F51: mov dword ptr [esi + 0xf8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0F57: mov eax, dword ptr [0x58a245bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D0F5C: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D0F60: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587D0F63: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x02
        // 0x587D0F67: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587D0F6A: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587D0F6F: mov edx, dword ptr [esi + 0x784]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0F75: mov dword ptr [esi + 0x780], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587D0F7F: mov dword ptr [esi + 0x788], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0F85: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D0F87: pop esi
        __asm _emit 0x5E
        // 0x587D0F88: pop ebp
        __asm _emit 0x5D
        // 0x587D0F89: jmp 0x587cff80
        __asm _emit 0xE9
        __asm _emit 0xF2
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
