// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5880A940 .. +0x7A bytes.
// Source symbol alias: FUN_5880a940.
extern "C" __declspec(naked) void FUN_5880a940() {
    __asm {
        // 0x5880A940: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880A944: push ebx
        __asm _emit 0x53
        // 0x5880A945: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5880A947: mov ecx, dword ptr [eax*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880A94E: mov eax, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x5880A951: push edi
        __asm _emit 0x57
        // 0x5880A952: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A956: sub dword ptr [ebx + 0x6c], edi
        __asm _emit 0x29
        __asm _emit 0x7B
        __asm _emit 0x6C
        // 0x5880A959: js 0x5880a9ae
        __asm _emit 0x78
        __asm _emit 0x53
        // 0x5880A95B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A95D: jle 0x5880a9b5
        __asm _emit 0x7E
        __asm _emit 0x56
        // 0x5880A95F: push ebp
        __asm _emit 0x55
        // 0x5880A960: push esi
        __asm _emit 0x56
        // 0x5880A961: lea esi, [ebx + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A967: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5880A969: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A970: mov eax, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x6C
        // 0x5880A973: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A975: jl 0x5880a99f
        __asm _emit 0x7C
        __asm _emit 0x28
        // 0x5880A977: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5880A979: lea edx, [eax + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x0A
        // 0x5880A97C: push edx
        __asm _emit 0x52
        // 0x5880A97D: push eax
        __asm _emit 0x50
        // 0x5880A97E: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880A982: push eax
        __asm _emit 0x50
        // 0x5880A983: call 0x588c6830
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xBE
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880A988: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5880A98A: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5880A98D: lea edx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A994: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x5880A996: lea edx, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x50
        // 0x5880A999: push edx
        __asm _emit 0x52
        // 0x5880A99A: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x89
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A99F: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5880A9A2: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5880A9A5: jne 0x5880a970
        __asm _emit 0x75
        __asm _emit 0xC9
        // 0x5880A9A7: pop esi
        __asm _emit 0x5E
        // 0x5880A9A8: pop ebp
        __asm _emit 0x5D
        // 0x5880A9A9: pop edi
        __asm _emit 0x5F
        // 0x5880A9AA: pop ebx
        __asm _emit 0x5B
        // 0x5880A9AB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5880A9AE: mov dword ptr [ebx + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A9B5: pop edi
        __asm _emit 0x5F
        // 0x5880A9B6: pop ebx
        __asm _emit 0x5B
        // 0x5880A9B7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
