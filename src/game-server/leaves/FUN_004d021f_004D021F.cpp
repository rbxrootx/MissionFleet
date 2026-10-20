// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D021F .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_004d021f_004D021F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 8ah
        push 5c7ebch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 27 AF 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 62 02 00: call 0x4f64eb
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d025b
        __asm _emit 0x75
        __asm _emit 0x14
        push 5c7f44h
        push 5c7f74h
        ; Exact mapped bytes E8 BF F9 FF FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 08: jmp 0x4d0263
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 16 02 00: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
