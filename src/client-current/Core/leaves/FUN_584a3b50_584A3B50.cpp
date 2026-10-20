// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3B50 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_584a3b50_584A3B50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 34h], 6
        ; Exact mapped bytes 75 19: jne 0x584a3b7e
        __asm _emit 0x75
        __asm _emit 0x19
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 40h]
        sub ecx, dword ptr [ebp + 0ch]
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 40h], ecx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 70ch], 4
        ; Exact mapped bytes 7C 11: jl 0x584a3b9b
        __asm _emit 0x7c
        __asm _emit 0x11
        push 4
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 F2 FF FF: call 0x584a2e90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x584a3bdd
        __asm _emit 0xeb
        __asm _emit 0x42
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 10h], 1
        ; Exact mapped bytes 75 1D: jne 0x584a3bc6
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70ch], 0
        ; Exact mapped bytes 7E 0F: jle 0x584a3bc4
        __asm _emit 0x7e
        __asm _emit 0x0f
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD F2 FF FF: call 0x584a2e90
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x584a3bdd
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 F2 FF FF: call 0x584a2e90
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
