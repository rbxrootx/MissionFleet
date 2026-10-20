// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EF50 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0040ef50_0040EF50() {
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
        ; Exact mapped bytes E8 ED 25 FF FF: call 0x40155f
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 71 5E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
