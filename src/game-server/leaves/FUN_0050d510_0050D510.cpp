// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D510 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0050d510_0050D510() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 41 02 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 44 41 02 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 39 41 02 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
