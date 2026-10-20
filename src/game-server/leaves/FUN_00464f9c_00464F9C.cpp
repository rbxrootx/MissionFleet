// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464F9C .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00464f9c_00464F9C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3E: je 0x464ffe
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 38: jle 0x464ffe
        __asm _emit 0x7e
        __asm _emit 0x38
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x464fdf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 73 14: jae 0x464ff9
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB DD: jmp 0x464fd6
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 02: jmp 0x465000
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
