// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E2CF .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0052e2cf_0052E2CF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 69 71 01 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 1E 72 00 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 39: je 0x52e324
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 75 30: jne 0x52e324
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 18: je 0x52e312
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 0F: je 0x52e312
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 DD E3 00 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x52e324
        __asm _emit 0x75
        __asm _emit 0x12
        push 5ca230h
        push 5ca27ch
        ; Exact mapped bytes E8 F4 18 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 30h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
