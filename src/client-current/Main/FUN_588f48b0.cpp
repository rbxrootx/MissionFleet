// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F48B0 .. +0xD1 bytes.
// Source symbol alias: FUN_588f48b0.
extern "C" __declspec(naked) void FUN_588f48b0() {
    __asm {
        // 0x588F48B0: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F48B4: push ebx
        __asm _emit 0x53
        // 0x588F48B5: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588F48B7: push esi
        __asm _emit 0x56
        // 0x588F48B8: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F48BC: push edi
        __asm _emit 0x57
        // 0x588F48BD: lea edi, [ebx + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x70
        // 0x588F48C0: mov ecx, 0x2d
        __asm _emit 0xB9
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F48C5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588F48C7: mov cx, word ptr [ebx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F48CE: mov dword ptr [ebx + 0x418], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F48D4: mov edx, 0xe00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F48D9: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588F48DC: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F48E1: sub cx, ax
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F48E4: movzx eax, word ptr [ebx + 0x110]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F48EB: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588F48EE: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588F48F0: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x588F48F2: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x588F48F5: and ecx, 0x36
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x36
        // 0x588F48F8: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x588F48FB: mov dword ptr [ebx + 0x3ec], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4901: lea ecx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC0
        // 0x588F4904: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F4907: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F490C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F490E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588F4911: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F4913: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F4916: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F4918: mov dword ptr [ebx + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F491E: mov dword ptr [ebx + 0x404], 0x44
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4928: mov dword ptr [ebx + 0x408], 0x3c
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4932: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F4937: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588F493C: jns 0x588f4943
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588F493E: dec eax
        __asm _emit 0x48
        // 0x588F493F: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x588F4942: inc eax
        __asm _emit 0x40
        // 0x588F4943: add eax, 0x42
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x42
        // 0x588F4946: mov dword ptr [ebx + 0x40c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F494C: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F4951: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588F4956: jns 0x588f495d
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588F4958: dec eax
        __asm _emit 0x48
        // 0x588F4959: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x588F495C: inc eax
        __asm _emit 0x40
        // 0x588F495D: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4962: xor word ptr [ebx + 0x11a], cx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x8B
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4969: pop edi
        __asm _emit 0x5F
        // 0x588F496A: add eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x26
        // 0x588F496D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588F496F: xor word ptr [ebx + 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x93
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4976: pop esi
        __asm _emit 0x5E
        // 0x588F4977: mov dword ptr [ebx + 0x410], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F497D: pop ebx
        __asm _emit 0x5B
        // 0x588F497E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
