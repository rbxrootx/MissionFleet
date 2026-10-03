// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884E1C0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5884e1c0() {
    __asm {
        // 0x5884E1C0: push ebx
        __asm _emit 0x53
        // 0x5884E1C1: push edi
        __asm _emit 0x57
        // 0x5884E1C2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884E1C4: lea eax, [ecx + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E1CA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884E1CC: lea ecx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x01
        // 0x5884E1CF: nop
        __asm _emit 0x90
        // 0x5884E1D0: movzx ebx, byte ptr [0x58a0b1fd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x1D
        __asm _emit 0xFD
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5884E1D7: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5884E1D9: jne 0x5884e1f2
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5884E1DB: cmp dword ptr [edx*4 + 0x58a0b1e4], -1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x95
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x5884E1E3: je 0x5884e1f2
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5884E1E5: mov ebx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0xFC
        // 0x5884E1E8: mov dword ptr [ebx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x50
        // 0x5884E1EB: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5884E1ED: mov dword ptr [ebx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x50
        // 0x5884E1F0: jmp 0x5884e1fd
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5884E1F2: mov ebx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0xFC
        // 0x5884E1F5: mov dword ptr [ebx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x50
        // 0x5884E1F8: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5884E1FA: mov dword ptr [ebx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x50
        // 0x5884E1FD: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5884E1FF: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x5884E202: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5884E205: jl 0x5884e1d0
        __asm _emit 0x7C
        __asm _emit 0xC9
        // 0x5884E207: pop edi
        __asm _emit 0x5F
        // 0x5884E208: pop ebx
        __asm _emit 0x5B
        // 0x5884E209: ret
        __asm _emit 0xC3
    }
}
