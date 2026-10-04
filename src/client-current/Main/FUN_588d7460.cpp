// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D7460 .. +0x183 bytes.
// Source symbol alias: FUN_588d7460.
extern "C" __declspec(naked) void FUN_588d7460() {
    __asm {
        // 0x588D7460: push ecx
        __asm _emit 0x51
        // 0x588D7461: push ebx
        __asm _emit 0x53
        // 0x588D7462: push ebp
        __asm _emit 0x55
        // 0x588D7463: push esi
        __asm _emit 0x56
        // 0x588D7464: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D7466: mov eax, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D746C: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588D746F: push edi
        __asm _emit 0x57
        // 0x588D7470: jl 0x588d7533
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7476: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x588D7479: jg 0x588d7533
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D747F: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588D7482: jle 0x588d75e0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7488: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x588D748B: jge 0x588d75e0
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7491: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D7493: cmp dword ptr [esi + 0x141c], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7499: jle 0x588d75e0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D749F: lea eax, [esi + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D74A5: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D74A9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D74B0: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D74B4: mov ebx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x19
        // 0x588D74B6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D74B8: je 0x588d751f
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x588D74BA: cmp byte ptr [edi + esi + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x37
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D74C2: je 0x588d750b
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x588D74C4: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588D74C6: cdq
        __asm _emit 0x99
        // 0x588D74C7: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x588D74CA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D74CC: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D74D2: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x588D74D4: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588D74D7: and ebp, 0x80000007
        __asm _emit 0x81
        __asm _emit 0xE5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588D74DD: jns 0x588d74e4
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588D74DF: dec ebp
        __asm _emit 0x4D
        // 0x588D74E0: or ebp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xF8
        // 0x588D74E3: inc ebp
        __asm _emit 0x45
        // 0x588D74E4: mov eax, dword ptr [edx + eax*4 + 0x2ac]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D74EB: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D74F0: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588D74F2: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D74F4: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D74F6: shr eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE8
        // 0x588D74F8: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588D74FB: mov cx, word ptr [esi + eax*2 + 0x429c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x46
        __asm _emit 0x9C
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7503: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        // 0x588D7505: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588D7508: push edx
        __asm _emit 0x52
        // 0x588D7509: jmp 0x588d7518
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588D750B: mov ax, word ptr [esi + 0x42aa]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAA
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7512: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        // 0x588D7514: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x588D7517: push ecx
        __asm _emit 0x51
        // 0x588D7518: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588D751A: call 0x58731590
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xA0
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588D751F: add dword ptr [esp + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x588D7524: inc edi
        __asm _emit 0x47
        // 0x588D7525: cmp edi, dword ptr [esi + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D752B: jl 0x588d74b0
        __asm _emit 0x7C
        __asm _emit 0x83
        // 0x588D752D: pop edi
        __asm _emit 0x5F
        // 0x588D752E: pop esi
        __asm _emit 0x5E
        // 0x588D752F: pop ebp
        __asm _emit 0x5D
        // 0x588D7530: pop ebx
        __asm _emit 0x5B
        // 0x588D7531: pop ecx
        __asm _emit 0x59
        // 0x588D7532: ret
        __asm _emit 0xC3
        // 0x588D7533: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588D7535: cmp dword ptr [esi + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D753B: jle 0x588d75e0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7541: lea edx, [esi + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7547: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D754B: jmp 0x588d7550
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588D754D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588D7550: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D7554: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588D7556: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588D7558: je 0x588d75ce
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x588D755A: cmp byte ptr [ebx + esi + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x33
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7562: je 0x588d756f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D7564: mov cx, word ptr [esi + 0x42aa]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAA
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D756B: inc cx
        __asm _emit 0x66
        __asm _emit 0x41
        // 0x588D756D: jmp 0x588d75b0
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x588D756F: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588D7571: cdq
        __asm _emit 0x99
        // 0x588D7572: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x588D7575: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D7577: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D757D: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x588D757F: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588D7582: and ebp, 0x80000007
        __asm _emit 0x81
        __asm _emit 0xE5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588D7588: jns 0x588d758f
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588D758A: dec ebp
        __asm _emit 0x4D
        // 0x588D758B: or ebp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xF8
        // 0x588D758E: inc ebp
        __asm _emit 0x45
        // 0x588D758F: mov eax, dword ptr [edx + eax*4 + 0x2ac]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7596: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D759B: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588D759D: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D759F: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D75A1: shr eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE8
        // 0x588D75A3: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588D75A6: mov cx, word ptr [esi + eax*2 + 0x429c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x46
        __asm _emit 0x9C
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D75AE: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        // 0x588D75B0: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x588D75B4: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588D75B7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D75B9: je 0x588d75c1
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D75BB: push edi
        __asm _emit 0x57
        // 0x588D75BC: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D75C1: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588D75C4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D75C6: je 0x588d75ce
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D75C8: push edi
        __asm _emit 0x57
        // 0x588D75C9: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D75CE: add dword ptr [esp + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x588D75D3: inc ebx
        __asm _emit 0x43
        // 0x588D75D4: cmp ebx, dword ptr [esi + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D75DA: jl 0x588d7550
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D75E0: pop edi
        __asm _emit 0x5F
        // 0x588D75E1: pop esi
        __asm _emit 0x5E
        // 0x588D75E2: pop ebp
        __asm _emit 0x5D
    }
}
