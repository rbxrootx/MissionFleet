// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58860540 .. +0x101 bytes.
// Source symbol alias: FUN_58860540.
extern "C" __declspec(naked) void FUN_58860540() {
    __asm {
        // 0x58860540: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58860545: test dword ptr [eax + 0x10474], 0x100
        __asm _emit 0xF7
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886054F: jne 0x5886063e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860555: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58860559: push esi
        __asm _emit 0x56
        // 0x5886055A: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5886055D: mov esi, dword ptr [ecx + edx*4 + 0x67c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x91
        __asm _emit 0x7C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860564: push edi
        __asm _emit 0x57
        // 0x58860565: mov edi, 0xfffd
        __asm _emit 0xBF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886056A: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x5886056E: mov byte ptr [edx + ecx + 0x110], 0x32
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x58860576: mov dword ptr [ecx + edx*4 + 0xfc], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860581: movzx edx, byte ptr [ecx + eax*4 + 0x5d0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860589: xor dword ptr [ecx + eax*8 + 0x184], 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xC1
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x58860594: mov esi, dword ptr [ecx + eax*8 + 0x184]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xC1
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886059B: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5886059E: mov byte ptr [esp + 0xc], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588605A2: movzx edx, byte ptr [ecx + eax*8 + 0x184]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588605AA: xor esi, 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x588605B0: mov dword ptr [ecx + eax*8 + 0x184], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0xC1
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588605B7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588605BD: mov byte ptr [esp + 0xe], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x588605C1: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588605C3: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588605C7: push eax
        __asm _emit 0x50
        // 0x588605C8: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x588605CA: mov byte ptr [esp + 0x19], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x19
        // 0x588605CE: call 0x587e5a70
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x54
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588605D3: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588605D8: mov esi, 0x1b
        __asm _emit 0xBE
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588605DD: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588605E3: jle 0x588605f9
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588605E5: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588605EC: je 0x588605f9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588605EE: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588605F4: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588605F7: jmp 0x588605fb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588605F9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588605FB: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58860601: push edx
        __asm _emit 0x52
        // 0x58860602: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58860607: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886060C: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860612: pop edi
        __asm _emit 0x5F
        // 0x58860613: pop esi
        __asm _emit 0x5E
        // 0x58860614: jle 0x58860634
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58860616: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886061D: je 0x58860634
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5886061F: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860625: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58860628: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5886062A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5886062D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5886062F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58860631: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58860634: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58860636: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58860638: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5886063B: push ecx
        __asm _emit 0x51
        // 0x5886063C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5886063E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
