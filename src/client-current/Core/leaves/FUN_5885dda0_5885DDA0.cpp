// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DDA0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5885dda0_5885DDA0() {
    __asm {
        cmp byte ptr [ecx + 4], 0
        ; Exact mapped bytes 75 03: jne 0x5885dda9
        __asm _emit 0x75
        __asm _emit 0x03
        mov eax, dword ptr [ecx]
        ret
        push 0
        push 1e1h
        push 588c3cf0h
        push 588c3dd0h
        push 588c3e2ch
        ; Exact mapped bytes E8 15 32 FF FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
