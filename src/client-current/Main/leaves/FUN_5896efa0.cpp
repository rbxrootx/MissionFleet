// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896EFA0 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_5896efa0() {
    __asm {
        sub esp, 74h
        push ebp
        mov ebp, dword ptr [esp + 80h]
        push edi
        mov edi, ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 8C 84 00 00 00: jl 0x5896f03a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 1ch]
        mov eax, dword ptr [esp + 80h]
        cmp eax, edx
        ; Exact mapped bytes 7D 76: jge 0x5896f03a
        __asm _emit 0x7d
        __asm _emit 0x76
        push esi
        mov esi, dword ptr [esp + 8ch]
        test esi, esi
        ; Exact mapped bytes 7C 69: jl 0x5896f039
        __asm _emit 0x7c
        __asm _emit 0x69
        cmp esi, dword ptr [edi + 20h]
        ; Exact mapped bytes 7D 64: jge 0x5896f039
        __asm _emit 0x7d
        __asm _emit 0x64
        xor ecx, ecx
        test eax, eax
        setl cl
        mov dword ptr [esp + 10h], esi
        dec ecx
        and ecx, eax
        cmp ebp, edx
        mov dword ptr [esp + 0ch], ecx
        ; Exact mapped bytes 7C 07: jl 0x5896eff2
        __asm _emit 0x7c
        __asm _emit 0x07
        dec edx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes EB 04: jmp 0x5896eff6
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 14h], ebp
        inc esi
        cmp dword ptr [esp + 94h], 100h
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes 75 31: jne 0x5896f039
        __asm _emit 0x75
        __asm _emit 0x31
        mov edx, dword ptr [esp + 90h]
        mov eax, dword ptr [edi + 4]
        mov dword ptr [esp + 6ch], edx
        lea edx, [esp + 1ch]
        push edx
        push 1000400h
        push 0
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
