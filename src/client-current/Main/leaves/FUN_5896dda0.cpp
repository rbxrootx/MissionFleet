// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896DDA0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_5896dda0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 74h
        push esi
        mov esi, ecx
        test eax, eax
        ; Exact mapped bytes 7C 79: jl 0x5896de27
        __asm _emit 0x7c
        __asm _emit 0x79
        cmp eax, dword ptr [esi + 1ch]
        ; Exact mapped bytes 7D 74: jge 0x5896de27
        __asm _emit 0x7d
        __asm _emit 0x74
        mov ecx, dword ptr [esi + 20h]
        mov edx, dword ptr [esp + 80h]
        cmp edx, ecx
        ; Exact mapped bytes 7D 66: jge 0x5896de27
        __asm _emit 0x7d
        __asm _emit 0x66
        push edi
        mov edi, dword ptr [esp + 88h]
        test edi, edi
        ; Exact mapped bytes 7C 59: jl 0x5896de26
        __asm _emit 0x7c
        __asm _emit 0x59
        xor ecx, ecx
        test edx, edx
        setl cl
        mov dword ptr [esp + 8], eax
        inc eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], edi
        dec ecx
        and ecx, edx
        cmp dword ptr [esp + 90h], 100h
        mov dword ptr [esp + 0ch], ecx
        ; Exact mapped bytes 75 31: jne 0x5896de26
        __asm _emit 0x75
        __asm _emit 0x31
        mov edx, dword ptr [esp + 8ch]
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esp + 68h], edx
        lea edx, [esp + 18h]
        push edx
        push 1000400h
        push 0
        push 0
        lea edx, [esp + 18h]
        mov dword ptr [esp + 28h], 64h
        mov ecx, dword ptr [eax]
        push edx
        push eax
        mov eax, dword ptr [ecx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        add esp, 74h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
