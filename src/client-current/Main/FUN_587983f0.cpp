// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587983F0 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_587983f0() {
    __asm {
        // 0x587983F0: push ebx
        __asm _emit 0x53
        // 0x587983F1: push esi
        __asm _emit 0x56
        // 0x587983F2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587983F4: mov edx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587983FA: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587983FD: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798403: cmp ecx, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x08
        // 0x58798405: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879840B: mov ax, word ptr [ecx + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798412: push edi
        __asm _emit 0x57
        // 0x58798413: mov edi, 0xaa
        __asm _emit 0xBF
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798418: jne 0x5879845a
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5879841A: xor di, word ptr [esi + 0x25c]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798421: sub ax, di
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58798424: mov edi, 0xaa
        __asm _emit 0xBF
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798429: xor ax, di
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x5879842C: mov word ptr [esi + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798433: movsx edi, ax
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xF8
        // 0x58798436: jle 0x58798444
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58798438: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879843E: imul edi, dword ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x58798442: jmp 0x5879848d
        __asm _emit 0xEB
        __asm _emit 0x49
        // 0x58798444: mov edx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879844A: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798450: imul edi, dword ptr [esi + edx*4 + 0x27c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xBC
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798458: jmp 0x5879848d
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5879845A: mov ebx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798460: xor ax, di
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x58798463: mov edi, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798469: xor ebx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF3
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879846F: mov word ptr [esi + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798476: imul ebx, dword ptr [esi + edi*4 + 0x27c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x9C
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879847E: movsx edi, ax
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xF8
        // 0x58798481: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798487: imul edi, dword ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x5879848B: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x5879848D: mov dword ptr [ecx + 0x74], 0x64
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x74
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798494: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879849A: mov ebx, 0xeeeeee
        __asm _emit 0xBB
        __asm _emit 0xEE
        __asm _emit 0xEE
        __asm _emit 0xEE
        __asm _emit 0x00
        // 0x5879849F: mov dword ptr [eax + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x60
        // 0x587984A2: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984A8: mov dword ptr [ecx + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x60
        // 0x587984AB: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587984B1: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984B7: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984BD: call 0x58834020
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xBB
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587984C2: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587984C4: jg 0x587984e0
        __asm _emit 0x7F
        __asm _emit 0x1A
        // 0x587984C6: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984CC: mov dword ptr [ecx + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x60
        // 0x587984CF: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984D5: pop edi
        __asm _emit 0x5F
        // 0x587984D6: pop esi
        __asm _emit 0x5E
        // 0x587984D7: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984DE: pop ebx
        __asm _emit 0x5B
        // 0x587984DF: ret
        __asm _emit 0xC3
        // 0x587984E0: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984E6: mov dword ptr [eax + 0x60], 0xee
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984ED: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984F3: pop edi
        __asm _emit 0x5F
        // 0x587984F4: pop esi
        __asm _emit 0x5E
        // 0x587984F5: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587984FC: pop ebx
        __asm _emit 0x5B
        // 0x587984FD: ret
        __asm _emit 0xC3
    }
}
