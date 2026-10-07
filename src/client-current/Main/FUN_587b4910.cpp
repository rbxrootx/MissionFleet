// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 123 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b4910.

// Ghidra body range 0x587B4910..0x587B498B; 123 mapped bytes.
extern "C" __declspec(naked) void FUN_587b4910_segment_00() {
    __asm {
        // 0x587B4910: movzx edx, word ptr [ecx + 0x228]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4917: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B491B: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587B491E: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B4920: jge 0x587b4924
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587B4922: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587B4924: mov dword ptr [ecx + 0xe0], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B492A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587B492C: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x587B492E: sbb edx, edx
        __asm _emit 0x1B
        __asm _emit 0xD2
        // 0x587B4930: and edx, 0x40000000
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B4936: mov dword ptr [ecx + 0xf8], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B493C: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B4941: push esi
        __asm _emit 0x56
        // 0x587B4942: lea esi, [ecx + 0x2ec]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4948: lea edx, [ecx + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B494E: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587B4950: mov eax, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4956: mov dword ptr [edx], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x02
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B495C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B4962: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587B4965: jne 0x587b4987
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587B4967: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B496D: push 0xaaaaaaaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B4972: push edx
        __asm _emit 0x52
        // 0x587B4973: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B4978: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587B497A: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B4980: push edx
        __asm _emit 0x52
        // 0x587B4981: push esi
        __asm _emit 0x56
        // 0x587B4982: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B4987: pop esi
        __asm _emit 0x5E
        // 0x587B4988: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
