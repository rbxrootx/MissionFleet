// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411132 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00411132_00411132() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x41114a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x41115e
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 37 03 00 00: call 0x411490
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 78 76 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
