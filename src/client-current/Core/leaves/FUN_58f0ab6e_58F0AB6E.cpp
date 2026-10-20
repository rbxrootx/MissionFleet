// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F0AB6E .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58f0ab6e_58F0AB6E() {
    __asm {
        mov ebp, esp
        stc
        clc
        push ecx
        cmc
        push ebx
        push esi
        ; Exact mapped bytes 66 0F BA FE 54: btc si, 0x54
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0x54
        push edi
        shld edi, edi, 5ah
        mov edi, eax
        mov esi, ecx
        ror al, cl
        shr al, cl
        sub edx, edx
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        not al
        mov cl, byte ptr [edi]
        mov al, byte ptr [esi]
        ; Exact mapped bytes E9 6D 68 E2 FF: jmp 0x58d31405
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
