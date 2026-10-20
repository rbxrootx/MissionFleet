// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861DBC0 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_5861dbc0_5861DBC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12d0h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12d0h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 12d0h], 1
        ; Exact mapped bytes 75 5D: jne 0x5861dc47
        __asm _emit 0x75
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12c8h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 12d4h], 0
        ; Exact mapped bytes 74 25: je 0x5861dc28
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12d4h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 33 34 21 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x34
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12d4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        push 2
        push 0ee49h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        ; Exact mapped bytes EB 0A: jmp 0x5861dc51
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 12d8h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
