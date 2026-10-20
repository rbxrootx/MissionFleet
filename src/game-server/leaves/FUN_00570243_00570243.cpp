// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570243 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00570243_00570243() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 198h
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 03 AF F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        mov esp, ebp
        pop ebp
        ret
    }
}
