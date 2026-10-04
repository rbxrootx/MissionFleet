// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BB160 .. +0xB2 bytes.
// Source symbol alias: FUN_587bb160.
extern "C" __declspec(naked) void FUN_587bb160() {
    __asm {
        // 0x587BB160: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587BB163: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587BB165: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587BB169: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587BB16D: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x587BB170: ja 0x587bb19f
        __asm _emit 0x77
        __asm _emit 0x2D
        // 0x587BB172: jmp dword ptr [ecx*4 + 0x587bb214]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xB2
        __asm _emit 0x7B
        __asm _emit 0x58
        // 0x587BB179: mov dword ptr [esp + 0xc], 0x7b6c3f01
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x3F
        __asm _emit 0x6C
        __asm _emit 0x7B
        // 0x587BB181: jmp 0x587bb19f
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x587BB183: mov dword ptr [esp + 0xc], 0xb19b5277
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x77
        __asm _emit 0x52
        __asm _emit 0x9B
        __asm _emit 0xB1
        // 0x587BB18B: jmp 0x587bb19f
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x587BB18D: mov dword ptr [esp + 0xc], 0x548f6d31
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x31
        __asm _emit 0x6D
        __asm _emit 0x8F
        __asm _emit 0x54
        // 0x587BB195: jmp 0x587bb19f
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587BB197: mov dword ptr [esp + 0xc], 0x698f0db3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0xB3
        __asm _emit 0x0D
        __asm _emit 0x8F
        __asm _emit 0x69
        // 0x587BB19F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BB1A5: mov ecx, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587BB1AB: push ebx
        __asm _emit 0x53
        // 0x587BB1AC: push ebp
        __asm _emit 0x55
        // 0x587BB1AD: push esi
        __asm _emit 0x56
        // 0x587BB1AE: mov esi, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x40
        // 0x587BB1B1: push edi
        __asm _emit 0x57
        // 0x587BB1B2: mov edi, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x58
        // 0x587BB1B5: imul edi, edi, 0xd
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x0D
        // 0x587BB1B8: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BB1BC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587BB1BE: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BB1C0: div dword ptr [esi + 4]
        __asm _emit 0xF7
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587BB1C3: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587BB1C6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB1C8: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587BB1CA: mov ebx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x90
        // 0x587BB1CD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587BB1CF: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BB1D1: div dword ptr [esi + 4]
        __asm _emit 0xF7
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587BB1D4: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587BB1D7: xor ebx, dword ptr [esp + 0x24]
        __asm _emit 0x33
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587BB1DB: mov ebp, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x90
        // 0x587BB1DE: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587BB1E0: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BB1E2: div dword ptr [esi + 4]
        __asm _emit 0xF7
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587BB1E5: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587BB1E8: xor ebp, dword ptr [esp + 0x28]
        __asm _emit 0x33
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587BB1EC: xor ecx, dword ptr [eax + edx*4]
        __asm _emit 0x33
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x587BB1EF: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BB1F3: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BB1F7: push ecx
        __asm _emit 0x51
        // 0x587BB1F8: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587BB1FC: push ebp
        __asm _emit 0x55
        // 0x587BB1FD: push ebx
        __asm _emit 0x53
        // 0x587BB1FE: push 0x80013112
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BB203: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x5A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BB208: pop edi
        __asm _emit 0x5F
        // 0x587BB209: pop esi
        __asm _emit 0x5E
        // 0x587BB20A: pop ebp
        __asm _emit 0x5D
        // 0x587BB20B: pop ebx
        __asm _emit 0x5B
        // 0x587BB20C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587BB20F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
