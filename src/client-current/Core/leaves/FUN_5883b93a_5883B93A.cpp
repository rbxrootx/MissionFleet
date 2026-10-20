// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B93A .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5883b93a_5883B93A() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5883b949
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ret
        add eax, eax
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 0F 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
