// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877C660 .. +0x289 bytes.
// Source symbol alias: FUN_5877c660.
extern "C" __declspec(naked) void FUN_5877c660() {
    __asm {
        // 0x5877C660: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5877C664: push ebx
        __asm _emit 0x53
        // 0x5877C665: push esi
        __asm _emit 0x56
        // 0x5877C666: push edi
        __asm _emit 0x57
        // 0x5877C667: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877C669: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5877C66C: jne 0x5877c71d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C672: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C678: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5877C67B: je 0x5877c8e1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C681: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C687: push eax
        __asm _emit 0x50
        // 0x5877C688: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5877C68D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5877C68F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5877C691: je 0x5877c8e1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C697: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C69D: push esi
        __asm _emit 0x56
        // 0x5877C69E: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5877C6A1: call 0x5877b130
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C6A6: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877C6AA: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x5877C6AD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877C6AF: mov dword ptr [edi + eax*4 + 0x9a4], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C6BA: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xBE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C6BF: mov ecx, 0xfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C6C4: and word ptr [esi + 0x5e], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x5E
        // 0x5877C6C8: mov dword ptr [esi + 0xb8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C6D2: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C6D8: mov ecx, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C6DE: call 0x588730f0
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x6A
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877C6E3: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C6E9: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877C6EC: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C6F1: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5877C6F4: push edx
        __asm _emit 0x52
        // 0x5877C6F5: push ecx
        __asm _emit 0x51
        // 0x5877C6F6: mov ecx, dword ptr [0x58a0adac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5877C6FC: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C701: push eax
        __asm _emit 0x50
        // 0x5877C702: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877C707: mov esi, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C70D: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5877C712: pop edi
        __asm _emit 0x5F
        // 0x5877C713: pop esi
        __asm _emit 0x5E
        // 0x5877C714: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C719: pop ebx
        __asm _emit 0x5B
        // 0x5877C71A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5877C71D: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C723: push eax
        __asm _emit 0x50
        // 0x5877C724: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5877C729: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5877C72B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877C72D: je 0x5877c8e1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C733: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C739: push ebp
        __asm _emit 0x55
        // 0x5877C73A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5877C73C: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5877C73F: je 0x5877c76a
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5877C741: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C747: push eax
        __asm _emit 0x50
        // 0x5877C748: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5877C74D: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5877C74F: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877C753: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x5877C756: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5877C758: mov dword ptr [ebp + eax*4 + 0x9a4], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C763: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xBE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C768: jmp 0x5877c79a
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x5877C76A: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C770: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5877C773: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C775: je 0x5877c79a
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5877C777: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5877C77A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C780: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x5877C783: cmp dword ptr [edi + 0x50], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5877C786: je 0x5877c791
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5877C788: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5877C78B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C78D: jne 0x5877c780
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5877C78F: jmp 0x5877c79a
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5877C791: push eax
        __asm _emit 0x50
        // 0x5877C792: lea ecx, [edx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x20
        // 0x5877C795: call 0x587c4250
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x7A
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877C79A: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877C79E: mov eax, dword ptr [ebx + edi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C7A5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877C7A7: je 0x5877c833
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C7AD: cmp dword ptr [eax + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5877C7B4: je 0x5877c833
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x5877C7B6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5877C7B8: je 0x5877c803
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x5877C7BA: movzx ecx, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x5E
        // 0x5877C7BE: shr ecx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0C
        // 0x5877C7C1: mov dword ptr [ebp + ecx*4 + 0x9a4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C7C8: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5877C7CA: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xBD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C7CF: mov eax, dword ptr [ebx + edi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C7D6: mov dx, word ptr [esi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5E
        // 0x5877C7DA: xor dx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x50
        __asm _emit 0x5E
        // 0x5877C7DE: mov ecx, 0xfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C7E3: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x5877C7E6: xor dx, word ptr [esi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x56
        __asm _emit 0x5E
        // 0x5877C7EA: mov word ptr [eax + 0x5e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x5E
        // 0x5877C7EE: mov edx, dword ptr [ebp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x48
        // 0x5877C7F1: mov eax, dword ptr [ebx + edi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C7F8: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x5877C7FB: mov dword ptr [eax + 0xb8], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C801: jmp 0x5877c833
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x5877C803: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C809: push eax
        __asm _emit 0x50
        // 0x5877C80A: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5877C80D: call 0x5877b130
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C812: mov eax, dword ptr [ebx + edi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C819: mov ecx, 0xfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C81E: and word ptr [eax + 0x5e], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x5E
        // 0x5877C822: mov edx, dword ptr [ebx + edi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C829: mov dword ptr [edx + 0xb8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C833: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C838: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C83E: mov eax, dword ptr [ecx + edi*4 + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C845: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5877C848: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5877C84B: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5877C84E: sub ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x1E
        // 0x5877C851: push eax
        __asm _emit 0x50
        // 0x5877C852: push ecx
        __asm _emit 0x51
        // 0x5877C853: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877C855: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x6A
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877C85A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877C85C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877C85E: call 0x5877a9b0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877C863: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877C865: mov dword ptr [ebx + edi*4 + 0x9a4], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C86C: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xBC
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877C871: mov dx, word ptr [esi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5E
        // 0x5877C875: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877C879: mov eax, 0xfff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C87E: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5877C881: shl edi, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x0C
        // 0x5877C884: or dx, di
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD7
        // 0x5877C887: mov word ptr [esi + 0x5e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x5E
        // 0x5877C88B: mov dword ptr [esi + 0xb8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C891: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C897: mov ecx, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C89D: call 0x588730f0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x68
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877C8A2: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877C8A8: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877C8AB: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C8B0: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5877C8B3: push edx
        __asm _emit 0x52
        // 0x5877C8B4: push ecx
        __asm _emit 0x51
        // 0x5877C8B5: mov ecx, dword ptr [0x58a0adac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5877C8BB: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C8C0: push eax
        __asm _emit 0x50
        // 0x5877C8C1: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xAB
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877C8C6: mov esi, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C8CC: pop ebp
        __asm _emit 0x5D
        // 0x5877C8CD: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C8D2: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877C8D6: pop edi
        __asm _emit 0x5F
        // 0x5877C8D7: pop esi
        __asm _emit 0x5E
        // 0x5877C8D8: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877C8DD: pop ebx
        __asm _emit 0x5B
        // 0x5877C8DE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5877C8E1: pop edi
        __asm _emit 0x5F
        // 0x5877C8E2: pop esi
        __asm _emit 0x5E
        // 0x5877C8E3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877C8E5: pop ebx
        __asm _emit 0x5B
        // 0x5877C8E6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
