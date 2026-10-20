// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F330F .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_004f330f_004F330F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 28: jne 0x4f3348
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        push edx
        ; Exact mapped bytes E8 A0 83 00 00: call 0x4fb6cc
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x4f3346
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes EB 1E: jmp 0x4f3364
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes EB 14: jmp 0x4f335c
        __asm _emit 0xeb
        __asm _emit 0x14
        push 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        ; Exact mapped bytes E8 1F 28 00 00: call 0x4f5b75
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4f335c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x4f3364
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E E5 FF FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
