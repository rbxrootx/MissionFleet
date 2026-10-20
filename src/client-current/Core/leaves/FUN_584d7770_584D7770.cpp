// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D7770 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_584d7770_584D7770() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 3
        ; Exact mapped bytes 75 18: jne 0x584d7798
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 1
        ; Exact mapped bytes 75 0C: jne 0x584d7798
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 80 05 00: call 0x5852f800
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
