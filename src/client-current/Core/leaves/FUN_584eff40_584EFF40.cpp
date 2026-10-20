// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EFF40 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_584eff40_584EFF40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 1
        ; Exact mapped bytes 74 26: je 0x584eff88
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 FE FF FF: call 0x584efde0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 8]
        push edx
        push 0
        push 0
        push 584ef670h
        push 0
        push 0
        ; Exact mapped bytes E8 EF 7F 36 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7f
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 27: jmp 0x584effaf
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 2
        ; Exact mapped bytes 74 1C: je 0x584effaf
        __asm _emit 0x74
        __asm _emit 0x1c
        lea edx, [ebp - 8]
        push edx
        push 0
        push 0
        push 584efe70h
        push 0
        push 0
        ; Exact mapped bytes E8 C6 7F 36 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7f
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
