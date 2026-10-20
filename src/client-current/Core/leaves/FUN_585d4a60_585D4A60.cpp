// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D4A60 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_585d4a60_585D4A60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        ; Exact mapped bytes E8 4B FF EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 09: jne 0x585d4a83
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x585d4a85
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x585d4a85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
