// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58684C80 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_58684c80_58684C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 28h
        idiv ecx
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7C 1F: jl 0x58684cb8
        __asm _emit 0x7c
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ab0h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B F3 E7 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf3
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x58684cdb
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x58684cdb
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ab0h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 36 F3 E7 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xe7
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
