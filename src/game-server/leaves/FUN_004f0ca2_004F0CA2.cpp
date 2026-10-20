// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0CA2 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_004f0ca2_004F0CA2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 58 00 00: call 0x4f64eb
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f0ccb
        __asm _emit 0x75
        __asm _emit 0x14
        push 5c533ch
        push 5c536ch
        ; Exact mapped bytes E8 4F EF FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 0A: jmp 0x4f0cd5
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 FD FF FF: call 0x4f09d7
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
