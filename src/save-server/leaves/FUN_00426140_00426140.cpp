// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426140 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_00426140_00426140() {
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
        mov ecx, 68504ch
        ; Exact mapped bytes E8 48 AF FD FF: call 0x4010aa
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 81 EC 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
