// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3770 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_584a3770_584A3770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7F FA FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA E9 FF FF: call 0x584a2140
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
