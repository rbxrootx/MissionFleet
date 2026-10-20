// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EFA20 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_584efa20_584EFA20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 10000h
        ; Exact mapped bytes 74 18: je 0x584efa56
        __asm _emit 0x74
        __asm _emit 0x18
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 FE FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 00 00 00: call 0x584efa80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 23: jmp 0x584efa79
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        and eax, 20000h
        ; Exact mapped bytes 74 16: je 0x584efa79
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 FE FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A 00 00 00: call 0x584efaa0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
