// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FE22 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5886fe22_5886FE22() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 10h], 0
        push edi
        ; Exact mapped bytes 7E 35: jle 0x5886fe63
        __asm _emit 0x7e
        __asm _emit 0x35
        mov edi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edi*4 + 588c60bch]
        sub eax, dword ptr [edi*4 + 588c60b8h]
        cmp dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 7E 1B: jle 0x5886fe5f
        __asm _emit 0x7e
        __asm _emit 0x1b
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 26 FF FF: call 0x588624be
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test al, al
        ; Exact mapped bytes 74 12: je 0x5886fe63
        __asm _emit 0x74
        __asm _emit 0x12
        cmp edi, 1
        ; Exact mapped bytes 75 0D: jne 0x5886fe63
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp + 10h], 1dh
        setle al
        ; Exact mapped bytes EB 06: jmp 0x5886fe65
        __asm _emit 0xeb
        __asm _emit 0x06
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x5886fe65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop edi
        pop ebp
        ret
    }
}
