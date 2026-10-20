// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446E60 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00446e60_00446E60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], al
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD 0C 00 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
