// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BC40 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_0047bc40_0047BC40() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 6805f8h
        ; Exact mapped bytes 72 22: jb 0x47bc6e
        __asm _emit 0x72
        __asm _emit 0x22
        cmp dword ptr [ebp + 8], 680858h
        ; Exact mapped bytes 77 19: ja 0x47bc6e
        __asm _emit 0x77
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        sub eax, 6805f8h
        sar eax, 5
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 47 4C FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0D: jmp 0x47bc7b
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
