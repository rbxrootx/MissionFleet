// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407B83 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00407b83_00407B83() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0
        push 3eeh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 65 02 00: call 0x42e129
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 70 02 00: call 0x42eca7
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
