// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 174 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770ae0.

// Ghidra body range 0x58770AE0..0x58770B8E; 174 mapped bytes.
extern "C" __declspec(naked) void FUN_58770ae0_segment_00() {
    __asm {
        // 0x58770AE0: push esi
        __asm _emit 0x56
        // 0x58770AE1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770AE3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58770AE7: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770AEC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58770AEF: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770AF4: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58770AF7: jne 0x58770b8c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770AFD: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58770B02: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58770B06: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B0B: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58770B0E: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B13: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58770B16: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58770B1A: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x58770B1D: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58770B20: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58770B23: push ebx
        __asm _emit 0x53
        // 0x58770B24: push edi
        __asm _emit 0x57
        // 0x58770B25: add ecx, 0x23f
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x3F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B2B: push ecx
        __asm _emit 0x51
        // 0x58770B2C: add edx, 0x69
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x69
        // 0x58770B2F: push edx
        __asm _emit 0x52
        // 0x58770B30: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58770B32: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770B37: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x58770B3A: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58770B3D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58770B40: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58770B43: mov edi, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x64
        // 0x58770B46: mov ebx, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x68
        // 0x58770B49: add ecx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B4F: mov dword ptr [eax + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B55: add edx, 0x82
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B5B: mov dword ptr [eax + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B61: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x58770B63: add dword ptr [eax + 0x6c], edx
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x6C
        // 0x58770B66: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58770B68: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x58770B6A: mov dword ptr [eax + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x68
        // 0x58770B6D: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58770B6F: add dword ptr [eax + 0x70], ecx
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x58770B72: mov dword ptr [eax + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x64
        // 0x58770B75: mov esi, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x68
        // 0x58770B78: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B7E: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770B84: pop edi
        __asm _emit 0x5F
        // 0x58770B85: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58770B88: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58770B8B: pop ebx
        __asm _emit 0x5B
        // 0x58770B8C: pop esi
        __asm _emit 0x5E
        // 0x58770B8D: ret
        __asm _emit 0xC3
    }
}
