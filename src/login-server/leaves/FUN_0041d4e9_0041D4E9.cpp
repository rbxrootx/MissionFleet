// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D4E9 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0041d4e9_0041D4E9() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push 7
        mov ecx, esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 35 00 00 00: call 0x41d537
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 2C: jl 0x41d532
        __asm _emit 0x7c
        __asm _emit 0x2c
        mov esi, dword ptr [esi - 4ch]
        test esi, esi
        ; Exact mapped bytes 74 23: je 0x41d530
        __asm _emit 0x74
        __asm _emit 0x23
        test byte ptr [ebp + 0ch], 80h
        ; Exact mapped bytes 74 1D: je 0x41d530
        __asm _emit 0x74
        __asm _emit 0x1d
        push edi
        mov edi, dword ptr [esi + 44h]
        mov ecx, esi
        mov dword ptr [esi + 44h], 1
        ; Exact mapped bytes E8 9B E7 FF FF: call 0x41bcc0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 44h], edi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
