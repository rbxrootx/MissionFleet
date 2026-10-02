// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C826 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5885c826() {
    __asm {
        // 0x5885C826: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C828: push ebp
        __asm _emit 0x55
        // 0x5885C829: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C82B: push ebx
        __asm _emit 0x53
        // 0x5885C82C: push esi
        __asm _emit 0x56
        // 0x5885C82D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C82F: push edi
        __asm _emit 0x57
        // 0x5885C830: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885C833: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5885C835: mov al, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x07
        // 0x5885C837: cmp al, byte ptr [esi + 0x588c3f00]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C83D: je 0x5885c847
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C83F: cmp al, byte ptr [esi + 0x588c3f08]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C845: jne 0x5885c859
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5885C847: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885C84A: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C84F: inc esi
        __asm _emit 0x46
        // 0x5885C850: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C852: cmp esi, 5
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x5885C855: jne 0x5885c835
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5885C857: mov bl, 1
        __asm _emit 0xB3
        __asm _emit 0x01
        // 0x5885C859: pop edi
        __asm _emit 0x5F
        // 0x5885C85A: pop esi
        __asm _emit 0x5E
        // 0x5885C85B: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885C85D: pop ebx
        __asm _emit 0x5B
        // 0x5885C85E: pop ebp
        __asm _emit 0x5D
        // 0x5885C85F: ret
        __asm _emit 0xC3
    }
}
