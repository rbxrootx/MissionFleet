// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEBD2 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_004cebd2_004CEBD2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 58 00 00: call 0x4d441b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4cebfb
        __asm _emit 0x75
        __asm _emit 0x14
        push 671828h
        push 671858h
        ; Exact mapped bytes E8 1F 1A FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 0A: jmp 0x4cec05
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 FD FF FF: call 0x4ce907
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
