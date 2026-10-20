// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557E80 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00557e80_00557E80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 134h
        push 5cfa14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C6 32 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
