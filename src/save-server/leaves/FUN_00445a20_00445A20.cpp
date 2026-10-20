// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445A20 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00445a20_00445A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], al
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D 21 00 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
