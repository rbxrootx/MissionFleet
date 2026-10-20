// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D8C5 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_5886d8c5_5886D8C5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 14h]
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x5886d8f7
        __asm _emit 0x74
        __asm _emit 0x26
        push esi
        mov esi, dword ptr [ebp + 10h]
        mov ecx, esi
        push edi
        lea edi, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5886d8db
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edi
        lea eax, [ecx + 1]
        push eax
        lea eax, [esi + edx]
        push esi
        push eax
        ; Exact mapped bytes E8 9E EF FD FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        ret
    }
}
