// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032E90 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_10032e90_10032E90() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x10032ec2
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 51 70: mov dx, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x70
        mov dword ptr [ecx + 0bch], eax
        mov al, byte ptr [esp + 0ch]
        and edx, 0fffbh
        and eax, 1
        shl eax, 2
        or eax, edx
        ; Exact mapped bytes 66 89 41 70: mov word ptr [ecx + 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x70
        mov eax, dword ptr [esp + 8]
        mov dword ptr [ecx + 84h], eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
