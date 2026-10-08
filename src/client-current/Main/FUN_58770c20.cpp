// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 290 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770c20.

// Ghidra body range 0x58770C20..0x58770D42; 290 mapped bytes.
extern "C" __declspec(naked) void FUN_58770c20_segment_00() {
    __asm {
        // 0x58770C20: push ebx
        __asm _emit 0x53
        // 0x58770C21: push ebp
        __asm _emit 0x55
        // 0x58770C22: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58770C26: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58770C28: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58770C2A: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58770C2C: and eax, 0xffffffe8
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xE8
        // 0x58770C2F: push esi
        __asm _emit 0x56
        // 0x58770C30: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770C32: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58770C35: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58770C38: add eax, 0x90
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770C3D: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58770C3F: lea ebx, [ecx + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x19
        // 0x58770C42: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58770C45: push edi
        __asm _emit 0x57
        // 0x58770C46: lea edi, [edx + 0x187]
        __asm _emit 0x8D
        __asm _emit 0xBA
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770C4C: add edx, 0x19
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x19
        // 0x58770C4F: mov dword ptr [ecx + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58770C52: mov dword ptr [ecx + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x68
        // 0x58770C55: mov dword ptr [ecx + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x6C
        // 0x58770C58: mov dword ptr [ecx + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x58770C5B: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58770C5E: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770C64: mov edx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770C6A: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58770C6D: mov dword ptr [eax + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x54
        // 0x58770C70: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58770C72: je 0x58770ce5
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x58770C74: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x58770C77: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58770C7A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58770C7D: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770C83: push ecx
        __asm _emit 0x51
        // 0x58770C84: add edx, 0x14a
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x4A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770C8A: push edx
        __asm _emit 0x52
        // 0x58770C8B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58770C8D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x25
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770C92: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x58770C95: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58770C98: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58770C9B: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58770C9E: mov edi, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x64
        // 0x58770CA1: mov ebx, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x68
        // 0x58770CA4: add ecx, 0x145
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770CAA: add edx, 0x163
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770CB0: mov dword ptr [eax + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770CB6: mov dword ptr [eax + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770CBC: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x58770CBE: add dword ptr [eax + 0x6c], edx
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x6C
        // 0x58770CC1: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58770CC3: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58770CC5: mov dword ptr [eax + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x64
        // 0x58770CC8: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x58770CCA: add dword ptr [eax + 0x70], ecx
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x58770CCD: mov dword ptr [eax + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x68
        // 0x58770CD0: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58770CD3: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770CD9: mov edx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770CDF: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58770CE2: mov dword ptr [eax + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x54
        // 0x58770CE5: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58770CE8: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58770CEA: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58770CEC: sbb cl, cl
        __asm _emit 0x1A
        __asm _emit 0xC9
        // 0x58770CEE: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x58770CF1: movzx dx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD1
        // 0x58770CF5: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58770CF9: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770CFE: and cx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCF
        // 0x58770D01: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58770D04: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58770D08: mov esi, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x6C
        // 0x58770D0B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58770D0F: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770D15: push edx
        __asm _emit 0x52
        // 0x58770D16: push eax
        __asm _emit 0x50
        // 0x58770D17: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58770D1D: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770D23: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58770D26: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58770D28: inc eax
        __asm _emit 0x40
        // 0x58770D29: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58770D2B: jne 0x58770d26
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58770D2D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58770D2F: pop edi
        __asm _emit 0x5F
        // 0x58770D30: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770D36: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770D3C: pop esi
        __asm _emit 0x5E
        // 0x58770D3D: pop ebp
        __asm _emit 0x5D
        // 0x58770D3E: pop ebx
        __asm _emit 0x5B
        // 0x58770D3F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
