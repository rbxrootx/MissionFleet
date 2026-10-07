// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 157 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975880.

// Ghidra body range 0x58975880..0x5897591D; 157 mapped bytes.
extern "C" __declspec(naked) void FUN_58975880_segment_00() {
    __asm {
        // 0x58975880: push ebp
        __asm _emit 0x55
        // 0x58975881: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975885: push esi
        __asm _emit 0x56
        // 0x58975886: push edi
        __asm _emit 0x57
        // 0x58975887: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5897588A: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897588E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58975890: jne 0x5897589e
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58975892: push edi
        __asm _emit 0x57
        // 0x58975893: call 0x58976bf0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975898: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897589B: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5897589E: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589758A2: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x589758A5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x589758A7: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x589758A9: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x589758AB: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x589758AE: mov dword ptr [edx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x589758B1: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x589758B4: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x589758B7: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x589758BA: mov dword ptr [edx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x589758BD: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x589758BF: mov al, byte ptr [eax + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x589758C2: mov byte ptr [edx + 0x10], al
        __asm _emit 0x88
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x589758C5: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589758CA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x589758CC: mov dl, byte ptr [eax + ecx]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x589758CF: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x589758D1: inc eax
        __asm _emit 0x40
        // 0x589758D2: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x589758D5: jle 0x589758ca
        __asm _emit 0x7E
        __asm _emit 0xF3
        // 0x589758D7: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x589758DA: jl 0x589758e4
        __asm _emit 0x7C
        __asm _emit 0x08
        // 0x589758DC: cmp esi, 0x100
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589758E2: jle 0x589758f5
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x589758E4: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x589758E6: push edi
        __asm _emit 0x57
        // 0x589758E7: mov dword ptr [eax + 0x14], 8
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589758EE: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x589758F0: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x589758F2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589758F5: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x589758F8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x589758FA: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589758FE: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58975900: add edi, 0x11
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x11
        // 0x58975903: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58975906: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58975908: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5897590A: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5897590D: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x5897590F: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58975912: pop edi
        __asm _emit 0x5F
        // 0x58975913: pop esi
        __asm _emit 0x5E
        // 0x58975914: pop ebp
        __asm _emit 0x5D
        // 0x58975915: mov byte ptr [eax + 0x111], 0
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897591C: ret
        __asm _emit 0xC3
    }
}
