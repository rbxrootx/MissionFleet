// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419BAE .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00419bae_00419BAE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ecx + 58h], 0
        push esi
        lea esi, [ecx + 58h]
        ; Exact mapped bytes 75 2A: jne 0x419be6
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ecx + 4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x419be1
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ecx]
        lea edx, [ebp - 4]
        push edx
        push 4401f8h
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 0C: jl 0x419be1
        __asm _emit 0x7c
        __asm _emit 0x0c
        push 1
        mov ecx, esi
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB EF 01 00: call 0x438b9c
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 19: je 0x419bff
        __asm _emit 0x74
        __asm _emit 0x19
        push dword ptr [ebp + 1ch]
        mov ecx, esi
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 EF 01 00: call 0x438bcf
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        leave
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
