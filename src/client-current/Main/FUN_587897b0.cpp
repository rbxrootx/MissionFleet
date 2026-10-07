// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587897B0 .. +0x73 bytes.
// Source symbol alias: FUN_587897b0.
extern "C" __declspec(naked) void FUN_587897b0() {
    __asm {
        // 0x587897B0: mov dl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587897B4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587897B6: push ebx
        __asm _emit 0x53
        // 0x587897B7: push ebp
        __asm _emit 0x55
        // 0x587897B8: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587897BC: push esi
        __asm _emit 0x56
        // 0x587897BD: push edi
        __asm _emit 0x57
        // 0x587897BE: movzx si, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xF2
        // 0x587897C2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587897C4: add si, si
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587897C7: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587897CD: mov dword ptr [eax + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587897D4: mov word ptr [eax + 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x2C
        // 0x587897D8: mov di, word ptr [eax + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x2C
        // 0x587897DC: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587897E0: mov ebx, 0xfc03
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587897E5: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x587897E8: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587897EC: add si, si
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587897EF: or si, di
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x587897F2: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587897F6: mov word ptr [eax + 0x2c], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x2C
        // 0x587897FA: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587897FE: mov dword ptr [eax + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x20
        // 0x58789801: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58789804: pop edi
        __asm _emit 0x5F
        // 0x58789805: mov dword ptr [eax + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x1C
        // 0x58789808: mov dword ptr [eax + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x5878980B: pop esi
        __asm _emit 0x5E
        // 0x5878980C: mov dword ptr [eax + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x28
        // 0x5878980F: pop ebp
        __asm _emit 0x5D
        // 0x58789810: mov dword ptr [eax + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58789813: mov dword ptr [eax + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x58789816: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58789819: mov byte ptr [eax + 8], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5878981C: mov byte ptr [eax + 9], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x09
        // 0x5878981F: pop ebx
        __asm _emit 0x5B
        // 0x58789820: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
