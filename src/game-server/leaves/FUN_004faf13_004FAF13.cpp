// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FAF13 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_004faf13_004FAF13() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        mov dword ptr [ebp - 20ch], ecx
        lea eax, [ebp - 208h]
        push eax
        push 200h
        lea ecx, [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4faf66
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes E8 20 29 01 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 24: jmp 0x4faf8a
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4faf73
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0f020h
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 42 29 01 00: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
