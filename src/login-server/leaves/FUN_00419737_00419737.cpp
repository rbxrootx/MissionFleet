// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419737 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00419737_00419737() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ecx + 4ch]
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x419799
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [eax]
        lea edx, [ebp - 8]
        push edx
        push 440418h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 43: jl 0x419799
        __asm _emit 0x7c
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 8]
        and dword ptr [ebp - 4], 0
        and dword ptr [ebp - 0ch], 0
        lea edx, [ebp - 4]
        mov ecx, dword ptr [eax]
        push edx
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 19: jl 0x41978b
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        lea edx, [ebp - 0ch]
        push edx
        push dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 02: jmp 0x41979b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
