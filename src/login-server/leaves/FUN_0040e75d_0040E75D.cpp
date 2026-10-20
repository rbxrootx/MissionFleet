// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E75D .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0040e75d_0040E75D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 04 02 00: call 0x42ec42
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        push 28fh
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        ; Exact mapped bytes E8 B2 00 00 00: call 0x40e830
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 44dbe4h
        push 40eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 FA 01 00: call 0x42e190
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbe8h
        push 40fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE F9 01 00: call 0x42e190
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
