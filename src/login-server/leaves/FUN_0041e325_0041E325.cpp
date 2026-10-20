// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E325 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0041e325_0041E325() {
    __asm {
        mov eax, 43b14ch
        ; Exact mapped bytes E8 D9 12 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43f18ch
        and dword ptr [ebp - 4], 0
        add ecx, 10h
        ; Exact mapped bytes E8 66 F8 00 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
