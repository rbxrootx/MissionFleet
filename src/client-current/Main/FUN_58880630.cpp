// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58880630 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_58880630() {
    __asm {
        // 0x58880630: push ecx
        __asm _emit 0x51
        // 0x58880631: push ebx
        __asm _emit 0x53
        // 0x58880632: push ebp
        __asm _emit 0x55
        // 0x58880633: push esi
        __asm _emit 0x56
        // 0x58880634: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58880636: push edi
        __asm _emit 0x57
        // 0x58880637: mov edi, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888063D: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58880641: cmp edi, dword ptr [esi + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880647: jbe 0x5888064e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58880649: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888064E: mov esi, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880654: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x58880656: lea ebx, [edi + 0x22]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x22
        // 0x58880659: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880660: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58880664: mov edi, dword ptr [eax + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888066A: cmp dword ptr [eax + 0xa4], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880670: jbe 0x5888067b
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58880672: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880677: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888067B: mov eax, dword ptr [eax + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880681: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880683: je 0x58880689
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58880685: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58880687: je 0x5888068e
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58880689: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888068E: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x58880690: je 0x5888073e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880696: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880698: jne 0x588806ee
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x5888069A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888069F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588806A1: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588806A4: jb 0x588806ab
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588806A6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588806AB: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588806B0: cmp word ptr [ebx - 0x1e], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0xE2
        // 0x588806B4: jne 0x588806d6
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x588806B6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588806B8: jne 0x588806f2
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588806BA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588806BF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588806C1: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588806C4: jb 0x588806cb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588806C6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588806CB: mov cx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588806D0: cmp word ptr [ebx - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4B
        __asm _emit 0xE4
        // 0x588806D4: je 0x58880711
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588806D6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588806D8: jne 0x588806f6
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x588806DA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588806DF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588806E1: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588806E4: ja 0x58880701
        __asm _emit 0x77
        __asm _emit 0x1B
        // 0x588806E6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588806E8: je 0x588806fa
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588806EA: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588806EC: jmp 0x588806fc
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588806EE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588806F0: jmp 0x588806a1
        __asm _emit 0xEB
        __asm _emit 0xAF
        // 0x588806F2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588806F4: jmp 0x588806c1
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x588806F6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588806F8: jmp 0x588806e1
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x588806FA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588806FC: cmp ebx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x588806FF: jae 0x58880706
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58880701: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880706: add ebp, 0x22
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x22
        // 0x58880709: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x22
        // 0x5888070C: jmp 0x58880660
        __asm _emit 0xE9
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58880711: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880713: jne 0x5888073a
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58880715: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888071A: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x5888071D: jb 0x58880724
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5888071F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880724: mov dx, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58880729: add word ptr [ebp + 8], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5888072D: pop edi
        __asm _emit 0x5F
        // 0x5888072E: pop esi
        __asm _emit 0x5E
        // 0x5888072F: pop ebp
        __asm _emit 0x5D
        // 0x58880730: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880735: pop ebx
        __asm _emit 0x5B
        // 0x58880736: pop ecx
        __asm _emit 0x59
        // 0x58880737: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5888073A: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5888073C: jmp 0x5888071a
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x5888073E: pop edi
        __asm _emit 0x5F
        // 0x5888073F: pop esi
        __asm _emit 0x5E
        // 0x58880740: pop ebp
        __asm _emit 0x5D
        // 0x58880741: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58880743: pop ebx
        __asm _emit 0x5B
        // 0x58880744: pop ecx
        __asm _emit 0x59
        // 0x58880745: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
