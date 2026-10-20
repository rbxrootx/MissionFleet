// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004196E7 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_004196e7_004196E7() {
    __asm {
        push ebp
        mov ebp, esp
        test byte ptr [ecx + 71h], 10h
        ; Exact mapped bytes 74 43: je 0x419733
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ecx + 6ch]
        mov edx, eax
        and edx, 1
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 36: je 0x419733
        __asm _emit 0x74
        __asm _emit 0x36
        and dword ptr [ebp + 8], 0
        xor eax, 1
        mov dword ptr [ecx + 6ch], eax
        mov ecx, dword ptr [ecx + 4ch]
        lea edx, [ebp + 8]
        mov eax, dword ptr [ecx]
        push edx
        push 440408h
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 17: jl 0x419733
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        push 0fffffd37h
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
