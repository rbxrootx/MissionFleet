// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588555B7 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_588555b7_588555B7() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp eax, 0bh
        ; Exact mapped bytes 77 20: ja 0x588555e4
        __asm _emit 0x77
        __asm _emit 0x20
        movzx eax, byte ptr [eax + 588555ffh]
        ; Exact mapped bytes FF 24 85 EB 55 85 58: jmp dword ptr [eax*4 + 0x588555eb]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x55
        __asm _emit 0x85
        __asm _emit 0x58
        xor eax, eax
        inc eax
        pop ebp
        ret
        push 2
        pop eax
        pop ebp
        ret
        push 4
        ; Exact mapped bytes EB F9: jmp 0x588555d9
        __asm _emit 0xeb
        __asm _emit 0xf9
        push 8
        ; Exact mapped bytes EB F5: jmp 0x588555d9
        __asm _emit 0xeb
        __asm _emit 0xf5
        xor eax, eax
        pop ebp
        ret
    }
}
