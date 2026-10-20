// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DD7B .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5885dd7b_5885DD7B() {
    __asm {
        cmp byte ptr [ecx + 4], 0
        ; Exact mapped bytes 74 03: je 0x5885dd84
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [ecx]
        ret
        push 0
        push 1dbh
        push 588c3cf0h
        push 588c3d58h
        push 588c3db4h
        ; Exact mapped bytes E8 3A 32 FF FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
