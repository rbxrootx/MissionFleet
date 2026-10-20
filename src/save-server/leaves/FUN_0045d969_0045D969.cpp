// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D969 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0045d969_0045D969() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 7F 0C 00: call 0x525914
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 80 0C 00: call 0x5259dd
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
