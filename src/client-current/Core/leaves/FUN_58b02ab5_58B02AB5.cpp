// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B02AB5 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58b02ab5_58B02AB5() {
    __asm {
        push ebp
        mov ebp, esp
        add cl, 6ch
        sub esp, 104h
        setno cl
        push esi
        push edi
        mov edi, eax
        sbb cl, 35h
        lea eax, [ebp - 104h]
        xor edx, edx
        ; Exact mapped bytes 66 0F C1 F6: xadd si, si
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0xf6
        btr esi, 4ch
        sub edi, eax
        mov eax, 712c7503h
        mov cl, dl
        btr esi, 0cah
        stc
        rol eax, cl
        lea esi, [ebp + edx - 104h]
        ; Exact mapped bytes 66 3B E4: cmp sp, sp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xe4
        clc
        add al, dl
        ; Exact mapped bytes 66 3B F3: cmp si, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf3
        ; Exact mapped bytes E9 BF 3C 47 00: jmp 0x58f767bf
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x3c
        __asm _emit 0x47
        __asm _emit 0x00
    }
}
