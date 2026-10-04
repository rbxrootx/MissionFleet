// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C7AE0 .. +0xBC bytes.
// Source symbol alias: FUN_587c7ae0.
extern "C" __declspec(naked) void FUN_587c7ae0() {
    __asm {
        // 0x587C7AE0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587C7AE4: push ebx
        __asm _emit 0x53
        // 0x587C7AE5: push ebp
        __asm _emit 0x55
        // 0x587C7AE6: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C7AEA: cmp dword ptr [eax + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7AF0: push esi
        __asm _emit 0x56
        // 0x587C7AF1: push edi
        __asm _emit 0x57
        // 0x587C7AF2: jle 0x587c7b0b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587C7AF4: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587C7AF6: jl 0x587c7b0b
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x587C7AF8: mov edx, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7AFE: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587C7B00: je 0x587c7b0b
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587C7B02: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587C7B04: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587C7B07: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587C7B09: jmp 0x587c7b0d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C7B0B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C7B0D: movzx eax, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587C7B11: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C7B15: dec eax
        __asm _emit 0x48
        // 0x587C7B16: mov dword ptr [ecx + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7B1C: mov eax, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7B22: lea esi, [ecx + 0xac]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7B28: mov dword ptr [ecx + 0xc4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7B2E: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587C7B31: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587C7B33: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C7B37: push ebp
        __asm _emit 0x55
        // 0x587C7B38: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x9C
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587C7B3D: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587C7B3F: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587C7B42: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C7B44: je 0x587c7b6e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587C7B46: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587C7B49: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587C7B4C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587C7B4F: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587C7B52: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587C7B55: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C7B57: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587C7B5A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587C7B5C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587C7B5F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587C7B62: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587C7B65: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587C7B68: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587C7B6B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587C7B6E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587C7B70: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7B75: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587C7B79: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587C7B7B: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x587C7B7E: sub edx, dword ptr [ecx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x587C7B81: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587C7B84: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x587C7B86: push edx
        __asm _emit 0x52
        // 0x587C7B87: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xB7
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C7B8C: inc edi
        __asm _emit 0x47
        // 0x587C7B8D: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587C7B90: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x587C7B93: jl 0x587c7b33
        __asm _emit 0x7C
        __asm _emit 0x9E
        // 0x587C7B95: pop edi
        __asm _emit 0x5F
        // 0x587C7B96: pop esi
        __asm _emit 0x5E
        // 0x587C7B97: pop ebp
        __asm _emit 0x5D
        // 0x587C7B98: pop ebx
        __asm _emit 0x5B
        // 0x587C7B99: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
