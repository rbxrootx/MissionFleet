// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B3220 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_586b3220_586B3220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, 47h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        add eax, ecx
        mov ecx, 1
        imul edx, ecx, 0
        add eax, edx
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x586b32e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x586b32e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 47h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        add ecx, edx
        mov edx, 1
        imul eax, edx, 0
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        sub eax, 47h
        cmp ecx, eax
        ; Exact mapped bytes 77 17: ja 0x586b32a0
        __asm _emit 0x77
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        sub edx, 47h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], edx
        ; Exact mapped bytes EB 26: jmp 0x586b32c6
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, 47h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        add ecx, edx
        mov edx, 1
        imul eax, edx, 0
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9C 94 E3 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x94
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
