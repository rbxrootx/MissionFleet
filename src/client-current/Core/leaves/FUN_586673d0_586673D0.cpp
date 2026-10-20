// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586673D0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_586673d0_586673D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 D6 E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 CC FB FF: call 0x586240b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA E6 E1 FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov esp, ebp
        pop ebp
        ret
    }
}
