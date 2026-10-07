// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885FA60 .. +0x11F bytes.
// Source symbol alias: FUN_5885fa60.
extern "C" __declspec(naked) void FUN_5885fa60() {
    __asm {
        // 0x5885FA60: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x5885FA63: push ebx
        __asm _emit 0x53
        // 0x5885FA64: push ebp
        __asm _emit 0x55
        // 0x5885FA65: push esi
        __asm _emit 0x56
        // 0x5885FA66: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5885FA68: push edi
        __asm _emit 0x57
        // 0x5885FA69: mov edi, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FA6F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885FA71: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885FA73: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x5885FA75: jle 0x5885fa8a
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5885FA77: lea ecx, [ebx + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FA7D: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5885FA7F: nop
        __asm _emit 0x90
        // 0x5885FA80: add eax, dword ptr [ecx]
        __asm _emit 0x03
        __asm _emit 0x01
        // 0x5885FA82: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x5885FA85: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5885FA88: jne 0x5885fa80
        __asm _emit 0x75
        __asm _emit 0xF6
        // 0x5885FA8A: mov dword ptr [ebx + 0x63c], 1
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FA94: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FA9A: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5885FA9D: mov ecx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FAA3: movzx edx, word ptr [ecx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5885FAA7: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FAAD: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5885FAAF: jge 0x5885facd
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x5885FAB1: mov eax, dword ptr [ebx + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FAB7: mov ecx, dword ptr [ebx + eax*8 + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC3
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FABE: cmp ecx, dword ptr [ebx + eax*4 + 0x628]
        __asm _emit 0x3B
        __asm _emit 0x8C
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FAC5: jge 0x5885facd
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5885FAC7: mov dword ptr [ebx + 0x63c], esi
        __asm _emit 0x89
        __asm _emit 0xB3
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FACD: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x5885FACF: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885FAD3: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5885FAD7: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5885FADB: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5885FADF: jle 0x5885fb0c
        __asm _emit 0x7E
        __asm _emit 0x2B
        // 0x5885FAE1: lea ecx, [ebx + 0x160]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FAE7: lea edx, [ebx + 0x244]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FAED: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5885FAEF: nop
        __asm _emit 0x90
        // 0x5885FAF0: movzx eax, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x02
        // 0x5885FAF3: mov ebp, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x29
        // 0x5885FAF5: dec eax
        __asm _emit 0x48
        // 0x5885FAF6: add dword ptr [esp + eax*4 + 0x18], ebp
        __asm _emit 0x01
        __asm _emit 0x6C
        __asm _emit 0x84
        __asm _emit 0x18
        // 0x5885FAFA: lea eax, [esp + eax*4 + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x18
        // 0x5885FAFE: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x5885FB01: add edx, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FB07: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5885FB0A: jne 0x5885faf0
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885FB0C: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x5885FB0E: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885FB12: jle 0x5885fb77
        __asm _emit 0x7E
        __asm _emit 0x63
        // 0x5885FB14: lea edx, [ebx + 0x244]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FB1A: lea ebp, [ebx + 0x640]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FB20: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885FB24: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885FB28: movzx esi, word ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x30
        // 0x5885FB2B: dec esi
        __asm _emit 0x4E
        // 0x5885FB2C: mov ecx, dword ptr [ebx + esi*4 + 0x5e4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FB33: lea edi, [ebx + esi*4 + 0x5e4]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xB3
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FB3A: push ecx
        __asm _emit 0x51
        // 0x5885FB3B: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FB41: push edi
        __asm _emit 0x57
        // 0x5885FB42: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x1A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885FB47: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5885FB49: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885FB4B: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FB51: cmp dword ptr [esp + esi*4 + 0x18], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0x18
        // 0x5885FB55: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x5885FB58: add dword ptr [esp + 0x10], 0xd4
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FB60: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5885FB63: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885FB66: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885FB6A: inc eax
        __asm _emit 0x40
        // 0x5885FB6B: cmp eax, dword ptr [ebx + 0x118]
        __asm _emit 0x3B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FB71: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885FB75: jl 0x5885fb24
        __asm _emit 0x7C
        __asm _emit 0xAD
        // 0x5885FB77: pop edi
        __asm _emit 0x5F
        // 0x5885FB78: pop esi
        __asm _emit 0x5E
        // 0x5885FB79: pop ebp
        __asm _emit 0x5D
        // 0x5885FB7A: pop ebx
        __asm _emit 0x5B
        // 0x5885FB7B: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885FB7E: ret
        __asm _emit 0xC3
    }
}
