// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004348EA .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_004348ea_004348EA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        lea eax, [ebp - 2]
        push esi
        mov esi, ecx
        push eax
        ; Exact mapped bytes E8 65 2F FE FF: call 0x417860
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 7D FE FF FF: cmp word ptr [ebp - 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 06: je 0x434909
        __asm _emit 0x74
        __asm _emit 0x06
        movzx eax, word ptr [ebp - 2]
        ; Exact mapped bytes EB 0E: jmp 0x434917
        __asm _emit 0xeb
        __asm _emit 0x0e
        lea eax, [ebp - 8]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 15 0B FE FF: call 0x415429
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        pop esi
        leave
        ret
    }
}
