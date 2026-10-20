// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851ED60 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5851ed60_5851ED60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 EF 23 FE FF: call 0x58501160
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x5851ed84
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5851ed8b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
