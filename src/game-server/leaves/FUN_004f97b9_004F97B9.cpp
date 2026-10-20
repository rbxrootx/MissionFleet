// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F97B9 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004f97b9_004F97B9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 E0 BC 04 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 08: jne 0x4f97de
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 25 BD 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
