// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58731540 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58731540() {
    __asm {
        // 0x58731540: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58731543: push esi
        __asm _emit 0x56
        // 0x58731544: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58731548: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5873154A: push edi
        __asm _emit 0x57
        // 0x5873154B: mov edi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x14
        // 0x5873154E: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58731550: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58731552: jl 0x5873157f
        __asm _emit 0x7C
        __asm _emit 0x2B
        // 0x58731554: mov edi, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x1C
        // 0x58731557: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58731559: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x5873155B: jge 0x5873157f
        __asm _emit 0x7D
        __asm _emit 0x22
        // 0x5873155D: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58731560: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58731563: mov esi, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x18
        // 0x58731566: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58731568: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5873156A: jl 0x5873157f
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5873156C: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x20
        // 0x5873156F: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58731571: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58731573: jge 0x5873157f
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58731575: pop edi
        __asm _emit 0x5F
        // 0x58731576: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873157B: pop esi
        __asm _emit 0x5E
        // 0x5873157C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873157F: pop edi
        __asm _emit 0x5F
        // 0x58731580: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58731582: pop esi
        __asm _emit 0x5E
        // 0x58731583: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
