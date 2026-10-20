// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AD6F0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_588ad6f0() {
    __asm {
        push ebp
        push esi
        push edi
        mov ebp, 400h
        mov edi, 58a0b1c4h
        lea esi, [ecx + 5ch]
        mov eax, dword ptr [edi]
        test byte ptr [eax + 64h], 1
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 74 06: je 0x588ad710
        __asm _emit 0x74
        __asm _emit 0x06
        sub ebp, 32h
        push ebp
        ; Exact mapped bytes EB 05: jmp 0x588ad715
        __asm _emit 0xeb
        __asm _emit 0x05
        push 400h
        ; Exact mapped bytes E8 C6 5B 05 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        add edi, 4
        add esi, 4
        cmp edi, 58a0b1e4h
        ; Exact mapped bytes 7C D8: jl 0x588ad700
        __asm _emit 0x7c
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebp
        ret
    }
}
