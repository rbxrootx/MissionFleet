// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CFD20 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_584cfd20_584CFD20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C1 17 FE FF: call 0x584b1500
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        push edx
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 F5 65 38 00: call 0x58856340
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x65
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 1ch
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 09: jge 0x584cfd60
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes EB 06: jmp 0x584cfd66
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
