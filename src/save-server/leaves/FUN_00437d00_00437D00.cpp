// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437D00 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_00437d00_00437D00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], al
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A 02 01 00: call 0x447f50
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
