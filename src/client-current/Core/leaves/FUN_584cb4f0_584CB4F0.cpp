// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CB4F0 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_584cb4f0_584CB4F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 14h]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7C 3C: jl 0x584cb546
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 1ch]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7D 2B: jge 0x584cb546
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 18h]
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 7C 1A: jl 0x584cb546
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 20h]
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 7D 09: jge 0x584cb546
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x584cb54d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
