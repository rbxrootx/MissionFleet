// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525361 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00525361_00525361() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 FE FF FF: call 0x5251fa
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
