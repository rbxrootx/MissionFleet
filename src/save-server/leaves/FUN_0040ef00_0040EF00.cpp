// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EF00 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_0040ef00_0040EF00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 40h]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 40ef50h
        ; Exact mapped bytes E8 CE 6C 05 00: call 0x465bf0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 BE 5E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
