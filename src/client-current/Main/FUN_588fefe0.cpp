// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 134 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fefe0.

// Ghidra body range 0x588FEFE0..0x588FF066; 134 mapped bytes.
extern "C" __declspec(naked) void FUN_588fefe0_segment_00() {
    __asm {
        // 0x588FEFE0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588FEFE3: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588FEFE6: push ebx
        __asm _emit 0x53
        // 0x588FEFE7: push ebp
        __asm _emit 0x55
        // 0x588FEFE8: mov ebp, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x588FEFEB: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FEFEF: push esi
        __asm _emit 0x56
        // 0x588FEFF0: push edi
        __asm _emit 0x57
        // 0x588FEFF1: mov edi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x39
        // 0x588FEFF3: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEFFB: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FEFFF: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588FF001: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x588FF006: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588FF008: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588FF00A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588FF00D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FF00F: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x588FF012: imul eax, eax, 0x53
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x53
        // 0x588FF015: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FF019: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588FF01B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF01D: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588FF01F: imul ecx, ecx, 0x47
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x47
        // 0x588FF022: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x588FF024: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF026: lea edx, [ecx + 0x47]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x47
        // 0x588FF029: lea ebx, [eax + 0x53]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x53
        // 0x588FF02C: jle 0x588ff041
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FF02E: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FF030: jge 0x588ff041
        __asm _emit 0x7D
        __asm _emit 0x0F
        // 0x588FF032: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FF036: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588FF039: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588FF03B: jle 0x588ff041
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588FF03D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FF03F: jl 0x588ff058
        __asm _emit 0x7C
        __asm _emit 0x17
        // 0x588FF041: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF045: inc esi
        __asm _emit 0x46
        // 0x588FF046: cmp esi, 0x17
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x17
        // 0x588FF049: jle 0x588ff001
        __asm _emit 0x7E
        __asm _emit 0xB6
        // 0x588FF04B: pop edi
        __asm _emit 0x5F
        // 0x588FF04C: pop esi
        __asm _emit 0x5E
        // 0x588FF04D: pop ebp
        __asm _emit 0x5D
        // 0x588FF04E: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588FF051: pop ebx
        __asm _emit 0x5B
        // 0x588FF052: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588FF055: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FF058: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF05C: pop edi
        __asm _emit 0x5F
        // 0x588FF05D: pop esi
        __asm _emit 0x5E
        // 0x588FF05E: pop ebp
        __asm _emit 0x5D
        // 0x588FF05F: pop ebx
        __asm _emit 0x5B
        // 0x588FF060: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588FF063: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
