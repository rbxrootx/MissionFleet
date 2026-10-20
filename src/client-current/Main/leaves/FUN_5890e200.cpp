// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890E200 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_5890e200() {
    __asm {
        sub esp, 74h
        push ebp
        mov ebp, dword ptr [esp + 80h]
        push edi
        mov edi, ecx
        test ebp, ebp
        ; Exact mapped bytes 7C 77: jl 0x5890e289
        __asm _emit 0x7c
        __asm _emit 0x77
        mov edx, dword ptr [esp + 80h]
        push esi
        mov esi, dword ptr [edi + 1ch]
        cmp edx, esi
        ; Exact mapped bytes 7D 67: jge 0x5890e288
        __asm _emit 0x7d
        __asm _emit 0x67
        mov eax, dword ptr [esp + 8ch]
        test eax, eax
        ; Exact mapped bytes 7C 5C: jl 0x5890e288
        __asm _emit 0x7c
        __asm _emit 0x5c
        cmp eax, dword ptr [edi + 20h]
        ; Exact mapped bytes 7D 57: jge 0x5890e288
        __asm _emit 0x7d
        __asm _emit 0x57
        xor ecx, ecx
        test edx, edx
        setl cl
        mov dword ptr [esp + 10h], eax
        dec ecx
        and ecx, edx
        cmp ebp, esi
        mov dword ptr [esp + 0ch], ecx
        ; Exact mapped bytes 7C 07: jl 0x5890e24e
        __asm _emit 0x7c
        __asm _emit 0x07
        dec esi
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes EB 04: jmp 0x5890e252
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 14h], ebp
        mov edx, dword ptr [esp + 90h]
        mov dword ptr [esp + 6ch], edx
        lea edx, [esp + 1ch]
        push edx
        push 1000400h
        inc eax
        push 0
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [edi + 4]
        push 0
        lea edx, [esp + 1ch]
        mov dword ptr [esp + 2ch], 64h
        mov ecx, dword ptr [eax]
        push edx
        push eax
        mov eax, dword ptr [ecx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        pop edi
        pop ebp
        add esp, 74h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
