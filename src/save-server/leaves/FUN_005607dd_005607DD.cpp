// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005607DD .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_005607dd_005607DD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 171h
        push 67b3c8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 69 9A F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
