// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 639 bytes in 2 exact ranges.
// Source symbol alias: FUN_58875830.

// Ghidra body range 0x58875830..0x58875859; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_58875830_segment_00() {
    __asm {
        // 0x58875830: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58875835: push ebx
        __asm _emit 0x53
        // 0x58875836: push ebp
        __asm _emit 0x55
        // 0x58875837: push esi
        __asm _emit 0x56
        // 0x58875838: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887583A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887583C: push edi
        __asm _emit 0x57
        // 0x5887583D: mov word ptr [esi + 0xcc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875844: mov word ptr [esi + 0xce], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887584B: lea edi, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875851: lea ebp, [ecx + 2]
        __asm _emit 0x8D
        __asm _emit 0x69
        __asm _emit 0x02
        // 0x58875854: lea ebx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x01
        // 0x58875857: jmp 0x58875860
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58875860..0x58875AB6; 598 mapped bytes.
extern "C" __declspec(naked) void FUN_58875830_segment_01() {
    __asm {
        // 0x58875860: mov eax, dword ptr [edi - 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xF8
        // 0x58875863: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875868: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5887586C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5887586E: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58875870: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58875874: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58875877: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5887587B: mov ecx, dword ptr [edi - 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF8
        // 0x5887587E: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875883: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875888: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5887588A: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887588F: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875894: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58875897: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887589C: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588758A1: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588758A4: sub ebp, ebx
        __asm _emit 0x2B
        __asm _emit 0xEB
        // 0x588758A6: jne 0x58875860
        __asm _emit 0x75
        __asm _emit 0xB8
        // 0x588758A8: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588758AD: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588758B0: jne 0x588758f0
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x588758B2: lea edi, [esi + 0xac]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588758B8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588758BA: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588758BF: nop
        __asm _emit 0x90
        // 0x588758C0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588758C2: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588758C6: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588758C9: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x588758CB: jne 0x588758c0
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x588758CD: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588758CF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588758D4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588758D9: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588758DF: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588758E4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588758E9: pop edi
        __asm _emit 0x5F
        // 0x588758EA: pop esi
        __asm _emit 0x5E
        // 0x588758EB: pop ebp
        __asm _emit 0x5D
        // 0x588758EC: pop ebx
        __asm _emit 0x5B
        // 0x588758ED: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588758F0: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588758F4: jne 0x58875994
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588758FA: cmp dword ptr [esi + 0xc8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875901: jne 0x58875951
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x58875903: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58875906: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887590B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887590F: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58875912: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58875916: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58875919: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887591E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875923: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58875926: mov dword ptr [esi + 0xc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887592C: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58875930: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58875933: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58875937: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5887593A: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887593F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875944: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58875947: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887594C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875951: lea ecx, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875957: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887595C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58875960: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58875962: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58875966: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58875969: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x5887596B: jne 0x58875960
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5887596D: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875973: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58875978: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887597D: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875983: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875988: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887598D: pop edi
        __asm _emit 0x5F
        // 0x5887598E: pop esi
        __asm _emit 0x5E
        // 0x5887598F: pop ebp
        __asm _emit 0x5D
        // 0x58875990: pop ebx
        __asm _emit 0x5B
        // 0x58875991: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58875994: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58875998: jne 0x58875a40
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887599E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588759A1: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588759A6: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588759AB: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588759AE: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588759B3: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588759B8: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588759BB: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588759C0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588759C4: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588759C7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588759C9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588759CD: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588759D3: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588759D7: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588759DD: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588759E1: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588759E7: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588759EC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588759F1: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588759F7: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588759FC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875A01: lea edx, [esi + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A07: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58875A09: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A0E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58875A10: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58875A12: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x58875A16: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58875A19: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x58875A1B: jne 0x58875a10
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x58875A1D: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58875A1F: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58875A24: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875A29: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A2F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A34: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875A39: pop edi
        __asm _emit 0x5F
        // 0x58875A3A: pop esi
        __asm _emit 0x5E
        // 0x58875A3B: pop ebp
        __asm _emit 0x5D
        // 0x58875A3C: pop ebx
        __asm _emit 0x5B
        // 0x58875A3D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58875A40: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58875A43: jne 0x58875aaf
        __asm _emit 0x75
        __asm _emit 0x6A
        // 0x58875A45: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A4B: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A50: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875A55: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A5B: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A60: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875A65: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A6B: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A70: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58875A74: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A7A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58875A7C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58875A80: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58875A83: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A88: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875A8D: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58875A90: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875A95: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xD2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58875A9A: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58875A9D: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875AA2: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58875AA6: mov esi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x70
        // 0x58875AA9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58875AAB: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58875AAF: pop edi
        __asm _emit 0x5F
        // 0x58875AB0: pop esi
        __asm _emit 0x5E
        // 0x58875AB1: pop ebp
        __asm _emit 0x5D
        // 0x58875AB2: pop ebx
        __asm _emit 0x5B
        // 0x58875AB3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
