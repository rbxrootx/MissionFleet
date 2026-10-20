// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850285 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58850285_58850285() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax]
        cmp dword ptr [eax], 0e06d7363h
        ; Exact mapped bytes 75 36: jne 0x588502cb
        __asm _emit 0x75
        __asm _emit 0x36
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 30: jne 0x588502cb
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [eax + 14h], 19930520h
        ; Exact mapped bytes 74 12: je 0x588502b6
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [eax + 14h], 19930521h
        ; Exact mapped bytes 74 09: je 0x588502b6
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [eax + 14h], 19930522h
        ; Exact mapped bytes 75 15: jne 0x588502cb
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 0F: jne 0x588502cb
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes E8 65 F3 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        inc ecx
        mov dword ptr [eax + 20h], ecx
        mov eax, ecx
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
