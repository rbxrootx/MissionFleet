// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DA9A .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_0042da9a_0042DA9A() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        cmp eax, 40h
        ; Exact mapped bytes 75 0C: jne 0x42daae
        __asm _emit 0x75
        __asm _emit 0x0c
        push ecx
        mov ecx, 44dc90h
        ; Exact mapped bytes E8 60 9D FE FF: call 0x41780d
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        ret
        cmp eax, 80h
        ; Exact mapped bytes 75 08: jne 0x42dabd
        __asm _emit 0x75
        __asm _emit 0x08
        push ecx
        mov ecx, 44dc68h
        ; Exact mapped bytes EB EB: jmp 0x42daa8
        __asm _emit 0xeb
        __asm _emit 0xeb
        cmp eax, 100h
        ; Exact mapped bytes 75 08: jne 0x42dacc
        __asm _emit 0x75
        __asm _emit 0x08
        push ecx
        mov ecx, 44dc40h
        ; Exact mapped bytes EB DC: jmp 0x42daa8
        __asm _emit 0xeb
        __asm _emit 0xdc
        cmp eax, 200h
        push ecx
        ; Exact mapped bytes 75 07: jne 0x42dadb
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, 44dc18h
        ; Exact mapped bytes EB CD: jmp 0x42daa8
        __asm _emit 0xeb
        __asm _emit 0xcd
        ; Exact mapped bytes E8 35 FE FF FF: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ret
    }
}
