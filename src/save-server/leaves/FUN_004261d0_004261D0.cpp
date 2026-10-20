// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004261D0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_004261d0_004261D0() {
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
        ; Exact mapped bytes E8 BD AE FD FF: call 0x4010af
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 F1 EB 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
