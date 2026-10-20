// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A3710 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_586a3710_586A3710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0e8h
        ; Exact mapped bytes 7C 27: jl 0x586a3754
        __asm _emit 0x7c
        __asm _emit 0x27
        ; Exact mapped bytes 7F 09: jg 0x586a3738
        __asm _emit 0x7f
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 0d4a51000h
        ; Exact mapped bytes 72 1C: jb 0x586a3754
        __asm _emit 0x72
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 0f4240h
        div ecx
        mov dword ptr [ebp - 4], eax
        mov edx, 2
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes EB 33: jmp 0x586a3787
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [ebp + 8], 3b9aca00h
        ; Exact mapped bytes 72 1C: jb 0x586a3779
        __asm _emit 0x72
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 4], eax
        mov edx, 1
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes EB 0E: jmp 0x586a3787
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        xor edx, edx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
