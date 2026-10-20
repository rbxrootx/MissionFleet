// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570336 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00570336_00570336() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1a6h
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 10 AE F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xae
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [ecx + 0c0h], 0
        setne al
        mov esp, ebp
        pop ebp
        ret
    }
}
