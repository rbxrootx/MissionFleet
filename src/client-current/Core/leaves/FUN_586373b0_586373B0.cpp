// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586373B0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_586373b0_586373B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], ecx
        ; Exact mapped bytes 7F 45: jg 0x58637411
        __asm _emit 0x7f
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], edx
        ; Exact mapped bytes 7C 31: jl 0x58637411
        __asm _emit 0x7c
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], eax
        ; Exact mapped bytes 7F 1D: jg 0x58637411
        __asm _emit 0x7f
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 18h]
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes 7C 09: jl 0x58637411
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x58637418
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
