// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58705830 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_58705830_58705830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, 47h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        add eax, ecx
        mov ecx, 1
        imul edx, ecx, 0
        add eax, edx
        ; Exact mapped bytes 74 6E: je 0x587058c6
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 74 62: je 0x587058c6
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        ; Exact mapped bytes E8 0D B9 14 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0a4h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a4h]
        add ecx, 545h
        cmp eax, ecx
        ; Exact mapped bytes 72 15: jb 0x587058a7
        __asm _emit 0x72
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        add eax, 47h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB 6E DE FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
