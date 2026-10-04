// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58839B80 .. +0x164 bytes.
// Source symbol alias: FUN_58839b80.
extern "C" __declspec(naked) void FUN_58839b80() {
    __asm {
        // 0x58839B80: push esi
        __asm _emit 0x56
        // 0x58839B81: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58839B83: mov al, byte ptr [esi + 0x2e5]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B89: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58839B8B: jne 0x58839bb2
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58839B8D: cmp dword ptr [esp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58839B92: jne 0x58839ce0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B98: mov eax, dword ptr [esi + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B9E: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839BA3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839BA7: mov byte ptr [esi + 0x2e5], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839BAE: pop esi
        __asm _emit 0x5E
        // 0x58839BAF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58839BB2: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58839BB4: jne 0x58839ce0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839BBA: push ebp
        __asm _emit 0x55
        // 0x58839BBB: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58839BBF: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58839BC1: jne 0x58839bde
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58839BC3: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839BC9: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839BCE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58839BD2: pop ebp
        __asm _emit 0x5D
        // 0x58839BD3: mov byte ptr [esi + 0x2e5], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839BDA: pop esi
        __asm _emit 0x5E
        // 0x58839BDB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58839BDE: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58839BE1: push ebx
        __asm _emit 0x53
        // 0x58839BE2: push edi
        __asm _emit 0x57
        // 0x58839BE3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839BE5: je 0x58839c23
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58839BE7: mov ebx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58839BED: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58839BEF: je 0x58839c23
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x58839BF1: lea edi, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0xFF
        // 0x58839BF4: push edi
        __asm _emit 0x57
        // 0x58839BF5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58839BF7: call 0x5875a190
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58839BFC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839BFE: je 0x58839c23
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58839C00: push edi
        __asm _emit 0x57
        // 0x58839C01: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58839C03: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58839C08: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C0E: push eax
        __asm _emit 0x50
        // 0x58839C0F: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x7A
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839C14: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C1A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58839C1C: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x79
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839C21: jmp 0x58839ca1
        __asm _emit 0xEB
        __asm _emit 0x7E
        // 0x58839C23: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C29: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x58839C30: jle 0x58839c44
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58839C32: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C38: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839C3A: je 0x58839c44
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58839C3C: mov eax, dword ptr [eax + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C42: jmp 0x58839c46
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58839C44: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839C46: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C4C: push eax
        __asm _emit 0x50
        // 0x58839C4D: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x7A
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839C52: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C58: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x58839C5F: jle 0x58839c73
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58839C61: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C67: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839C69: je 0x58839c73
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58839C6B: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C71: jmp 0x58839c75
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58839C73: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839C75: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C7B: push eax
        __asm _emit 0x50
        // 0x58839C7C: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x7A
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839C81: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C87: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58839C8C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839C91: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C97: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839C9C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839CA1: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839CA7: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839CAC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839CB1: mov ecx, dword ptr [esi + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839CB7: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58839CBA: push eax
        __asm _emit 0x50
        // 0x58839CBB: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x80
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839CC0: mov byte ptr [esi + 0x2e5], 5
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58839CC7: movzx edx, byte ptr [ebp + 0x5a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x55
        __asm _emit 0x5A
        // 0x58839CCB: lea ecx, [ebp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x5C
        // 0x58839CCE: push ecx
        __asm _emit 0x51
        // 0x58839CCF: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58839CD5: push edx
        __asm _emit 0x52
        // 0x58839CD6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58839CD8: call 0x587b92b0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xF5
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58839CDD: pop edi
        __asm _emit 0x5F
        // 0x58839CDE: pop ebx
        __asm _emit 0x5B
        // 0x58839CDF: pop ebp
        __asm _emit 0x5D
        // 0x58839CE0: pop esi
        __asm _emit 0x5E
        // 0x58839CE1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
