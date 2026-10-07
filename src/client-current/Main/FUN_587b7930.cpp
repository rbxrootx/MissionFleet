// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 83 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b7930.

// Ghidra body range 0x587B7930..0x587B7983; 83 mapped bytes.
extern "C" __declspec(naked) void FUN_587b7930_segment_00() {
    __asm {
        // 0x587B7930: push ebx
        __asm _emit 0x53
        // 0x587B7931: push esi
        __asm _emit 0x56
        // 0x587B7932: push edi
        __asm _emit 0x57
        // 0x587B7933: lea esi, [ecx + 0x178]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7939: lea eax, [ecx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B793F: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7944: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x587B7947: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B7949: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587B794B: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B794E: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587B7951: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587B7954: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587B7957: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587B795A: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x587B795C: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587B795F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587B7962: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587B7965: jne 0x587b7947
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587B7967: pop edi
        __asm _emit 0x5F
        // 0x587B7968: pop esi
        __asm _emit 0x5E
        // 0x587B7969: mov dword ptr [ecx + 0x184], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B796F: mov dword ptr [ecx + 0x188], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7975: mov dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B797B: mov dword ptr [ecx + 0x190], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7981: pop ebx
        __asm _emit 0x5B
        // 0x587B7982: ret
        __asm _emit 0xC3
    }
}
