// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E640 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_0045e640_0045E640() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        shl ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 02 00 00: call 0x45e870
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 70 A1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
