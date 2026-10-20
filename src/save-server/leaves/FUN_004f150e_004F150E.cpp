// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F150E .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_004f150e_004F150E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 CD FE FF: call 0x4de2f2
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 64 38 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4f153d
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 73 38 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 37 D0 FE FF: call 0x4de574
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
