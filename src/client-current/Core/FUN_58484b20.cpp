// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58484B20 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58484b20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 164h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7E 26: jle 0x58484b5d
        __asm _emit 0x7e
        __asm _emit 0x26
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 20: jl 0x58484b5d
        __asm _emit 0x7c
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 74 14: je 0x58484b5d
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x58484b64
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret 4
    }
}
