// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827040 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58827040() {
    __asm {
        mov al, byte ptr [ecx + 26ch]
        movzx edx, byte ptr [ecx + 264h]
        push esi
        movzx esi, al
        sub edx, 2
        cmp esi, edx
        pop esi
        ; Exact mapped bytes 7D 08: jge 0x58827061
        __asm _emit 0x7d
        __asm _emit 0x08
        inc al
        mov byte ptr [ecx + 26ch], al
        ; Exact mapped bytes E9 FA FE FF FF: jmp 0x58826f60
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
