// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446EF0 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00446ef0_00446EF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], al
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 39 1A 00 00: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
