// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850860 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58850860() {
    __asm {
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 B3 FE FF FF: call 0x58850720
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes FF E6: jmp esi
        __asm _emit 0xff
        __asm _emit 0xe6
    }
}
