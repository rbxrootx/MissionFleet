// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58664130 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58664130_58664130() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1C: jne 0x58664159
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes 75 0E: jne 0x58664159
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
