// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D880 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_0045d880_0045D880() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 44 FE FF: call 0x441cb0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x45d8a9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 02 00 00: call 0x45db70
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E5: jmp 0x45d88e
        __asm _emit 0xeb
        __asm _emit 0xe5
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 2D AF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
