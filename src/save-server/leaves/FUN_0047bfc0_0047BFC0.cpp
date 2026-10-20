// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BFC0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_0047bfc0_0047BFC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 688ca1h]
        and edx, dword ptr [ebp + 10h]
        test edx, edx
        ; Exact mapped bytes 75 31: jne 0x47c014
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 15: je 0x47bffe
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 45 CA DE 67 00: mov cx, word ptr [eax*2 + 0x67deca]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        and ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x47c005
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x47c014
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x47c01b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
