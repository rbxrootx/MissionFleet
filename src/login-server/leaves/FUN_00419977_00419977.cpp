// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419977 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_00419977_00419977() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        push 10h
        push 0
        lea esi, [edi + 74h]
        push esi
        ; Exact mapped bytes E8 54 51 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 4ch]
        and dword ptr [ebp - 4], 0
        add esp, 0ch
        lea ecx, [ebp - 4]
        mov dword ptr [esi], 10h
        mov eax, dword ptr [edi]
        push ecx
        push 440408h
        push edi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x4199c1
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        push esi
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        pop edi
        pop esi
        leave
        ret
    }
}
