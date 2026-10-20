// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58703390 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_58703390_58703390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 10h
        ; Exact mapped bytes 75 02: jne 0x587033aa
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 35: jmp 0x587033df
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C C4 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 0ch], ecx
        push 5
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 62 C4 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
