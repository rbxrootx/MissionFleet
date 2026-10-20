// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D73D0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_588d73d0() {
    __asm {
        mov eax, dword ptr [ecx + 2f8h]
        mov cl, byte ptr [esp + 4]
        and cl, 1
        ; Exact mapped bytes 66 0F B6 D1: movzx dx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd1
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        push esi
        mov esi, 0fffdh
        ; Exact mapped bytes 66 23 CE: and cx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xce
        ; Exact mapped bytes 66 03 D2: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
