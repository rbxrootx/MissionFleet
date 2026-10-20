// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041915A .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_0041915a_0041915A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [ebp + 1ch], edi
        ; Exact mapped bytes 75 38: jne 0x41919f
        __asm _emit 0x75
        __asm _emit 0x38
        lea eax, [ebp + 1ch]
        mov dword ptr [ebp + 1ch], edi
        push eax
        push 4403a8h
        push edi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 00 C6 43 00: call dword ptr [0x43c600]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        cmp esi, edi
        ; Exact mapped bytes 7C 59: jl 0x4191df
        __asm _emit 0x7c
        __asm _emit 0x59
        push dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 1ch]
        push dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov esi, eax
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes EB 3A: jmp 0x4191d9
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 4], edi
        push eax
        push 440398h
        push edi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 00 C6 43 00: call dword ptr [0x43c600]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        cmp esi, edi
        ; Exact mapped bytes 7C 21: jl 0x4191df
        __asm _emit 0x7c
        __asm _emit 0x21
        push dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp - 4]
        push dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        push dword ptr [ebp + 14h]
        push edi
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, esi
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
