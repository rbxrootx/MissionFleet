// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588ACCE0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_588acce0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 60h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes E8 4B 2C EB FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e4ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
    }
}
