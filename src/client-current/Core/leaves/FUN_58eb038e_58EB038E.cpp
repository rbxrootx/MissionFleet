// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EB038E .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58eb038e_58EB038E() {
    __asm {
        add ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 85 CF: test di, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xcf
        cmp al, 3
        ; Exact mapped bytes 0F 85 01 CD 08 00: jne 0x58f3d09d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        stc
        clc
        add dword ptr [ecx], edx
        ; Exact mapped bytes E9 13 92 0B 00: jmp 0x58f695bb
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        xor ecx, ebp
        ; Exact mapped bytes E9 DF 4D 01 00: jmp 0x58ec518e
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
