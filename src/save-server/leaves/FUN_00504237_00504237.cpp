// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504237 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00504237_00504237() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 78h
        push 677834h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 12 60 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
