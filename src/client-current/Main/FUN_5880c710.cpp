// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1388 bytes in 4 exact ranges.
// Source symbol alias: FUN_5880c710.

// Ghidra body range 0x5880C710..0x5880CA96; 902 mapped bytes.
extern "C" __declspec(naked) void FUN_5880c710_segment_00() {
    __asm {
        // 0x5880C710: push ebp
        __asm _emit 0x55
        // 0x5880C711: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5880C713: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x5880C716: sub esp, 0x1e4
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C71C: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5880C721: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5880C723: mov dword ptr [esp + 0x1e0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C72A: push ebx
        __asm _emit 0x53
        // 0x5880C72B: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5880C72D: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C732: or word ptr [ebx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x5880C736: mov eax, dword ptr [ebx + 0x428]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C73C: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880C740: mov eax, dword ptr [ebx + 0x8b0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xB0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C746: push esi
        __asm _emit 0x56
        // 0x5880C747: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5880C74A: push edi
        __asm _emit 0x57
        // 0x5880C74B: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C750: mov dword ptr [ebx + 0x6e0], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0xE0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C756: test dword ptr [esi + 8], 0x40000000
        __asm _emit 0xF7
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5880C75D: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880C761: je 0x5880c769
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880C763: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880C767: jmp 0x5880c772
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5880C769: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C76E: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880C772: movzx eax, word ptr [esi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5880C776: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5880C779: jne 0x5880c7ac
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x5880C77B: mov eax, dword ptr [ebx + 0x410]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C781: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880C785: mov eax, dword ptr [ebx + 0x414]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C78B: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880C78F: mov eax, dword ptr [ebx + 0x418]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C795: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C79A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880C79E: mov eax, dword ptr [ebx + 0x420]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C7A4: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5880C7A6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880C7AA: jmp 0x5880c81c
        __asm _emit 0xEB
        __asm _emit 0x70
        // 0x5880C7AC: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5880C7AF: jne 0x5880c7e2
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x5880C7B1: mov eax, dword ptr [ebx + 0x410]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C7B7: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880C7BB: mov eax, dword ptr [ebx + 0x414]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C7C1: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C7C6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880C7CA: mov eax, dword ptr [ebx + 0x418]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C7D0: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880C7D4: mov eax, dword ptr [ebx + 0x420]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C7DA: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5880C7DC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880C7E0: jmp 0x5880c81c
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x5880C7E2: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880C7E5: je 0x5880c7ed
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880C7E7: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5880C7EB: jne 0x5880c835
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x5880C7ED: mov eax, dword ptr [ebx + 0x410]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C7F3: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880C7F7: mov eax, dword ptr [ebx + 0x414]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C7FD: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C802: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880C806: mov eax, dword ptr [ebx + 0x418]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C80C: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5880C80E: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880C812: mov eax, dword ptr [ebx + 0x420]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C818: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880C81C: mov eax, dword ptr [ebx + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C822: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880C826: mov eax, dword ptr [ebx + 0x41c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C82C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880C830: jmp 0x5880c8c6
        __asm _emit 0xE9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C835: mov ecx, dword ptr [ebx + 0x410]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C83B: cmp ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x5880C83F: jne 0x5880c87e
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x5880C841: push edi
        __asm _emit 0x57
        // 0x5880C842: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C847: mov ecx, dword ptr [ebx + 0x414]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C84D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C84F: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C854: mov ecx, dword ptr [ebx + 0x418]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C85A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C85C: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C861: mov ecx, dword ptr [ebx + 0x420]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C867: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C869: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C86E: mov ecx, dword ptr [ebx + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C874: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C876: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C87B: push edi
        __asm _emit 0x57
        // 0x5880C87C: jmp 0x5880c8bb
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x5880C87E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C880: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C885: mov ecx, dword ptr [ebx + 0x414]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C88B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C88D: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C892: mov ecx, dword ptr [ebx + 0x418]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C898: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C89A: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C89F: mov ecx, dword ptr [ebx + 0x420]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C8A5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C8A7: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C8AC: mov ecx, dword ptr [ebx + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C8B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C8B4: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C8B9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C8BB: mov ecx, dword ptr [ebx + 0x41c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C8C1: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C8C6: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880C8CB: movzx eax, word ptr [eax + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880C8D2: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5880C8D6: je 0x5880c909
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5880C8D8: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5880C8DC: je 0x5880c909
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5880C8DE: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5880C8E2: je 0x5880c909
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5880C8E4: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880C8E7: je 0x5880c909
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5880C8E9: test dword ptr [esi + 8], 0x80000000
        __asm _emit 0xF7
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5880C8F0: mov ecx, dword ptr [ebx + 0x8b4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C8F6: je 0x5880c900
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5880C8F8: push edi
        __asm _emit 0x57
        // 0x5880C8F9: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x4C
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C8FE: jmp 0x5880c918
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x5880C900: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880C902: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x4C
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880C907: jmp 0x5880c918
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5880C909: mov eax, dword ptr [ebx + 0x8b4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C90F: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C914: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880C918: mov dx, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5880C91C: mov ecx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880C922: mov eax, 0xff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C927: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5880C92A: mov word ptr [0x58a0b49a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880C931: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5880C933: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880C939: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5880C93B: mov dword ptr [ebx + 0x8dc], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xDC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C941: mov eax, dword ptr [0x58a0b46c]
        __asm _emit 0xA1
        __asm _emit 0x6C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880C946: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5880C949: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880C94E: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5880C950: mov dword ptr [ebx + 0x8e0], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C956: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5880C958: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880C95E: push edi
        __asm _emit 0x57
        // 0x5880C95F: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880C965: push edx
        __asm _emit 0x52
        // 0x5880C966: call 0x5888cc70
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5880C96B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5880C96E: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880C974: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880C979: push eax
        __asm _emit 0x50
        // 0x5880C97A: call 0x5888cc50
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5880C97F: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880C985: mov eax, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x5880C988: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880C98E: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x5880C991: add edi, 0x34c
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C997: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880C99B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5880C99D: lea ecx, [ebx + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C9A3: add eax, 0x9a4
        __asm _emit 0x05
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C9A8: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880C9AC: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5880C9B0: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880C9B4: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880C9B8: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5880C9BA: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5880C9BE: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x5880C9C0: push eax
        __asm _emit 0x50
        // 0x5880C9C1: call 0x588c7110
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xA7
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880C9C6: movzx edx, byte ptr [edi + esi + 0xa28]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C9CE: add dword ptr [ebx + 0x8f0], edx
        __asm _emit 0x01
        __asm _emit 0x93
        __asm _emit 0xF0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C9D4: mov eax, 4
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C9D9: add dword ptr [esp + 0x14], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880C9DD: add dword ptr [esp + 0xc], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5880C9E1: inc esi
        __asm _emit 0x46
        // 0x5880C9E2: cmp esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x20
        // 0x5880C9E5: jl 0x5880c9b4
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x5880C9E7: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880C9EB: test dword ptr [eax + 8], 0x100
        __asm _emit 0xF7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880C9F2: je 0x5880ca0e
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5880C9F4: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880C9FA: mov edx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x30
        // 0x5880C9FD: mov eax, dword ptr [edx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x48
        // 0x5880CA00: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x5880CA03: push eax
        __asm _emit 0x50
        // 0x5880CA04: call 0x588f41e0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x77
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5880CA09: jmp 0x5880cb3a
        __asm _emit 0xE9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA0E: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CA13: cmp byte ptr [eax + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA1A: lea esi, [eax + 0x10744]
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880CA20: mov ecx, 0x72
        __asm _emit 0xB9
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA25: lea edi, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880CA29: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5880CA2B: je 0x5880cabc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA31: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880CA35: lea esi, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5880CA39: add edi, 0x9a4
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA3F: mov dword ptr [esp + 0xc], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA47: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5880CA49: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880CA4B: je 0x5880ca71
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5880CA4D: movzx edx, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x02
        // 0x5880CA51: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x5880CA54: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA5A: push edx
        __asm _emit 0x52
        // 0x5880CA5B: movzx edx, word ptr [esi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0xFE
        // 0x5880CA5F: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA64: push eax
        __asm _emit 0x50
        // 0x5880CA65: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA6B: push edx
        __asm _emit 0x52
        // 0x5880CA6C: call 0x5877cb40
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880CA71: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5880CA74: add esi, 6
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x06
        // 0x5880CA77: sub dword ptr [esp + 0xc], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        // 0x5880CA7C: jne 0x5880ca47
        __asm _emit 0x75
        __asm _emit 0xC9
        // 0x5880CA7E: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880CA82: mov edx, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x4C
        // 0x5880CA85: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880CA89: mov dword ptr [ecx + 0x4c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x4C
        // 0x5880CA8C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880CA8E: add ecx, 0xac2
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CA94: jmp 0x5880caa0
        __asm _emit 0xEB
        __asm _emit 0x0A
    }
}

// Ghidra body range 0x5880CAA0..0x5880CAE8; 72 mapped bytes.
extern "C" __declspec(naked) void FUN_5880c710_segment_01() {
    __asm {
        // 0x5880CAA0: movzx edx, byte ptr [esp + eax*2 + 0x25]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x25
        // 0x5880CAA5: mov word ptr [ecx - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0xFE
        // 0x5880CAA9: movzx edx, byte ptr [esp + eax*2 + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x26
        // 0x5880CAAE: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5880CAB1: inc eax
        __asm _emit 0x40
        // 0x5880CAB2: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5880CAB5: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5880CAB8: jl 0x5880caa0
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x5880CABA: jmp 0x5880cb3a
        __asm _emit 0xEB
        __asm _emit 0x7E
        // 0x5880CABC: test byte ptr [eax + 0x378], 0x80
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5880CAC3: je 0x5880cb0c
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x5880CAC5: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880CACA: je 0x5880cb3a
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x5880CACC: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880CAD0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880CAD2: je 0x5880cb3a
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x5880CAD4: mov eax, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x4C
        // 0x5880CAD7: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880CADB: mov dword ptr [ecx + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x4C
        // 0x5880CADE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880CAE0: add ecx, 0xac2
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CAE6: jmp 0x5880caf0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5880CAF0..0x5880CB1A; 42 mapped bytes.
extern "C" __declspec(naked) void FUN_5880c710_segment_02() {
    __asm {
        // 0x5880CAF0: movzx edx, byte ptr [esp + eax*2 + 0x25]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x25
        // 0x5880CAF5: mov word ptr [ecx - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0xFE
        // 0x5880CAF9: movzx edx, byte ptr [esp + eax*2 + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x26
        // 0x5880CAFE: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5880CB01: inc eax
        __asm _emit 0x40
        // 0x5880CB02: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5880CB05: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5880CB08: jl 0x5880caf0
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x5880CB0A: jmp 0x5880cb3a
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x5880CB0C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880CB10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880CB12: add ecx, 0xac2
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CB18: jmp 0x5880cb20
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5880CB20..0x5880CC94; 372 mapped bytes.
extern "C" __declspec(naked) void FUN_5880c710_segment_03() {
    __asm {
        // 0x5880CB20: movzx edx, byte ptr [esp + eax*2 + 0x25]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x25
        // 0x5880CB25: mov word ptr [ecx - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0xFE
        // 0x5880CB29: movzx edx, byte ptr [esp + eax*2 + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x26
        // 0x5880CB2E: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5880CB31: inc eax
        __asm _emit 0x40
        // 0x5880CB32: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5880CB35: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5880CB38: jl 0x5880cb20
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x5880CB3A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880CB3E: mov ecx, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x4C
        // 0x5880CB41: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880CB47: jne 0x5880cb54
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5880CB49: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CB4F: call 0x588890f0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xC5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5880CB54: mov edx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CB5A: mov ecx, dword ptr [edx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x78
        // 0x5880CB5D: call 0x5888aac0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xDF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5880CB62: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CB67: cmp dword ptr [eax + 0x104e4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CB6E: jne 0x5880cb87
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5880CB70: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CB72: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CB74: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CB76: push 0x41a
        __asm _emit 0x68
        __asm _emit 0x1A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CB7B: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xEF
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5880CB80: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880CB82: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5880CB87: mov ecx, dword ptr [ebx + 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CB8D: cmp byte ptr [ecx + 0x60], 1
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x5880CB91: jne 0x5880cc7d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CB97: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CB9C: mov esi, 0x28
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBA1: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBA7: jle 0x5880cbc0
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5880CBA9: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBB0: je 0x5880cbc0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880CBB2: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBB8: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBBE: jmp 0x5880cbc2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880CBC0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5880CBC2: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CBC7: push eax
        __asm _emit 0x50
        // 0x5880CBC8: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xAD
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880CBCD: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CBD2: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBD8: jle 0x5880cbf1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5880CBDA: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBE1: je 0x5880cbf1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880CBE3: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBE9: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CBEF: jmp 0x5880cbf3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880CBF1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5880CBF3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880CBF5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5880CBF8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CBFA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880CBFC: mov ecx, dword ptr [ebx + 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC02: mov dword ptr [ecx + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC09: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CC0E: mov esi, 0x34
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC13: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC19: jle 0x5880cc32
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5880CC1B: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC22: je 0x5880cc32
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880CC24: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC2A: mov ecx, dword ptr [edx + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC30: jmp 0x5880cc34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880CC32: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5880CC34: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CC39: push eax
        __asm _emit 0x50
        // 0x5880CC3A: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xAD
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880CC3F: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880CC44: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC4A: jle 0x5880cc63
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5880CC4C: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC53: je 0x5880cc63
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880CC55: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC5B: mov ecx, dword ptr [ecx + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC61: jmp 0x5880cc65
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880CC63: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5880CC65: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880CC67: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5880CC6A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880CC6C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880CC6E: mov ebx, dword ptr [ebx + 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0xAC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC74: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x5880CC76: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5880CC79: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880CC7B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880CC7D: mov ecx, dword ptr [esp + 0x1ec]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880CC84: pop edi
        __asm _emit 0x5F
        // 0x5880CC85: pop esi
        __asm _emit 0x5E
        // 0x5880CC86: pop ebx
        __asm _emit 0x5B
        // 0x5880CC87: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5880CC89: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880CC8E: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880CC90: pop ebp
        __asm _emit 0x5D
        // 0x5880CC91: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
