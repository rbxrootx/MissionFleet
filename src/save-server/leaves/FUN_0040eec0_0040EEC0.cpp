// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EEC0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0040eec0_0040EEC0() {
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
        mov ecx, 684f60h
        ; Exact mapped bytes E8 C5 29 FF FF: call 0x4018a7
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 01 5F 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
