// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AD45 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0051ad45_0051AD45() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x51ad5f
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        or ecx, 10h
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 60 FF FF: call 0x510da3
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
