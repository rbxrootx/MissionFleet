// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C510 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5850c510_5850C510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 98 AF F7 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 9C FF FF: call 0x58506220
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        or eax, 1
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
