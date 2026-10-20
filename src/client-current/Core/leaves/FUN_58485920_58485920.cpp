// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485920 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_58485920_58485920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 14h]
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], ecx
        ; Exact mapped bytes 7C 44: jl 0x58485980
        __asm _emit 0x7c
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 1ch]
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], edx
        ; Exact mapped bytes 7D 31: jge 0x58485980
        __asm _emit 0x7d
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 18h]
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], eax
        ; Exact mapped bytes 7C 1D: jl 0x58485980
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], ecx
        ; Exact mapped bytes 7D 09: jge 0x58485980
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x58485987
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
