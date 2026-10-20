// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885675A .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5885675a_5885675A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 14h], 0ah
        ; Exact mapped bytes 75 0A: jne 0x58856770
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 7C 04: jl 0x58856774
        __asm _emit 0x7c
        __asm _emit 0x04
        mov byte ptr [ebp - 4], 0
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA FE FF FF: call 0x58856642
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        leave
        ret
    }
}
