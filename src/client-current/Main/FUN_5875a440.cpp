// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875A440 .. +0x6B bytes.
// Source symbol alias: FUN_5875a440.
extern "C" __declspec(naked) void FUN_5875a440() {
    __asm {
        // 0x5875A440: push ebx
        __asm _emit 0x53
        // 0x5875A441: mov ebx, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875A447: push esi
        __asm _emit 0x56
        // 0x5875A448: push edi
        __asm _emit 0x57
        // 0x5875A449: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875A44D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875A44F: mov al, byte ptr [esi + 0xac]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A455: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5875A457: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5875A45A: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5875A45D: push edx
        __asm _emit 0x52
        // 0x5875A45E: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x5875A461: push eax
        __asm _emit 0x50
        // 0x5875A462: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5875A464: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5875A467: mov dword ptr [edi + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x5875A46A: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x5875A46D: mov dword ptr [edi + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x40
        // 0x5875A470: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A476: mov dword ptr [edi + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x48
        // 0x5875A479: mov cx, word ptr [esi + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A480: mov word ptr [edi + 0x44], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x44
        // 0x5875A484: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A48A: mov dword ptr [edi + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x34
        // 0x5875A48D: mov ax, word ptr [esi + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A494: mov word ptr [edi + 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1A
        // 0x5875A498: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5875A49B: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5875A49E: push edx
        __asm _emit 0x52
        // 0x5875A49F: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x5875A4A2: push edi
        __asm _emit 0x57
        // 0x5875A4A3: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5875A4A5: pop edi
        __asm _emit 0x5F
        // 0x5875A4A6: pop esi
        __asm _emit 0x5E
        // 0x5875A4A7: pop ebx
        __asm _emit 0x5B
        // 0x5875A4A8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
