// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58745770 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58745770_58745770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 40: jne 0x587457bf
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 75 16: jne 0x587457a0
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 8], eax
        push 14h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 7C E2 FF: call 0x5856d3d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7c
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1F: jmp 0x587457bf
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 14: jne 0x587457bf
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 0ch], ecx
        push 14h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 72 7B E2 FF: call 0x5856d330
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7b
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
