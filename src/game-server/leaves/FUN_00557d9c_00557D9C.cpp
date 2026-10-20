// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557D9C .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00557d9c_00557D9C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 128h
        push 5cfa14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AA 33 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 30h]
        mov esp, ebp
        pop ebp
        ret
    }
}
