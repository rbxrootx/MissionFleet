// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F4F70 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_584f4f70_584F4F70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 588a32d0h
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f4f94
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 7D 39: jge 0x584f4fd3
        __asm _emit 0x7d
        __asm _emit 0x39
        imul edx, dword ptr [ebp - 4], 14h
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx + 14h], 0
        ; Exact mapped bytes 74 29: je 0x584f4fd1
        __asm _emit 0x74
        __asm _emit 0x29
        imul ecx, dword ptr [ebp - 4], 14h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 14h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 8C C0 33 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        imul edx, dword ptr [ebp - 4], 14h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx + 14h], 0
        ; Exact mapped bytes EB B8: jmp 0x584f4f8b
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov esp, ebp
        pop ebp
        ret
    }
}
