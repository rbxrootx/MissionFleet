// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EA550 .. +0x2C bytes.
// Source symbol alias: FUN_588ea550.
extern "C" __declspec(naked) void FUN_588ea550() {
    __asm {
        // 0x588EA550: push esi
        __asm _emit 0x56
        // 0x588EA551: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EA555: push edi
        __asm _emit 0x57
        // 0x588EA556: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EA55A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EA55C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588EA55E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EA560: jbe 0x588ea574
        __asm _emit 0x76
        __asm _emit 0x12
        // 0x588EA562: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EA566: push ebx
        __asm _emit 0x53
        // 0x588EA567: mov ebx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x1A
        // 0x588EA569: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588EA56B: dec eax
        __asm _emit 0x48
        // 0x588EA56C: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588EA56F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EA571: ja 0x588ea567
        __asm _emit 0x77
        __asm _emit 0xF4
        // 0x588EA573: pop ebx
        __asm _emit 0x5B
        // 0x588EA574: lea eax, [edi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB7
        // 0x588EA577: pop edi
        __asm _emit 0x5F
        // 0x588EA578: pop esi
        __asm _emit 0x5E
        // 0x588EA579: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
