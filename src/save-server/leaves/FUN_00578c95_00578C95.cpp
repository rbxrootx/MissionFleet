// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578C95 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00578c95_00578C95() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1a2h
        push 67cd20h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B1 15 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x15
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
