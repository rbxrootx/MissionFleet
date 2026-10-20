// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D05B0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_100d05b0_100D05B0() {
    __asm {
        push ebp
        push esi
        push edi
        mov ebp, 400h
        mov edi, 101ace60h
        lea esi, [ecx + 5ch]
        mov eax, dword ptr [edi]
        test byte ptr [eax + 30h], 1
        ; Exact mapped bytes 74 06: je 0x100d05ce
        __asm _emit 0x74
        __asm _emit 0x06
        sub ebp, 32h
        push ebp
        ; Exact mapped bytes EB 05: jmp 0x100d05d3
        __asm _emit 0xeb
        __asm _emit 0x05
        push 400h
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 76 E7 02 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        add esi, 4
        cmp edi, 101ace80h
        ; Exact mapped bytes 7C D8: jl 0x100d05c0
        __asm _emit 0x7c
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebp
        ret
    }
}
