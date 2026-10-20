// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405BD0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00405bd0_00405BD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439499h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 15 E7 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 40fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 87 85 02 00: call 0x42e190
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 93 7F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
