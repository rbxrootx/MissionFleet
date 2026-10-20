// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045EAD4 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_0045ead4_0045EAD4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 7A 4E FA FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x45eb4b
        __asm _emit 0x74
        __asm _emit 0x51
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x45eb0c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 18h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 22: jge 0x45eb4b
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 AF 4E FA FF: call 0x4039f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 04: jle 0x45eb49
        __asm _emit 0x7e
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x45eb50
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB B8: jmp 0x45eb03
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov eax, 1
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 86 9C 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
