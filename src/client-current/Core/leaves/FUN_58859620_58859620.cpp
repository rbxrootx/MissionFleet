// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859620 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_58859620_58859620() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 11 45 F8: movsd qword ptr [ebp - 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 4]
        mov eax, ecx
        shr eax, 14h
        and eax, 7ffh
        cmp eax, 7ffh
        ; Exact mapped bytes 75 1F: jne 0x58859667
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        and ecx, 0fffffh
        or eax, ecx
        ; Exact mapped bytes 75 09: jne 0x5885965e
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
        mov eax, 2
        mov esp, ebp
        pop ebp
        ret
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x58859685
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        and ecx, 7fffffffh
        or eax, ecx
        ; Exact mapped bytes 75 04: jne 0x5885967c
        __asm _emit 0x75
        __asm _emit 0x04
        mov esp, ebp
        pop ebp
        ret
        mov eax, 0fffffffeh
        mov esp, ebp
        pop ebp
        ret
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
