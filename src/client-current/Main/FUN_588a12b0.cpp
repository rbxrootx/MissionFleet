// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A12B0 .. +0x86 bytes.
// Source symbol alias: FUN_588a12b0.
extern "C" __declspec(naked) void FUN_588a12b0() {
    __asm {
        // 0x588A12B0: push ebx
        __asm _emit 0x53
        // 0x588A12B1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588A12B5: push esi
        __asm _emit 0x56
        // 0x588A12B6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A12B8: cmp ebx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x1F
        // 0x588A12BB: jae 0x588a1331
        __asm _emit 0x73
        __asm _emit 0x74
        // 0x588A12BD: push ebp
        __asm _emit 0x55
        // 0x588A12BE: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588A12C2: push ebp
        __asm _emit 0x55
        // 0x588A12C3: call 0x5889ed20
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A12C8: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588A12CB: jne 0x588a1330
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x588A12CD: push edi
        __asm _emit 0x57
        // 0x588A12CE: push ebp
        __asm _emit 0x55
        // 0x588A12CF: mov dword ptr [esi + ebx*4 + 0x1cc], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A12D6: call 0x5889ed80
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A12DB: mov ecx, dword ptr [esi + ebx*4 + 0x2e0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A12E2: push eax
        __asm _emit 0x50
        // 0x588A12E3: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588A12E8: mov eax, dword ptr [esi + ebx*4 + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A12EF: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A12F6: mov dword ptr [esi + 0x35c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A1300: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A1302: add esi, 0x1cc
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1308: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588A130A: je 0x588a1326
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588A130C: cmp dword ptr [esi], ebp
        __asm _emit 0x39
        __asm _emit 0x2E
        // 0x588A130E: jne 0x588a1326
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588A1310: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1316: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A131B: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1321: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x09
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588A1326: inc edi
        __asm _emit 0x47
        // 0x588A1327: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588A132A: cmp edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x1F
        // 0x588A132D: jl 0x588a1308
        __asm _emit 0x7C
        __asm _emit 0xD9
        // 0x588A132F: pop edi
        __asm _emit 0x5F
        // 0x588A1330: pop ebp
        __asm _emit 0x5D
        // 0x588A1331: pop esi
        __asm _emit 0x5E
        // 0x588A1332: pop ebx
        __asm _emit 0x5B
        // 0x588A1333: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
