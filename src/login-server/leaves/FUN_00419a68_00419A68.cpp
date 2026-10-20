// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419A68 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00419a68_00419A68() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        test byte ptr [esi + 71h], 40h
        ; Exact mapped bytes 75 08: jne 0x419a7d
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4ch]
        and dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        mov ecx, dword ptr [eax]
        push edx
        push 440408h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        pop esi
        ; Exact mapped bytes 7C 15: jl 0x419aac
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
