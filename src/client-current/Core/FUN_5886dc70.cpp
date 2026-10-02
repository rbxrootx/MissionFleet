// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886DC70 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_5886dc70() {
    __asm {
        // 0x5886DC70: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886DC72: push ebp
        __asm _emit 0x55
        // 0x5886DC73: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886DC75: push ecx
        __asm _emit 0x51
        // 0x5886DC76: push ebx
        __asm _emit 0x53
        // 0x5886DC77: push esi
        __asm _emit 0x56
        // 0x5886DC78: push edi
        __asm _emit 0x57
        // 0x5886DC79: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5886DC7C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5886DC7E: je 0x5886dd8e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DC84: mov ebx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x5886DC87: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5886DC89: je 0x5886dd8e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DC8F: cmp byte ptr [edi], 0
        __asm _emit 0x80
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x5886DC92: jne 0x5886dca9
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5886DC94: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886DC97: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886DC99: je 0x5886dd99
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DC9F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886DCA1: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5886DCA4: jmp 0x5886dd99
        __asm _emit 0xE9
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DCA9: mov esi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5886DCAC: cmp byte ptr [esi + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5886DCB0: jne 0x5886dcb9
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5886DCB2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5886DCB4: call 0x58855ea0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5886DCB9: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5886DCBC: cmp dword ptr [edx + 8], 0xfde9
        __asm _emit 0x81
        __asm _emit 0x7A
        __asm _emit 0x08
        __asm _emit 0xE9
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DCC3: jne 0x5886dce5
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x5886DCC5: push esi
        __asm _emit 0x56
        // 0x5886DCC6: push 0x58969988
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5886DCCB: push ebx
        __asm _emit 0x53
        // 0x5886DCCC: push edi
        __asm _emit 0x57
        // 0x5886DCCD: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886DCD0: call 0x5886e0a9
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DCD5: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x5886DCD8: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5886DCDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886DCDD: cmovs eax, ecx
        __asm _emit 0x0F
        __asm _emit 0x48
        __asm _emit 0xC1
        // 0x5886DCE0: jmp 0x5886dd9b
        __asm _emit 0xE9
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DCE5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886DCE7: cmp dword ptr [edx + 0xa8], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DCED: jne 0x5886dd05
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x5886DCEF: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5886DCF2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886DCF4: je 0x5886dd89
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DCFA: movzx eax, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x07
        // 0x5886DCFD: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5886DD00: jmp 0x5886dd89
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD05: movzx ecx, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x0F
        // 0x5886DD08: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5886DD0A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5886DD0C: cmp word ptr [eax + ecx*2], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x34
        __asm _emit 0x48
        // 0x5886DD10: mov esi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5886DD13: jge 0x5886dd68
        __asm _emit 0x7D
        __asm _emit 0x53
        // 0x5886DD15: cmp dword ptr [edx + 4], 1
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x5886DD19: jle 0x5886dd42
        __asm _emit 0x7E
        __asm _emit 0x27
        // 0x5886DD1B: cmp ebx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x5886DD1E: jl 0x5886dd42
        __asm _emit 0x7C
        __asm _emit 0x22
        // 0x5886DD20: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886DD22: cmp dword ptr [ebp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886DD25: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5886DD28: push eax
        __asm _emit 0x50
        // 0x5886DD29: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886DD2C: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5886DD2F: push dword ptr [edx + 4]
        __asm _emit 0xFF
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x5886DD32: push edi
        __asm _emit 0x57
        // 0x5886DD33: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5886DD35: push eax
        __asm _emit 0x50
        // 0x5886DD36: call 0x5886fb2f
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD3B: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5886DD3E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886DD40: jne 0x5886dd50
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5886DD42: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5886DD45: cmp ebx, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x5886DD48: jb 0x5886dd58
        __asm _emit 0x72
        __asm _emit 0x0E
        // 0x5886DD4A: cmp byte ptr [edi + 1], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5886DD4E: je 0x5886dd58
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5886DD50: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5886DD53: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5886DD56: jmp 0x5886dd9b
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x5886DD58: mov byte ptr [esi + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5886DD5C: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5886DD5F: mov dword ptr [esi + 0x18], 0x2a
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD66: jmp 0x5886dd9b
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5886DD68: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886DD6A: cmp dword ptr [ebp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886DD6D: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5886DD70: push eax
        __asm _emit 0x50
        // 0x5886DD71: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886DD74: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5886DD77: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5886DD79: push edi
        __asm _emit 0x57
        // 0x5886DD7A: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5886DD7C: push eax
        __asm _emit 0x50
        // 0x5886DD7D: call 0x5886fb2f
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD82: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5886DD85: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886DD87: je 0x5886dd58
        __asm _emit 0x74
        __asm _emit 0xCF
        // 0x5886DD89: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886DD8B: inc eax
        __asm _emit 0x40
        // 0x5886DD8C: jmp 0x5886dd9b
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5886DD8E: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5886DD91: movlpd qword ptr [0x58969988], xmm0
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5886DD99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886DD9B: pop edi
        __asm _emit 0x5F
        // 0x5886DD9C: pop esi
        __asm _emit 0x5E
        // 0x5886DD9D: pop ebx
        __asm _emit 0x5B
        // 0x5886DD9E: leave
        __asm _emit 0xC9
        // 0x5886DD9F: ret
        __asm _emit 0xC3
    }
}
