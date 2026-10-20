// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516452 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_00516452_00516452() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 14fh
        push 674cach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F4 3D FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 DF FB FF: call 0x4d441b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x516490
        __asm _emit 0x75
        __asm _emit 0x16
        push 674d1ch
        push 674d48h
        ; Exact mapped bytes E8 8C A1 F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x516495
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
