// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E6F0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0040e6f0_0040E6F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 95 FF FF: call 0x407c20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        push ecx
        push 40ah
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 96 6A 02 00: call 0x4351ae
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 98h
        push eax
        push 40eh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2D 6A 02 00: call 0x43515c
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 9ch
        push edx
        push 40fh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 15 6A 02 00: call 0x43515c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
