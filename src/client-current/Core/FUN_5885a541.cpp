// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A541 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_5885a541() {
    __asm {
        // 0x5885A541: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A543: push ebp
        __asm _emit 0x55
        // 0x5885A544: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A546: cmp dword ptr [ebp + 0x14], 2
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x5885A54A: push esi
        __asm _emit 0x56
        // 0x5885A54B: push edi
        __asm _emit 0x57
        // 0x5885A54C: je 0x5885a5de
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A552: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A555: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A558: nop
        __asm _emit 0x90
        // 0x5885A559: test eax, 0x4c0
        __asm _emit 0xA9
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A55E: je 0x5885a5de
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x5885A560: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A563: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A566: nop
        __asm _emit 0x90
        // 0x5885A567: test al, 6
        __asm _emit 0xA8
        __asm _emit 0x06
        // 0x5885A569: jne 0x5885a5de
        __asm _emit 0x75
        __asm _emit 0x73
        // 0x5885A56B: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A56E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885A570: cmp dword ptr [eax + 8], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x5885A573: jle 0x5885a5de
        __asm _emit 0x7E
        __asm _emit 0x69
        // 0x5885A575: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5885A578: nop
        __asm _emit 0x90
        // 0x5885A579: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5885A57B: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5885A57D: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x3F
        // 0x5885A580: sar ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5885A583: imul eax, eax, 0x38
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x38
        // 0x5885A586: mov ecx, dword ptr [ecx*4 + 0x589699b0]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5885A58D: cmp byte ptr [ecx + eax + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5885A592: jl 0x5885a5de
        __asm _emit 0x7C
        __asm _emit 0x4A
        // 0x5885A594: cmp byte ptr [ecx + eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5885A599: jne 0x5885a5de
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x5885A59B: cmp dword ptr [ebp + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885A59E: jne 0x5885a5e4
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x5885A5A0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885A5A2: push esi
        __asm _emit 0x56
        // 0x5885A5A3: push esi
        __asm _emit 0x56
        // 0x5885A5A4: push edx
        __asm _emit 0x52
        // 0x5885A5A5: call 0x5887130e
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A5AA: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5885A5AC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885A5AF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885A5B1: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x5885A5B3: jl 0x5885a5de
        __asm _emit 0x7C
        __asm _emit 0x29
        // 0x5885A5B5: jg 0x5885a5bb
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x5885A5B7: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x5885A5B9: jb 0x5885a5de
        __asm _emit 0x72
        __asm _emit 0x23
        // 0x5885A5BB: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A5BE: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885A5C1: push eax
        __asm _emit 0x50
        // 0x5885A5C2: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5885A5C5: cdq
        __asm _emit 0x99
        // 0x5885A5C6: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5885A5C8: sbb edi, edx
        __asm _emit 0x1B
        __asm _emit 0xFA
        // 0x5885A5CA: push edi
        __asm _emit 0x57
        // 0x5885A5CB: push ecx
        __asm _emit 0x51
        // 0x5885A5CC: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885A5CF: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885A5D2: call 0x5885a415
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A5D7: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885A5DA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A5DC: jns 0x5885a5e7
        __asm _emit 0x79
        __asm _emit 0x09
        // 0x5885A5DE: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885A5E0: pop edi
        __asm _emit 0x5F
        // 0x5885A5E1: pop esi
        __asm _emit 0x5E
        // 0x5885A5E2: pop ebp
        __asm _emit 0x5D
        // 0x5885A5E3: ret
        __asm _emit 0xC3
        // 0x5885A5E4: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A5E7: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885A5EA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5885A5EC: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5885A5EE: cdq
        __asm _emit 0x99
        // 0x5885A5EF: cmp edx, dword ptr [ebp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885A5F2: jg 0x5885a5de
        __asm _emit 0x7F
        __asm _emit 0xEA
        // 0x5885A5F4: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5885A5F7: jl 0x5885a5fd
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x5885A5F9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5885A5FB: ja 0x5885a5de
        __asm _emit 0x77
        __asm _emit 0xE1
        // 0x5885A5FD: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5885A600: cdq
        __asm _emit 0x99
        // 0x5885A601: cmp dword ptr [ebp + 0x10], edx
        __asm _emit 0x39
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885A604: jg 0x5885a5de
        __asm _emit 0x7F
        __asm _emit 0xD8
        // 0x5885A606: jl 0x5885a60c
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x5885A608: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5885A60A: ja 0x5885a5de
        __asm _emit 0x77
        __asm _emit 0xD2
        // 0x5885A60C: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5885A60E: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885A610: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x5885A612: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5885A615: sub dword ptr [ecx + 8], edi
        __asm _emit 0x29
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x5885A618: jmp 0x5885a5e0
        __asm _emit 0xEB
        __asm _emit 0xC6
    }
}
