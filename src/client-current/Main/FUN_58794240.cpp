// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58794240 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58794240() {
    __asm {
        // 0x58794240: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58794242: mov dword ptr [ecx + 0x7c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x7C
        // 0x58794245: mov dword ptr [ecx + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879424B: cmp dword ptr [ecx + 0xc4], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794251: je 0x587942b3
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x58794253: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794259: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x5879425C: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5879425F: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58794264: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x58794267: cmp dword ptr [ecx + 0x60], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x5879426A: jne 0x5879426f
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5879426C: mov dword ptr [ecx + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x5879426F: mov eax, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794275: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x58794278: mov eax, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879427E: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58794280: je 0x587942b3
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58794282: mov ecx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794288: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5879428B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5879428E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58794291: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x58794294: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58794297: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5879429A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5879429C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5879429F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587942A1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587942A4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587942A7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587942AA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587942AD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587942B0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587942B3: ret
        __asm _emit 0xC3
    }
}
