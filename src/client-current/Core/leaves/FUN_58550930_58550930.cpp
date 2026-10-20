// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550930 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_58550930_58550930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a9388h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], 40000000h
        mov edx, 30h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 90 00 00 00: mov word ptr [eax + 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 04: mov word ptr [edx + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585509ad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 10: jge 0x585509c3
        __asm _emit 0x7d
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes EB E1: jmp 0x585509a4
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
