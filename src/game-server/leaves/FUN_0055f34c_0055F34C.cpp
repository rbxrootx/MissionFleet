// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F34C .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0055f34c_0055F34C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2cch
        push 5cff18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FA BD F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 04 00 00: call 0x55f78d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
