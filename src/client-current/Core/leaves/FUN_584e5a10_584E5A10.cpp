// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E5A10 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_584e5a10_584E5A10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 65 08 00: call 0x5856bfa0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
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
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 9ah], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 9ch]
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x584e5a81
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 99h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 9bh], 0
        ; Exact mapped bytes EB 14: jmp 0x584e5a95
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 99h], 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 9bh], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
