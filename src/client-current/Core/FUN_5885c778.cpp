// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C778 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5885c778() {
    __asm {
        // 0x5885C778: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C77A: push ebp
        __asm _emit 0x55
        // 0x5885C77B: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C77D: push ebx
        __asm _emit 0x53
        // 0x5885C77E: push esi
        __asm _emit 0x56
        // 0x5885C77F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C781: push edi
        __asm _emit 0x57
        // 0x5885C782: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885C785: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5885C787: mov al, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x07
        // 0x5885C789: cmp al, byte ptr [esi + 0x588c3f28]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C78F: je 0x5885c799
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C791: cmp al, byte ptr [esi + 0x588c3f2c]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C797: jne 0x5885c7ab
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5885C799: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885C79C: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C7A1: inc esi
        __asm _emit 0x46
        // 0x5885C7A2: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C7A4: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x5885C7A7: jne 0x5885c787
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5885C7A9: mov bl, 1
        __asm _emit 0xB3
        __asm _emit 0x01
        // 0x5885C7AB: pop edi
        __asm _emit 0x5F
        // 0x5885C7AC: pop esi
        __asm _emit 0x5E
        // 0x5885C7AD: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885C7AF: pop ebx
        __asm _emit 0x5B
        // 0x5885C7B0: pop ebp
        __asm _emit 0x5D
        // 0x5885C7B1: ret
        __asm _emit 0xC3
    }
}
