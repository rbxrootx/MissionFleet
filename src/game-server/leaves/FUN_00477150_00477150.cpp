// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477150 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00477150_00477150() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 17 01 00 00: call 0x477280
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 6A 16 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
