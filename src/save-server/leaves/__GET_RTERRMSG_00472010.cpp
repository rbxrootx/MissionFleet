// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472010 .. +0x50 bytes.
extern "C" __declspec(naked) void __GET_RTERRMSG_00472010() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x472026
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 12h
        ; Exact mapped bytes 73 13: jae 0x47203f
        __asm _emit 0x73
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx*8 + 67e190h]
        ; Exact mapped bytes 75 02: jne 0x47203d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x47203f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x47201d
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax*8 + 67e190h]
        ; Exact mapped bytes 75 0C: jne 0x47205a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*8 + 67e194h]
        ; Exact mapped bytes EB 02: jmp 0x47205c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
