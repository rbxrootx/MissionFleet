// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1320 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_584a1320_584A1320() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 80 5F FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 47 5F FE FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
