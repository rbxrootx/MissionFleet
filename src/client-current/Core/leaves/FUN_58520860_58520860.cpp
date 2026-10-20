// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520860 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58520860_58520860() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 A6 FE FF: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        cmp eax, ecx
        ; Exact mapped bytes 75 1E: jne 0x58520897
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA B9 FE FF: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
