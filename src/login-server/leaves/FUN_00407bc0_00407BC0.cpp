// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407BC0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00407bc0_00407BC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 70 02 00: call 0x42ec42
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        push 3eeh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 65 02 00: call 0x42e15b
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
