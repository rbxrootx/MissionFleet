// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856727 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58856727_58856727() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 14h], 0ah
        ; Exact mapped bytes 75 0A: jne 0x5885673d
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 7C 04: jl 0x58856741
        __asm _emit 0x7c
        __asm _emit 0x04
        mov byte ptr [ebp - 4], 0
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D FE FF FF: call 0x588565d2
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        leave
        ret
    }
}
