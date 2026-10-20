// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005702E5 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_005702e5_005702E5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1a2h
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 61 AE F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xae
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
