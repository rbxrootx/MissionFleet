// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E6370 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_584e6370_584E6370() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 CB F9 FF: call 0x58482ea0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, 0fff0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 41 24: and ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 96h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 98h]
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x584e63e4
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 95h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 97h], 0
        ; Exact mapped bytes EB 14: jmp 0x584e63f8
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 95h], 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 97h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
